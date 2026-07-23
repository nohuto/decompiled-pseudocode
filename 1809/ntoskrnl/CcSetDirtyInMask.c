/*
 * XREFs of CcSetDirtyInMask @ 0x140031460
 * Callers:
 *     CcReleaseByteRangeFromWrite @ 0x1400207F4 (CcReleaseByteRangeFromWrite.c)
 *     CcSetDirtyPinnedData @ 0x1400231C0 (CcSetDirtyPinnedData.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     CcMdlWriteComplete2 @ 0x1400E19A8 (CcMdlWriteComplete2.c)
 *     CcPrepareMdlWrite @ 0x1400E1AC0 (CcPrepareMdlWrite.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7978 (CcPurgeAndClearCacheSection.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcAdjustWriteBehindThreadPool @ 0x1400239F0 (CcAdjustWriteBehindThreadPool.c)
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     CcScheduleLazyWriteScan @ 0x14007EEB8 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14007EF40 (CcInsertIntoDirtySharedCacheMapList.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140107FD0 (CcBoostLowPriorityWorkerThread.c)
 *     CcAllocateInitializeMbcb @ 0x14012AE6C (CcAllocateInitializeMbcb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcSetDirtyInMask(struct _FAST_MUTEX *a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // r15
  struct _FAST_MUTEX *v5; // rdi
  _OWORD *v6; // r13
  __int64 v7; // r12
  struct _LIST_ENTRY *Flink; // rax
  __int64 v9; // r15
  signed __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v15; // edx
  ULONG_PTR *v16; // rbx
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  int i; // esi
  __int64 result; // rax
  struct _FAST_MUTEX *v21; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // al
  __int64 v24; // rcx
  __int64 v25; // r14
  int v26; // eax
  __int64 v27; // rcx
  bool v28; // zf
  unsigned __int8 v29; // bl
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // rsi
  signed __int64 v33; // rbx
  signed __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r9
  volatile __int64 *v37; // rbx
  unsigned __int8 v38; // dl
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  _DWORD *v41; // rdx
  int v42; // ebx
  unsigned int v43; // edi
  __int64 v44; // rcx
  _DWORD *v45; // r8
  int v46; // eax
  __int64 v47; // r14
  __int64 v48; // r15
  unsigned __int8 v49; // r12
  struct _KPRCB *v50; // rsi
  _DWORD *v51; // rcx
  signed __int32 v52; // edx
  ULONG_PTR *v53; // rsi
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  signed __int64 v56; // rdx
  __int64 v57; // r15
  char v58; // si
  __int64 Next; // rax
  struct _KPRCB *v60; // rcx
  _DWORD *v61; // rdx
  unsigned __int8 v62; // si
  __int64 v63; // rcx
  ULONG_PTR v64; // rbx
  unsigned __int8 v65; // di
  signed __int32 v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rcx
  unsigned __int8 OldIrql; // r15
  struct _KTHREAD *v70; // r9
  unsigned int v71; // eax
  unsigned __int64 v72; // rdx
  _DWORD *v73; // rcx
  _DWORD *v74; // rcx
  _OWORD *v75; // rax
  __int64 **v76; // rdx
  __int64 *v77; // rcx
  __int64 v78; // rax
  __int64 *v79; // rcx
  __int64 **v80; // rdx
  int v81; // eax
  int v82; // eax
  signed __int32 v83; // eax
  int v84; // eax
  struct _KPRCB *v85; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v87; // eax
  int v88; // eax
  int v89; // eax
  signed __int32 v90; // eax
  int v91; // eax
  struct _KPRCB *v92; // rcx
  struct _KPRCB *v93; // rcx
  int v94; // eax
  struct _KPRCB *v95; // rcx
  unsigned __int8 v96; // bl
  struct _KPRCB *v97; // rcx
  int Blink; // eax
  unsigned __int8 v99; // bl
  struct _KPRCB *v100; // rcx
  struct _KPRCB *v101; // rcx
  unsigned int v102; // [rsp+38h] [rbp-69h]
  __int64 v103; // [rsp+40h] [rbp-61h]
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE v105; // [rsp+50h] [rbp-51h] BYREF
  int v106; // [rsp+68h] [rbp-39h] BYREF
  int v107; // [rsp+6Ch] [rbp-35h] BYREF
  __int64 v108; // [rsp+70h] [rbp-31h]
  int v109; // [rsp+78h] [rbp-29h] BYREF
  signed __int64 v110; // [rsp+80h] [rbp-21h]
  int v111; // [rsp+88h] [rbp-19h]
  signed __int64 v112; // [rsp+90h] [rbp-11h]
  __int64 v113; // [rsp+98h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-1h] BYREF
  void *retaddr; // [rsp+100h] [rbp+5Fh]

  v4 = *a2;
  v5 = a1;
  v113 = a3;
  v6 = 0LL;
  ListEntry = 0LL;
  v102 = 0;
  v7 = v4 + a3 - 1LL;
  if ( ((v4 ^ v7) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xC37uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  Flink = a1->Event.Header.WaitListHead.Flink;
  v9 = v4 >> 12;
  v10 = v7 >> 12;
  v110 = v9;
  v112 = v10;
  if ( (__int64)Flink / 4096 <= v10 )
    KeBugCheckEx(0x34u, 0xC49uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v103 = *(_QWORD *)&a1[9].Event.Header.Lock;
  if ( *(_QWORD *)&a1[3].Count )
  {
    v11 = *(_QWORD *)(((unsigned __int64)a1[1].Event.Header.WaitListHead.Blink & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
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
      v106 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v81 = SchedulerAssist[5];
          SchedulerAssist[5] = v81 + 1;
          if ( v81 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140439C80, 0x1Fu) )
      {
        v73 = CurrentPrcb->SchedulerAssist;
        if ( v73 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v82 = v73[5] - 1;
            v73[5] = v82;
            if ( !v82 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v106 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140439C80, CurrentIrql);
      }
      v15 = dword_140439C80;
      while ( (v15 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v15 & 0x40000000) == 0 )
        {
          v83 = _InterlockedCompareExchange(&dword_140439C80, v15 | 0x40000000, v15);
          v28 = v15 == v83;
          v15 = v83;
          if ( !v28 )
            continue;
        }
        KeYieldProcessorEx(&v106);
        v15 = dword_140439C80;
      }
    }
    if ( *(_QWORD *)v11 )
      v16 = *(ULONG_PTR **)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
    else
      v16 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140439C80, retaddr);
    else
      dword_140439C80 = 0;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v84 = v18[5] - 1;
        v18[5] = v84;
        if ( !v84 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v85 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v85->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v85);
    }
    __writecr8(CurrentIrql);
    if ( v103 != *(_QWORD *)(v16[21] + 8) )
LABEL_240:
      KeBugCheckEx(0x34u, 0x12A9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  for ( i = 0; ; i = 1 )
  {
    while ( 1 )
    {
      if ( v5->Event.Header.WaitListHead.Flink > (struct _LIST_ENTRY *)0x300000 )
      {
        ++dword_1404C7B14;
        result = (__int64)RtlpInterlockedPopEntrySList(&CcBitmapLookasideList);
        if ( !result )
        {
          ++dword_1404C7B18;
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1404C7B30)(
                     (unsigned int)dword_1404C7B24,
                     (unsigned int)dword_1404C7B2C,
                     (unsigned int)dword_1404C7B28);
          if ( !result )
          {
            ++CcDbgNumberOfFailedBitmapAllocations;
            goto LABEL_242;
          }
        }
        v6 = (_OWORD *)result;
        ListEntry = (PSLIST_ENTRY)result;
      }
      v109 = 0;
      v21 = v5 + 5;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      if ( ++CurrentThread->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&v5[5], KeGetCurrentIrql(), 0LL);
      AbEntrySummary = CurrentThread->AbEntrySummary;
      if ( !AbEntrySummary )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          v25 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, &v5[5]);
LABEL_187:
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
          goto LABEL_27;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
        AbEntrySummary = CurrentThread->AbEntrySummary;
      }
      _BitScanForward((unsigned int *)&v24, AbEntrySummary);
      v111 = v24;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v24);
      v25 = (__int64)&CurrentThread->LockEntries[v24];
      if ( !v25 )
        goto LABEL_187;
      v26 = (unsigned __int64)v21 >= 0xFFFF800000000000uLL
         && *((_BYTE *)&MiState[1474] + (((unsigned __int64)v21 >> 39) & 0x1FF)) == 1
          ? MmGetSessionIdEx(CurrentThread->ApcState.Process)
          : -1;
      *(_DWORD *)(v25 + 40) = v26;
      *(_QWORD *)(v25 + 32) = (unsigned __int64)v21 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_27:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, &v5[5], &v109);
      v28 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v28
        && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v27);
      }
      v29 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(&v21->Count, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&v5[5], (PRTL_BALANCED_NODE)v25);
      if ( v25 )
        *(_BYTE *)(v25 + 26) |= 1u;
      v5[5].Owner = KeGetCurrentThread();
      v5[5].OldIrql = v29;
      v30 = *(_QWORD *)&v5[2].OldIrql;
      v108 = v30;
      if ( !v30 )
      {
        result = CcAllocateInitializeMbcb();
        v108 = result;
        v30 = result;
        if ( !result )
          goto LABEL_241;
        *(_QWORD *)&v5[2].OldIrql = result;
      }
      if ( v9 == v10 && v9 == *(_QWORD *)(v30 + 40)
        || ((__int64)v5[2].Event.Header.WaitListHead.Blink & 0x40000000) != 0 )
      {
        goto LABEL_92;
      }
      if ( (unsigned __int64)v10 < 0x300 || *(_WORD *)v30 == 761 )
        break;
      memset(v6, 0, 0x400uLL);
      if ( *(_DWORD *)(v30 + 80) )
      {
        v75 = *(_OWORD **)(v30 + 88);
        *v6 = *v75;
        v6[1] = v75[1];
        v6[2] = v75[2];
        v6[3] = v75[3];
        v6[4] = v75[4];
        v6[5] = v75[5];
        memset(*(void **)(v30 + 88), 0, 0x60uLL);
      }
      *(_QWORD *)(v30 + 88) = v6;
      v76 = *(__int64 ***)(v30 + 24);
      v77 = (__int64 *)(v30 + 96);
      v6 = 0LL;
      ListEntry = 0LL;
      v78 = v30 + 16;
      if ( *v76 != (__int64 *)(v30 + 16) )
        goto LABEL_239;
      *v77 = v78;
      *(_QWORD *)(v30 + 104) = v76;
      *v76 = v77;
      *(_QWORD *)(v30 + 24) = v77;
      v79 = (__int64 *)(v30 + 144);
      *(_QWORD *)(v30 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v30 + 120) = -1;
      v80 = *(__int64 ***)(v30 + 24);
      if ( *v80 != (__int64 *)v78 )
        goto LABEL_239;
      *v79 = v78;
      *(_QWORD *)(v30 + 152) = v80;
      *v80 = v79;
      *(_QWORD *)(v30 + 24) = v79;
      *(_QWORD *)(v30 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v30 + 168) = -1;
      *(_WORD *)v30 = 761;
      KeReleaseGuardedMutex(v5 + 5);
      i = 0;
    }
    result = *(_QWORD *)(v30 + 16);
    v31 = 0LL;
    v32 = v30 + 16;
    v33 = v9 & 0xFFFFFFFFFFFFE000uLL;
    while ( 1 )
    {
      v34 = *(_QWORD *)(result + 16);
      if ( v33 == v34 )
      {
        v31 = result;
        goto LABEL_43;
      }
      if ( *(_DWORD *)(result + 32) || v31 )
      {
        if ( v33 > v34 )
          v32 = result;
      }
      else
      {
        v31 = result;
      }
      result = *(_QWORD *)result;
      if ( result == v30 + 16 )
        break;
      if ( v33 < *(_QWORD *)(result + 16) && v31 )
        goto LABEL_108;
    }
    if ( v31 )
    {
LABEL_108:
      v67 = *(_QWORD *)v31;
      result = *(_QWORD *)(v31 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v31 + 8LL) == v31 && *(_QWORD *)result == v31 )
      {
        *(_QWORD *)result = v67;
        *(_QWORD *)(v67 + 8) = result;
        goto LABEL_111;
      }
LABEL_239:
      __fastfail(3u);
    }
    result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x72426343u);
    v31 = result;
    if ( !result )
      break;
    result = (__int64)memset((void *)result, 0, 0x30uLL);
LABEL_111:
    v68 = *(_QWORD *)v32;
    if ( *(_QWORD *)(*(_QWORD *)v32 + 8LL) != v32 )
      goto LABEL_239;
    *(_QWORD *)v31 = v68;
    *(_QWORD *)(v31 + 8) = v32;
    *(_QWORD *)(v68 + 8) = v31;
    *(_QWORD *)v32 = v31;
    v28 = *(_QWORD *)(v31 + 40) == 0LL;
    *(_QWORD *)(v31 + 16) = v33;
    *(_DWORD *)(v31 + 24) = -1;
    *(_DWORD *)(v31 + 28) = 0;
    if ( v28 )
    {
      result = (__int64)memset(ListEntry, 0, 0x400uLL);
      *(_QWORD *)(v31 + 40) = ListEntry;
      ListEntry = 0LL;
    }
LABEL_43:
    if ( !v31 )
      break;
    v35 = *(_QWORD *)(v31 + 16);
    if ( v9 < v35 + *(unsigned int *)(v31 + 24) )
      *(_DWORD *)(v31 + 24) = v9 - v35;
    if ( v10 > v35 + *(unsigned int *)(v31 + 28) )
      *(_DWORD *)(v31 + 28) = v10 - v35;
    v36 = v103;
    v105.LockQueue.Next = 0LL;
    v37 = (volatile __int64 *)(v103 + 128);
    v105.LockQueue.Lock = (unsigned __int64 *volatile)(v103 + 128);
    v38 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v38 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v105.OldIrql = v38;
    v39 = KeGetCurrentPrcb();
    v40 = v39->SchedulerAssist;
    if ( v40 )
    {
      if ( v39->NestingLevel <= 1u )
      {
        v87 = v40[5];
        v40[5] = v87 + 1;
        if ( v87 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(v39);
          v36 = v103;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v105, v37);
      goto LABEL_140;
    }
    if ( _InterlockedExchange64(v37, (__int64)&v105) )
    {
      KxWaitForLockOwnerShip(&v105);
LABEL_140:
      v36 = v103;
    }
    if ( !v5[2].Count && ((__int64)v5[2].Event.Header.WaitListHead.Blink & 2) == 0 )
    {
      CcScheduleLazyWriteScan(v36, 0LL, 0LL);
      CcInsertIntoDirtySharedCacheMapList(v5);
      *(_QWORD *)(v30 + 32) = v9;
    }
    v41 = (_DWORD *)(*(_QWORD *)(v31 + 40) + 4 * ((unsigned __int64)(unsigned int)(v9 - *(_DWORD *)(v31 + 16)) >> 5));
    v42 = 1 << (v9 & 0x1F);
    if ( v9 <= v10 )
    {
      v43 = v102;
      v44 = v10 - v9 + 1;
      v110 = v10 + 1;
      do
      {
        v45 = v41;
        if ( (*v41 & v42) == 0 )
        {
          *v41 |= v42;
          ++v43;
        }
        v46 = 2 * v42;
        v42 = 1;
        if ( v46 )
          v42 = v46;
        ++v41;
        if ( v46 )
          v41 = v45;
        --v44;
      }
      while ( v44 );
      v102 = v43;
      v5 = a1;
    }
    v47 = *(_QWORD *)&v5[9].Event.Header.Lock;
    if ( *(_QWORD *)&v5[3].Count )
    {
      v48 = *(_QWORD *)(((unsigned __int64)v5[1].Event.Header.WaitListHead.Blink & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
      v49 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140439C80, v49);
      }
      else
      {
        v50 = KeGetCurrentPrcb();
        v107 = 0;
        v51 = v50->SchedulerAssist;
        if ( v51 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v88 = v51[5];
            v51[5] = v88 + 1;
            if ( v88 == -1 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        if ( _interlockedbittestandset(&dword_140439C80, 0x1Fu) )
        {
          v74 = v50->SchedulerAssist;
          if ( v74 )
          {
            if ( v50->NestingLevel <= 1u )
            {
              v89 = v74[5] - 1;
              v74[5] = v89;
              if ( !v89 )
                KiRemoveSystemWorkPriorityKick(v50);
            }
          }
          v107 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140439C80, v49);
        }
        v52 = dword_140439C80;
        while ( (v52 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v52 & 0x40000000) == 0 )
          {
            v90 = _InterlockedCompareExchange(&dword_140439C80, v52 | 0x40000000, v52);
            v28 = v52 == v90;
            v52 = v90;
            if ( !v28 )
              continue;
          }
          KeYieldProcessorEx(&v107);
          v52 = dword_140439C80;
        }
      }
      if ( *(_QWORD *)v48 )
        v53 = *(ULONG_PTR **)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v48 + 60LL) & 0x3FF));
      else
        v53 = &MiSystemPartition;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140439C80, retaddr);
      else
        dword_140439C80 = 0;
      v54 = KeGetCurrentPrcb();
      v55 = v54->SchedulerAssist;
      if ( v55 )
      {
        if ( v54->NestingLevel <= 1u )
        {
          v91 = v55[5] - 1;
          v55[5] = v91;
          if ( !v91 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v49 < 2u )
      {
        v92 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v92->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v92);
      }
      __writecr8(v49);
      if ( v47 != *(_QWORD *)(v53[21] + 8) )
        goto LABEL_240;
      v10 = v112;
    }
    *(_QWORD *)(v47 + 600) += v102;
    v56 = v102;
    v57 = v108;
    if ( v108 )
      *(_DWORD *)(v108 + 8) += v102;
    *(_DWORD *)(v31 + 32) += v102;
    v5[2].Count += v102;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)&v5[9].Count + 32LL), v102);
    if ( ((__int64)v5[2].Event.Header.WaitListHead.Blink & 0x1000000) != 0 )
    {
      v56 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)&v5[4].Contention + 24LL), v102);
      if ( *(_QWORD *)(*(_QWORD *)&v5[4].Contention + 136LL) == -1LL )
        *(_QWORD *)(*(_QWORD *)&v5[4].Contention + 136LL) = MEMORY[0xFFFFF78000000320];
    }
    if ( *(_BYTE *)(v47 + 900) && *(_QWORD *)(v47 + 600) >= 0x2000uLL )
    {
      LOBYTE(v56) = 1;
      CcScheduleLazyWriteScan(v47, v56, 0LL);
    }
    if ( *(_BYTE *)(v47 + 140) )
    {
      CcScheduleLazyWriteScan(v47, 0LL, 0LL);
      *(_BYTE *)(v47 + 140) = 0;
    }
    v58 = 0;
    if ( !(_BYTE)dword_14054119C )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v47 + 192), &LockHandle);
      if ( *(_DWORD *)(v47 + 316) )
      {
        if ( *(_DWORD *)(v47 + 896) < *(_DWORD *)(v47 + 200) )
        {
          v58 = 1;
          CcAdjustWriteBehindThreadPool(v47, 0);
        }
      }
      else if ( *(_QWORD *)(v47 + 600) > 0x2000uLL )
      {
        if ( *(_DWORD *)(v47 + 896) < *(_DWORD *)(v47 + 200) )
        {
          CcAdjustWriteBehindThreadPool(v47, 0);
          v58 = 1;
        }
      }
      else if ( !*(_DWORD *)(v47 + 328) && *(_QWORD *)(v47 + 256) == v47 + 256 )
      {
        CcAdjustWriteBehindThreadPool(v47, 1);
      }
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v93 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v93->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v93);
      }
      __writecr8(OldIrql);
      if ( v58 && KeGetCurrentIrql() < 2u )
        CcBoostLowPriorityWorkerThread(v47, 0LL);
      v57 = v108;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v105, retaddr);
      goto LABEL_87;
    }
    _m_prefetchw(&v105);
    Next = (__int64)v105.LockQueue.Next;
    if ( v105.LockQueue.Next )
      goto LABEL_138;
    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)v105.LockQueue.Lock,
                                         0LL,
                                         (signed __int64)&v105) != &v105 )
    {
      Next = KxWaitForLockChainValid((__int64 *)&v105);
LABEL_138:
      v105.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
LABEL_87:
    v60 = KeGetCurrentPrcb();
    v61 = v60->SchedulerAssist;
    if ( v61 )
    {
      if ( v60->NestingLevel <= 1u )
      {
        v94 = v61[5] - 1;
        v61[5] = v94;
        if ( !v94 )
          KiRemoveSystemWorkPriorityKick(v60);
      }
    }
    v62 = v105.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v105.OldIrql < 2u )
    {
      v95 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v95->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v95);
    }
    __writecr8(v62);
    if ( ((__int64)v5[2].Event.Header.WaitListHead.Blink & 0x10000000) != 0 && v102 )
    {
      v70 = a4;
      if ( !a4 )
      {
        v70 = KeGetCurrentThread();
        a4 = v70;
      }
      v71 = v102 << 12;
      v72 = v70->Process[2].ActiveProcessors.Bitmap[8];
      if ( v72 )
      {
        if ( v71 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v72 + 8), v71);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v72 + 24), 1uLL);
      }
    }
    if ( v42 )
    {
      *(_QWORD *)(v57 + 40) = v10;
LABEL_92:
      v63 = *a2 + v113;
      if ( v63 > *(_QWORD *)&v5->OldIrql )
      {
        v28 = ((__int64)v5[2].Event.Header.WaitListHead.Blink & 0x40000000) == 0;
        *(_QWORD *)&v5->OldIrql = v63;
        if ( !v28 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v103 + 128), &v105);
          Blink = (int)v5[2].Event.Header.WaitListHead.Blink;
          if ( (Blink & 0x400) == 0 )
            LODWORD(v5[2].Event.Header.WaitListHead.Blink) = Blink | 0x400;
          CcInsertIntoDirtySharedCacheMapList(v5);
          CcScheduleLazyWriteScan(v103, 0LL, 0LL);
          KxReleaseQueuedSpinLock(&v105);
          v99 = v105.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v105.OldIrql < 2u )
          {
            v100 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v100->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v100);
          }
          __writecr8(v99);
        }
      }
      goto LABEL_94;
    }
    v9 = v110;
    v6 = ListEntry;
  }
LABEL_241:
  i = 1;
LABEL_242:
  if ( ((__int64)v5[2].Event.Header.WaitListHead.Blink & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v103 + 128), &v105);
    LODWORD(v5[2].Event.Header.WaitListHead.Blink) |= 0x20000u;
    KxReleaseQueuedSpinLock(&v105);
    v96 = v105.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v105.OldIrql < 2u )
    {
      v97 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v97->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v97);
    }
    result = v96;
    __writecr8(v96);
  }
  if ( i )
  {
LABEL_94:
    v64 = (ULONG_PTR)&v5[5];
    v65 = v5[5].OldIrql;
    *(_QWORD *)(v64 + 8) = 0LL;
    v66 = _InterlockedCompareExchange((volatile signed __int32 *)v64, 1, 0);
    if ( v66 )
      ExpReleaseFastMutexContended(v64, v66);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v65 < 2u )
    {
      v101 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v101->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v101);
    }
    __writecr8(v65);
    result = KeAbPostRelease(v64);
  }
  if ( ListEntry )
  {
    ++dword_1404C7B1C;
    if ( LOWORD(CcBitmapLookasideList.Alignment) >= (unsigned __int16)word_1404C7B10 )
    {
      ++dword_1404C7B20;
      return ((__int64 (*)(void))qword_1404C7B38)();
    }
    else
    {
      return (__int64)RtlpInterlockedPushEntrySList(&CcBitmapLookasideList, ListEntry);
    }
  }
  return result;
}
