/*
 * XREFs of RaidAdapterAcquireStartIoLock @ 0x1C0006268
 * Callers:
 *     StorportTimerDpc @ 0x1C0003250 (StorportTimerDpc.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C00032C0 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0017234 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     StorAcquireSpinLockEx @ 0x1C001B620 (StorAcquireSpinLockEx.c)
 *     RaidInitializePerfOptsPassive @ 0x1C001F5AC (RaidInitializePerfOptsPassive.c)
 *     RaidAdapterResetBus @ 0x1C0038ED4 (RaidAdapterResetBus.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006E60 (RaidAdapterAcquireInterruptLock.c)
 */

void __fastcall RaidAdapterAcquireStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 712) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), a2);
  else
    LOBYTE(a2->LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
}
