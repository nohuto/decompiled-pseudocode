/*
 * XREFs of LongCapTraceDpc @ 0x1C0006D60
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C0006D88 (QueueCapWork.c)
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 912, qword_1C0013848, SystemArgument2);
}
