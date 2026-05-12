/*
 * XREFs of RaidAdapterReleaseStartIoLock @ 0x1C0005000
 * Callers:
 *     StorportTimerDpc @ 0x1C0003250 (StorportTimerDpc.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C00032C0 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00049A0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0017234 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidInitializePerfOptsPassive @ 0x1C001F5AC (RaidInitializePerfOptsPassive.c)
 *     RaidAdapterResetBus @ 0x1C0038ED4 (RaidAdapterResetBus.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006FF4 (RaidAdapterReleaseInterruptLock.c)
 */

void __fastcall RaidAdapterReleaseStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 712) )
  {
    KeReleaseInStackQueuedSpinLock(a2);
  }
  else
  {
    LOBYTE(a2) = a2->LockQueue.Next;
    RaidAdapterReleaseInterruptLock(a1, a2);
  }
}
