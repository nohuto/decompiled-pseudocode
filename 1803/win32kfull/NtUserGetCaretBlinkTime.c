/*
 * XREFs of NtUserGetCaretBlinkTime @ 0x1C005E4F0
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C005E558 (CheckGrantedAccess.c)
 */

__int64 NtUserGetCaretBlinkTime()
{
  __int64 v0; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  EnterSharedCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v0);
  v4 = gpepCSRSS;
  if ( *CurrentProcessWin32Process == gpepCSRSS
    || (v5 = PsGetCurrentProcessWin32Process(gpepCSRSS),
        v7 = 0,
        (unsigned int)CheckGrantedAccess(*(unsigned int *)(v5 + 680), 2LL)) )
  {
    v6 = gpsi;
    v7 = *(_DWORD *)(gpsi + 4984LL);
  }
  UserSessionSwitchLeaveCrit(v6, v4, v2, v3);
  return v7;
}
