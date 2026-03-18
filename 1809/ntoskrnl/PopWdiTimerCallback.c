/*
 * XREFs of PopWdiTimerCallback @ 0x1402E2CF0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

void PopWdiTimerCallback()
{
  ExQueueWorkItem(&PopWdiTimerWorker, DelayedWorkQueue);
}
