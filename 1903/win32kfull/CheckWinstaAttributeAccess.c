/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C0089140
 * Callers:
 *     NtUserLockWorkStation @ 0x1C000AC30 (NtUserLockWorkStation.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C004405C (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     _RegisterHotKey @ 0x1C00882EC (_RegisterHotKey.c)
 *     NtUserGetCursorInfo @ 0x1C0088D90 (NtUserGetCursorInfo.c)
 *     _SetCaretBlinkTime @ 0x1C0088F80 (_SetCaretBlinkTime.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C0089010 (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C0127140 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     _SetDoubleClickTime @ 0x1C012FAE0 (_SetDoubleClickTime.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01CC488 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     NtUserShowSystemCursor @ 0x1C0236230 (NtUserShowSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess, __int64 a2)
{
  ACCESS_MASK v2; // edi
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v5; // rcx

  v2 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess, a2);
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), v2) )
      return 1LL;
    v5 = 5LL;
  }
  else
  {
    v5 = 1459LL;
  }
  UserSetLastError(v5);
  return 0LL;
}
