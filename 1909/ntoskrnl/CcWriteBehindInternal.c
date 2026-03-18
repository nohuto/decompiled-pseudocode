/*
 * XREFs of CcWriteBehindInternal @ 0x14007E5E0
 * Callers:
 *     CcWriteBehind @ 0x14007DB9C (CcWriteBehind.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     CcFlushCachePriv @ 0x1400773D0 (CcFlushCachePriv.c)
 *     CcDecrementOpenCount @ 0x14007A66C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     CcApplyLowIoPriorityToThread @ 0x14007EC6C (CcApplyLowIoPriorityToThread.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007FBC8 (CcReferenceSharedCacheMapFileObject.c)
 *     CcDeleteSharedCacheMap @ 0x14007FC90 (CcDeleteSharedCacheMap.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400802F4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcSetValidData @ 0x1400ED764 (CcSetValidData.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14011CD88 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x14012013C (CcScheduleLazyWriteScan.c)
 *     CcGetFlushedValidData @ 0x140124870 (CcGetFlushedValidData.c)
 *     CcIsFatalWriteError @ 0x14012E974 (CcIsFatalWriteError.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x14027BB1C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcMmLogLostDelayedWriteError @ 0x14027D3E0 (CcMmLogLostDelayedWriteError.c)
 *     FsRtlAcquireFileExclusive @ 0x1405D5DC0 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1405D5DE0 (FsRtlReleaseFile.c)
 */

LONG __fastcall CcWriteBehindInternal(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // r13
  __int64 Partition; // rax
  __int64 v5; // r14
  KSPIN_LOCK *v6; // r12
  KSPIN_LOCK *i; // r15
  __int64 v8; // rdx
  unsigned __int8 OldIrql; // bl
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  __int64 v12; // rdx
  unsigned __int8 v13; // bl
  __int64 v14; // rax
  unsigned int v15; // ebx
  unsigned __int8 v16; // r15
  __int64 *v17; // r9
  _DWORD *v18; // r15
  unsigned int v19; // ebx
  int valid; // r15d
  LARGE_INTEGER FlushedValidData; // rbx
  __int64 v22; // rax
  bool v23; // cl
  bool v24; // al
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int8 v27; // r15
  struct _FILE_OBJECT *v28; // r15
  __int64 v29; // rdx
  int v30; // ecx
  LONG result; // eax
  __int64 v32; // rax
  unsigned __int8 v33; // bl
  unsigned __int8 v34; // bl
  char v35; // dl
  int v36; // eax
  unsigned __int8 v37; // bl
  unsigned int v38; // ecx
  __int64 v39; // rbx
  __int64 v40; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v42; // rcx
  struct _KPRCB *v43; // rcx
  __int64 v44; // rbx
  struct _KPRCB *v45; // rcx
  struct _KPRCB *v46; // rcx
  struct _KPRCB *v47; // rcx
  unsigned __int8 v48; // bl
  struct _KPRCB *v49; // rcx
  struct _KPRCB *v50; // rcx
  unsigned __int8 v51; // bl
  struct _KPRCB *v52; // rcx
  SECTION_OBJECT_POINTERS *SectionObjectPointer; // [rsp+30h] [rbp-49h]
  __int64 v54; // [rsp+38h] [rbp-41h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE v56; // [rsp+58h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE v57; // [rsp+70h] [rbp-9h] BYREF
  char v58; // [rsp+E0h] [rbp+67h]
  int v59; // [rsp+E8h] [rbp+6Fh]
  LARGE_INTEGER v60; // [rsp+F0h] [rbp+77h] BYREF
  _QWORD *v61; // [rsp+F8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 16);
  memset(&v56, 0, sizeof(v56));
  v61 = *(_QWORD **)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 56);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v57, 0, sizeof(v57));
  Partition = CcGetPartition((_QWORD *)v1);
  v5 = Partition;
  if ( Partition != *(_QWORD *)(a1 + 128) )
    KeBugCheckEx(0x34u, 0x1A6AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = (KSPIN_LOCK *)(Partition + 128);
  for ( i = (KSPIN_LOCK *)(Partition + 192); ; i = (KSPIN_LOCK *)(v5 + 192) )
  {
    v58 = 0;
    KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
    ++*(_DWORD *)(v1 + 4);
    ++*(_DWORD *)(v1 + 536);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    LOBYTE(v8) = 1;
    CcApplyLowIoPriorityToThread(v5, v8, v1);
    KeAcquireInStackQueuedSpinLock(i, &v57);
    v10 = *(_DWORD *)(v5 + 896);
    v11 = *(_DWORD *)(v5 + 200);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v57);
    v13 = v57.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v57.OldIrql < 2u )
    {
      v42 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v42);
    }
    __writecr8(v13);
    if ( v10 >= v11 )
      CcApplyLowIoPriorityToThread(v5, 0LL, v1);
    LOBYTE(v12) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v1 + 208))(*(_QWORD *)(v1 + 216), v12) )
      break;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
    v59 = *(_DWORD *)(v1 + 152) & 0x10000;
    v14 = *(_QWORD *)(v1 + 160);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 8);
      *(_DWORD *)(v14 + 4) = v15;
      v38 = *(_DWORD *)(v5 + 456);
      if ( v15 > v38 )
      {
        *(_DWORD *)(v14 + 4) = v38;
        v15 = v38;
      }
    }
    else
    {
      v15 = *(_DWORD *)(v1 + 192);
    }
    SectionObjectPointer = *(SECTION_OBJECT_POINTERS **)((*(_QWORD *)(v1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v16 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v43 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v43);
    }
    __writecr8(v16);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v15);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0
      && (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v15),
          (*(_DWORD *)(v1 + 152) & 0x1000000) != 0) )
    {
      v17 = &v54;
      v54 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 112LL);
    }
    else
    {
      v17 = 0LL;
    }
    v18 = v61;
    CcFlushCachePriv((__int64)SectionObjectPointer, &CcNoDelay, 1u, (__int64)v17, 0, v61);
    CcApplyLowIoPriorityToThread(v5, 0LL, v1);
    v19 = -v15;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v19);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v19);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 208) + 8LL))(*(_QWORD *)(v1 + 216));
    if ( *v18 != -2147483626 && (unsigned __int8)CcIsFatalWriteError(v1) )
    {
      v44 = CcReferenceSharedCacheMapFileObject(v1);
      CcMmLogLostDelayedWriteError(v44, (unsigned int)*v18);
      CcDereferenceSharedCacheMapFileObject(v1, v44);
    }
    valid = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    FlushedValidData = *(LARGE_INTEGER *)(v1 + 40);
    v60 = FlushedValidData;
    v22 = CcGetPartition((_QWORD *)v1);
    v23 = *(_DWORD *)(v1 + 4) > 1u && *(_QWORD *)(v22 + 744) != v22 + 744;
    v24 = 0;
    if ( (*(_DWORD *)(v1 + 152) & 0x400) != 0 )
    {
      v32 = *(_QWORD *)(v1 + 40);
      if ( *(_QWORD *)(v1 + 48) >= v32 && v32 != 0x7FFFFFFFFFFFFFFFLL && *(_QWORD *)(v1 + 8) )
        v24 = 1;
    }
    if ( !*(_DWORD *)(v1 + 516) && v24 && !v23 )
    {
      FlushedValidData = CcGetFlushedValidData(SectionObjectPointer, 1u);
      v60 = FlushedValidData;
      if ( FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 40) )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
        v39 = CcReferenceSharedCacheMapFileObject(v1);
        valid = CcSetValidData(v39, &v60);
        CcDereferenceSharedCacheMapFileObject(v1, v39);
        ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
        if ( valid < 0 )
        {
          if ( valid == -1073741740 || valid == -1073741670 || valid == -2147483626 )
          {
            FlushedValidData = v60;
          }
          else
          {
            FlushedValidData = *(LARGE_INTEGER *)(v1 + 48);
            v60 = FlushedValidData;
          }
        }
        else
        {
          FlushedValidData = v60;
          *(LARGE_INTEGER *)(v1 + 40) = v60;
        }
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    v6 = (KSPIN_LOCK *)(v5 + 128);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
    --*(_DWORD *)(v1 + 4);
    --*(_DWORD *)(v1 + 536);
    if ( !*(_DWORD *)(v1 + 4) )
    {
      if ( valid == -1073741740 || valid == -2147483626 || valid == -1073741670 )
      {
        if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
          CcCancelMmWaitForUninitializeCacheMap(v1);
        if ( !*(_DWORD *)(v1 + 112) )
        {
          CcInsertIntoDirtySharedCacheMapList(v1, v25);
          v35 = 1;
          goto LABEL_49;
        }
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v27 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v45 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v45);
          FlushedValidData = v60;
        }
        __writecr8(v27);
        v28 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v1);
        FsRtlAcquireFileExclusive(v28);
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v56);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
        v30 = *(_DWORD *)(v1 + 4);
        if ( !v30
          && (!*(_DWORD *)(v1 + 112)
           && (*(_QWORD *)(v1 + 40) == 0x7FFFFFFFFFFFFFFFLL
            || (*(_DWORD *)(v1 + 152) & 0x400) == 0
            || FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 48))
           || !*(_QWORD *)(v1 + 8) && (*(_DWORD *)(v1 + 152) & 4) == 0) )
        {
          result = CcDeleteSharedCacheMap((PVOID)v1, &v56, &LockHandle, v28);
          v61[1] = 0LL;
          goto LABEL_32;
        }
        if ( *(_DWORD *)(v1 + 112) )
        {
          if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
            CcCancelMmWaitForUninitializeCacheMap(v1);
        }
        else if ( !v30 )
        {
          CcInsertIntoDirtySharedCacheMapList(v1, v29);
          v58 = 1;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v33 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v46 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v46);
        }
        __writecr8(v33);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v56);
        v34 = v56.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v56.OldIrql < 2u )
        {
          v47 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v47);
        }
        __writecr8(v34);
        FsRtlReleaseFile(v28);
        CcDereferenceSharedCacheMapFileObject(v1, v28);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
      }
    }
    v35 = v58;
LABEL_49:
    v36 = *(_DWORD *)(v1 + 152);
    if ( (v36 & 0x10000) == 0 || v59 )
    {
      if ( v61[1] != 35422LL )
        *(_DWORD *)(v1 + 152) = v36 & 0xFFFFFFDF;
      if ( v35 )
      {
        *(_BYTE *)(v5 + 593) = 1;
        if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
        {
          LOBYTE(v26) = 1;
          v40 = 1LL;
        }
        else
        {
          v26 = 0LL;
          v40 = 0LL;
        }
        CcScheduleLazyWriteScan(v5, v40, v26);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v37 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v50 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v50);
      }
      result = v37;
      __writecr8(v37);
      goto LABEL_32;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v48 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v49 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v49->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v49);
    }
    __writecr8(v48);
  }
  CcApplyLowIoPriorityToThread(v5, 0LL, v1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
  *(_DWORD *)(v1 + 152) &= ~0x20u;
  if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v1);
  CcDecrementOpenCount(v1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v51 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v52 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v52);
  }
  result = v51;
  __writecr8(v51);
  *(_DWORD *)v61 = -1073741740;
LABEL_32:
  if ( v3 )
    return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return result;
}
