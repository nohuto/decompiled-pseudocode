/*
 * XREFs of MiIncreaseCommitLimits @ 0x140192AB4
 * Callers:
 *     MiInitializeCommitment @ 0x14019292C (MiInitializeCommitment.c)
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1402EA938 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x140770FBC (MiInsertPageFileInList.c)
 *     MiMapNewPfns @ 0x140888C50 (MiMapNewPfns.c)
 *     MiExtendPagingFiles @ 0x14088CF84 (MiExtendPagingFiles.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x140192BBC (MiComputeCommitThresholds.c)
 *     MiUpdatePageFileList @ 0x140192DA4 (MiUpdatePageFileList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIncreaseCommitLimits(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v7; // ebp
  __int64 v10; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 7208), &LockHandle);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 7176) + a3) < *(_QWORD *)(a1 + 7176) )
  {
    v7 = 0;
  }
  else
  {
    if ( a2 )
    {
      if ( a4 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8424), a2);
      *(_QWORD *)(a1 + 8552) += a2;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 7176) += a3;
    MiComputeCommitThresholds(a1);
    if ( a5 )
    {
      MiUpdatePageFileList(a5, 1LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8424), 2uLL);
      v10 = *(unsigned int *)(a1 + 7896);
      *(_QWORD *)(a1 + 8 * v10 + 7904) = a5;
      *(_DWORD *)(a1 + 7896) = v10 + 1;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  return v7;
}
