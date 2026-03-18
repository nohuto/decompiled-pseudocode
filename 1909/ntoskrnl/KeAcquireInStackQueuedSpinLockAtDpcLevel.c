/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400F3590
 * Callers:
 *     CcSerializeWithLazyWriter @ 0x1401BE6E4 (CcSerializeWithLazyWriter.c)
 *     ExShareAddressSpaceWithDevice @ 0x14033C050 (ExShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x1405A9E1C (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
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
