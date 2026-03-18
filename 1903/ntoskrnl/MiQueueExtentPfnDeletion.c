/*
 * XREFs of MiQueueExtentPfnDeletion @ 0x1402CCE10
 * Callers:
 *     MiWorkingSetManager @ 0x1400F1CC8 (MiWorkingSetManager.c)
 *     MiClearFileOnlyPfn @ 0x1402CADD0 (MiClearFileOnlyPfn.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWakeFileOnlyReaper @ 0x1402CD6B4 (MiWakeFileOnlyReaper.c)
 */

void __fastcall MiQueueExtentPfnDeletion(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = qword_140469460;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140469460);
    *a1 = qword_1404646E8;
    qword_1404646E8 = (__int64)a1;
    MiWakeFileOnlyReaper(v3, v2);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(qword_140469460, &LockHandle);
    MiWakeFileOnlyReaper(v5, v4);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
  }
}
