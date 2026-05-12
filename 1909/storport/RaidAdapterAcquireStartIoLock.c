/*
 * XREFs of RaidAdapterAcquireStartIoLock @ 0x1C000712C
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0006FD0 (RaidpAdapterTimerDpcRoutine.c)
 *     StorportTimerDpc @ 0x1C0007080 (StorportTimerDpc.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001293C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidInitializePerfOptsPassive @ 0x1C001C850 (RaidInitializePerfOptsPassive.c)
 *     StorAcquireSpinLockEx @ 0x1C001EED0 (StorAcquireSpinLockEx.c)
 *     RaidAdapterResetBus @ 0x1C0035EBC (RaidAdapterResetBus.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005B84 (RaidAdapterAcquireInterruptLock.c)
 */

void __fastcall RaidAdapterAcquireStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 688) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 680), a2);
  else
    LOBYTE(a2->LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
}
