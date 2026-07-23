/*
 * XREFs of CcSetFileSizesEx @ 0x14007CFB0
 * Callers:
 *     CcSetFileSizes @ 0x14013B610 (CcSetFileSizes.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     CcUnmapVacbArray @ 0x1400798D0 (CcUnmapVacbArray.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400ACEE0 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7978 (CcPurgeAndClearCacheSection.c)
 *     CcPurgeCacheSection @ 0x1400E7B20 (CcPurgeCacheSection.c)
 *     CcDeleteMbcb @ 0x140125A58 (CcDeleteMbcb.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     CcExtendVacbArray @ 0x14012CA94 (CcExtendVacbArray.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 *     CcDeleteBcbs @ 0x14016059C (CcDeleteBcbs.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MmExtendSection @ 0x14061D8CC (MmExtendSection.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  LARGE_INTEGER AllocationSize; // rbx
  LARGE_INTEGER FileSize; // r15
  LARGE_INTEGER ValidDataLength; // rdi
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  LARGE_INTEGER *SharedCacheMap; // rsi
  KSPIN_LOCK *v8; // r15
  unsigned __int8 v9; // bl
  unsigned __int8 v10; // bl
  LARGE_INTEGER v11; // rcx
  NTSTATUS v12; // ebx
  unsigned __int8 v13; // di
  NTSTATUS result; // eax
  unsigned __int8 v15; // bl
  unsigned __int8 OldIrql; // r15
  unsigned __int8 v17; // r15
  LARGE_INTEGER v18; // rcx
  NTSTATUS v19; // eax
  NTSTATUS v20; // ebx
  __int16 LowPart; // cx
  unsigned __int8 v22; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v24; // rcx
  unsigned __int8 v25; // bl
  struct _KPRCB *v26; // rcx
  struct _KPRCB *v27; // rcx
  struct _KPRCB *v28; // rcx
  struct _KPRCB *v29; // rcx
  struct _KPRCB *v30; // rcx
  struct _KPRCB *v31; // rcx
  NTSTATUS v32; // [rsp+30h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v33; // [rsp+40h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-20h] BYREF
  char v35; // [rsp+C0h] [rbp+48h]
  LARGE_INTEGER FileOffset; // [rsp+C8h] [rbp+50h] BYREF
  unsigned __int64 QuadPart; // [rsp+D0h] [rbp+58h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+D8h] [rbp+60h]

  AllocationSize = FileSizes->AllocationSize;
  FileSize = FileSizes->FileSize;
  ValidDataLength = FileSizes->ValidDataLength;
  QuadPart = FileSizes->AllocationSize.QuadPart;
  FileOffset = FileSize;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SectionObjectPointer = FileObject->SectionObjectPointer;
  v35 = 1;
  SharedCacheMap = (LARGE_INTEGER *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap && SharedCacheMap[21].QuadPart )
  {
    v8 = (KSPIN_LOCK *)(CcGetPartition(SectionObjectPointer->SharedCacheMap) + 128);
    SpinLock = v8;
    KeAcquireInStackQueuedSpinLock(v8, &v33);
    if ( AllocationSize.QuadPart <= SharedCacheMap[4].QuadPart )
      goto LABEL_4;
    ++SharedCacheMap->HighPart;
    ++SharedCacheMap[67].LowPart;
    KxReleaseQueuedSpinLock(&v33);
    OldIrql = v33.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      AllocationSize.QuadPart = QuadPart;
    }
    __writecr8(OldIrql);
    KxReleaseQueuedSpinLock(&LockHandle);
    v17 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v24 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v24);
      AllocationSize.QuadPart = QuadPart;
    }
    __writecr8(v17);
    v18 = SharedCacheMap[21];
    v35 = 0;
    QuadPart = (AllocationSize.QuadPart + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmExtendSection)((LARGE_INTEGER)v18.QuadPart, &QuadPart, 1LL);
    v20 = v19;
    if ( v19 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v19) )
        v20 = -1073741588;
    }
    else
    {
      v20 = CcExtendVacbArray(SharedCacheMap, QuadPart);
    }
    v8 = SpinLock;
    KeAcquireInStackQueuedSpinLock(SpinLock, &v33);
    CcDecrementOpenCount(SharedCacheMap);
    if ( v20 < 0 )
    {
      KeReleaseInStackQueuedSpinLock(&v33);
      RtlRaiseStatus(v20);
    }
    SharedCacheMap = (LARGE_INTEGER *)FileObject->SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
LABEL_4:
      ++SharedCacheMap->HighPart;
      ++SharedCacheMap[67].LowPart;
      if ( v35 )
      {
        KxReleaseQueuedSpinLock(&v33);
        v9 = v33.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33.OldIrql < 2u )
        {
          v27 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v27);
        }
        __writecr8(v9);
        KxReleaseQueuedSpinLock(&LockHandle);
        v10 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v28 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v28);
        }
        __writecr8(v10);
        KeAcquireInStackQueuedSpinLock(v8, &v33);
      }
      v11 = SharedCacheMap[5];
      if ( v11.QuadPart != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( FileOffset.QuadPart < v11.QuadPart )
          SharedCacheMap[5] = FileOffset;
        SharedCacheMap[6] = ValidDataLength;
      }
      v12 = 0;
      if ( FileOffset.QuadPart < SharedCacheMap[1].QuadPart && (SharedCacheMap[19].LowPart & 4) == 0 )
      {
        KxReleaseQueuedSpinLock(&v33);
        v15 = v33.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33.OldIrql < 2u )
        {
          v29 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v29);
        }
        __writecr8(v15);
        v12 = 0;
        if ( CcUnmapVacbArray((__int64)SharedCacheMap, (__int64 *)&FileOffset, 0, 0, 0, 0) )
        {
          if ( !FileOffset.QuadPart )
          {
            if ( SharedCacheMap[20].QuadPart )
              CcDeleteMbcb(SharedCacheMap);
            if ( (LARGE_INTEGER *)SharedCacheMap[2].QuadPart != &SharedCacheMap[2] )
              CcDeleteBcbs(SharedCacheMap);
          }
          v12 = CcPurgeAndClearCacheSection(SharedCacheMap, &FileOffset);
        }
        KeAcquireInStackQueuedSpinLock(v8, &v33);
      }
      SharedCacheMap[1] = FileOffset;
      CcDecrementOpenCount(SharedCacheMap);
      KxReleaseQueuedSpinLock(&v33);
      v13 = v33.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33.OldIrql < 2u )
      {
        v30 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v30);
      }
      __writecr8(v13);
      return v12;
    }
    else
    {
      KxReleaseQueuedSpinLock(&v33);
      v25 = v33.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33.OldIrql < 2u )
      {
        v26 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v26);
      }
      __writecr8(v25);
      return 0;
    }
  }
  else
  {
    KxReleaseQueuedSpinLock(&LockHandle);
    LowPart = FileSize.LowPart;
    v22 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v31 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v31);
      LowPart = FileSize.LowPart;
    }
    __writecr8(v22);
    if ( (LowPart & 0xFFF) == 0 )
      return CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
    MmFlushSection((int)FileObject->SectionObjectPointer, (va_list)&FileOffset, 1LL);
    result = v32;
    if ( v32 >= 0 )
      return CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
  }
  return result;
}
