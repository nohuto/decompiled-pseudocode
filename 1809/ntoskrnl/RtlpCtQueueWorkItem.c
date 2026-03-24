/*
 * XREFs of RtlpCtQueueWorkItem @ 0x140899910
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1402F56A0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
