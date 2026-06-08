/*
 * XREFs of QuickCapTraceDpc @ 0x1C000CF00
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C000CE58 (QueueCapWork.c)
 */

void __fastcall QuickCapTraceDpc(
        struct _KDPC *Dpc,
        PVOID *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, (__int64)(DeferredContext + 95), (__int64)&PPM_ETW_QUICK_CAP_INFO);
}
