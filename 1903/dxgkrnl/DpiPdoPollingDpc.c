/*
 * XREFs of DpiPdoPollingDpc @ 0x1C0052AB0
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
  if ( !_InterlockedExchange(&dword_1C00A29B8, 1) )
    IoQueueWorkItem(qword_1C00A29B0, DpiPdoPollingWorkItem, DelayedWorkQueue, 0LL);
}
