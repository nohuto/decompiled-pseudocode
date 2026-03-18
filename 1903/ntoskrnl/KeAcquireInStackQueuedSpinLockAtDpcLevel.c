/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400FA8B0
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14033C5F0 (ExShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x1405A9E3C (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v6; // rdx
  int v7; // eax

  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[5];
      SchedulerAssist[5] = v7 + 1;
      if ( v7 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle, SpinLock);
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)LockHandle, v6);
  }
}
