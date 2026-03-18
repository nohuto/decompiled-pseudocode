/*
 * XREFs of NtUserQueryActivationObject @ 0x1C0114000
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     EnterSharedCrit @ 0x1C002ACE0 (EnterSharedCrit.c)
 */

__int64 NtUserQueryActivationObject()
{
  __int64 v0; // rdx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterSharedCrit(0, 1);
  UserSetLastError(50LL, v0);
  UserSessionSwitchLeaveCrit(v2, v1);
  return 0LL;
}
