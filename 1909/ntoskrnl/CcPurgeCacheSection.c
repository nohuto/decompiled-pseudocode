/*
 * XREFs of CcPurgeCacheSection @ 0x1400BF3E0
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140009D4C (CcZeroEndOfLastPage.c)
 *     CcUninitializeCacheMap @ 0x14000E560 (CcUninitializeCacheMap.c)
 *     CcSetFileSizesEx @ 0x14007D570 (CcSetFileSizesEx.c)
 *     CcUnmapAndPurge @ 0x14008027C (CcUnmapAndPurge.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400C09E0 (CcCoherencyFlushAndPurgeCache.c)
 *     CcPurgeAndClearCacheSection @ 0x1401263F4 (CcPurgeAndClearCacheSection.c)
 * Callees:
 *     CcUninitializeCacheMap @ 0x14000E560 (CcUninitializeCacheMap.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcUnmapVacbArray @ 0x14007A300 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14007A66C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     MmPurgeSection @ 0x1400BCD50 (MmPurgeSection.c)
 *     MmCanFileBeTruncated @ 0x1400BF1E0 (MmCanFileBeTruncated.c)
 *     MmTrimSection @ 0x1400C0AE0 (MmTrimSection.c)
 *     MmGetControlAreaPartition @ 0x140124950 (MmGetControlAreaPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  int v6; // r12d
  char *SharedCacheMap; // rbx
  BOOLEAN v8; // r15
  unsigned __int8 v9; // r15
  int v10; // ecx
  int v11; // r12d
  __int64 Partition; // rax
  unsigned __int8 v14; // r15
  __int64 v15; // r15
  char v16; // al
  unsigned __int8 OldIrql; // bl
  LONGLONG QuadPart; // rax
  unsigned int v19; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v21; // rcx
  struct _KPRCB *v22; // rcx
  _QWORD *i; // r15
  unsigned __int8 v24; // bl
  struct _KPRCB *v25; // rcx
  struct _KPRCB *v26; // rcx
  int v27; // [rsp+30h] [rbp-50h]
  LONGLONG v28; // [rsp+30h] [rbp-50h]
  __int64 v29; // [rsp+38h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  __int64 v32; // [rsp+C0h] [rbp+40h] BYREF
  ULONG v33; // [rsp+D0h] [rbp+50h]
  ULONG v34; // [rsp+D8h] [rbp+58h]

  v34 = Flags;
  v33 = Length;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  v29 = 0LL;
  memset(&v30, 0, sizeof(v30));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  v8 = 1;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition(SharedCacheMap);
    v29 = Partition;
    if ( (*((_DWORD *)SharedCacheMap + 38) & 0x2000) != 0 )
    {
      if ( ((unsigned __int8)FileOffset & 1) == 0 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v30);
    v14 = v30.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30.OldIrql < 2u )
    {
      v21 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v21);
    }
    __writecr8(v14);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v9 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v22 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v22);
  }
  __writecr8(v9);
  if ( !SharedCacheMap )
  {
LABEL_4:
    v10 = v6 | 2;
    if ( (v34 & 4) == 0 )
      v10 = v6;
    v27 = v10;
    v11 = (v34 & 4) != 0 ? 5 : -1;
    v8 = MmPurgeSection(SectionObjectPointer, (__int64 *)FileOffset, v33, v10, &v32);
    if ( !v8 )
    {
      v19 = v33;
      do
      {
        if ( v19 )
          break;
        if ( !MmCanFileBeTruncated(SectionObjectPointer, FileOffset) )
          break;
        if ( (v34 & 2) != 0 )
          break;
        KeDelayExecutionThread(0, 0, &CcCollisionDelay);
        if ( !--v11 )
          break;
        v8 = MmPurgeSection(SectionObjectPointer, (__int64 *)FileOffset, 0LL, v27, &v32);
      }
      while ( !v8 );
    }
    if ( !SharedCacheMap )
      return v8;
    if ( !v33 )
    {
      if ( FileOffset )
      {
        QuadPart = FileOffset->QuadPart;
        if ( FileOffset->QuadPart < *((_QWORD *)SharedCacheMap + 46) )
        {
          v28 = QuadPart + 0x3FFFF;
          LODWORD(v28) = (QuadPart + 0x3FFFF) & 0xFFFC0000;
          *((_QWORD *)SharedCacheMap + 46) = v28 + 0x40000;
        }
      }
      else
      {
        *((_QWORD *)SharedCacheMap + 46) = 0LL;
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v29 + 128), &v30);
    CcDecrementOpenCount((__int64)SharedCacheMap);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v30);
    OldIrql = v30.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30.OldIrql < 2u )
    {
      v26 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v26);
    }
LABEL_23:
    __writecr8(OldIrql);
    return v8;
  }
  v15 = v29;
  if ( v29 != *(_QWORD *)(MmGetControlAreaPartition(SectionObjectPointer) + 8) )
    KeBugCheckEx(0x34u, 0x1155uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v16 = v34;
  if ( (v34 & 1) != 0 )
  {
    for ( i = SharedCacheMap + 224; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
      ;
    v15 = v29;
    v16 = v34;
  }
  if ( (v16 & 8) == 0 )
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
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v15 + 128), &v30);
  CcDecrementOpenCount((__int64)SharedCacheMap);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v30);
  v24 = v30.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30.OldIrql < 2u )
  {
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
  }
  __writecr8(v24);
  return 0;
}
