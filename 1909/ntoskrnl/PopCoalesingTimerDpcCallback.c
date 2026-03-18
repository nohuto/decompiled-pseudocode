/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x1402F6F10
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x1400D5AC0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400D5B48 (PopGetPolicyWorker.c)
 */

struct _KTHREAD *PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
