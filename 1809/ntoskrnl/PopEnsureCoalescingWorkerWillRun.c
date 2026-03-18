/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x1402DB8B0
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x140589E14 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1406E2084 (PopEnforceResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x14086B5D0 (PopCoalescingNotify.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
