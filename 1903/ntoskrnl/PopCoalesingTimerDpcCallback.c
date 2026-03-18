/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x1402F7460
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x1400EE334 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400EE3BC (PopGetPolicyWorker.c)
 */

struct _KTHREAD *PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
