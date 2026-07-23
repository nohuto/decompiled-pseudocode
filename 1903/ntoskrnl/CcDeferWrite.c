/*
 * XREFs of CcDeferWrite @ 0x14027D1C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDereferencePartition @ 0x14007E0D4 (CcDereferencePartition.c)
 *     CcGetPartitionFromFileObject @ 0x1400FCA00 (CcGetPartitionFromFileObject.c)
 *     ExInterlockedInsertHeadList @ 0x14010A710 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x14010A7C0 (ExInterlockedInsertTailList.c)
 *     CcScheduleLazyWriteScan @ 0x14011F3EC (CcScheduleLazyWriteScan.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CcPostDeferredWrites @ 0x14027D3F0 (CcPostDeferredWrites.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
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
  __int64 PartitionFromFileObject; // rbx
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  KSPIN_LOCK *v14; // r8
  _LIST_ENTRY *v15; // rdx
  _LIST_ENTRY *v16; // rcx
  unsigned __int8 v17; // di
  struct _KPRCB *v18; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+38h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v20, 0, sizeof(v20));
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x77446343u);
  if ( PoolWithTag )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    PartitionFromFileObject = CcGetPartitionFromFileObject((__int64)FileObject);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 904)) <= 1 )
      __fastfail(0xEu);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
    v14 = (KSPIN_LOCK *)(PartitionFromFileObject + 768);
    v15 = (_LIST_ENTRY *)(PoolWithTag + 24);
    v16 = (_LIST_ENTRY *)(PartitionFromFileObject + 744);
    *((_QWORD *)PoolWithTag + 9) = PartitionFromFileObject;
    *(_DWORD *)PoolWithTag = 5243644;
    *((_QWORD *)PoolWithTag + 1) = FileObject;
    *((_DWORD *)PoolWithTag + 4) = BytesToWrite;
    *((_QWORD *)PoolWithTag + 6) = PostRoutine;
    *((_QWORD *)PoolWithTag + 7) = Context1;
    *((_QWORD *)PoolWithTag + 8) = Context2;
    if ( Retrying )
      ExInterlockedInsertHeadList(v16, v15, v14);
    else
      ExInterlockedInsertTailList(v16, v15, v14);
    CcPostDeferredWrites(PartitionFromFileObject);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(PartitionFromFileObject + 128), &v20);
    CcScheduleLazyWriteScan(PartitionFromFileObject, 1, 0);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v20);
    v17 = v20.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v20.OldIrql < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v18);
    }
    __writecr8(v17);
    CcDereferencePartition(PartitionFromFileObject);
  }
  else
  {
    ((void (__fastcall *)(PVOID, PVOID))PostRoutine)(Context1, Context2);
  }
}
