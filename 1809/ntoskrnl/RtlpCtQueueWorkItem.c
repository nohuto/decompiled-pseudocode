/*
 * XREFs of RtlpCtQueueWorkItem @ 0x140899930
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1402F55A0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
