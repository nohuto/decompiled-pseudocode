/*
 * XREFs of NtUserQueryActivationObject @ 0x1C0116970
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     EnterSharedCrit @ 0x1C002A0D0 (EnterSharedCrit.c)
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
