/*
 * XREFs of PopWdiTimerCallback @ 0x1402E2FE0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 */

void PopWdiTimerCallback()
{
  ExQueueWorkItem(&PopWdiTimerWorker, DelayedWorkQueue);
}
