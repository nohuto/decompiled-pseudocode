/*
 * XREFs of LongCapTraceDpc @ 0x1C000CE30
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C000CE58 (QueueCapWork.c)
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 912, qword_1C001B7C8, SystemArgument2);
}
