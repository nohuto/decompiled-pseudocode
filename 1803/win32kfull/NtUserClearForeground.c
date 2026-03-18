/*
 * XREFs of NtUserClearForeground @ 0x1C01EC380
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 */

__int64 NtUserClearForeground()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  v0 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput || !IAMThreadAccessGranted(gptiCurrent) )
  {
    UserSetLastError(5LL, v1);
    v0 = 0LL;
  }
  else if ( v4 && v3 )
  {
    HMAssignmentUnlock(v3 + 88);
  }
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
