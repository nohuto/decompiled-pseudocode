/*
 * XREFs of RaidAdapterReleaseStartIoLock @ 0x1C00070AC
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0004650 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0006F80 (RaidpAdapterTimerDpcRoutine.c)
 *     StorportTimerDpc @ 0x1C0007030 (StorportTimerDpc.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00128A0 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0019334 (RaidInitializePerfOptsPassive.c)
 *     RaidAdapterResetBus @ 0x1C0034ACC (RaidAdapterResetBus.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005CC8 (RaidAdapterReleaseInterruptLock.c)
 */

void __fastcall RaidAdapterReleaseStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 688) )
    KeReleaseInStackQueuedSpinLock(a2);
  else
    RaidAdapterReleaseInterruptLock(a1, (KIRQL)a2->LockQueue.Next);
}
