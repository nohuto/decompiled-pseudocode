/*
 * XREFs of LongCapTraceDpc @ 0x1C000C650
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C000C678 (QueueCapWork.c)
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 896, qword_1C001A7B8, SystemArgument2);
}
