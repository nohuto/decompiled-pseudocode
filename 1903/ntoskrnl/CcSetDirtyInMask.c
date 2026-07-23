/*
 * XREFs of CcSetDirtyInMask @ 0x14006EF20
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x140078C28 (CcReleaseByteRangeFromWrite.c)
 *     CcSetDirtyPinnedData @ 0x140079760 (CcSetDirtyPinnedData.c)
 *     CcMdlWriteComplete2 @ 0x1400FC4F0 (CcMdlWriteComplete2.c)
 *     CcPurgeAndClearCacheSection @ 0x140125D84 (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x1401363D0 (CcPrepareMdlWrite.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14009C690 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x14009E6F0 (ExpReleaseFastMutexContended.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B5550 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14011C868 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x14011F3EC (CcScheduleLazyWriteScan.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140125F40 (CcBoostLowPriorityWorkerThread.c)
 *     CcAdjustWriteBehindThreadPool @ 0x14012A558 (CcAdjustWriteBehindThreadPool.c)
 *     CcAllocateInitializeMbcb @ 0x14012D448 (CcAllocateInitializeMbcb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

char __fastcall CcSetDirtyInMask(struct _FAST_MUTEX *a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // r15
  struct _FAST_MUTEX *v5; // rsi
  PSLIST_ENTRY v6; // r13
  __int64 v7; // r12
  struct _LIST_ENTRY *Flink; // rax
  __int64 v9; // r15
  signed __int64 v10; // r12
  __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v15; // edx
  ULONG_PTR *v16; // rbx
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  int i; // edi
  PSLIST_ENTRY InitializeMbcb; // rax
  struct _FAST_MUTEX *v21; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v23; // rcx
  char v24; // dl
  __int64 v25; // r14
  int v26; // eax
  bool v27; // zf
  unsigned __int8 v28; // bl
  PSLIST_ENTRY v29; // r14
  PSLIST_ENTRY *p_Next; // r13
  PSLIST_ENTRY v31; // rdi
  signed __int64 v32; // rbx
  _SLIST_ENTRY *Next; // rcx
  PSLIST_ENTRY v34; // rcx
  __int64 v35; // r9
  volatile __int64 *v36; // rbx
  unsigned __int8 v37; // dl
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  _QWORD *v40; // rdx
  _DWORD *v41; // rdx
  int v42; // ebx
  unsigned int v43; // esi
  __int64 v44; // rcx
  _DWORD *v45; // r8
  int v46; // eax
  __int64 v47; // r14
  __int64 v48; // r15
  unsigned __int8 v49; // r12
  struct _KPRCB *v50; // rdi
  _DWORD *v51; // rcx
  signed __int32 v52; // edx
  ULONG_PTR *v53; // rdi
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  signed __int64 v56; // rdx
  PSLIST_ENTRY v57; // r15
  char v58; // di
  _KSPIN_LOCK_QUEUE *volatile v59; // rax
  struct _KPRCB *v60; // rcx
  _DWORD *v61; // rdx
  unsigned __int8 v62; // di
  __int64 v63; // rcx
  unsigned __int8 v64; // di
  unsigned __int32 v65; // eax
  PSLIST_ENTRY v66; // rcx
  _SLIST_ENTRY *v67; // rcx
  PSLIST_ENTRY v68; // rbx
  struct _KTHREAD *v69; // r9
  unsigned int v70; // eax
  unsigned __int64 v71; // rdx
  __int64 v72; // rdx
  unsigned __int8 OldIrql; // r15
  __int64 v74; // rdx
  _DWORD *v75; // rcx
  _DWORD *v76; // rcx
  _SLIST_ENTRY *v77; // rax
  PSLIST_ENTRY *v78; // rdx
  _SLIST_ENTRY *v79; // rcx
  PSLIST_ENTRY v80; // rax
  _SLIST_ENTRY *v81; // rcx
  _SLIST_ENTRY **v82; // rdx
  int v83; // eax
  int v84; // eax
  signed __int32 v85; // eax
  int v86; // eax
  struct _KPRCB *v87; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v89; // eax
  int v90; // eax
  int v91; // eax
  signed __int32 v92; // eax
  int v93; // eax
  struct _KPRCB *v94; // rcx
  struct _KPRCB *v95; // rcx
  int v96; // eax
  struct _KPRCB *v97; // rcx
  unsigned __int8 v98; // bl
  struct _KPRCB *v99; // rcx
  __int64 v100; // rdx
  int Blink; // eax
  unsigned __int8 v102; // bl
  struct _KPRCB *v103; // rcx
  struct _KPRCB *v104; // rcx
  unsigned int v106; // [rsp+38h] [rbp-69h]
  __int64 v107; // [rsp+40h] [rbp-61h]
  struct _KLOCK_QUEUE_HANDLE v108; // [rsp+48h] [rbp-59h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-41h]
  int v110; // [rsp+68h] [rbp-39h] BYREF
  int v111; // [rsp+6Ch] [rbp-35h] BYREF
  PSLIST_ENTRY v112; // [rsp+70h] [rbp-31h]
  int v113; // [rsp+78h] [rbp-29h] BYREF
  signed __int64 v114; // [rsp+80h] [rbp-21h]
  int v115; // [rsp+88h] [rbp-19h]
  signed __int64 v116; // [rsp+90h] [rbp-11h]
  __int64 v117; // [rsp+98h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-1h] BYREF
  void *retaddr; // [rsp+100h] [rbp+5Fh]

  v4 = *a2;
  v5 = a1;
  v117 = a3;
  v6 = 0LL;
  ListEntry = 0LL;
  v106 = 0;
  memset(&v108, 0, sizeof(v108));
  v7 = v4 + a3 - 1LL;
  if ( ((v4 ^ v7) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xC42uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  Flink = a1->Event.Header.WaitListHead.Flink;
  v9 = v4 >> 12;
  v10 = v7 >> 12;
  v114 = v9;
  v116 = v10;
  if ( (__int64)Flink / 4096 <= v10 )
    KeBugCheckEx(0x34u, 0xC54uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v107 = *(_QWORD *)&a1[9].Event.Header.Lock;
  if ( *(_QWORD *)&a1[3].Count )
  {
    v11 = *(_QWORD *)(((unsigned __int64)a1[1].Event.Header.WaitListHead.Blink & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140464580, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v110 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v83 = SchedulerAssist[5];
          SchedulerAssist[5] = v83 + 1;
          if ( v83 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140464580, 0x1Fu) )
      {
        v75 = CurrentPrcb->SchedulerAssist;
        if ( v75 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v84 = v75[5] - 1;
            v75[5] = v84;
            if ( !v84 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v110 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140464580, CurrentIrql);
      }
      v15 = dword_140464580;
      while ( (v15 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v15 & 0x40000000) == 0 )
        {
          v85 = _InterlockedCompareExchange(&dword_140464580, v15 | 0x40000000, v15);
          v27 = v15 == v85;
          v15 = v85;
          if ( !v27 )
            continue;
        }
        KeYieldProcessorEx(&v110);
        v15 = dword_140464580;
      }
    }
    if ( *(_QWORD *)v11 )
      v16 = *(ULONG_PTR **)(qword_140466188 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
    else
      v16 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140464580, retaddr);
    else
      dword_140464580 = 0;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v86 = v18[5] - 1;
        v18[5] = v86;
        if ( !v86 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v87 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v87->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v87);
    }
    __writecr8(CurrentIrql);
    if ( v107 != *(_QWORD *)(v16[21] + 8) )
LABEL_250:
      KeBugCheckEx(0x34u, 0x12EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  for ( i = 0; ; i = 1 )
  {
    while ( 1 )
    {
      if ( v5->Event.Header.WaitListHead.Flink > (struct _LIST_ENTRY *)0x300000 )
      {
        ++dword_1404F2F94;
        InitializeMbcb = RtlpInterlockedPopEntrySList(&CcBitmapLookasideList);
        if ( !InitializeMbcb )
        {
          ++dword_1404F2F98;
          InitializeMbcb = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1404F2FB0)(
                                           (unsigned int)dword_1404F2FA4,
                                           (unsigned int)dword_1404F2FAC,
                                           (unsigned int)dword_1404F2FA8);
          if ( !InitializeMbcb )
          {
            ++CcDbgNumberOfFailedBitmapAllocations;
            goto LABEL_240;
          }
        }
        v6 = InitializeMbcb;
        ListEntry = InitializeMbcb;
      }
      v113 = 0;
      v21 = v5 + 5;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      if ( ++CurrentThread->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&v5[5], KeGetCurrentIrql(), 0LL);
      LOBYTE(v23) = CurrentThread->AbEntrySummary;
      if ( !(_BYTE)v23 )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          v25 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, &v5[5]);
LABEL_190:
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
          goto LABEL_27;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        LOBYTE(v23) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
      }
      v24 = v23;
      _BitScanForward((unsigned int *)&v23, (unsigned __int8)v23);
      v115 = v23;
      CurrentThread->AbEntrySummary = v24 & ~(1 << v23);
      v25 = (__int64)&CurrentThread->LockEntries[v23];
      if ( !v25 )
        goto LABEL_190;
      v26 = (unsigned __int64)v21 >= 0xFFFF800000000000uLL
         && *((_BYTE *)&MiState[1488] + (((unsigned __int64)v21 >> 39) & 0x1FF)) == 1
          ? MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process)
          : -1;
      *(_DWORD *)(v25 + 40) = v26;
      *(_QWORD *)(v25 + 32) = (unsigned __int64)v21 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_27:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&v5[5], &v113);
      v27 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v27
        && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v28 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(&v21->Count, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&v5[5], (PRTL_BALANCED_NODE)v25);
      if ( v25 )
        *(_BYTE *)(v25 + 26) |= 1u;
      v5[5].Owner = KeGetCurrentThread();
      v5[5].OldIrql = v28;
      v29 = *(PSLIST_ENTRY *)&v5[2].OldIrql;
      v112 = v29;
      if ( !v29 )
      {
        InitializeMbcb = (PSLIST_ENTRY)CcAllocateInitializeMbcb();
        v112 = InitializeMbcb;
        v29 = InitializeMbcb;
        if ( !InitializeMbcb )
          goto LABEL_161;
        *(_QWORD *)&v5[2].OldIrql = InitializeMbcb;
      }
      if ( v9 == v10 && v9 == *((_QWORD *)&v29[2].Next + 1)
        || ((__int64)v5[2].Event.Header.WaitListHead.Blink & 0x40000000) != 0 )
      {
        goto LABEL_92;
      }
      if ( (unsigned __int64)v10 < 0x300 || LOWORD(v29->Next) == 761 )
        break;
      memset(v6, 0, 0x400uLL);
      if ( LODWORD(v29[5].Next) )
      {
        v77 = (_SLIST_ENTRY *)*((_QWORD *)&v29[5].Next + 1);
        *v6 = *v77;
        v6[1] = v77[1];
        v6[2] = v77[2];
        v6[3] = v77[3];
        v6[4] = v77[4];
        v6[5] = v77[5];
        memset(*((void **)&v29[5].Next + 1), 0, 0x60uLL);
      }
      *((_QWORD *)&v29[5].Next + 1) = v6;
      v78 = (PSLIST_ENTRY *)*((_QWORD *)&v29[1].Next + 1);
      v79 = v29 + 6;
      v6 = 0LL;
      ListEntry = 0LL;
      v80 = v29 + 1;
      if ( *v78 != &v29[1] )
        goto LABEL_249;
      v79->Next = v80;
      *((_QWORD *)&v29[6].Next + 1) = v78;
      *v78 = v79;
      *((_QWORD *)&v29[1].Next + 1) = v79;
      v81 = v29 + 9;
      v29[7].Next = (_SLIST_ENTRY *)0x7FFFFFFFFFFFFFFFLL;
      *((_DWORD *)&v29[7].Next + 2) = -1;
      v82 = (_SLIST_ENTRY **)*((_QWORD *)&v29[1].Next + 1);
      if ( *v82 != v80 )
        goto LABEL_249;
      v81->Next = v80;
      *((_QWORD *)&v29[9].Next + 1) = v82;
      *v82 = v81;
      *((_QWORD *)&v29[1].Next + 1) = v81;
      v29[10].Next = (_SLIST_ENTRY *)0x7FFFFFFFFFFFFFFFLL;
      *((_DWORD *)&v29[10].Next + 2) = -1;
      LOWORD(v29->Next) = 761;
      KeReleaseGuardedMutex(v5 + 5);
      i = 0;
    }
    InitializeMbcb = v29[1].Next;
    p_Next = 0LL;
    v31 = v29 + 1;
    v32 = v9 & 0xFFFFFFFFFFFFE000uLL;
    while ( 1 )
    {
      Next = InitializeMbcb[1].Next;
      if ( (_SLIST_ENTRY *)v32 == Next )
      {
        p_Next = &InitializeMbcb->Next;
        goto LABEL_43;
      }
      if ( LODWORD(InitializeMbcb[2].Next) || p_Next )
      {
        if ( v32 > (__int64)Next )
          v31 = InitializeMbcb;
      }
      else
      {
        p_Next = &InitializeMbcb->Next;
      }
      InitializeMbcb = InitializeMbcb->Next;
      if ( InitializeMbcb == &v29[1] )
        break;
      if ( v32 < (__int64)InitializeMbcb[1].Next && p_Next )
        goto LABEL_109;
    }
    if ( p_Next )
    {
LABEL_109:
      v66 = *p_Next;
      InitializeMbcb = p_Next[1];
      if ( *((PSLIST_ENTRY **)&(*p_Next)->Next + 1) == p_Next && (PSLIST_ENTRY *)InitializeMbcb->Next == p_Next )
      {
        InitializeMbcb->Next = v66;
        *((_QWORD *)&v66->Next + 1) = InitializeMbcb;
        goto LABEL_112;
      }
LABEL_249:
      __fastfail(3u);
    }
    InitializeMbcb = (PSLIST_ENTRY)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x72426343u);
    p_Next = &InitializeMbcb->Next;
    if ( !InitializeMbcb )
      break;
    LOBYTE(InitializeMbcb) = (unsigned __int8)memset(InitializeMbcb, 0, 0x30uLL);
LABEL_112:
    v67 = v31->Next;
    if ( *(&v31->Next->Next + 1) != v31 )
      goto LABEL_249;
    *p_Next = v67;
    p_Next[1] = v31;
    *((_QWORD *)&v67->Next + 1) = p_Next;
    v31->Next = (_SLIST_ENTRY *)p_Next;
    v27 = p_Next[5] == 0LL;
    p_Next[2] = (PSLIST_ENTRY)v32;
    *((_DWORD *)p_Next + 6) = -1;
    *((_DWORD *)p_Next + 7) = 0;
    if ( v27 )
    {
      v68 = ListEntry;
      LOBYTE(InitializeMbcb) = (unsigned __int8)memset(ListEntry, 0, 0x400uLL);
      p_Next[5] = v68;
      ListEntry = 0LL;
    }
LABEL_43:
    if ( !p_Next )
      break;
    v34 = p_Next[2];
    if ( v9 < (__int64)v34 + *((unsigned int *)p_Next + 6) )
      *((_DWORD *)p_Next + 6) = v9 - (_DWORD)v34;
    if ( v10 > (__int64)v34 + *((unsigned int *)p_Next + 7) )
      *((_DWORD *)p_Next + 7) = v10 - (_DWORD)v34;
    v35 = v107;
    v108.LockQueue.Next = 0LL;
    v36 = (volatile __int64 *)(v107 + 128);
    v108.LockQueue.Lock = (unsigned __int64 *volatile)(v107 + 128);
    v37 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v108.OldIrql = v37;
    v38 = KeGetCurrentPrcb();
    v39 = v38->SchedulerAssist;
    if ( v39 )
    {
      if ( v38->NestingLevel <= 1u )
      {
        v89 = v39[5];
        v39[5] = v89 + 1;
        if ( v89 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(v38);
          v35 = v107;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v108, v36);
      goto LABEL_141;
    }
    v40 = (_QWORD *)_InterlockedExchange64(v36, (__int64)&v108);
    if ( v40 )
    {
      KxWaitForLockOwnerShip((__int64)&v108, v40);
LABEL_141:
      v35 = v107;
    }
    if ( !v5[2].Count && ((__int64)v5[2].Event.Header.WaitListHead.Blink & 2) == 0 )
    {
      CcScheduleLazyWriteScan(v35, 0LL, 0LL);
      CcInsertIntoDirtySharedCacheMapList(v5, v74);
      v29[2].Next = (_SLIST_ENTRY *)v9;
    }
    v41 = (_DWORD *)p_Next[5] + ((unsigned __int64)(unsigned int)(v9 - *((_DWORD *)p_Next + 4)) >> 5);
    v42 = 1 << (v9 & 0x1F);
    if ( v9 <= v10 )
    {
      v43 = v106;
      v44 = v10 - v9 + 1;
      v114 = v10 + 1;
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
      v106 = v43;
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
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140464580, v49);
      }
      else
      {
        v50 = KeGetCurrentPrcb();
        v111 = 0;
        v51 = v50->SchedulerAssist;
        if ( v51 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v90 = v51[5];
            v51[5] = v90 + 1;
            if ( v90 == -1 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        if ( _interlockedbittestandset(&dword_140464580, 0x1Fu) )
        {
          v76 = v50->SchedulerAssist;
          if ( v76 )
          {
            if ( v50->NestingLevel <= 1u )
            {
              v91 = v76[5] - 1;
              v76[5] = v91;
              if ( !v91 )
                KiRemoveSystemWorkPriorityKick(v50);
            }
          }
          v111 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140464580, v49);
        }
        v52 = dword_140464580;
        while ( (v52 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v52 & 0x40000000) == 0 )
          {
            v92 = _InterlockedCompareExchange(&dword_140464580, v52 | 0x40000000, v52);
            v27 = v52 == v92;
            v52 = v92;
            if ( !v27 )
              continue;
          }
          KeYieldProcessorEx(&v111);
          v52 = dword_140464580;
        }
      }
      if ( *(_QWORD *)v48 )
        v53 = *(ULONG_PTR **)(qword_140466188 + 8LL * (*(_WORD *)(*(_QWORD *)v48 + 60LL) & 0x3FF));
      else
        v53 = &MiSystemPartition;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140464580, retaddr);
      else
        dword_140464580 = 0;
      v54 = KeGetCurrentPrcb();
      v55 = v54->SchedulerAssist;
      if ( v55 )
      {
        if ( v54->NestingLevel <= 1u )
        {
          v93 = v55[5] - 1;
          v55[5] = v93;
          if ( !v93 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v49 < 2u )
      {
        v94 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v94->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v94);
      }
      __writecr8(v49);
      if ( v47 != *(_QWORD *)(v53[21] + 8) )
        goto LABEL_250;
      v10 = v116;
    }
    *(_QWORD *)(v47 + 600) += v106;
    v56 = v106;
    v57 = v112;
    if ( v112 )
      *((_DWORD *)&v112->Next + 2) += v106;
    *((_DWORD *)p_Next + 8) += v106;
    v5[2].Count += v106;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)&v5[9].Count + 32LL), v106);
    if ( ((__int64)v5[2].Event.Header.WaitListHead.Blink & 0x1000000) != 0 )
    {
      v56 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)&v5[4].Contention + 24LL), v106);
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
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !(_BYTE)dword_1405711AC )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v47 + 192), &LockHandle);
      if ( *(_DWORD *)(v47 + 316) )
      {
        if ( *(_DWORD *)(v47 + 896) < *(_DWORD *)(v47 + 200) )
        {
          v58 = 1;
          CcAdjustWriteBehindThreadPool(v47, 0LL);
        }
      }
      else if ( *(_QWORD *)(v47 + 600) > 0x2000uLL )
      {
        if ( *(_DWORD *)(v47 + 896) < *(_DWORD *)(v47 + 200) )
        {
          CcAdjustWriteBehindThreadPool(v47, 0LL);
          v58 = 1;
        }
      }
      else if ( !*(_DWORD *)(v47 + 328) && *(_QWORD *)(v47 + 256) == v47 + 256 )
      {
        LOBYTE(v72) = 1;
        CcAdjustWriteBehindThreadPool(v47, v72);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v95 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v95->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v95);
      }
      __writecr8(OldIrql);
      if ( v58 && KeGetCurrentIrql() < 2u )
        CcBoostLowPriorityWorkerThread(v47, 0LL);
      v57 = v112;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v108, retaddr);
      goto LABEL_87;
    }
    _m_prefetchw(&v108);
    v59 = v108.LockQueue.Next;
    if ( v108.LockQueue.Next )
      goto LABEL_137;
    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)v108.LockQueue.Lock,
                                         0LL,
                                         (signed __int64)&v108) != &v108 )
    {
      v59 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v108);
LABEL_137:
      v108.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&v59->Lock, 1uLL);
    }
LABEL_87:
    v60 = KeGetCurrentPrcb();
    v61 = v60->SchedulerAssist;
    if ( v61 )
    {
      if ( v60->NestingLevel <= 1u )
      {
        v96 = v61[5] - 1;
        v61[5] = v96;
        if ( !v96 )
          KiRemoveSystemWorkPriorityKick(v60);
      }
    }
    v62 = v108.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v108.OldIrql < 2u )
    {
      v97 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v97->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v97);
    }
    __writecr8(v62);
    if ( ((__int64)v5[2].Event.Header.WaitListHead.Blink & 0x10000000) != 0 && v106 )
    {
      v69 = a4;
      if ( !a4 )
      {
        v69 = KeGetCurrentThread();
        a4 = v69;
      }
      v70 = v106 << 12;
      v71 = v69->Process[2].ActiveProcessors.Bitmap[12];
      if ( v71 )
      {
        if ( v70 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v71 + 8), v70);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v71 + 24), 1uLL);
      }
    }
    if ( v42 )
    {
      *((_QWORD *)&v57[2].Next + 1) = v10;
LABEL_92:
      v63 = *a2 + v117;
      if ( v63 > *(_QWORD *)&v5->OldIrql )
      {
        v27 = ((__int64)v5[2].Event.Header.WaitListHead.Blink & 0x40000000) == 0;
        *(_QWORD *)&v5->OldIrql = v63;
        if ( !v27 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v107 + 128), &v108);
          Blink = (int)v5[2].Event.Header.WaitListHead.Blink;
          if ( (Blink & 0x400) == 0 )
            LODWORD(v5[2].Event.Header.WaitListHead.Blink) = Blink | 0x400;
          CcInsertIntoDirtySharedCacheMapList(v5, v100);
          CcScheduleLazyWriteScan(v107, 0LL, 0LL);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v108);
          v102 = v108.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v108.OldIrql < 2u )
          {
            v103 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v103->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v103);
          }
          __writecr8(v102);
        }
      }
      goto LABEL_94;
    }
    v9 = v114;
    v6 = ListEntry;
  }
LABEL_161:
  i = 1;
LABEL_240:
  if ( ((__int64)v5[2].Event.Header.WaitListHead.Blink & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v107 + 128), &v108);
    LODWORD(v5[2].Event.Header.WaitListHead.Blink) |= 0x20000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v108);
    v98 = v108.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v108.OldIrql < 2u )
    {
      v99 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v99->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v99);
    }
    LOBYTE(InitializeMbcb) = v98;
    __writecr8(v98);
  }
  if ( i )
  {
LABEL_94:
    v64 = v5[5].OldIrql;
    v5[5].Owner = 0LL;
    v65 = _InterlockedCompareExchange(&v5[5].Count, 1, 0);
    if ( v65 )
      ExpReleaseFastMutexContended(&v5[5], v65);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v64 < 2u )
    {
      v104 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v104->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v104);
    }
    __writecr8(v64);
    LOBYTE(InitializeMbcb) = KeAbPostRelease((ULONG_PTR)&v5[5]);
  }
  if ( ListEntry )
  {
    ++dword_1404F2F9C;
    if ( LOWORD(CcBitmapLookasideList.Alignment) >= (unsigned __int16)word_1404F2F90 )
    {
      ++dword_1404F2FA0;
      LOBYTE(InitializeMbcb) = ((__int64 (*)(void))qword_1404F2FB8)();
    }
    else
    {
      LOBYTE(InitializeMbcb) = (unsigned __int8)RtlpInterlockedPushEntrySList(&CcBitmapLookasideList, ListEntry);
    }
  }
  return (char)InitializeMbcb;
}
