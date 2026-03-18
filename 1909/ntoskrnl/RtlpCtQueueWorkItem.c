/*
 * XREFs of RtlpCtQueueWorkItem @ 0x1408D7D4C
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x140313D20 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
