/*
 * XREFs of CcSetParallelFlushFile @ 0x14007A990
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall CcSetParallelFlushFile(PFILE_OBJECT FileObject, BOOLEAN EnableParallelFlush)
{
  _QWORD *SharedCacheMap; // rbx
  __int64 Partition; // rax
  unsigned int *v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  Partition = CcGetPartition(SharedCacheMap);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v5 = (unsigned int *)(SharedCacheMap + 19);
  v6 = *v5;
  if ( EnableParallelFlush )
    v7 = v6 | 0x40000;
  else
    v7 = v6 & 0xFFFBFFFF;
  *v5 = v7;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
}
