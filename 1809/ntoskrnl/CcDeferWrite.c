/*
 * XREFs of CcDeferWrite @ 0x140269970
 * Callers:
 *     <none>
 * Callees:
 *     CcDereferencePartition @ 0x14007C988 (CcDereferencePartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x14007EEB8 (CcScheduleLazyWriteScan.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcGetPartitionFromFileObject @ 0x1400E1050 (CcGetPartitionFromFileObject.c)
 *     ExInterlockedInsertHeadList @ 0x14010BF50 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x14010BFD0 (ExInterlockedInsertTailList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CcPostDeferredWrites @ 0x140269BA0 (CcPostDeferredWrites.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

void __stdcall CcDeferWrite(
        PFILE_OBJECT FileObject,
        PCC_POST_DEFERRED_WRITE PostRoutine,
        PVOID Context1,
        PVOID Context2,
        ULONG BytesToWrite,
        BOOLEAN Retrying)
{
  char *PoolWithTag; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 PartitionFromFileObject; // rbx
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  KSPIN_LOCK *v16; // r8
  _LIST_ENTRY *v17; // rdx
  _LIST_ENTRY *v18; // rcx
  unsigned __int8 v19; // di
  struct _KPRCB *v20; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+38h] [rbp-40h] BYREF

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x77446343u);
  if ( PoolWithTag )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    PartitionFromFileObject = CcGetPartitionFromFileObject((__int64)FileObject, v11, v12);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 904)) <= 1 )
      __fastfail(0xEu);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 904)) <= 1 )
      __fastfail(0xEu);
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    v16 = (KSPIN_LOCK *)(PartitionFromFileObject + 768);
    v17 = (_LIST_ENTRY *)(PoolWithTag + 24);
    v18 = (_LIST_ENTRY *)(PartitionFromFileObject + 744);
    *((_QWORD *)PoolWithTag + 9) = PartitionFromFileObject;
    *(_DWORD *)PoolWithTag = 5243644;
    *((_QWORD *)PoolWithTag + 1) = FileObject;
    *((_DWORD *)PoolWithTag + 4) = BytesToWrite;
    *((_QWORD *)PoolWithTag + 6) = PostRoutine;
    *((_QWORD *)PoolWithTag + 7) = Context1;
    *((_QWORD *)PoolWithTag + 8) = Context2;
    if ( Retrying )
      ExInterlockedInsertHeadList(v18, v17, v16);
    else
      ExInterlockedInsertTailList(v18, v17, v16);
    CcPostDeferredWrites(PartitionFromFileObject);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(PartitionFromFileObject + 128), &v22);
    CcScheduleLazyWriteScan(PartitionFromFileObject, 1, 0);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v22);
    v19 = v22.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22.OldIrql < 2u )
    {
      v20 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v20);
    }
    __writecr8(v19);
    CcDereferencePartition(PartitionFromFileObject);
  }
  else
  {
    ((void (__fastcall *)(PVOID, PVOID))PostRoutine)(Context1, Context2);
  }
}
