/*
 * XREFs of CcWriteBehindInternal @ 0x14007D2E0
 * Callers:
 *     CcWriteBehind @ 0x1400D621C (CcWriteBehind.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140022EF8 (CcDereferenceSharedCacheMapFileObject.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     CcDeleteSharedCacheMap @ 0x14007C260 (CcDeleteSharedCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007DF5C (CcReferenceSharedCacheMapFileObject.c)
 *     CcApplyLowIoPriorityToThread @ 0x14007E024 (CcApplyLowIoPriorityToThread.c)
 *     CcScheduleLazyWriteScan @ 0x14007EEB8 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14007EF40 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcDecrementOpenCount @ 0x1400ACEE0 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     CcGetFlushedValidData @ 0x1400E8840 (CcGetFlushedValidData.c)
 *     CcSetValidData @ 0x140126B74 (CcSetValidData.c)
 *     CcIsFatalWriteError @ 0x14012DA80 (CcIsFatalWriteError.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x140268FEC (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcMmLogLostDelayedWriteError @ 0x140269E30 (CcMmLogLostDelayedWriteError.c)
 *     FsRtlAcquireFileExclusive @ 0x1405DF920 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1405DF940 (FsRtlReleaseFile.c)
 */

void __fastcall CcWriteBehindInternal(__int64 a1)
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
  char *v18; // r15
  unsigned int v19; // ebx
  int valid; // r15d
  LARGE_INTEGER FlushedValidData; // rbx
  __int64 v22; // rax
  bool v23; // cl
  __int64 v24; // rax
  bool v25; // al
  __int64 v26; // r8
  unsigned __int8 v27; // r15
  struct _FILE_OBJECT *v28; // r15
  int v29; // ecx
  unsigned __int8 v30; // bl
  unsigned __int8 v31; // bl
  int v32; // ecx
  char v33; // dl
  int v34; // eax
  unsigned __int8 v35; // bl
  unsigned int v36; // ecx
  unsigned __int64 v37; // rbx
  __int64 v38; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v40; // rcx
  struct _KPRCB *v41; // rcx
  unsigned __int64 v42; // rbx
  struct _KPRCB *v43; // rcx
  struct _KPRCB *v44; // rcx
  struct _KPRCB *v45; // rcx
  unsigned __int8 v46; // bl
  struct _KPRCB *v47; // rcx
  struct _KPRCB *v48; // rcx
  unsigned __int8 v49; // bl
  struct _KPRCB *v50; // rcx
  SECTION_OBJECT_POINTERS *SectionObjectPointer; // [rsp+30h] [rbp-49h]
  __int64 v52; // [rsp+38h] [rbp-41h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE v54; // [rsp+58h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE v55; // [rsp+70h] [rbp-9h] BYREF
  char v56; // [rsp+E0h] [rbp+67h]
  int v57; // [rsp+E8h] [rbp+6Fh]
  LARGE_INTEGER v58; // [rsp+F0h] [rbp+77h] BYREF
  char *v59; // [rsp+F8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 16);
  v59 = *(char **)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 56);
  Partition = CcGetPartition(v1);
  v5 = Partition;
  if ( Partition != *(_QWORD *)(a1 + 128) )
    KeBugCheckEx(0x34u, 0x1A59uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = (KSPIN_LOCK *)(Partition + 128);
  for ( i = (KSPIN_LOCK *)(Partition + 192); ; i = (KSPIN_LOCK *)(v5 + 192) )
  {
    v56 = 0;
    KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
    ++*(_DWORD *)(v1 + 4);
    ++*(_DWORD *)(v1 + 536);
    KxReleaseQueuedSpinLock(&LockHandle);
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
    KeAcquireInStackQueuedSpinLock(i, &v55);
    v10 = *(_DWORD *)(v5 + 896);
    v11 = *(_DWORD *)(v5 + 200);
    KxReleaseQueuedSpinLock(&v55);
    v13 = v55.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v55.OldIrql < 2u )
    {
      v40 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v40);
    }
    __writecr8(v13);
    if ( v10 >= v11 )
      CcApplyLowIoPriorityToThread(v5, 0LL, v1);
    LOBYTE(v12) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v1 + 208))(*(_QWORD *)(v1 + 216), v12) )
      break;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
    v57 = *(_DWORD *)(v1 + 152) & 0x10000;
    v14 = *(_QWORD *)(v1 + 160);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 8);
      *(_DWORD *)(v14 + 4) = v15;
      v36 = *(_DWORD *)(v5 + 456);
      if ( v15 > v36 )
      {
        *(_DWORD *)(v14 + 4) = v36;
        v15 = v36;
      }
    }
    else
    {
      v15 = *(_DWORD *)(v1 + 192);
    }
    SectionObjectPointer = *(SECTION_OBJECT_POINTERS **)((*(_QWORD *)(v1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    KxReleaseQueuedSpinLock(&LockHandle);
    v16 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v41 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v41);
    }
    __writecr8(v16);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v15);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0
      && (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v15),
          (*(_DWORD *)(v1 + 152) & 0x1000000) != 0) )
    {
      v17 = &v52;
      v52 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 112LL);
    }
    else
    {
      v17 = 0LL;
    }
    v18 = v59;
    CcFlushCachePriv((__int64)SectionObjectPointer, &CcNoDelay, 1u, (__int64)v17, 0, v59);
    CcApplyLowIoPriorityToThread(v5, 0LL, v1);
    v19 = -v15;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v19);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v19);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 208) + 8LL))(*(_QWORD *)(v1 + 216));
    if ( *(_DWORD *)v18 != -2147483626 && (unsigned __int8)CcIsFatalWriteError(v1) )
    {
      v42 = CcReferenceSharedCacheMapFileObject(v1);
      CcMmLogLostDelayedWriteError(v42, *(unsigned int *)v18);
      CcDereferenceSharedCacheMapFileObject(v1, v42);
    }
    valid = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    FlushedValidData = *(LARGE_INTEGER *)(v1 + 40);
    v58 = FlushedValidData;
    v22 = CcGetPartition(v1);
    v23 = *(_DWORD *)(v1 + 4) > 1u && *(_QWORD *)(v22 + 744) != v22 + 744;
    v25 = 0;
    if ( (*(_DWORD *)(v1 + 152) & 0x400) != 0 )
    {
      v24 = *(_QWORD *)(v1 + 40);
      if ( *(_QWORD *)(v1 + 48) >= v24 && v24 != 0x7FFFFFFFFFFFFFFFLL && *(_QWORD *)(v1 + 8) )
        v25 = 1;
    }
    if ( !*(_DWORD *)(v1 + 516) && v25 && !v23 )
    {
      FlushedValidData = CcGetFlushedValidData(SectionObjectPointer, 1u);
      v58 = FlushedValidData;
      if ( FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 40) )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
        v37 = CcReferenceSharedCacheMapFileObject(v1);
        valid = CcSetValidData(v37, &v58);
        CcDereferenceSharedCacheMapFileObject(v1, v37);
        ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
        if ( valid < 0 )
        {
          if ( valid == -1073741740 || valid == -1073741670 || valid == -2147483626 )
          {
            FlushedValidData = v58;
          }
          else
          {
            FlushedValidData = *(LARGE_INTEGER *)(v1 + 48);
            v58 = FlushedValidData;
          }
        }
        else
        {
          FlushedValidData = v58;
          *(LARGE_INTEGER *)(v1 + 40) = v58;
        }
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    v6 = (KSPIN_LOCK *)(v5 + 128);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
    --*(_DWORD *)(v1 + 4);
    --*(_DWORD *)(v1 + 536);
    if ( *(_DWORD *)(v1 + 4) )
      goto LABEL_48;
    if ( valid != -1073741740 && valid != -2147483626 && valid != -1073741670 )
    {
      KxReleaseQueuedSpinLock(&LockHandle);
      v27 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v43 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v43);
        FlushedValidData = v58;
      }
      __writecr8(v27);
      v28 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v1);
      FsRtlAcquireFileExclusive(v28);
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v54);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
      v29 = *(_DWORD *)(v1 + 4);
      if ( !v29
        && (!*(_DWORD *)(v1 + 112)
         && (*(_QWORD *)(v1 + 40) == 0x7FFFFFFFFFFFFFFFLL
          || (*(_DWORD *)(v1 + 152) & 0x400) == 0
          || FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 48))
         || !*(_QWORD *)(v1 + 8) && (*(_DWORD *)(v1 + 152) & 4) == 0) )
      {
        CcDeleteSharedCacheMap((char *)v1, (__int64)&v54, (__int64)&LockHandle, 1, v28);
        *((_QWORD *)v59 + 1) = 0LL;
        goto LABEL_36;
      }
      if ( *(_DWORD *)(v1 + 112) )
      {
        if ( v57 )
          CcCancelMmWaitForUninitializeCacheMap(v1);
      }
      else if ( !v29 )
      {
        CcInsertIntoDirtySharedCacheMapList(v1);
        v56 = 1;
      }
      KxReleaseQueuedSpinLock(&LockHandle);
      v30 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v44 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v44);
      }
      __writecr8(v30);
      KxReleaseQueuedSpinLock(&v54);
      v31 = v54.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v54.OldIrql < 2u )
      {
        v45 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v45);
      }
      __writecr8(v31);
      FsRtlReleaseFile(v28);
      CcDereferenceSharedCacheMapFileObject(v1, (unsigned __int64)v28);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
LABEL_48:
      v32 = v57;
      goto LABEL_49;
    }
    v32 = v57;
    if ( v57 )
    {
      CcCancelMmWaitForUninitializeCacheMap(v1);
      v32 = v57;
    }
    if ( !*(_DWORD *)(v1 + 112) )
    {
      CcInsertIntoDirtySharedCacheMapList(v1);
      v32 = v57;
      v33 = 1;
      goto LABEL_50;
    }
LABEL_49:
    v33 = v56;
LABEL_50:
    v34 = *(_DWORD *)(v1 + 152);
    if ( (v34 & 0x10000) == 0 || v32 )
    {
      if ( *((_QWORD *)v59 + 1) != 35422LL )
        *(_DWORD *)(v1 + 152) = v34 & 0xFFFFFFDF;
      if ( v33 )
      {
        *(_BYTE *)(v5 + 593) = 1;
        if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
        {
          LOBYTE(v26) = 1;
          v38 = 1LL;
        }
        else
        {
          v26 = 0LL;
          v38 = 0LL;
        }
        CcScheduleLazyWriteScan(v5, v38, v26);
      }
      KxReleaseQueuedSpinLock(&LockHandle);
      v35 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v48 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v48);
      }
      __writecr8(v35);
      goto LABEL_36;
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    v46 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v47 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v47);
    }
    __writecr8(v46);
  }
  CcApplyLowIoPriorityToThread(v5, 0LL, v1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
  *(_DWORD *)(v1 + 152) &= ~0x20u;
  if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v1);
  CcDecrementOpenCount(v1);
  KxReleaseQueuedSpinLock(&LockHandle);
  v49 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v50 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v50);
  }
  __writecr8(v49);
  *(_DWORD *)v59 = -1073741740;
LABEL_36:
  if ( v3 )
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
