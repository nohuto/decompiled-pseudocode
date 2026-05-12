/*
 * XREFs of RaidAdapterReleaseStartIoLock @ 0x1C00070FC
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00046A0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0006FD0 (RaidpAdapterTimerDpcRoutine.c)
 *     StorportTimerDpc @ 0x1C0007080 (StorportTimerDpc.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001293C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidInitializePerfOptsPassive @ 0x1C001C850 (RaidInitializePerfOptsPassive.c)
 *     RaidAdapterResetBus @ 0x1C0035EBC (RaidAdapterResetBus.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005D18 (RaidAdapterReleaseInterruptLock.c)
 */

void __fastcall RaidAdapterReleaseStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 688) )
    KeReleaseInStackQueuedSpinLock(a2);
  else
    RaidAdapterReleaseInterruptLock(a1, (KIRQL)a2->LockQueue.Next);
}
