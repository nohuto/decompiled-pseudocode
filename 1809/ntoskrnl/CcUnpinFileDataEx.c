/*
 * XREFs of CcUnpinFileDataEx @ 0x140020910
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14001F590 (CcAcquireByteRangeForWrite.c)
 *     CcGetDirtyPagesHelper @ 0x140020430 (CcGetDirtyPagesHelper.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400207F4 (CcReleaseByteRangeFromWrite.c)
 *     CcPinFileData @ 0x1400AE210 (CcPinFileData.c)
 *     CcZeroDataInCache @ 0x1400E0844 (CcZeroDataInCache.c)
 *     CcMapDataForOverwrite @ 0x14011A7D4 (CcMapDataForOverwrite.c)
 *     CcUnpinRepinnedBcb @ 0x140269FC0 (CcUnpinRepinnedBcb.c)
 *     CcUnpinData @ 0x1405DFDF0 (CcUnpinData.c)
 *     CcMapData @ 0x140639A30 (CcMapData.c)
 *     CcUnpinDataForThread @ 0x1407E9A60 (CcUnpinDataForThread.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     CcDeallocateBcb @ 0x140020F14 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14002124C (CcDeductDirtyPages.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400223FC (CcAdjustVacbLevelLockCount.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14011BA6C (CcInsertIntoCleanSharedCacheMapList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

int __fastcall CcUnpinFileDataEx(char *P, __int64 a2, int a3)
{
  ULONG_PTR v3; // rbx
  char v4; // si
  __int64 v6; // rax
  struct _KEVENT *v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v14; // edx
  ULONG_PTR *v15; // rbp
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  volatile signed __int32 *v18; // rbp
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 AbEntrySummary; // al
  __int64 v21; // rcx
  __int64 v22; // r13
  int SessionId; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  bool v26; // zf
  unsigned __int8 v27; // r14
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  unsigned __int8 v31; // bl
  unsigned __int32 v32; // eax
  struct _KEVENT *v33; // rcx
  unsigned int v34; // ebx
  unsigned __int8 v35; // r8
  unsigned int v36; // eax
  unsigned __int8 v37; // bl
  unsigned __int32 v38; // eax
  char **v39; // rdx
  PVOID *v40; // rcx
  _DWORD *v41; // rcx
  __int64 v42; // rcx
  struct _KEVENT *v43; // rcx
  int v44; // eax
  int v45; // eax
  signed __int32 v46; // eax
  int v47; // eax
  struct _KPRCB *v48; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KPRCB *v50; // rcx
  struct _KPRCB *v51; // rcx
  __int64 v53; // [rsp+38h] [rbp-60h]
  _QWORD v54[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int8 v55; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v57; // [rsp+A0h] [rbp+8h] BYREF
  int v58; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  if ( *(_WORD *)P != 765 )
  {
    v6 = *((_QWORD *)P + 1);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)P + 4) )
    {
      v7 = *(struct _KEVENT **)(v6 + 184);
      if ( v7 )
        LODWORD(v6) = KeSetEvent(v7, 0, 0);
    }
    return v6;
  }
  v8 = *((_QWORD *)P + 22);
  v9 = *(_QWORD *)(v8 + 528);
  v53 = v9;
  if ( *(_QWORD *)(v8 + 168) )
  {
    v10 = *(_QWORD *)((*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140439C80, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v57 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v44 = SchedulerAssist[5];
          SchedulerAssist[5] = v44 + 1;
          if ( v44 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
        }
      }
      if ( _interlockedbittestandset(&dword_140439C80, 0x1Fu) )
      {
        v41 = CurrentPrcb->SchedulerAssist;
        if ( v41 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v45 = v41[5] - 1;
            v41[5] = v45;
            if ( !v45 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
          }
        }
        v57 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140439C80, CurrentIrql);
      }
      v14 = dword_140439C80;
      while ( (v14 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v14 & 0x40000000) == 0 )
        {
          v46 = _InterlockedCompareExchange(&dword_140439C80, v14 | 0x40000000, v14);
          v26 = v14 == v46;
          v14 = v46;
          if ( !v26 )
            continue;
        }
        KeYieldProcessorEx(&v57);
        v14 = dword_140439C80;
      }
    }
    if ( *(_QWORD *)v10 )
      v15 = *(ULONG_PTR **)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v10 + 60LL) & 0x3FF));
    else
      v15 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140439C80, retaddr);
    else
      dword_140439C80 = 0;
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v47 = v17[5] - 1;
        v17[5] = v47;
        if ( !v47 )
          KiRemoveSystemWorkPriorityKick(v16, v17);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v48 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v48, v17);
    }
    __writecr8(CurrentIrql);
    if ( v9 != *(_QWORD *)(v15[21] + 8) )
      KeBugCheckEx(0x34u, 0x12A9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(v8 + 152) & 0x200) == 0 || (_DWORD)v3 == 1 )
    v4 = 1;
  v58 = 0;
  v18 = (volatile signed __int32 *)(v8 + 280);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v8 + 280, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v22 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v8 + 280);
      goto LABEL_111;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    AbEntrySummary = CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v21, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v21);
  v22 = (__int64)&CurrentThread->LockEntries[v21];
  if ( !v22 )
  {
LABEL_111:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_28;
  }
  if ( (unsigned __int64)v18 >= 0xFFFF800000000000uLL
    && *((_BYTE *)&MiState + (((unsigned __int64)v18 >> 39) & 0x1FF) + 11792) == 1 )
  {
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v22 + 40) = SessionId;
  *(_QWORD *)(v22 + 32) = (unsigned __int64)v18 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_28:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v8 + 280, &v58);
  v26 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v26 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v25);
  v27 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v18, 0) )
    ExpAcquireFastMutexContended(v8 + 280, (PRTL_BALANCED_NODE)v22);
  if ( v22 )
    *(_BYTE *)(v22 + 26) |= 1u;
  *(_QWORD *)(v8 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v8 + 328) = v27;
  if ( (unsigned int)v3 > 1 )
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x2045FuLL, v3, 0LL, 0LL);
    if ( P[2] )
    {
      v34 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      v54[1] = v53 + 128;
      *((_QWORD *)P + 6) = 0LL;
      v54[0] = 0LL;
      v35 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v35 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v55 = v35;
      KxAcquireQueuedSpinLock(v54);
      CcDeductDirtyPages(v8, v34);
      v36 = 0;
      if ( *(_DWORD *)(v53 + 456) > v34 )
        v36 = *(_DWORD *)(v53 + 456) - v34;
      *(_DWORD *)(v53 + 456) = v36;
      if ( !*(_DWORD *)(v8 + 112) && *(_DWORD *)(v8 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v8);
      KxReleaseQueuedSpinLock(v54);
      v37 = v55;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v55 < 2u )
      {
        v50 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v50, v24);
      }
      __writecr8(v37);
    }
    v29 = *((_DWORD *)P + 16);
  }
  else
  {
    v28 = *((_DWORD *)P + 16);
    if ( !v28 )
      KeBugCheckEx(0x34u, 0x428uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v29 = v28 - 1;
    *((_DWORD *)P + 16) = v29;
  }
  if ( v29 )
  {
    if ( !v4 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    v31 = *(_BYTE *)(v8 + 328);
    *(_QWORD *)(v8 + 288) = 0LL;
    v38 = _InterlockedCompareExchange(v18, 1, 0);
    if ( v38 )
      ExpReleaseFastMutexContended(v8 + 280, v38);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v31 >= 2u )
      goto LABEL_48;
LABEL_129:
    v51 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v51->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v51, v24);
LABEL_48:
    __writecr8(v31);
    LODWORD(v6) = KeAbPostRelease(v8 + 280);
    return v6;
  }
  if ( P[2] )
  {
    if ( *((_QWORD *)P + 23) )
    {
      v30 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v33 = *(struct _KEVENT **)(v30 + 184);
        if ( v33 )
          KeSetEvent(v33, 0, 0);
      }
      *((_QWORD *)P + 23) = 0LL;
      *((_QWORD *)P + 7) = 0LL;
    }
    if ( !v4 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    v31 = *(_BYTE *)(v8 + 328);
    *(_QWORD *)(v8 + 288) = 0LL;
    v32 = _InterlockedCompareExchange(v18, 1, 0);
    if ( v32 )
      ExpReleaseFastMutexContended(v8 + 280, v32);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v31 >= 2u )
      goto LABEL_48;
    goto LABEL_129;
  }
  ExAcquirePushLockExclusiveEx(v8 + 104, 0LL);
  v39 = (char **)*((_QWORD *)P + 2);
  v40 = (PVOID *)*((_QWORD *)P + 3);
  if ( v39[1] != P + 16 || *v40 != P + 16 )
    __fastfail(3u);
  *v40 = v39;
  v39[1] = (char *)v40;
  if ( *(__int64 *)(v8 + 32) > 0x2000000 && (*(_DWORD *)(v8 + 152) & 0x200) != 0 )
    CcAdjustVacbLevelLockCount(v8, *((_QWORD *)P + 1), 0xFFFFFFFFLL);
  ExReleasePushLockEx(v8 + 104, 0LL);
  if ( *((_QWORD *)P + 23) )
  {
    v42 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
    {
      v43 = *(struct _KEVENT **)(v42 + 184);
      if ( v43 )
        KeSetEvent(v43, 0, 0);
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 280));
  LODWORD(v6) = CcDeallocateBcb(P);
  return v6;
}
