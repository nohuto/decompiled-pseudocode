/*
 * XREFs of RaidAdapterAcquireStartIoLock @ 0x1C00070DC
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0006F80 (RaidpAdapterTimerDpcRoutine.c)
 *     StorportTimerDpc @ 0x1C0007030 (StorportTimerDpc.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00128A0 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0019334 (RaidInitializePerfOptsPassive.c)
 *     StorAcquireSpinLockEx @ 0x1C001E080 (StorAcquireSpinLockEx.c)
 *     RaidAdapterResetBus @ 0x1C0034ACC (RaidAdapterResetBus.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005B34 (RaidAdapterAcquireInterruptLock.c)
 */

void __fastcall RaidAdapterAcquireStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 688) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 680), a2);
  else
    LOBYTE(a2->LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
}
