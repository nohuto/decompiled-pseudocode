/*
 * XREFs of PopExecutionRequiredTimeoutCallback @ 0x1402EDE40
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void PopExecutionRequiredTimeoutCallback()
{
  if ( _InterlockedIncrement(&PopExecutionRequiredWorkRequested) == 1 )
    ExQueueWorkItem(&PopExecutionRequiredTimeoutWorker, DelayedWorkQueue);
}
