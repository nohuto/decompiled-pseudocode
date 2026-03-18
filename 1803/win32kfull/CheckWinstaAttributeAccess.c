/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C006A910
 * Callers:
 *     NtUserLockWorkStation @ 0x1C0007D00 (NtUserLockWorkStation.c)
 *     zzzSetCursorPos @ 0x1C0067194 (zzzSetCursorPos.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     _RegisterHotKey @ 0x1C006A3D4 (_RegisterHotKey.c)
 *     _SetCaretBlinkTime @ 0x1C006A750 (_SetCaretBlinkTime.c)
 *     NtUserGetCursorInfo @ 0x1C006A7E0 (NtUserGetCursorInfo.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C006DAE0 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     _SetDoubleClickTime @ 0x1C0104970 (_SetDoubleClickTime.c)
 *     NtUserShowSystemCursor @ 0x1C01F64B0 (NtUserShowSystemCursor.c)
 *     xxxSetSystemCursor @ 0x1C01F96B4 (xxxSetSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess)
{
  ACCESS_MASK v1; // edi
  __int64 CurrentProcessWin32Process; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v4; // rdx
  __int64 v6; // rcx

  v1 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess);
  CurrentProcessId = PsGetCurrentProcessId();
  v4 = gpidLogon;
  if ( CurrentProcessId == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), v1) )
      return 1LL;
    v6 = 5LL;
  }
  else
  {
    v6 = 1459LL;
  }
  UserSetLastError(v6, v4);
  return 0LL;
}
