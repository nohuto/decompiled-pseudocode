/*
 * XREFs of NtUserWaitForMsgAndEvent @ 0x1C0236D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserWaitForMsgAndEvent()
{
  __int64 v0; // rcx

  EnterCrit(0LL, 1LL);
  UserSessionSwitchLeaveCrit(v0);
  return 0LL;
}
