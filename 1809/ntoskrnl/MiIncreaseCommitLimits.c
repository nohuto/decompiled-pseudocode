/*
 * XREFs of MiIncreaseCommitLimits @ 0x140187FC8
 * Callers:
 *     MiInitializeCommitment @ 0x140187E40 (MiInitializeCommitment.c)
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1402D1D94 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x14074DB00 (MiInsertPageFileInList.c)
 *     MiMapNewPfns @ 0x14084E600 (MiMapNewPfns.c)
 *     MiExtendPagingFiles @ 0x1408544F4 (MiExtendPagingFiles.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x1401880C4 (MiComputeCommitThresholds.c)
 *     MiUpdatePageFileList @ 0x140188298 (MiUpdatePageFileList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIncreaseCommitLimits(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v9; // ebp
  __int64 v10; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+20h] [rbp-28h] BYREF

  v9 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 6440), &v14);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 6408) + a3) < *(_QWORD *)(a1 + 6408) )
  {
    v9 = 0;
  }
  else
  {
    if ( a2 )
    {
      if ( a4 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7656), a2);
      *(_QWORD *)(a1 + 7784) += a2;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 6408) += a3;
    MiComputeCommitThresholds(a1);
    if ( a5 )
    {
      MiUpdatePageFileList(a5, 1LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7656), 2uLL);
      v10 = *(unsigned int *)(a1 + 7128);
      *(_QWORD *)(a1 + 8 * v10 + 7136) = a5;
      *(_DWORD *)(a1 + 7128) = v10 + 1;
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v14);
  OldIrql = v14.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  return v9;
}
