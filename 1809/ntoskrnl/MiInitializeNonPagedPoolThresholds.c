/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x14017F898
 * Callers:
 *     MiPerformMemoryChange @ 0x1402A6B28 (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x1409BD0D4 (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14017F900 (MiSignalNonPagedPoolWatchers.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiInitializeNonPagedPoolThresholds()
{
  __int64 v0; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14043DC40, &LockHandle);
  v0 = qword_14043AF90;
  if ( qword_14043AF90 > qword_14043E510 )
    v0 = qword_14043E510;
  MiState[0] = v0;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  return MiSignalNonPagedPoolWatchers();
}
