/*
 * XREFs of QuickCapTraceDpc @ 0x1C0006D30
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C0006D88 (QueueCapWork.c)
 */

void __fastcall QuickCapTraceDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 760, &PPM_ETW_QUICK_CAP_INFO, SystemArgument2);
}
