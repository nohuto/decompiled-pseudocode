/*
 * XREFs of PeriodicCaptureStateTimerCallback @ 0x1408FD440
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void __fastcall PeriodicCaptureStateTimerCallback(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExQueueWorkItem(a2, NormalWorkQueue);
}
