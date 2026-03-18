/*
 * XREFs of MiQueueExtentPfnDeletion @ 0x1402B6A8C
 * Callers:
 *     MiWorkingSetManager @ 0x1400EF594 (MiWorkingSetManager.c)
 *     MiClearFileOnlyPfn @ 0x1402B5664 (MiClearFileOnlyPfn.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC990 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWakeFileOnlyReaper @ 0x1402B716C (MiWakeFileOnlyReaper.c)
 */

__int64 __fastcall MiQueueExtentPfnDeletion(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = qword_14043D920;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_14043D920, a3);
    *a1 = qword_140438D28;
    qword_140438D28 = (__int64)a1;
    MiWakeFileOnlyReaper(v5, v4);
    return KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(qword_14043D920, &LockHandle);
    MiWakeFileOnlyReaper(v8, v7);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
  }
  return result;
}
