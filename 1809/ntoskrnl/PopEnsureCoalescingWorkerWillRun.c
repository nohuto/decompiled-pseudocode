/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x1402DBBA0
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14058AE14 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1406E3304 (PopEnforceResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x14086C810 (PopCoalescingNotify.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
