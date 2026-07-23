/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x14017F9F8
 * Callers:
 *     MiPerformMemoryChange @ 0x1402A6E18 (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x1409BE0D4 (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14017FA60 (MiSignalNonPagedPoolWatchers.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiInitializeNonPagedPoolThresholds()
{
  __int64 v0; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14043ED00, &LockHandle);
  v0 = qword_14043C050;
  if ( qword_14043C050 > qword_14043F5D0 )
    v0 = qword_14043F5D0;
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
