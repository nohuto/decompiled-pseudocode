/*
 * XREFs of RtlpCtQueueWorkItem @ 0x1408D844C
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1403142D0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
