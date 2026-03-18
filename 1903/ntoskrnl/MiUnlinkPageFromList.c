/*
 * XREFs of MiUnlinkPageFromList @ 0x1400D3400
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x14000E780 (MiEmptyDecayClusterTimers.c)
 *     MiRelinkStandbyPage @ 0x14000E990 (MiRelinkStandbyPage.c)
 *     MiReservePageFileSpaceForPage @ 0x14002CE60 (MiReservePageFileSpaceForPage.c)
 *     MiDeleteTransitionPte @ 0x14002EB00 (MiDeleteTransitionPte.c)
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiGatherMappedPages @ 0x14007B1D8 (MiGatherMappedPages.c)
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1400A469C (MiReferencePageForModifiedWrite.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     MiOutSwapWorkingSetPte @ 0x1400C51D0 (MiOutSwapWorkingSetPte.c)
 *     MiHandleTransitionFault @ 0x1400D3150 (MiHandleTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiDeleteClusterSection @ 0x1400D8E50 (MiDeleteClusterSection.c)
 *     MiUnlinkStandbyBatch @ 0x1400D99C0 (MiUnlinkStandbyBatch.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400DC230 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 *     MiDecayPfnFullyInitialized @ 0x14011A440 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x14011A568 (MiDeleteParentDecayNode.c)
 *     MiUnlinkStandbyPfn @ 0x140120950 (MiUnlinkStandbyPfn.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x140141F74 (MiResolveProtoCombine.c)
 *     MiPurgeImageSection @ 0x14015C138 (MiPurgeImageSection.c)
 *     MiMirrorPerformBrownWrites @ 0x14015FB5C (MiMirrorPerformBrownWrites.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161710 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140162FB0 (MiBuildReservationCluster.c)
 *     MiPurgeSubsection @ 0x1402B9FD8 (MiPurgeSubsection.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x1402BC7F0 (MiWalkResetCommitPte.c)
 *     MiEnableLargeSubsection @ 0x1402CB9CC (MiEnableLargeSubsection.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402CC614 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x1402CE4C0 (MiFreeModifiedReservations.c)
 *     MiNoPagesLastChance @ 0x1402D9E6C (MiNoPagesLastChance.c)
 *     MiReuseStandbyPage @ 0x1402DA900 (MiReuseStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x1402DC6E0 (MiGetSlabStandbyPage.c)
 *     MiPurgeSlabEntries @ 0x1402DCA94 (MiPurgeSlabEntries.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B8020 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiSearchNumaNodeTable @ 0x1400D4740 (MiSearchNumaNodeTable.c)
 *     MiSetPfnBlink @ 0x1400DB5A0 (MiSetPfnBlink.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiDeleteParentDecayNode @ 0x14011A568 (MiDeleteParentDecayNode.c)
 *     MiUpdateAvailableEvents @ 0x140188504 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x1402C86F4 (MiObtainFreePages.c)
 *     MiUnlinkPageFromBadList @ 0x1402D9728 (MiUnlinkPageFromBadList.c)
 *     MiGetSlabAllocatorStandbyList @ 0x1402DC400 (MiGetSlabAllocatorStandbyList.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033B104 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033B244 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUnlinkPageFromList(ULONG_PTR BugCheckParameter2, int a2)
{
  _QWORD *v2; // rbp
  unsigned __int16 v4; // cx
  int v5; // r10d
  unsigned __int64 v6; // r8
  __int64 v7; // r14
  unsigned __int8 v8; // cl
  __int64 v9; // r15
  __int64 v10; // r9
  unsigned int v11; // ebx
  unsigned __int64 v12; // r13
  ULONG_PTR v13; // rax
  char v14; // al
  unsigned __int8 v15; // dl
  unsigned int v16; // r12d
  int v17; // ebx
  unsigned int v18; // ecx
  bool v19; // al
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  _QWORD *v22; // rdx
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  char v26; // al
  int v27; // eax
  __int64 v28; // rdx
  char v29; // al
  int v30; // eax
  volatile signed __int64 *v31; // r11
  volatile signed __int64 v32; // rdx
  signed __int64 v33; // rax
  signed __int64 v34; // r8
  unsigned int v35; // r11d
  __int64 v36; // r10
  _QWORD *v37; // r13
  __int64 v38; // r15
  __int64 v39; // r12
  signed __int64 v40; // rdx
  signed __int64 v41; // r8
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  unsigned __int64 v47; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  volatile __int64 *v51; // r15
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  _QWORD *v54; // rdx
  unsigned __int16 v55; // cx
  char v56; // al
  __int64 v57; // rcx
  signed __int64 v58; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v61; // ett
  __int64 v62; // rdi
  struct _KPRCB *v63; // rcx
  _DWORD *v64; // rdx
  volatile __int64 *v65; // rcx
  struct _KPRCB *v66; // rdx
  _DWORD *v67; // r8
  _QWORD *v68; // rdx
  __int64 v69; // rcx
  ULONG_PTR v70; // rcx
  unsigned __int64 *v71; // rdx
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rax
  __int64 v74; // r11
  signed __int64 v75; // rdx
  signed __int64 v76; // r8
  unsigned __int64 v77; // rax
  _DWORD *v78; // rcx
  unsigned __int64 v79; // r9
  unsigned __int64 v80; // rdx
  volatile signed __int32 *v81; // r8
  signed __int64 v82; // rcx
  __int64 SlabAllocatorStandbyList; // rax
  unsigned int v84; // ebx
  int v85; // eax
  signed __int64 v86; // rcx
  unsigned int PfnPriority; // eax
  ULONG_PTR v88; // rdx
  unsigned int v89; // eax
  ULONG_PTR v90; // rdx
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  signed __int64 v96; // rcx
  int v97; // r13d
  unsigned __int64 v98; // rcx
  int v99; // eax
  __int64 v100; // rax
  int v101; // ecx
  __int64 v102; // [rsp+50h] [rbp+0h] BYREF
  void *retaddr; // [rsp+118h] [rbp+C8h]

  v2 = (_QWORD *)((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL);
  v4 = *(_WORD *)(BugCheckParameter2 + 32);
  v5 = a2;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  if ( v4 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(0x4Eu, 2uLL, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, qword_14046A348, v4);
    return 1LL;
  }
  v6 = *(_QWORD *)(BugCheckParameter2 + 40);
  v7 = *(_QWORD *)(qword_140466188 + 8 * ((v6 >> 40) & 0x3FF));
  v8 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
  v9 = *(_QWORD *)(v7 + 8LL * v8 + 4152);
  v10 = *(unsigned int *)(v9 + 8);
  *(_DWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v10;
  if ( v8 == 5 )
  {
    MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
    return 1LL;
  }
  v11 = 65;
  v12 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  v13 = qword_1404664E0;
  *(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v12;
  if ( v12 < v13 || v12 >= v13 + 2048 )
  {
    if ( byte_14046971E && _bittest64((const signed __int64 *)qword_14046A040, v12 >> 9) )
      v11 = 81;
  }
  else
  {
    v11 = 69;
  }
  v14 = v11;
  *(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 5LL;
  if ( (_DWORD)v10 != 2 )
  {
    v49 = 4288LL;
    v50 = 4992LL;
    if ( (_DWORD)v10 == 3 )
    {
      _InterlockedDecrement64((volatile signed __int64 *)v9);
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) == 0 )
        v49 = 4992LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v49 + v7));
      if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
      {
        v9 = v7
           + 8
           * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 58) + 4 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 58) + 106LL));
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          LOBYTE(v50) = -1;
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140465A90, v50);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v92 = SchedulerAssist[5];
              SchedulerAssist[5] = v92 + 1;
              if ( v92 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          _m_prefetchw(&dword_140465A90);
          v61 = dword_140465A90 & 0x7FFFFFFF;
          if ( v61 != _InterlockedCompareExchange(
                        &dword_140465A90,
                        (dword_140465A90 & 0x7FFFFFFF) + 1,
                        dword_140465A90 & 0x7FFFFFFF) )
          {
            v78 = CurrentPrcb->SchedulerAssist;
            if ( v78 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v93 = v78[5] - 1;
                v78[5] = v93;
                if ( !v93 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            ExpWaitForSpinLockSharedAndAcquire(&dword_140465A90, 0xFFu);
          }
        }
        v62 = *(unsigned int *)(MiSearchNumaNodeTable((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) + 8);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140465A90, retaddr);
        }
        else
        {
          _InterlockedAnd(&dword_140465A90, 0xBFFFFFFF);
          _InterlockedDecrement(&dword_140465A90);
        }
        v63 = KeGetCurrentPrcb();
        v64 = v63->SchedulerAssist;
        if ( v64 )
        {
          if ( v63->NestingLevel <= 1u )
          {
            v94 = v64[5] - 1;
            v64[5] = v94;
            if ( !v94 )
              KiRemoveSystemWorkPriorityKick(v63);
          }
        }
        if ( !a2 )
        {
          *v2 = 0LL;
          v65 = (volatile __int64 *)(v9 + 32);
          *(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v9 + 32;
          v66 = KeGetCurrentPrcb();
          v67 = v66->SchedulerAssist;
          if ( v67 )
          {
            if ( v66->NestingLevel <= 1u )
            {
              v95 = v67[5];
              v67[5] = v95 + 1;
              if ( v95 == -1 )
              {
                KiRemoveSystemWorkPriorityKick(v66);
                v65 = (volatile __int64 *)(v9 + 32);
              }
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL, v65);
          }
          else
          {
            v68 = (_QWORD *)_InterlockedExchange64(v65, (__int64)v2);
            if ( v68 )
              KxWaitForLockOwnerShip((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL, v68);
          }
        }
        memset(v2 + 13, 0, 0x30uLL);
        v69 = *(_QWORD *)(BugCheckParameter2 + 40) & 0x3FFFFFFFFFFFFFFLL | (v62 << 58);
        *(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = v69;
        *(_QWORD *)(BugCheckParameter2 + 40) = v69;
      }
      else
      {
        if ( !v5 )
        {
          v51 = (volatile __int64 *)(v9 + 32);
          *v2 = 0LL;
          *(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v51;
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          if ( v53 )
          {
            if ( v52->NestingLevel <= 1u )
            {
              v91 = v53[5];
              v53[5] = v91 + 1;
              if ( v91 == -1 )
                KiRemoveSystemWorkPriorityKick(v52);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL, v51);
          }
          else
          {
            v54 = (_QWORD *)_InterlockedExchange64(v51, (__int64)v2);
            if ( v54 )
              KxWaitForLockOwnerShip((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL, v54);
          }
        }
        --*(_QWORD *)(v7 + 8560);
        v55 = *(_QWORD *)(BugCheckParameter2 + 16);
        v56 = (unsigned __int8)v55 >> 1;
        v57 = v55 >> 12;
        if ( (v56 & 1) != 0 || (_DWORD)v57 == *(_DWORD *)(v7 + 1140) )
          v9 = v7 + 8 * (v57 + 4 * (v57 + 86));
        else
          v9 = v7 + 2688;
      }
    }
    else
    {
      if ( (v6 & 0x200000000000000LL) != 0 )
        v50 = 4288LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v50 + v7));
      if ( !v5 )
      {
        *v2 = 0LL;
        *(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v9 + 32;
        KxAcquireQueuedSpinLock((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL, (volatile __int64 *)(v9 + 32));
      }
    }
    v23 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
    v24 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
LABEL_36:
    if ( v23 == 0xFFFFFFFFFLL )
    {
      v35 = v11 >> 3;
      if ( (v11 & 8) == 0 )
        *(_QWORD *)(v9 + 24) = v24;
LABEL_40:
      if ( v24 == 0xFFFFFFFFFLL )
      {
        if ( (v35 & 1) == 0 )
          *(_QWORD *)(v9 + 16) = v23;
      }
      else
      {
        *(_QWORD *)(48 * v24 - 0x58000000000LL) = v23 | *(_QWORD *)(48 * v24 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
      }
      if ( (v11 & 0x40) != 0 )
        --*(_QWORD *)v9;
      if ( *(_DWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) == 2 && (v11 & 0x14) == 0 )
      {
        if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) == 0 )
          *(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = *(_BYTE *)(BugCheckParameter2 + 35) & 7;
        v24 = *(unsigned __int8 *)(BugCheckParameter2 + 39) | (*(_QWORD *)BugCheckParameter2 >> 28) & 0xFFFFFFF00LL;
        v36 = (*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL | *(unsigned __int16 *)(BugCheckParameter2
                                                                                                 + 36);
        v37 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140466188
                                               + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
                                   + 16LL)
                       + 1984LL * (*(_QWORD *)(BugCheckParameter2 + 40) >> 58)
                       + 24
                       * (*(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28)
                        + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 36) & 3LL)));
        if ( v24 == 0xFFFFFFFFFLL )
        {
          v37[109] = v36;
        }
        else
        {
          v38 = 48 * v24 - 0x58000000000LL;
          v39 = ((*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL) << 20;
          *(_WORD *)(v38 + 36) = *(_WORD *)(BugCheckParameter2 + 36);
          v40 = *(_QWORD *)(v38 + 24);
          v41 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v38 + 24),
                  v39 | v40 & 0xFF00000FFFFFFFFFuLL,
                  v40);
          if ( v40 != v41 )
          {
            do
            {
              v82 = v41;
              v41 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v38 + 24),
                      v39 | v41 & 0xFF00000FFFFFFFFFuLL,
                      v41);
            }
            while ( v82 != v41 );
          }
        }
        if ( v36 == 0xFFFFFFFFFLL )
        {
          v37[108] = v24;
        }
        else
        {
          v42 = 48 * v36 - 0x58000000000LL;
          v43 = *(_QWORD *)v42 ^ (v24 << 28);
          *(_BYTE *)(v42 + 39) = v24;
          v24 <<= 28;
          *(_QWORD *)v42 = v24 ^ v43 & 0xFFFFFFFFFLL;
        }
        --v37[107];
        if ( (v35 & 1) != 0 )
          *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
        v12 = *(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      }
      *(_QWORD *)BugCheckParameter2 = 0LL;
      if ( (v11 & 4) != 0 )
      {
        MiSetPfnBlink(BugCheckParameter2, 0LL, 0LL, v24);
      }
      else
      {
        *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFFF000000000uLL;
        if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000000LL) == 0 && dword_14046620C == 1 )
        {
          v79 = v12 & 0x1F;
          LOBYTE(v80) = 1;
          v81 = (volatile signed __int32 *)(qword_140466268 + 4 * (v12 >> 5));
          if ( v79 + 1 > 0x20 )
          {
            if ( (v12 & 0x1F) == 0 )
              goto LABEL_196;
            v97 = v12 & 0x1F;
            _InterlockedOr(v81++, ((1 << (32 - v97)) - 1) << v79);
            v80 = 1LL - (unsigned int)(32 - v97);
            if ( v80 >= 0x20 )
            {
              v98 = v80 >> 5;
              v80 += -32LL * (v80 >> 5);
              do
              {
                *v81++ = -1;
                --v98;
              }
              while ( v98 );
            }
            if ( v80 )
LABEL_196:
              _InterlockedOr(v81, (1 << v80) - 1);
          }
          else
          {
            _InterlockedOr(v81, 1 << v79);
          }
        }
      }
      if ( a2 )
        goto LABEL_63;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL, retaddr);
        goto LABEL_62;
      }
      _m_prefetchw(v2);
      v44 = *v2;
      if ( !*v2 )
      {
        if ( (_QWORD *)_InterlockedCompareExchange64(
                         *(volatile signed __int64 **)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                         0LL,
                         (unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) == v2 )
        {
LABEL_62:
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          if ( v46 )
          {
            if ( v45->NestingLevel <= 1u )
            {
              v99 = v46[5] - 1;
              v46[5] = v99;
              if ( !v99 )
                KiRemoveSystemWorkPriorityKick(v45);
            }
          }
LABEL_63:
          if ( (v11 & 2) != 0 )
          {
            v47 = _InterlockedDecrement64((volatile signed __int64 *)(v7 + 8064));
            if ( v47 == *(_QWORD *)(v7 + 6120) || v47 == *(_QWORD *)(v7 + 6128) )
              MiUpdateAvailableEvents(v7);
            if ( v47 <= 0x420 )
            {
              v100 = *(_QWORD *)(v7 + 7800);
              if ( !v100 || !*(_BYTE *)(v100 + 52) )
                MiObtainFreePages(v7);
              if ( v47 < 0xA0 && v47 + 1 >= 0xA0 && *(_DWORD *)(v7 + 1144) )
                KeSetEvent((PRKEVENT)(v7 + 1000), 0, 0);
            }
            if ( v47 < 0x9F )
            {
              v101 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
              if ( (v101 & 0xC) != 8
                && (v47 < 0x20 && (ULONG_PTR *)v7 == &MiSystemPartition
                 || ((v101 & 2) == 0 || v47 < 0x21) && (*(_DWORD *)(v7 + 4) & 0x20) == 0) )
              {
                LOBYTE(v11) = -2;
              }
            }
          }
          return v11 & 1;
        }
        v44 = KxWaitForLockChainValid((__int64 *)((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL));
      }
      *v2 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v44 + 8), 1uLL);
      goto LABEL_62;
    }
    v31 = (volatile signed __int64 *)(48 * v23 - 0x57FFFFFFFE8LL);
    v32 = *v31;
    v33 = _InterlockedCompareExchange64(v31, v24 | *v31 & 0xFFFFFFF000000000uLL, *v31);
    v34 = v33;
    if ( *(_DWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) == 2 )
    {
      if ( v32 == v33 )
      {
LABEL_39:
        v35 = v11 >> 3;
        goto LABEL_40;
      }
      do
      {
        v96 = v34;
        v34 = _InterlockedCompareExchange64(v31, v24 | v34 & 0xFFFFFFF000000000uLL, v34);
      }
      while ( v96 != v34 );
    }
    else
    {
      if ( v32 == v33 )
        goto LABEL_39;
      do
      {
        v58 = v34;
        v34 = _InterlockedCompareExchange64(v31, v24 | v34 & 0xFFFFFFF000000000uLL, v34);
      }
      while ( v58 != v34 );
    }
    v12 = *(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
    goto LABEL_39;
  }
  if ( (v6 & 0x10000000000000LL) == 0 )
  {
    v15 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v15 & 8) != 0 )
      v16 = 5;
    else
      v16 = v15 & 7;
    v17 = v11 | 2;
    if ( (v17 & 4) != 0 )
      v17 = v14 & 0x3D;
    v18 = v17;
    v19 = (v17 & 4) == 0;
    v11 = v17 | 8;
    if ( (v19 & (v15 >> 3) & 1) == 0 )
      v11 = v18;
    v9 = v7 + 8 * (v16 + 4 * (v16 + 74LL));
    if ( (v11 & 0x10) != 0 )
    {
      if ( *(__int64 *)BugCheckParameter2 >= 0 )
      {
        v84 = v11 & 0xFFFFFFBF;
      }
      else
      {
        SlabAllocatorStandbyList = MiGetSlabAllocatorStandbyList(BugCheckParameter2, 0LL);
        v5 = a2;
        v9 = SlabAllocatorStandbyList;
        v84 = v11 | 0x20;
      }
      v11 = v84 & 0xFFFFFFFD;
    }
    if ( (v11 & 2) != 0 )
    {
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
        _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4288));
      else
        _InterlockedDecrement64((volatile signed __int64 *)(v7 + 4992));
    }
    if ( !v5 )
    {
      *v2 = 0LL;
      *(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v9 + 32;
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      if ( v21 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v85 = v21[5];
          v21[5] = v85 + 1;
          if ( v85 == -1 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL, v9 + 32);
      }
      else
      {
        v22 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v9 + 32), (__int64)v2);
        if ( v22 )
          KxWaitForLockOwnerShip((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL, v22);
      }
    }
    v23 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
    v24 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
    if ( (v11 & 8) != 0 )
    {
      v70 = qword_1404664E0;
      *(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = qword_1404664E0;
      if ( v23 >= v70 && v24 == v23 && v23 < v70 + 2048 )
      {
        MiDeleteParentDecayNode(BugCheckParameter2);
        v23 = 0xFFFFFFFFFLL;
        v24 = 0xFFFFFFFFFLL;
      }
      else
      {
        v71 = (unsigned __int64 *)(48 * v24 - 0x58000000000LL);
        if ( v24 < v70 || v24 >= v70 + 2048 )
        {
          *v71 = v23 | *v71 & 0xFFFFFFF000000000uLL;
        }
        else
        {
          v72 = v71[2];
          if ( qword_140465B00 )
          {
            if ( (v72 & 0x10) != 0 )
              v72 &= ~0x10uLL;
            else
              v72 &= ~qword_140465B00;
          }
          v73 = v72 & 0xFFFF000000000FFFuLL | (v23 << 12);
          if ( qword_140465B00 )
          {
            if ( (v73 & qword_140465B00) != 0 )
              v73 |= 0x10uLL;
            else
              v73 |= qword_140465B00;
          }
          v70 = *(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
          v71[2] = v73;
        }
        v74 = 48 * v23 - 0x58000000000LL;
        if ( v23 < v70 || v23 >= v70 + 2048 )
        {
          v75 = *(_QWORD *)(v74 + 24);
          v76 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v74 + 24),
                  v24 | v75 & 0xFFFFFFF000000000uLL,
                  v75);
          if ( v75 != v76 )
          {
            do
            {
              v86 = v76;
              v76 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v74 + 24),
                      v24 | v76 & 0xFFFFFFF000000000uLL,
                      v76);
            }
            while ( v86 != v76 );
            v12 = *(_QWORD *)(((unsigned __int64)&v102 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
          }
          v23 = 0xFFFFFFFFFLL;
          v24 = 0xFFFFFFFFFLL;
        }
        else
        {
          v23 = 0xFFFFFFFFFLL;
          v77 = v24 | *(_QWORD *)(v74 + 40) & 0xFFFFFFF000000000uLL;
          v24 = 0xFFFFFFFFFLL;
          *(_QWORD *)(v74 + 40) = v77;
        }
      }
    }
    else
    {
      if ( v23 != 0xFFFFFFFFFLL && (v23 < qword_1404664E0 || v23 >= qword_1404664E0 + 2048) )
      {
        v25 = 48 * v23 - 0x58000000000LL;
        v26 = *(_BYTE *)(v25 + 35);
        v27 = (v26 & 8) != 0 ? 5 : v26 & 7;
        if ( v16 != v27 )
        {
          PfnPriority = MiGetPfnPriority(48 * v23 - 0x58000000000LL, v25, v6, v24);
          KeBugCheckEx(0x1Au, 0x8886uLL, BugCheckParameter2, v88, (v16 << 8) | (unsigned __int64)PfnPriority);
        }
      }
      if ( v24 != 0xFFFFFFFFFLL && (v24 < qword_1404664E0 || v24 >= qword_1404664E0 + 2048) )
      {
        v28 = 48 * v24 - 0x58000000000LL;
        v29 = *(_BYTE *)(v28 + 35);
        v30 = (v29 & 8) != 0 ? 5 : v29 & 7;
        if ( v16 != v30 )
        {
          v89 = MiGetPfnPriority(48 * v24 - 0x58000000000LL, v28, v6, v24);
          KeBugCheckEx(0x1Au, 0x8887uLL, BugCheckParameter2, v90, (v16 << 8) | (unsigned __int64)v89);
        }
      }
    }
    if ( v16 < *(unsigned __int8 *)(v7 + 4764) && (v11 & 0x20) == 0 )
      v11 &= ~1u;
    goto LABEL_36;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 0x40) != 0 )
    MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
  *(_QWORD *)BugCheckParameter2 = 0LL;
  MiSetPfnBlink(BugCheckParameter2, 0LL, 1LL, v10);
  return 1LL;
}
