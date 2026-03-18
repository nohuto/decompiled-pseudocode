/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C00889B0
 * Callers:
 *     NtUserLockWorkStation @ 0x1C000AC20 (NtUserLockWorkStation.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     _RegisterHotKey @ 0x1C008817C (_RegisterHotKey.c)
 *     NtUserGetCursorInfo @ 0x1C0088600 (NtUserGetCursorInfo.c)
 *     _SetCaretBlinkTime @ 0x1C00887F0 (_SetCaretBlinkTime.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C0088880 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C0088A30 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     _SetDoubleClickTime @ 0x1C00EA4B0 (_SetDoubleClickTime.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C0135350 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01CC2F8 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     NtUserShowSystemCursor @ 0x1C0235C10 (NtUserShowSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess, __int64 a2)
{
  ACCESS_MASK v2; // edi
  __int64 CurrentProcessWin32Process; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v9; // rcx

  v2 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess, a2);
  CurrentProcessId = PsGetCurrentProcessId();
  v7 = gpidLogon;
  if ( CurrentProcessId == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), v2) )
      return 1LL;
    v9 = 5LL;
  }
  else
  {
    v9 = 1459LL;
  }
  UserSetLastError(v9, v7, v5, v6);
  return 0LL;
}
