/*
 * XREFs of NtUserGetDoubleClickTime @ 0x1C005E360
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C005E558 (CheckGrantedAccess.c)
 */

__int64 NtUserGetDoubleClickTime()
{
  __int64 v0; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // ebx

  EnterSharedCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v0);
  v4 = gpepCSRSS;
  v5 = gpepCSRSS;
  if ( *CurrentProcessWin32Process == gpepCSRSS
    || (v6 = PsGetCurrentProcessWin32Process(gpepCSRSS),
        v7 = 0,
        (unsigned int)CheckGrantedAccess(*(unsigned int *)(v6 + 680), 2LL)) )
  {
    v7 = gdtDblClk;
  }
  UserSessionSwitchLeaveCrit(v4, v5, v2, v3);
  return v7;
}
