/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x1402F6F30
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14069EB24 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x14072AA34 (PopEnforceResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x1408A70F0 (PopCoalescingNotify.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
