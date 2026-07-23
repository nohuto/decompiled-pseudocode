/*
 * XREFs of MiUnlinkPageFromList @ 0x14003B930
 * Callers:
 *     MiDeleteParentDecayNode @ 0x140029354 (MiDeleteParentDecayNode.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiHandleTransitionFault @ 0x14003B680 (MiHandleTransitionFault.c)
 *     MiOutSwapWorkingSetPte @ 0x14003DD60 (MiOutSwapWorkingSetPte.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiResolveProtoCombine @ 0x14007BF64 (MiResolveProtoCombine.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080930 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x1400817F0 (MiReservePageFileSpaceForPage.c)
 *     MiDeleteClusterSection @ 0x140081EF0 (MiDeleteClusterSection.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiDeleteTransitionPte @ 0x140095370 (MiDeleteTransitionPte.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MiEmptyDecayClusterTimers @ 0x1400F0870 (MiEmptyDecayClusterTimers.c)
 *     MiRelinkStandbyPage @ 0x1400F0AB8 (MiRelinkStandbyPage.c)
 *     MiUnlinkStandbyBatch @ 0x140105D50 (MiUnlinkStandbyBatch.c)
 *     MiReferencePageForModifiedWrite @ 0x14011BC04 (MiReferencePageForModifiedWrite.c)
 *     MiDecayPfnFullyInitialized @ 0x14011BDE0 (MiDecayPfnFullyInitialized.c)
 *     MiUnlinkStandbyPfn @ 0x140120514 (MiUnlinkStandbyPfn.c)
 *     MiConvertStandbyToProto @ 0x14013EB50 (MiConvertStandbyToProto.c)
 *     MiBuildReservationCluster @ 0x1401501BC (MiBuildReservationCluster.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140152020 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorPerformBrownWrites @ 0x140152494 (MiMirrorPerformBrownWrites.c)
 *     MiPurgeImageSection @ 0x140176720 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x1402A2E18 (MiPurgeSubsection.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x1402A5650 (MiWalkResetCommitPte.c)
 *     MiEnableLargeSubsection @ 0x1402B5EB4 (MiEnableLargeSubsection.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402B6578 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x1402B8358 (MiFreeModifiedReservations.c)
 *     MiNoPagesLastChance @ 0x1402C0710 (MiNoPagesLastChance.c)
 *     MiReuseStandbyPage @ 0x1402C1190 (MiReuseStandbyPage.c)
 *     MiMakeImagePageOk @ 0x1402C47EC (MiMakeImagePageOk.c)
 *     MiHandleForkTransitionPte @ 0x1402CA308 (MiHandleForkTransitionPte.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     MiDeleteParentDecayNode @ 0x140029354 (MiDeleteParentDecayNode.c)
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiUpdateAvailableEvents @ 0x14017F964 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x1402B3484 (MiObtainFreePages.c)
 *     MiUnlinkPageFromBadList @ 0x1402BFFF0 (MiUnlinkPageFromBadList.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C494 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUnlinkPageFromList(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int16 v3; // cx
  int v4; // r11d
  unsigned __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // eax
  int v9; // r12d
  int v10; // r14d
  int v11; // r13d
  unsigned __int8 v12; // r9
  unsigned int v13; // r10d
  unsigned __int64 v14; // rdx
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r11
  char v19; // al
  int v20; // eax
  char v21; // al
  int v22; // eax
  volatile signed __int64 *v23; // r10
  volatile signed __int64 v24; // rdx
  signed __int64 v25; // rax
  signed __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r10
  _QWORD *v29; // rdi
  __int64 v30; // r11
  signed __int64 v31; // rdx
  signed __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  unsigned __int64 v38; // rdi
  bool v40; // zf
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  unsigned __int64 v44; // r15
  char v45; // r8
  struct _KPRCB *v46; // rdx
  _DWORD *v47; // rcx
  int v48; // ett
  unsigned int v49; // ecx
  unsigned int i; // r9d
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // rdx
  signed __int64 v55; // rcx
  volatile signed __int64 *v56; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int16 v59; // cx
  char v60; // al
  __int64 v61; // rcx
  unsigned __int64 v62; // r14
  unsigned __int64 *v63; // rdx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rax
  __int64 v66; // r10
  signed __int64 v67; // rdx
  signed __int64 v68; // r8
  unsigned __int64 v69; // rax
  _DWORD *v70; // rcx
  unsigned __int64 v71; // r10
  unsigned __int64 v72; // r11
  char v73; // r13
  volatile signed __int32 *v74; // r9
  unsigned int v75; // r8d
  signed __int64 v76; // rcx
  int v77; // eax
  signed __int64 v78; // rcx
  unsigned int PfnPriority; // eax
  int v80; // r10d
  ULONG_PTR v81; // rdx
  unsigned int v82; // eax
  int v83; // r10d
  ULONG_PTR v84; // rdx
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  signed __int64 v90; // rcx
  int v91; // r11d
  unsigned __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rax
  int v95; // ecx
  __int64 v96; // [rsp+38h] [rbp-60h]
  __int64 v97; // [rsp+40h] [rbp-58h] BYREF
  volatile signed __int64 *v98; // [rsp+48h] [rbp-50h]
  __int64 v99; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v101; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v102; // [rsp+A0h] [rbp+8h]
  unsigned int v104; // [rsp+B0h] [rbp+18h]
  struct _KPRCB *v105; // [rsp+B8h] [rbp+20h]
  unsigned int v106; // [rsp+B8h] [rbp+20h]

  v3 = *(_WORD *)(BugCheckParameter2 + 32);
  v4 = a2;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  if ( v3 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(0x4Eu, 2uLL, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, qword_14043F5C8, v3);
    return 1LL;
  }
  v5 = *(_QWORD *)(BugCheckParameter2 + 40);
  v6 = *(_QWORD *)(qword_14043B808 + 8 * ((v5 >> 40) & 0x3FF));
  v7 = *(_QWORD *)(v6 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 4152);
  v8 = *(_DWORD *)(v7 + 8);
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 5 )
  {
    MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
    return 1LL;
  }
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v104 = 1;
  v96 = 5LL;
  if ( v8 != 2 )
  {
    v40 = v8 == 3;
    v41 = 4288LL;
    v42 = 4992LL;
    if ( !v40 )
    {
      if ( (v5 & 0x200000000000000LL) != 0 )
        v42 = 4288LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v42 + v6));
      if ( !v4 )
      {
        v97 = 0LL;
        v98 = (volatile signed __int64 *)(v7 + 32);
        KxAcquireQueuedSpinLock(&v97);
      }
      goto LABEL_85;
    }
    _InterlockedDecrement64((volatile signed __int64 *)v7);
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) == 0 )
      v41 = 4992LL;
    _InterlockedDecrement64((volatile signed __int64 *)(v41 + v6));
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
    {
      if ( !v4 )
      {
        v56 = (volatile signed __int64 *)(v7 + 32);
        v97 = 0LL;
        v98 = v56;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v85 = SchedulerAssist[5];
            SchedulerAssist[5] = v85 + 1;
            if ( v85 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v97, v56);
        }
        else if ( _InterlockedExchange64(v56, (__int64)&v97) )
        {
          KxWaitForLockOwnerShip(&v97);
        }
      }
      --*(_QWORD *)(v6 + 7792);
      v59 = *(_QWORD *)(BugCheckParameter2 + 16);
      v60 = (unsigned __int8)v59 >> 1;
      v61 = v59 >> 12;
      if ( (v60 & 1) != 0 || (_DWORD)v61 == *(_DWORD *)(v6 + 1140) )
        v7 = v6 + 8 * (v61 + 4 * (v61 + 86));
      else
        v7 = v6 + 2688;
      goto LABEL_85;
    }
    v7 = v6
       + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 58) + 4 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 58) + 106LL));
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000000LL) != 0 )
    {
      v106 = 0;
    }
    else
    {
      v43 = (unsigned __int128)((__int64)(BugCheckParameter2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v44 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      if ( qword_14043B120 )
      {
        if ( qword_14043BA08 )
        {
          v45 = 17;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            LOBYTE(v43) = -1;
            ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140439E38, v43);
          }
          else
          {
            v46 = KeGetCurrentPrcb();
            v105 = v46;
            v47 = v46->SchedulerAssist;
            if ( v47 )
            {
              if ( v46->NestingLevel <= 1u )
              {
                v86 = v47[5];
                v47[5] = v86 + 1;
                if ( v86 == -1 )
                {
                  KiRemoveSystemWorkPriorityKick(v46);
                  v4 = a2;
                  v45 = 17;
                  v46 = v105;
                }
              }
            }
            _m_prefetchw(&dword_140439E38);
            v48 = dword_140439E38 & 0x7FFFFFFF;
            if ( v48 == _InterlockedCompareExchange(
                          &dword_140439E38,
                          (dword_140439E38 & 0x7FFFFFFF) + 1,
                          dword_140439E38 & 0x7FFFFFFF) )
              goto LABEL_73;
            v70 = v46->SchedulerAssist;
            if ( v70 )
            {
              if ( v46->NestingLevel <= 1u )
              {
                v87 = v70[5] - 1;
                v70[5] = v87;
                if ( !v87 )
                  KiRemoveSystemWorkPriorityKick(v46);
              }
            }
            LOBYTE(v46) = -1;
            ExpWaitForSpinLockSharedAndAcquire(&dword_140439E38, v46);
          }
          v4 = a2;
          v45 = 17;
        }
        else
        {
          v45 = 18;
        }
LABEL_73:
        v49 = dword_14043B104;
        if ( v44 < *(_QWORD *)(qword_14043B120 + 16LL * (unsigned int)dword_14043B104) )
        {
          do
            --v49;
          while ( v44 < *(_QWORD *)(qword_14043B120 + 16LL * v49) );
        }
        else
        {
          for ( i = dword_14043B104 + 1; v44 >= *(_QWORD *)(qword_14043B120 + 16LL * i); ++v49 )
            ++i;
        }
        v106 = *(_DWORD *)(qword_14043B120 + 16LL * v49 + 8);
        dword_14043B104 = v49;
        if ( v45 != 18 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140439E38, retaddr);
            v4 = a2;
          }
          else
          {
            _InterlockedAnd(&dword_140439E38, 0xBFFFFFFF);
            _InterlockedDecrement(&dword_140439E38);
          }
          v51 = KeGetCurrentPrcb();
          v52 = v51->SchedulerAssist;
          if ( v52 )
          {
            if ( v51->NestingLevel <= 1u )
            {
              v88 = v52[5] - 1;
              v52[5] = v88;
              if ( !v88 )
              {
                KiRemoveSystemWorkPriorityKick(v51);
                v4 = a2;
              }
            }
          }
        }
        goto LABEL_79;
      }
      v106 = 0;
    }
LABEL_79:
    if ( !v4 )
    {
      v97 = 0LL;
      v98 = (volatile signed __int64 *)(v7 + 32);
      v53 = KeGetCurrentPrcb();
      v54 = v53->SchedulerAssist;
      if ( v54 )
      {
        if ( v53->NestingLevel <= 1u )
        {
          v89 = v54[5];
          v54[5] = v89 + 1;
          if ( v89 == -1 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v97, v7 + 32);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)(v7 + 32), (__int64)&v97) )
      {
        KxWaitForLockOwnerShip(&v97);
      }
    }
    *(_QWORD *)(BugCheckParameter2 + 40) = *(_QWORD *)(BugCheckParameter2 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v106 << 58);
LABEL_85:
    v17 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
    v18 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
    goto LABEL_29;
  }
  if ( (v5 & 0x10000000000000LL) == 0 )
  {
    v12 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v12 & 8) != 0 )
      v13 = 5;
    else
      v13 = v12 & 7;
    v101 = v13;
    v14 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
    if ( v14 < qword_14043BB20 || v14 >= qword_14043BB20 + 2048 )
    {
      v11 = (v12 >> 3) & 1;
      if ( !byte_14043EC9E || !_bittest64((const signed __int64 *)qword_14043F2D8, v14 >> 9) )
      {
        if ( (v5 & 0x200000000000000LL) != 0 )
          _InterlockedDecrement64((volatile signed __int64 *)(v6 + 4288));
        else
          _InterlockedDecrement64((volatile signed __int64 *)(v6 + 4992));
      }
    }
    else
    {
      v9 = 1;
    }
    v7 = v6 + 8 * (v13 + 4 * (v13 + 74LL));
    if ( v4 )
      goto LABEL_16;
    v97 = 0LL;
    v98 = (volatile signed __int64 *)(v7 + 32);
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v77 = v16[5];
        v16[5] = v77 + 1;
        if ( v77 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(v15);
          v13 = v101;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v97, v7 + 32);
    }
    else
    {
      if ( !_InterlockedExchange64((volatile __int64 *)(v7 + 32), (__int64)&v97) )
      {
LABEL_16:
        v17 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
        v18 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
        if ( v11 == 1 )
        {
          v62 = qword_14043BB20;
          if ( v17 >= qword_14043BB20 && v18 == v17 && v17 < qword_14043BB20 + 2048 )
          {
            MiDeleteParentDecayNode(BugCheckParameter2);
            v13 = v101;
            v17 = 0xFFFFFFFFFLL;
            v18 = 0xFFFFFFFFFLL;
          }
          else
          {
            v63 = (unsigned __int64 *)(48 * v18 - 0x58000000000LL);
            if ( v18 < qword_14043BB20 || v18 >= qword_14043BB20 + 2048 )
            {
              *v63 = v17 | *v63 & 0xFFFFFFF000000000uLL;
            }
            else
            {
              v64 = v63[2];
              if ( qword_14043B180 )
              {
                if ( (v64 & 0x10) != 0 )
                  v64 &= ~0x10uLL;
                else
                  v64 &= ~qword_14043B180;
              }
              v65 = v64 & 0xFFFF000000000FFFuLL | (v17 << 12);
              if ( qword_14043B180 )
              {
                if ( (v65 & qword_14043B180) != 0 )
                  v65 |= 0x10uLL;
                else
                  v65 |= qword_14043B180;
              }
              v63[2] = v65;
            }
            v66 = 48 * v17 - 0x58000000000LL;
            if ( v17 < v62 || v17 >= v62 + 2048 )
            {
              v67 = *(_QWORD *)(v66 + 24);
              v68 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v66 + 24),
                      v18 | v67 & 0xFFFFFFF000000000uLL,
                      v67);
              if ( v67 != v68 )
              {
                do
                {
                  v78 = v68;
                  v68 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)(v66 + 24),
                          v18 | v68 & 0xFFFFFFF000000000uLL,
                          v68);
                }
                while ( v78 != v68 );
              }
              v13 = v101;
              v17 = 0xFFFFFFFFFLL;
              v18 = 0xFFFFFFFFFLL;
            }
            else
            {
              v17 = 0xFFFFFFFFFLL;
              v69 = v18 | *(_QWORD *)(v66 + 40) & 0xFFFFFFF000000000uLL;
              v18 = 0xFFFFFFFFFLL;
              *(_QWORD *)(v66 + 40) = v69;
              v13 = v101;
            }
          }
        }
        else
        {
          if ( v17 != 0xFFFFFFFFFLL && (v17 < qword_14043BB20 || v17 >= qword_14043BB20 + 2048) )
          {
            v19 = *(_BYTE *)(48 * v17 - 0x58000000000LL + 35);
            v20 = (v19 & 8) != 0 ? 5 : v19 & 7;
            if ( v13 != v20 )
            {
              PfnPriority = MiGetPfnPriority(48 * v17 - 0x58000000000LL);
              KeBugCheckEx(
                0x1Au,
                0x8886uLL,
                BugCheckParameter2,
                v81,
                (unsigned int)(v80 << 8) | (unsigned __int64)PfnPriority);
            }
          }
          if ( v18 != 0xFFFFFFFFFLL && (v18 < qword_14043BB20 || v18 >= qword_14043BB20 + 2048) )
          {
            v21 = *(_BYTE *)(48 * v18 - 0x58000000000LL + 35);
            v22 = (v21 & 8) != 0 ? 5 : v21 & 7;
            if ( v13 != v22 )
            {
              v82 = MiGetPfnPriority(48 * v18 - 0x58000000000LL);
              KeBugCheckEx(0x1Au, 0x8887uLL, BugCheckParameter2, v84, (unsigned int)(v83 << 8) | (unsigned __int64)v82);
            }
          }
        }
        v10 = 1;
        if ( v13 < *(unsigned __int8 *)(v6 + 4764) )
          v104 = 0;
LABEL_29:
        if ( v17 == 0xFFFFFFFFFLL )
        {
          if ( !v11 )
            *(_QWORD *)(v7 + 24) = v18;
        }
        else
        {
          v23 = (volatile signed __int64 *)(48 * v17 - 0x57FFFFFFFE8LL);
          v24 = *v23;
          v25 = _InterlockedCompareExchange64(v23, v18 | *v23 & 0xFFFFFFF000000000uLL, *v23);
          v26 = v25;
          if ( v10 == 1 )
          {
            if ( v24 != v25 )
            {
              do
              {
                v76 = v26;
                v26 = _InterlockedCompareExchange64(v23, v18 | v26 & 0xFFFFFFF000000000uLL, v26);
              }
              while ( v76 != v26 );
            }
          }
          else if ( v24 != v25 )
          {
            do
            {
              v55 = v26;
              v26 = _InterlockedCompareExchange64(v23, v18 | v26 & 0xFFFFFFF000000000uLL, v26);
            }
            while ( v55 != v26 );
          }
        }
        if ( v18 == 0xFFFFFFFFFLL )
        {
          if ( !v11 )
            *(_QWORD *)(v7 + 16) = v17;
        }
        else
        {
          *(_QWORD *)(48 * v18 - 0x58000000000LL) = v17 | *(_QWORD *)(48 * v18 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
        }
        if ( !v9
          && (!byte_14043EC9E
           || !_bittest64(
                 (const signed __int64 *)qword_14043F2D8,
                 (unsigned __int64)((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) >> 9)
           || !v10) )
        {
          --*(_QWORD *)v7;
          if ( v10 == 1 )
          {
            if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) == 0 )
              v96 = *(_BYTE *)(BugCheckParameter2 + 35) & 7;
            v27 = *(unsigned __int8 *)(BugCheckParameter2 + 39) | (*(_QWORD *)BugCheckParameter2 >> 28) & 0xFFFFFFF00LL;
            v28 = (*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL | *(unsigned __int16 *)(BugCheckParameter2 + 36);
            v29 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_14043B808
                                                   + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
                                       + 16LL)
                           + 1984LL * (*(_QWORD *)(BugCheckParameter2 + 40) >> 58)
                           + 24 * (v96 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 36) & 3LL)));
            if ( v27 == 0xFFFFFFFFFLL )
            {
              v29[109] = v28;
            }
            else
            {
              v30 = 48 * v27 - 0x58000000000LL;
              *(_WORD *)(v30 + 36) = *(_WORD *)(BugCheckParameter2 + 36);
              v31 = *(_QWORD *)(v30 + 24);
              v102 = (v28 & 0xFFFFFFFFFFFF0000uLL) << 20;
              v32 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v30 + 24),
                      v102 | v31 & 0xFF00000FFFFFFFFFuLL,
                      v31);
              if ( v31 != v32 )
              {
                do
                {
                  v90 = v32;
                  v32 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)(v30 + 24),
                          v102 | v32 & 0xFF00000FFFFFFFFFuLL,
                          v32);
                }
                while ( v90 != v32 );
              }
            }
            if ( v28 == 0xFFFFFFFFFLL )
            {
              v29[108] = v27;
            }
            else
            {
              v33 = 48 * v28 - 0x58000000000LL;
              v34 = *(_QWORD *)v33 ^ (v27 << 28);
              *(_BYTE *)(v33 + 39) = v27;
              *(_QWORD *)v33 = (v27 << 28) ^ v34 & 0xFFFFFFFFFLL;
            }
            --v29[107];
            if ( v11 == 1 )
              *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
          }
        }
        *(_QWORD *)BugCheckParameter2 = 0LL;
        if ( v9 )
        {
          MiSetPfnBlink(BugCheckParameter2, 0LL, 0LL);
          goto LABEL_49;
        }
        *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFFF000000000uLL;
        if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000000LL) != 0 || dword_14043B82C != 1 )
        {
LABEL_49:
          if ( a2 )
          {
LABEL_54:
            if ( v10 != 1
              || v9
              || byte_14043EC9E
              && _bittest64(
                   (const signed __int64 *)qword_14043F2D8,
                   (unsigned __int64)((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) >> 9) )
            {
              return v104;
            }
            v38 = _InterlockedDecrement64((volatile signed __int64 *)(v6 + 7296));
            if ( v38 == *(_QWORD *)(v6 + 6120) || v38 == *(_QWORD *)(v6 + 6128) )
              MiUpdateAvailableEvents(v6);
            if ( v38 <= 0x420 )
            {
              v94 = *(_QWORD *)(v6 + 7024);
              if ( !v94 || !*(_BYTE *)(v94 + 52) )
                MiObtainFreePages(v6);
              if ( v38 < 0xA0 && v38 + 1 >= 0xA0 && *(_DWORD *)(v6 + 1144) )
                KeSetEvent((PRKEVENT)(v6 + 992), 0, 0);
            }
            if ( v38 >= 0x9F )
              return v104;
            v95 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
            if ( (v95 & 0xC) == 8 )
              return v104;
            if ( (v38 >= 0x20 || (ULONG_PTR *)v6 != &MiSystemPartition)
              && ((v95 & 2) != 0 && v38 >= 0x21 || (*(_DWORD *)(v6 + 4) & 0x10) != 0) )
            {
              return v104;
            }
            else
            {
              return 0LL;
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v97, retaddr);
            goto LABEL_53;
          }
          _m_prefetchw(&v97);
          v35 = v97;
          if ( !v97 )
          {
            if ( (__int64 *)_InterlockedCompareExchange64(v98, 0LL, (signed __int64)&v97) == &v97 )
            {
LABEL_53:
              v36 = KeGetCurrentPrcb();
              v37 = v36->SchedulerAssist;
              if ( v37 )
              {
                if ( v36->NestingLevel <= 1u )
                {
                  v93 = v37[5] - 1;
                  v37[5] = v93;
                  if ( !v93 )
                    KiRemoveSystemWorkPriorityKick(v36);
                }
              }
              goto LABEL_54;
            }
            v35 = KxWaitForLockChainValid(&v97);
          }
          v97 = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v35 + 8), 1uLL);
          goto LABEL_53;
        }
        LOBYTE(v71) = 1;
        v72 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
        v73 = v72 & 0x1F;
        v74 = (volatile signed __int32 *)(qword_14043B888 + 4 * (v72 >> 5));
        if ( (v72 & 0x1F) + 1 > 0x20 )
        {
          if ( (v72 & 0x1F) != 0 )
          {
            v91 = v72 & 0x1F;
            _InterlockedOr(v74++, ((1 << (32 - v91)) - 1) << v73);
            v71 = 1LL - (unsigned int)(32 - v91);
            if ( v71 >= 0x20 )
            {
              v92 = v71 >> 5;
              v71 += -32LL * (v71 >> 5);
              do
              {
                *v74++ = -1;
                --v92;
              }
              while ( v92 );
            }
            if ( !v71 )
              goto LABEL_49;
          }
          v75 = (1 << v71) - 1;
        }
        else
        {
          v75 = 1 << v73;
        }
        _InterlockedOr(v74, v75);
        goto LABEL_49;
      }
      KxWaitForLockOwnerShip(&v97);
    }
    v13 = v101;
    goto LABEL_16;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 0x40) != 0 )
    MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
  *(_QWORD *)BugCheckParameter2 = 0LL;
  MiSetPfnBlink(BugCheckParameter2, 0LL, 1LL);
  return 1LL;
}
