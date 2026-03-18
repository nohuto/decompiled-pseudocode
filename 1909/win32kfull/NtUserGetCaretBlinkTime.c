/*
 * XREFs of NtUserGetCaretBlinkTime @ 0x1C005BC60
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C005FC14 (CheckGrantedAccess.c)
 */

__int64 NtUserGetCaretBlinkTime()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  EnterSharedCrit(0LL, 1LL);
  if ( *(_QWORD *)PsGetCurrentProcessWin32Process(v1, v0) == gpepCSRSS
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpepCSRSS, gpepCSRSS),
        v4 = 0,
        (unsigned int)CheckGrantedAccess(*(unsigned int *)(CurrentProcessWin32Process + 680), 2LL)) )
  {
    v3 = gpsi;
    v4 = *(_DWORD *)(gpsi + 4984LL);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
