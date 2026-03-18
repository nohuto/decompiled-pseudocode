/*
 * XREFs of DpiPdoPollingDpc @ 0x1C004B860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoPollingDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedExchange(&dword_1C008E9B8, 1) )
    IoQueueWorkItem(qword_1C008E9B0, DpiPdoPollingWorkItem, DelayedWorkQueue, 0LL);
}
