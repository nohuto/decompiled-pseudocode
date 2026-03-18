/*
 * XREFs of ObpProcessRemoveObjectDpcWorker @ 0x1402ED350
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void ObpProcessRemoveObjectDpcWorker()
{
  ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
}
