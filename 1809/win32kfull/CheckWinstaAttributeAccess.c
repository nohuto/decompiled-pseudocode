/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C00A56F0
 * Callers:
 *     NtUserLockWorkStation @ 0x1C00086D0 (NtUserLockWorkStation.c)
 *     _RegisterHotKey @ 0x1C00A50DC (_RegisterHotKey.c)
 *     NtUserGetCursorInfo @ 0x1C00A5470 (NtUserGetCursorInfo.c)
 *     _SetCaretBlinkTime @ 0x1C00A5660 (_SetCaretBlinkTime.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00D8060 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     ?zzzSetCursorPos@@YA_NHHK@Z @ 0x1C01205AC (-zzzSetCursorPos@@YA_NHHK@Z.c)
 *     _SetDoubleClickTime @ 0x1C0126440 (_SetDoubleClickTime.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01B8648 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     NtUserShowSystemCursor @ 0x1C021DF70 (NtUserShowSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess)
{
  ACCESS_MASK v1; // edi
  __int64 CurrentProcessWin32Process; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v8; // rcx

  v1 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess);
  CurrentProcessId = PsGetCurrentProcessId();
  v6 = gpidLogon;
  if ( CurrentProcessId == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 688), v1) )
      return 1LL;
    v8 = 5LL;
  }
  else
  {
    v8 = 1459LL;
  }
  UserSetLastError(v8, v6, v4, v5);
  return 0LL;
}
