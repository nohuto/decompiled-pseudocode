/*
 * XREFs of QuickCapTraceDpc @ 0x1C0008640
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C0008698 (QueueCapWork.c)
 */

void __fastcall QuickCapTraceDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 744, &PPM_ETW_QUICK_CAP_INFO, SystemArgument2);
}
