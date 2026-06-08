/*
 * XREFs of CpcNativeInterruptDpc @ 0x1C00089A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpcNativeInterruptDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  IoQueueWorkItem(
    *(PIO_WORKITEM *)(DeferredContext[30] + 352LL),
    CpcNativeInterruptWorker,
    CriticalWorkQueue,
    DeferredContext);
}
