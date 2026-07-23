/*
 * XREFs of CcPurgeCacheSection @ 0x1400E7B20
 * Callers:
 *     CcZeroEndOfLastPage @ 0x14001C250 (CcZeroEndOfLastPage.c)
 *     CcUninitializeCacheMap @ 0x14007C520 (CcUninitializeCacheMap.c)
 *     CcUnmapAndPurge @ 0x14007CA84 (CcUnmapAndPurge.c)
 *     CcSetFileSizesEx @ 0x14007CFB0 (CcSetFileSizesEx.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7978 (CcPurgeAndClearCacheSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400E9670 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     CcUnmapVacbArray @ 0x1400798D0 (CcUnmapVacbArray.c)
 *     CcUninitializeCacheMap @ 0x14007C520 (CcUninitializeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400ACEE0 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MmCanFileBeTruncated @ 0x1400E8620 (MmCanFileBeTruncated.c)
 *     MmGetControlAreaPartition @ 0x1400E8900 (MmGetControlAreaPartition.c)
 *     MmTrimSection @ 0x1400E9770 (MmTrimSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // r8
  char *SharedCacheMap; // rbx
  BOOLEAN v10; // r15
  unsigned __int8 v11; // r15
  int v12; // ecx
  int v13; // r12d
  __int64 Partition; // rax
  unsigned __int8 v16; // r15
  __int64 v17; // r15
  char v18; // al
  unsigned __int8 OldIrql; // bl
  ULONG v20; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v22; // rcx
  struct _KPRCB *v23; // rcx
  _QWORD *i; // r15
  unsigned __int8 v25; // bl
  struct _KPRCB *v26; // rcx
  struct _KPRCB *v27; // rcx
  int v28; // [rsp+30h] [rbp-50h]
  __int64 v29; // [rsp+38h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v32; // [rsp+C0h] [rbp+40h] BYREF
  ULONG v33; // [rsp+D0h] [rbp+50h]
  ULONG v34; // [rsp+D8h] [rbp+58h]

  v34 = Flags;
  v33 = Length;
  v6 = 0;
  v29 = 0LL;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  v10 = 1;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition(SharedCacheMap, v7, v8);
    v29 = Partition;
    if ( (*((_DWORD *)SharedCacheMap + 38) & 0x2000) != 0 )
    {
      if ( ((unsigned __int8)FileOffset & 1) == 0 )
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        goto LABEL_23;
      }
      FileOffset = (PLARGE_INTEGER)((unsigned __int64)FileOffset ^ 1);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v30);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 134);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v30);
    v16 = v30.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30.OldIrql < 2u )
    {
      v22 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v22);
    }
    __writecr8(v16);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v11 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v23 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v23);
  }
  __writecr8(v11);
  if ( !SharedCacheMap )
  {
LABEL_4:
    v12 = v6 | 2;
    if ( (v34 & 4) == 0 )
      v12 = v6;
    v28 = v12;
    v13 = (v34 & 4) != 0 ? 5 : -1;
    v10 = MmPurgeSection((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, v33, v12, (__int64)&v32);
    if ( !v10 )
    {
      v20 = v33;
      do
      {
        if ( v20 )
          break;
        if ( !MmCanFileBeTruncated(SectionObjectPointer, FileOffset) )
          break;
        if ( (v34 & 2) != 0 )
          break;
        KeDelayExecutionThread(0, 0, &CcCollisionDelay);
        if ( !--v13 )
          break;
        v10 = MmPurgeSection((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, 0, v28, (__int64)&v32);
      }
      while ( !v10 );
    }
    if ( !SharedCacheMap )
      return v10;
    if ( !v33 )
    {
      if ( FileOffset )
      {
        if ( FileOffset->QuadPart < *((_QWORD *)SharedCacheMap + 46) )
          *((_QWORD *)SharedCacheMap + 46) = ((FileOffset->QuadPart + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL) + 0x40000;
      }
      else
      {
        *((_QWORD *)SharedCacheMap + 46) = 0LL;
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v29 + 128), &v30);
    CcDecrementOpenCount((__int64)SharedCacheMap);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v30);
    OldIrql = v30.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30.OldIrql < 2u )
    {
      v27 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v27);
    }
LABEL_23:
    __writecr8(OldIrql);
    return v10;
  }
  v17 = v29;
  if ( v29 != *(_QWORD *)(MmGetControlAreaPartition(SectionObjectPointer) + 8) )
    KeBugCheckEx(0x34u, 0x114DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v18 = v34;
  if ( (v34 & 1) != 0 )
  {
    for ( i = SharedCacheMap + 224; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
      ;
    v17 = v29;
    v18 = v34;
  }
  if ( (v18 & 8) == 0 )
  {
    CcUnmapVacbArray((__int64)SharedCacheMap, (__int64 *)FileOffset, v33, 0, 1, 0);
    goto LABEL_16;
  }
  if ( (int)MmTrimSection(SectionObjectPointer, FileOffset, v33, 0LL) >= 0 )
  {
LABEL_16:
    if ( FileOffset )
      v6 = 1;
    goto LABEL_4;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 128), &v30);
  CcDecrementOpenCount((__int64)SharedCacheMap);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v30);
  v25 = v30.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30.OldIrql < 2u )
  {
    v26 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v26);
  }
  __writecr8(v25);
  return 0;
}
