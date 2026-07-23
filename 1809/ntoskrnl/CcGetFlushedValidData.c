/*
 * XREFs of CcGetFlushedValidData @ 0x1400E8840
 * Callers:
 *     CcWriteBehindInternal @ 0x14007D2E0 (CcWriteBehindInternal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     CcFindBitmapRangeToClean @ 0x140023088 (CcFindBitmapRangeToClean.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400ACEE0 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MmGetControlAreaPartition @ 0x1400E8900 (MmGetControlAreaPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

// local variable allocation has failed, the output may be wrong!
LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  __int64 v2; // r8
  char *SharedCacheMap; // rdi
  __int64 Partition; // r14
  LARGE_INTEGER v7; // rbx
  __int64 v9; // rcx
  __int64 *BitmapRangeToClean; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int8 v16; // bl
  struct _KPRCB *v17; // rcx
  __int64 v18; // rax
  unsigned __int8 v19; // r14
  struct _KPRCB *v20; // rcx
  unsigned __int8 v21; // r14
  struct _KPRCB *v22; // rcx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v25; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF

  if ( BcbListHeld )
  {
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
LABEL_3:
    Partition = CcGetPartition(SharedCacheMap, BcbListHeld, v2);
    if ( *(_QWORD *)(MmGetControlAreaPartition(SectionObjectPointer) + 8) != Partition )
      KeBugCheckEx(0x34u, 0x1E45uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v7 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
    if ( *((_DWORD *)SharedCacheMap + 28) )
    {
      v9 = *((_QWORD *)SharedCacheMap + 20);
      if ( v9 && *(_DWORD *)(v9 + 8) )
      {
        BitmapRangeToClean = CcFindBitmapRangeToClean(v9, 0LL);
        v7.QuadPart = (BitmapRangeToClean[2] + *((unsigned int *)BitmapRangeToClean + 6)) << 12;
      }
      v11 = SharedCacheMap + 16;
      v12 = (_QWORD *)*((_QWORD *)SharedCacheMap + 2);
      v13 = (__int64)(v12 - 2);
      while ( v12 != v11 && (*(_WORD *)v13 != 765 || !*(_BYTE *)(v13 + 2)) )
      {
        v13 = *v12 - 16LL;
        v12 = (_QWORD *)*v12;
      }
      if ( (_QWORD *)(v13 + 16) != v11 && *(_QWORD *)(v13 + 8) < v7.QuadPart )
        v7 = *(LARGE_INTEGER *)(v13 + 8);
    }
    if ( !BcbListHeld )
    {
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)SharedCacheMap + 5);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v25);
      CcDecrementOpenCount((__int64)SharedCacheMap);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v25);
      OldIrql = v25.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
    }
    return v7;
  }
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v18 = CcGetPartition((_QWORD *)SectionObjectPointer->SharedCacheMap, v14, v15);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v18 + 128), &v25);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 134);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v25);
    v19 = v25.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25.OldIrql < 2u )
    {
      v20 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v20);
    }
    __writecr8(v19);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v21 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v22 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v22);
    }
    __writecr8(v21);
    ExAcquireFastMutex((PFAST_MUTEX)SharedCacheMap + 5);
    goto LABEL_3;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v16 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  __writecr8(v16);
  return (LARGE_INTEGER)0x7FFFFFFFFFFFFFFFLL;
}
