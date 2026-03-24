/*
 * XREFs of PopWdiTimerCallback @ 0x1402E2DF0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 */

void PopWdiTimerCallback()
{
  ExQueueWorkItem(&PopWdiTimerWorker, DelayedWorkQueue);
}
