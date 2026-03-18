/*
 * XREFs of CcSetFileSizesEx @ 0x14007D170
 * Callers:
 *     CcSetFileSizes @ 0x14013C990 (CcSetFileSizes.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400447B0 (KeReleaseInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x140077AD0 (MmFlushSection.c)
 *     CcUnmapVacbArray @ 0x140079F40 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14007A2AC (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 *     CcPurgeCacheSection @ 0x1400DF560 (CcPurgeCacheSection.c)
 *     CcPurgeAndClearCacheSection @ 0x140125D84 (CcPurgeAndClearCacheSection.c)
 *     CcDeleteMbcb @ 0x1401286C0 (CcDeleteMbcb.c)
 *     FsRtlIsNtstatusExpected @ 0x14012EF30 (FsRtlIsNtstatusExpected.c)
 *     CcExtendVacbArray @ 0x14012FC04 (CcExtendVacbArray.c)
 *     CcDeleteBcbs @ 0x14016A228 (CcDeleteBcbs.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MmExtendSection @ 0x14069C8C0 (MmExtendSection.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  LARGE_INTEGER AllocationSize; // r14
  LARGE_INTEGER ValidDataLength; // rbx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  char v6; // r12
  LARGE_INTEGER *SharedCacheMap; // rdi
  unsigned __int8 v8; // r14
  unsigned __int8 v9; // r14
  KSPIN_LOCK *v10; // r14
  LARGE_INTEGER v11; // rcx
  NTSTATUS v12; // ebx
  unsigned __int8 v13; // di
  NTSTATUS result; // eax
  unsigned __int8 v15; // bl
  unsigned __int8 OldIrql; // r14
  unsigned __int8 v17; // r14
  LARGE_INTEGER v18; // rcx
  NTSTATUS v19; // eax
  NTSTATUS v20; // r14d
  __int64 v21; // r9
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
  _QWORD v32[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v33; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+B0h] [rbp+40h] BYREF
  LARGE_INTEGER v36; // [rsp+B8h] [rbp+48h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+C0h] [rbp+50h]

  AllocationSize = FileSizes->AllocationSize;
  ValidDataLength = FileSizes->ValidDataLength;
  v32[0] = 0LL;
  v32[1] = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v33, 0, sizeof(v33));
  FileOffset = FileSizes->FileSize;
  v36 = AllocationSize;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SectionObjectPointer = FileObject->SectionObjectPointer;
  v6 = 1;
  SharedCacheMap = (LARGE_INTEGER *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap && SharedCacheMap[21].QuadPart )
  {
    SpinLock = (PKSPIN_LOCK)(CcGetPartition((_QWORD *)SectionObjectPointer->SharedCacheMap) + 128);
    KeAcquireInStackQueuedSpinLock(SpinLock, &v33);
    if ( AllocationSize.QuadPart <= SharedCacheMap[4].QuadPart )
      goto LABEL_4;
    ++SharedCacheMap->HighPart;
    ++SharedCacheMap[67].LowPart;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v33);
    OldIrql = v33.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v17 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v24 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v24);
    }
    __writecr8(v17);
    v36.QuadPart += 0xFFFFFLL;
    v18 = SharedCacheMap[21];
    v36.LowPart &= 0xFFF00000;
    v6 = 0;
    v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmExtendSection)((LARGE_INTEGER)v18.QuadPart, &v36, 1LL);
    v20 = v19;
    if ( v19 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v19) )
        v20 = -1073741588;
    }
    else
    {
      v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD))CcExtendVacbArray)(SharedCacheMap, (LARGE_INTEGER)v36.QuadPart);
    }
    KeAcquireInStackQueuedSpinLock(SpinLock, &v33);
    CcDecrementOpenCount((__int64)SharedCacheMap);
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
      if ( v6 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v33);
        v8 = v33.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33.OldIrql < 2u )
        {
          v27 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v27);
        }
        __writecr8(v8);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v9 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v28 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v28);
        }
        __writecr8(v9);
        v10 = SpinLock;
        KeAcquireInStackQueuedSpinLock(SpinLock, &v33);
      }
      else
      {
        v10 = SpinLock;
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
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v33);
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
        KeAcquireInStackQueuedSpinLock(v10, &v33);
      }
      SharedCacheMap[1] = FileOffset;
      CcDecrementOpenCount((__int64)SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v33);
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
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v33);
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
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v22 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v31 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v31);
    }
    __writecr8(v22);
    if ( (FileOffset.LowPart & 0xFFF) == 0 )
      return CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
    MmFlushSection((int)FileObject->SectionObjectPointer, (__int64 *)&FileOffset, 1LL, v21, v32, 0);
    result = v32[0];
    if ( SLODWORD(v32[0]) >= 0 )
      return CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
  }
  return result;
}
