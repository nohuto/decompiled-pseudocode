/*
 * XREFs of NtUserWaitForMsgAndEvent @ 0x1C01F7450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserWaitForMsgAndEvent()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9

  EnterCrit(0LL, 1LL);
  UserSessionSwitchLeaveCrit(v1, v0, v2, v3);
  return 0LL;
}
