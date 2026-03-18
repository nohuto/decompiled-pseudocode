/*
 * XREFs of CcGetFlushedValidData @ 0x140124870
 * Callers:
 *     CcWriteBehindInternal @ 0x14007E5E0 (CcWriteBehindInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x14007A66C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     MmGetControlAreaPartition @ 0x140124950 (MmGetControlAreaPartition.c)
 *     CcFindBitmapRangeToClean @ 0x1401249CC (CcFindBitmapRangeToClean.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  char *SharedCacheMap; // rdi
  __int64 Partition; // r13
  LARGE_INTEGER v6; // rbx
  __int64 v8; // rcx
  __int64 BitmapRangeToClean; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  unsigned __int8 v13; // bl
  struct _KPRCB *v14; // rcx
  __int64 v15; // rax
  unsigned __int8 v16; // bl
  struct _KPRCB *v17; // rcx
  unsigned __int8 v18; // bl
  struct _KPRCB *v19; // rcx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v22, 0, sizeof(v22));
  if ( BcbListHeld )
  {
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
LABEL_3:
    Partition = CcGetPartition(SharedCacheMap);
    if ( *(_QWORD *)(MmGetControlAreaPartition(SectionObjectPointer) + 8) != Partition )
      KeBugCheckEx(0x34u, 0x1E54uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v6 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
    if ( *((_DWORD *)SharedCacheMap + 28) )
    {
      v8 = *((_QWORD *)SharedCacheMap + 20);
      if ( v8 && *(_DWORD *)(v8 + 8) )
      {
        BitmapRangeToClean = CcFindBitmapRangeToClean(v8, 0LL);
        v6.QuadPart = (*(_QWORD *)(BitmapRangeToClean + 16) + *(unsigned int *)(BitmapRangeToClean + 24)) << 12;
      }
      v10 = SharedCacheMap + 16;
      v11 = (_QWORD *)*((_QWORD *)SharedCacheMap + 2);
      v12 = (__int64)(v11 - 2);
      while ( v11 != v10 && (*(_WORD *)v12 != 765 || !*(_BYTE *)(v12 + 2)) )
      {
        v12 = *v11 - 16LL;
        v11 = (_QWORD *)*v11;
      }
      if ( (_QWORD *)(v12 + 16) != v10 && *(_QWORD *)(v12 + 8) < v6.QuadPart )
        v6 = *(LARGE_INTEGER *)(v12 + 8);
    }
    if ( !BcbListHeld )
    {
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)SharedCacheMap + 5);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v22);
      CcDecrementOpenCount((__int64)SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
      OldIrql = v22.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
    }
    return v6;
  }
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v15 = CcGetPartition((_QWORD *)SectionObjectPointer->SharedCacheMap);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v15 + 128), &v22);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 134);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
    v16 = v22.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22.OldIrql < 2u )
    {
      v17 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v17);
    }
    __writecr8(v16);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v18 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v19 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v19);
    }
    __writecr8(v18);
    ExAcquireFastMutex((PFAST_MUTEX)SharedCacheMap + 5);
    goto LABEL_3;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v13 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v14);
  }
  __writecr8(v13);
  return (LARGE_INTEGER)0x7FFFFFFFFFFFFFFFLL;
}
