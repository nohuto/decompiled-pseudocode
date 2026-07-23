/*
 * XREFs of CcSetParallelFlushFile @ 0x1401190F0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall CcSetParallelFlushFile(PFILE_OBJECT FileObject, BOOLEAN EnableParallelFlush)
{
  __int64 v2; // r8
  _DWORD *SharedCacheMap; // rbx
  __int64 Partition; // rax
  __int64 CurrentIrql; // r8
  int v7; // eax
  unsigned int v8; // eax
  unsigned __int8 v9; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v11[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v12; // [rsp+30h] [rbp-18h]

  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  Partition = CcGetPartition(SharedCacheMap, EnableParallelFlush, v2);
  v11[0] = 0LL;
  v11[1] = (volatile signed __int64 *)(Partition + 128);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v12 = CurrentIrql;
  KxAcquireQueuedSpinLock((__int64)v11, (volatile __int64 *)(Partition + 128), CurrentIrql);
  v7 = SharedCacheMap[38];
  if ( EnableParallelFlush )
    v8 = v7 | 0x40000;
  else
    v8 = v7 & 0xFFFBFFFF;
  SharedCacheMap[38] = v8;
  KxReleaseQueuedSpinLock(v11);
  v9 = v12;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v9);
}
