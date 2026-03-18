/*
 * XREFs of NtUserGetDoubleClickTime @ 0x1C0102570
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C005FC14 (CheckGrantedAccess.c)
 */

__int64 NtUserGetDoubleClickTime()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx

  EnterSharedCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v1, v0);
  v3 = gpepCSRSS;
  if ( *CurrentProcessWin32Process == gpepCSRSS
    || (v4 = PsGetCurrentProcessWin32Process(gpepCSRSS, gpepCSRSS),
        v5 = 0,
        (unsigned int)CheckGrantedAccess(*(_DWORD *)(v4 + 680), 2u)) )
  {
    v5 = gdtDblClk;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v5;
}
