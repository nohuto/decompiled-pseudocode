/*
 * XREFs of PopExecutionRequiredTimeoutCallback @ 0x1402D3700
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

void PopExecutionRequiredTimeoutCallback()
{
  if ( _InterlockedIncrement(&PopExecutionRequiredWorkRequested) == 1 )
    ExQueueWorkItem(&PopExecutionRequiredTimeoutWorker, DelayedWorkQueue);
}
