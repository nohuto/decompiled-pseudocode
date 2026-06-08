/*
 * XREFs of LongCapTraceDpc @ 0x1C0008670
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C0008698 (QueueCapWork.c)
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 896, qword_1C0011808, SystemArgument2);
}
