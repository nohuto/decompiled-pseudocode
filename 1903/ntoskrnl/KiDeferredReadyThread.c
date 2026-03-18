/*
 * XREFs of KiDeferredReadyThread @ 0x140068020
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiSearchForNewThread @ 0x1400130A4 (KiSearchForNewThread.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiFastReadyThread @ 0x14001577C (KiFastReadyThread.c)
 *     KiSwapThread @ 0x140040E00 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140041AF0 (KiSearchForNewThreadOnProcessor.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     PsImpersonateContainerOfThread @ 0x1400471A0 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x1400478B0 (KeClearSystemPriority.c)
 *     KiReadyThread @ 0x140067ED0 (KiReadyThread.c)
 *     KiDirectSwitchThread @ 0x14006BA10 (KiDirectSwitchThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400E94A8 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiUpdateThreadPriority @ 0x14000FB30 (KiUpdateThreadPriority.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140010048 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140011B90 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140011BD8 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x140011C20 (KiComputeNewPriority.c)
 *     KiEnterDeferredReadyState @ 0x140015188 (KiEnterDeferredReadyState.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400153D0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiIsThreadRankNonZero @ 0x140015570 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140015600 (KiGetThreadEffectiveRankNonZero.c)
 *     KiPrcbInGroupAffinity @ 0x1400156A4 (KiPrcbInGroupAffinity.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BD60 (KiSetVpThreadSpinLockCount.c)
 *     KiChooseTargetProcessor @ 0x140068F60 (KiChooseTargetProcessor.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400E45FC (KiSetBasePriorityAndClearDecrement.c)
 *     KiAddThreadToScbQueue @ 0x1400E8E44 (KiAddThreadToScbQueue.c)
 *     KiComputeThreadAffinity @ 0x1400F8CF0 (KiComputeThreadAffinity.c)
 *     KiTryToAcquireThreadLock @ 0x1400F959C (KiTryToAcquireThreadLock.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x1401126E0 (KiAbQueueAutoBoostDpc.c)
 *     KiScheduleNextForegroundBoost @ 0x140122B78 (KiScheduleNextForegroundBoost.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14012B6D8 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiHeteroChooseTargetProcessor @ 0x1402AF588 (KiHeteroChooseTargetProcessor.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1402AFAEC (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0620 (KiSetSchedulerAssistPriority.c)
 *     KiSetVpThreadSystemWork @ 0x1402B0770 (KiSetVpThreadSystemWork.c)
 *     KiIsThreadRankBiased @ 0x1402B2B88 (KiIsThreadRankBiased.c)
 *     EtwTraceIdealProcessor @ 0x14032DACC (EtwTraceIdealProcessor.c)
 */

void __fastcall KiDeferredReadyThread(__int64 a1, __int64 a2, __int64 p_AbPropagateBoostsList)
{
  __int64 i; // rbx
  unsigned __int64 v4; // r15
  bool v5; // zf
  char v6; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  char v9; // r14
  char v10; // al
  unsigned __int8 v11; // di
  unsigned int v12; // eax
  char v13; // r9
  char v14; // dl
  int v15; // r11d
  int v16; // esi
  char v17; // di
  bool v18; // r12
  char v19; // r14
  unsigned __int8 v20; // r13
  unsigned __int16 v21; // dx
  unsigned __int64 v22; // rcx
  int v23; // r10d
  __int64 v24; // rsi
  unsigned int v25; // r15d
  __int64 v26; // rdi
  __int64 v27; // rax
  char v28; // di
  char v29; // cl
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  unsigned int v36; // r14d
  int v37; // edi
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  struct _KPRCB *v40; // rax
  char v41; // dl
  char v42; // cl
  char v43; // si
  int v44; // eax
  struct _KPRCB *v45; // rcx
  unsigned __int64 v46; // rcx
  char v47; // si
  unsigned __int8 v48; // dl
  char v49; // cl
  unsigned int v50; // eax
  struct _KPRCB *v51; // rcx
  char v52; // al
  unsigned __int64 v53; // rcx
  _KTHREAD *v54; // r14
  __int64 v55; // r14
  char v56; // di
  char v57; // cl
  __int64 v58; // rax
  int v59; // edi
  struct _KPRCB *v60; // rcx
  _DWORD *v61; // rdx
  struct _KPRCB *v62; // rax
  __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  struct _KPRCB *v65; // rdi
  __int64 v66; // rax
  _DWORD *v67; // rcx
  __int64 v68; // r10
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // r15
  __int64 v72; // rcx
  __int64 v73; // r14
  struct _KPRCB *v74; // r12
  _QWORD *v75; // rdi
  _QWORD *v76; // rax
  _QWORD *v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // edi
  struct _KPRCB *v80; // rcx
  _DWORD *v81; // rdx
  char v82; // cl
  struct _KPRCB *v83; // rcx
  int v84; // eax
  _QWORD *v85; // rcx
  _QWORD *v86; // rax
  _QWORD *v87; // rdx
  int v88; // eax
  __int64 v89; // rax
  __int64 v90; // rcx
  bool IsThreadRankNonZero; // al
  bool v92; // al
  _DWORD *v93; // rcx
  _DWORD *v94; // rcx
  __int64 v95; // r10
  __int64 v96; // rcx
  char v97; // di
  char v98; // cl
  __int64 v99; // rax
  struct _KPRCB *v100; // rcx
  _DWORD *v101; // rdx
  unsigned int v102; // r15d
  int v103; // edi
  char v104; // dl
  _QWORD *v105; // rdx
  _DWORD *v106; // rcx
  _DWORD *v107; // rcx
  bool v108; // al
  __int64 v109; // rdx
  int v110; // eax
  int v111; // eax
  int v112; // eax
  unsigned int GuestSchedulerAssistPriority; // edi
  int v114; // eax
  unsigned __int8 v115; // dl
  char v116; // al
  _QWORD *v117; // rdx
  struct _SINGLE_LIST_ENTRY *v118; // rdx
  _SINGLE_LIST_ENTRY *v119; // r9
  int v120; // eax
  int v121; // eax
  int v122; // eax
  __int64 v123; // rdx
  int v124; // eax
  __int64 v125; // r14
  __int64 v126; // r9
  unsigned __int64 v127; // rcx
  struct _KPRCB *v128; // rdi
  _DWORD *v129; // rcx
  int v130; // eax
  _DWORD *v131; // rcx
  int v132; // eax
  _DWORD *v133; // rcx
  int v134; // eax
  __int64 v135; // rdx
  int v136; // eax
  char v137; // r8
  int v138; // edx
  __int64 v139; // rdx
  __int64 v140; // rcx
  int v141; // eax
  __int64 v142; // r9
  __int64 v143; // rdx
  int v144; // eax
  int v145; // eax
  char v146; // r8
  int v147; // edx
  __int64 v148; // rdx
  __int64 v149; // rcx
  unsigned int v150; // [rsp+30h] [rbp-50h]
  BOOL v151; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v152; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v153; // [rsp+40h] [rbp-40h] BYREF
  __int64 v154; // [rsp+48h] [rbp-38h]
  int v155; // [rsp+50h] [rbp-30h] BYREF
  int v156; // [rsp+54h] [rbp-2Ch] BYREF
  int v157; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v158[7]; // [rsp+5Ch] [rbp-24h] BYREF
  bool v160; // [rsp+C8h] [rbp+48h] BYREF
  char v161; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v162; // [rsp+D8h] [rbp+58h]

  for ( i = a2; ; i = (__int64)v54 )
  {
    v4 = *(_QWORD *)(i + 72);
    v153 = 0LL;
    v5 = *(_BYTE *)(i + 566) == 1;
    v154 = 0LL;
    v162 = 0;
    if ( v5 )
      v6 = *(_BYTE *)(i + 567);
    else
      v6 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    v155 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v110 = SchedulerAssist[5];
        SchedulerAssist[5] = v110 + 1;
        if ( v110 == -1 )
LABEL_240:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(i + 64), 0LL) )
    {
      v93 = CurrentPrcb->SchedulerAssist;
      if ( v93 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v111 = v93[5] - 1;
          v93[5] = v111;
          if ( !v111 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v155);
      while ( *(_QWORD *)(i + 64) );
      v94 = CurrentPrcb->SchedulerAssist;
      if ( v94 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v112 = v94[5];
          v94[5] = v112 + 1;
          if ( v112 == -1 )
            goto LABEL_240;
        }
      }
    }
    if ( (*(_DWORD *)(i + 120) & 0x400000) == 0 )
    {
      v9 = 0;
      goto LABEL_8;
    }
    GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(i, a2, p_AbPropagateBoostsList);
    v114 = *(char *)(i + 195);
    if ( (*(_BYTE *)(i + 564) & 0xF0) != 0 )
    {
      if ( (int)GuestSchedulerAssistPriority <= v114 )
        goto LABEL_252;
LABEL_251:
      KiSetBasePriorityAndClearDecrement(i, 0LL, 0LL);
      KiUpdateThreadPriority(0LL, i, (_SINGLE_LIST_ENTRY *)GuestSchedulerAssistPriority, 0);
      goto LABEL_252;
    }
    if ( GuestSchedulerAssistPriority != v114 )
      goto LABEL_251;
LABEL_252:
    v9 = 1;
LABEL_8:
    v10 = *(_BYTE *)(i + 566);
    if ( !v10 )
    {
      if ( v4 < *(_QWORD *)(i + 32) )
      {
        v162 = *(unsigned __int8 *)(i + 565);
        goto LABEL_28;
      }
      v52 = KiComputeNewPriority(i, 1);
      if ( !v9 )
        KiUpdateThreadPriority(0LL, i, (_SINGLE_LIST_ENTRY *)(unsigned int)v52, 0);
      KiTryScheduleNextForegroundBoost(i);
      goto LABEL_95;
    }
    if ( *(char *)(i + 195) < 16 )
    {
      v11 = 0;
      v12 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(i + 436);
      if ( v4 >= *(_QWORD *)(i + 32) )
      {
        v11 = 4;
        if ( v12 < 2 )
          v11 = 5;
      }
      if ( v11 >= 4u || *(char *)(i + 563) >= 14 || v12 >= 2 && !*(_BYTE *)(i + 564) )
      {
        v47 = *(_BYTE *)(i + 195);
        v11 |= 8u;
        if ( v47 < 16 )
        {
          if ( KiForegrounBoostVelocityFlag
            && *(_BYTE *)(*(_QWORD *)(i + 544) + 1466LL) == 2
            && (v115 = *(_BYTE *)(i + 564),
                p_AbPropagateBoostsList = v115,
                LOBYTE(p_AbPropagateBoostsList) = v115 & 0xF,
                (v115 & 0xF) != 0 && (*(_DWORD *)(i + 120) & 8) == 0) )
          {
            *(_BYTE *)(i + 564) = p_AbPropagateBoostsList;
            v116 = v47 - (v115 >> 4) - 1;
            v47 = *(_BYTE *)(i + 563) + (v115 & 0xF);
            if ( v116 >= v47 )
              v47 = v116;
          }
          else
          {
            v48 = *(_BYTE *)(i + 564);
            v49 = *(_BYTE *)(i + 563);
            if ( (char)(v47 - (v48 >> 4) - (v48 & 0xF) - 1) >= v49 )
              v49 = v47 - (*(_BYTE *)(i + 564) >> 4) - (*(_BYTE *)(i + 564) & 0xF) - 1;
            v47 = v49;
            if ( v48 )
            {
              if ( (v48 & 0xF) != 0 )
                *(_DWORD *)(i + 1424) = MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(i + 564) = 0;
              v47 = v49;
            }
          }
          v50 = *(_DWORD *)(i + 1408);
          if ( v50 )
          {
            _BitScanReverse((unsigned int *)&p_AbPropagateBoostsList, v50);
            v104 = v47;
            if ( v47 < (int)p_AbPropagateBoostsList )
              v104 = p_AbPropagateBoostsList;
            v158[1] = p_AbPropagateBoostsList;
            v47 = v104;
          }
        }
        if ( !v9 )
        {
          v51 = KeGetCurrentPrcb();
          if ( v47 > *(char *)(i + 195) )
          {
            if ( *(_BYTE *)(i + 793) )
            {
              v117 = (_QWORD *)(i + 1376);
              if ( *(_QWORD *)(i + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = (__int64)&v51->AbPropagateBoostsList;
                if ( v51 != (struct _KPRCB *)-25720LL )
                {
                  *v117 = *(_QWORD *)p_AbPropagateBoostsList;
                  *(_QWORD *)p_AbPropagateBoostsList = v117;
                  _InterlockedIncrement16((volatile signed __int16 *)(i + 1420));
                  KiAbQueueAutoBoostDpc(v51);
                }
              }
            }
          }
          v5 = (*(_DWORD *)(i + 120) & 0x400000) == 0;
          *(_BYTE *)(i + 195) = v47;
          if ( !v5 )
          {
            LOBYTE(p_AbPropagateBoostsList) = 1;
            KiSetSchedulerAssistPriority(*(_QWORD *)(i + 1520), (unsigned int)v47, p_AbPropagateBoostsList);
          }
        }
      }
      if ( *(_BYTE *)(*(_QWORD *)(i + 544) + 1466LL) == 2 )
        v11 |= 2u;
      if ( ((unsigned __int8)~v11 & ((*(_DWORD *)(i + 120) & 8) == 0)) != 0 )
      {
        p_AbPropagateBoostsList = *(unsigned __int8 *)(i + 195);
        if ( (char)p_AbPropagateBoostsList > 0 )
        {
          v13 = *(_BYTE *)(i + 564);
          if ( !v13 )
          {
            v14 = v11 >> 1;
LABEL_20:
            v15 = *(char *)(i + 563);
            v16 = v15 + v6;
            if ( (v14 & 1) != 0 )
              v16 += SBYTE6(Mm64BitPhysicalAddress);
            if ( v16 >= 16 )
              v16 = 15;
            if ( v16 > (char)p_AbPropagateBoostsList )
            {
              v82 = 0;
              if ( v16 > v15 + v6 )
                v82 = v16 - v15 - v6;
              *(_BYTE *)(i + 564) = v13 ^ (v82 ^ v13) & 0xF;
              v83 = KeGetCurrentPrcb();
              if ( (char)v16 > (char)p_AbPropagateBoostsList )
              {
                if ( *(_BYTE *)(i + 793) )
                {
                  v105 = (_QWORD *)(i + 1376);
                  if ( *(_QWORD *)(i + 1376) == 1LL )
                  {
                    p_AbPropagateBoostsList = (__int64)&v83->AbPropagateBoostsList;
                    if ( v83 != (struct _KPRCB *)-25720LL )
                    {
                      *v105 = *(_QWORD *)p_AbPropagateBoostsList;
                      *(_QWORD *)p_AbPropagateBoostsList = v105;
                      _InterlockedIncrement16((volatile signed __int16 *)(i + 1420));
                      KiAbQueueAutoBoostDpc(v83);
                    }
                  }
                }
              }
              v84 = *(_DWORD *)(i + 120);
              *(_BYTE *)(i + 195) = v16;
              if ( (v84 & 0x400000) != 0 )
              {
                LOBYTE(p_AbPropagateBoostsList) = 1;
                KiSetSchedulerAssistPriority(*(_QWORD *)(i + 1520), (unsigned int)(char)v16, p_AbPropagateBoostsList);
              }
            }
LABEL_25:
            v10 = *(_BYTE *)(i + 566);
            v17 = v11 >> 3;
            goto LABEL_26;
          }
          if ( (v13 & 0xF0) == 0 )
          {
            v14 = v11 >> 1;
            if ( (v11 & 2) != 0 )
              goto LABEL_20;
          }
        }
      }
      if ( !KiForegrounBoostVelocityFlag && (v11 & 6) == 6 && (*(_DWORD *)(i + 120) & 8) == 0 && *(char *)(i + 195) > 0 )
        KiScheduleNextForegroundBoost(i);
      goto LABEL_25;
    }
    v17 = 1;
LABEL_26:
    if ( v10 != 2 )
      goto LABEL_27;
    v41 = *(_BYTE *)(i + 195);
    if ( v41 > 0 )
    {
      v42 = *(_BYTE *)(i + 567);
      if ( v41 < v42 && v41 < 13 )
      {
        p_AbPropagateBoostsList = *(unsigned int *)(i + 120);
        if ( (p_AbPropagateBoostsList & 8) == 0 )
        {
          v43 = 13;
          if ( v42 < 13 )
            v43 = *(_BYTE *)(i + 567);
          v44 = *(_DWORD *)(i + 120);
          *(_BYTE *)(i + 564) += 16 * (v43 - v41);
          v45 = KeGetCurrentPrcb();
          if ( v43 > v41 )
          {
            if ( *(_BYTE *)(i + 793) )
            {
              v118 = (struct _SINGLE_LIST_ENTRY *)(i + 1376);
              if ( *(_QWORD *)(i + 1376) == 1LL )
              {
                v119 = &v45->AbPropagateBoostsList;
                if ( v45 != (struct _KPRCB *)-25720LL )
                {
                  v118->Next = v119->Next;
                  v119->Next = v118;
                  _InterlockedIncrement16((volatile signed __int16 *)(i + 1420));
                  KiAbQueueAutoBoostDpc(v45);
                  v44 = *(_DWORD *)(i + 120);
                }
              }
            }
          }
          *(_BYTE *)(i + 195) = v43;
          if ( (v44 & 0x400000) != 0 )
          {
            LOBYTE(p_AbPropagateBoostsList) = 1;
            KiSetSchedulerAssistPriority(*(_QWORD *)(i + 1520), (unsigned int)v43, p_AbPropagateBoostsList);
          }
          v46 = *(_QWORD *)(i + 32);
          if ( v4 > v46 || v46 - v4 < (unsigned int)KiLockQuantumTarget )
            *(_QWORD *)(i + 32) = v4 + (unsigned int)KiLockQuantumTarget;
LABEL_27:
          if ( !v17 )
            goto LABEL_28;
LABEL_95:
          v53 = v4 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(i + 651);
          if ( (*(_DWORD *)(i + 120) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)(i + 120), 5u);
          *(_QWORD *)(i + 32) = v53;
          goto LABEL_28;
        }
      }
    }
    if ( v17 )
      goto LABEL_95;
    v64 = *(_QWORD *)(i + 32);
    if ( v4 > v64 || v64 - v4 < (unsigned int)KiLockQuantumTarget )
      *(_QWORD *)(i + 32) = v4 + (unsigned int)KiLockQuantumTarget;
LABEL_28:
    v5 = *(_DWORD *)(i + 484) == 0;
    v150 = *(_DWORD *)(i + 588);
    *(_WORD *)(i + 565) = 0;
    v18 = !v5 || *(_BYTE *)(i + 390) == 1;
    v19 = 0;
    v20 = _bittestandreset((signed __int32 *)(i + 116), 1u);
    if ( *(_QWORD *)(i + 568) != KiCpuSetSequence && (*(_DWORD *)(i + 116) & 8) == 0 )
      KiComputeThreadAffinity(i);
    v21 = *(_WORD *)(i + 584);
    v22 = *(_QWORD *)(i + 576);
    LOWORD(v154) = v21;
    v153 = v22;
    if ( !KiForceIdleDisabled )
    {
      if ( KiForceIdleState == 4 )
      {
        v125 = *(unsigned int *)(i + 536);
        LODWORD(v125) = v125 & 0x7FFFFFFF;
        v24 = KiProcessorBlock[v125];
        if ( !KiPrcbInGroupAffinity(v24, (__int64)&v153) )
        {
          _BitScanReverse64(&v127, v153);
          v158[3] = v127;
          v125 = *(unsigned int *)(v126 + 4LL * ((unsigned int)v127 + ((unsigned __int16)v154 << 6)) + 5730528);
          v24 = *(_QWORD *)(v126 + 8 * v125 + 5716672);
        }
        v128 = KeGetCurrentPrcb();
        v157 = 0;
        v129 = v128->SchedulerAssist;
        if ( v129 )
        {
          if ( v128->NestingLevel <= 1u )
          {
            v130 = v129[5];
            v129[5] = v130 + 1;
            if ( v130 == -1 )
LABEL_290:
              KiRemoveSystemWorkPriorityKick(v128);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 48), 0LL) )
        {
          v131 = v128->SchedulerAssist;
          if ( v131 )
          {
            if ( v128->NestingLevel <= 1u )
            {
              v132 = v131[5] - 1;
              v131[5] = v132;
              if ( !v132 )
                KiRemoveSystemWorkPriorityKick(v128);
            }
          }
          do
            KeYieldProcessorEx(&v157);
          while ( *(_QWORD *)(v24 + 48) );
          v133 = v128->SchedulerAssist;
          if ( v133 )
          {
            if ( v128->NestingLevel <= 1u )
            {
              v134 = v133[5];
              v133[5] = v134 + 1;
              if ( v134 == -1 )
                goto LABEL_290;
            }
          }
        }
        *(_DWORD *)(i + 536) = v125;
        v26 = *(_QWORD *)(i + 104);
        if ( v26 )
          v26 += *(unsigned int *)(v24 + 216);
        v152 = v26;
        goto LABEL_136;
      }
      v21 = v154;
      v22 = v153;
    }
    if ( ((v22 - 1) & v22) != 0 )
    {
      if ( *(_BYTE *)(i + 125) )
      {
        v24 = KiHeteroChooseTargetProcessor(a1, i, &v153, &v151);
      }
      else
      {
        v23 = a1;
        v19 = KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(i, a1) && !v18;
        v24 = KiChooseTargetProcessor(v23, i, (unsigned int)&v153, (unsigned int)&v151, v19);
      }
    }
    else
    {
      v65 = KeGetCurrentPrcb();
      _BitScanReverse64(&v22, v22);
      v66 = (unsigned int)v22 + (v21 << 6);
      v158[2] = v22;
      v67 = v65->SchedulerAssist;
      v156 = 0;
      v24 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v66]];
      if ( v67 )
      {
        if ( v65->NestingLevel <= 1u )
        {
          v120 = v67[5];
          v67[5] = v120 + 1;
          if ( v120 == -1 )
LABEL_270:
            KiRemoveSystemWorkPriorityKick(v65);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 48), 0LL) )
      {
        v106 = v65->SchedulerAssist;
        if ( v106 )
        {
          if ( v65->NestingLevel <= 1u )
          {
            v121 = v106[5] - 1;
            v106[5] = v121;
            if ( !v121 )
              KiRemoveSystemWorkPriorityKick(v65);
          }
        }
        do
          KeYieldProcessorEx(&v156);
        while ( *(_QWORD *)(v24 + 48) );
        v107 = v65->SchedulerAssist;
        if ( v107 )
        {
          if ( v65->NestingLevel <= 1u )
          {
            v122 = v107[5];
            v107[5] = v122 + 1;
            if ( v122 == -1 )
              goto LABEL_270;
          }
        }
      }
      v151 = (*(_BYTE *)(v24 + 35) & 1) == 0;
    }
    v25 = *(_DWORD *)(v24 + 36);
    *(_DWORD *)(i + 536) = v25;
    v26 = *(_QWORD *)(i + 104);
    if ( v26 )
      v26 += *(unsigned int *)(v24 + 216);
    v152 = v26;
    if ( v26 )
    {
      v90 = v26;
      while ( (*(_BYTE *)(v90 + 112) & 2) == 0 )
      {
        v90 = *(_QWORD *)(v90 + 408);
        if ( !v90 )
          goto LABEL_43;
      }
      if ( !v18 )
        goto LABEL_136;
    }
LABEL_43:
    if ( v151 )
    {
      v27 = *(_QWORD *)(v24 + 16);
      if ( v27 && v27 != *(_QWORD *)(v24 + 24) )
        __fastfail(0x1Eu);
      v28 = 2;
      if ( v20 )
        v28 = 6;
      if ( (*(_BYTE *)(i + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(i, (struct _KPRCB *)v24), v29 = 1, !IsThreadRankNonZero) )
      {
        v29 = *(_BYTE *)(i + 195);
      }
      **(_BYTE **)(v24 + 56) = v29;
      if ( *(_QWORD *)(v24 + 25016) )
      {
        v143 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( i != *(_QWORD *)(v24 + 24) )
          v143 = (unsigned int)v29;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v24 + 25016), v143, 0LL);
      }
      *(_QWORD *)(v24 + 16) = i;
      v30 = *(_QWORD *)(v24 + 25016);
      if ( v30 )
        *(_BYTE *)(v30 + 16) = i == *(_QWORD *)(v24 + 24);
      if ( *(_BYTE *)(i + 388) == 1 || (v28 & 4) != 0 )
        *(_DWORD *)(i + 132) = *(_DWORD *)(i + 132) - *(_DWORD *)(i + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(i + 388) = 3;
      v31 = *(unsigned __int8 *)(v24 + 35);
      v32 = *(_QWORD *)(v24 + 192);
      *(_BYTE *)(v24 + 11883) = 0;
      if ( (v31 & 1) != 0 )
        __fastfail(0x21u);
      v33 = v31 + 1;
      *(_BYTE *)(v24 + 35) = v33;
      if ( v33 == 1 )
        _interlockedbittestandreset64((volatile signed __int32 *)v32, *(unsigned __int8 *)(v24 + 209));
      _interlockedbittestandreset64((volatile signed __int32 *)(v32 + 16), *(unsigned __int8 *)(v24 + 209));
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 8), ~*(_QWORD *)(v24 + 24920));
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 48), 0LL);
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      if ( v35 )
      {
        if ( v34->NestingLevel <= 1u )
        {
          v144 = v35[5] - 1;
          v35[5] = v144;
          if ( !v144 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      v36 = *(_DWORD *)(i + 588);
      v37 = *(char *)(i + 195);
      *(_QWORD *)(i + 64) = 0LL;
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      if ( v39 )
      {
        if ( v38->NestingLevel <= 1u )
        {
          v145 = v39[5] - 1;
          v39[5] = v145;
          if ( !v145 )
            KiRemoveSystemWorkPriorityKick(v38);
        }
      }
      if ( v24 != a1 && *(_BYTE *)(v24 + 7) )
      {
        v40 = KeGetCurrentPrcb();
        LOBYTE(v39) = 2;
        ++v40->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v25, v39);
      }
      if ( (KiVelocityFlags & 2) != 0 && *(_QWORD *)(v24 + 25016) && *(_QWORD *)(a1 + 25016) && a1 != v24 && v37 >= 8 )
      {
        LOBYTE(v39) = 1;
        v146 = KiSetVpThreadSystemWork(a1, v39);
        v147 = **(_DWORD **)(v24 + 25016);
        if ( (v147 & 0x40000) != 0 && (unsigned __int8)v147 < v37 )
        {
          v5 = HvlpVirtualProcessorsIdentityMapped == 0;
          v148 = *(_QWORD *)(a1 + 25016);
          *(_DWORD *)(v148 + 12) = 2;
          v149 = *(unsigned int *)(v24 + 36);
          if ( v5 )
            LODWORD(v149) = (unsigned __int8)byte_1405766D1[2 * (unsigned int)v149] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v149] << 6);
          *(_DWORD *)(v148 + 8) = v149;
          __writemsr(0x400000C2u, (unsigned int)v149);
        }
        if ( v146 )
          KiSetVpThreadSystemWork(a1, 0LL);
      }
      if ( (xmmword_140572410 & 0x8000000) == 0 )
        return;
LABEL_347:
      v142 = v36;
LABEL_348:
      EtwTraceIdealProcessor(i, 1350LL, v150, v142);
      return;
    }
    if ( v19 )
      goto LABEL_136;
    v54 = *(_KTHREAD **)(v24 + 16);
    if ( !v54 )
      break;
    KiTryToUpdateVPBackingThreadPriority(*(_QWORD *)(v24 + 16), v24);
    if ( KiGroupSchedulingEnabled )
    {
      if ( KiEvaluateGroupSchedulingPreemption((struct _KPRCB *)v24, v54, i, &v152) )
        goto LABEL_201;
LABEL_173:
      v26 = v152;
      goto LABEL_136;
    }
    if ( *(_BYTE *)(i + 195) <= v54->Priority )
      goto LABEL_136;
LABEL_201:
    v54->Preempted = 1;
    v97 = 2;
    if ( v20 )
      v97 = 6;
    if ( (*(_BYTE *)(i + 2) & 4) == 0 || (v108 = KiIsThreadRankNonZero(i, (struct _KPRCB *)v24), v98 = 1, !v108) )
      v98 = *(_BYTE *)(i + 195);
    **(_BYTE **)(v24 + 56) = v98;
    if ( *(_QWORD *)(v24 + 25016) )
    {
      v123 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( i != *(_QWORD *)(v24 + 24) )
        v123 = (unsigned int)v98;
      KiSetSchedulerAssistPriority(*(_QWORD *)(v24 + 25016), v123, 0LL);
    }
    *(_QWORD *)(v24 + 16) = i;
    v99 = *(_QWORD *)(v24 + 25016);
    if ( v99 )
      *(_BYTE *)(v99 + 16) = i == *(_QWORD *)(v24 + 24);
    if ( *(_BYTE *)(i + 388) == 1 || (v97 & 4) != 0 )
      *(_DWORD *)(i + 132) = *(_DWORD *)(i + 132) - *(_DWORD *)(i + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(i + 388) = 3;
    KiEnterDeferredReadyState((__int64)v54);
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 48), 0LL);
    v100 = KeGetCurrentPrcb();
    v101 = v100->SchedulerAssist;
    if ( v101 )
    {
      if ( v100->NestingLevel <= 1u )
      {
        v124 = v101[5] - 1;
        v101[5] = v124;
        if ( !v124 )
          KiRemoveSystemWorkPriorityKick(v100);
      }
    }
    v102 = *(_DWORD *)(i + 588);
    v103 = *(char *)(i + 195);
    KiReleaseThreadLockSafe(i);
    KiHvEnlightenedGuestPriorityKick(a1, v24, v103);
    if ( (xmmword_140572410 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(i, 1350LL, v150, v102);
  }
  v55 = *(_QWORD *)(v24 + 8);
  if ( v55 == i )
  {
    KiUpdateVPBackingThreadPriority(i, v24, 0LL);
  }
  else if ( (*(_DWORD *)(v55 + 120) & 0x400000) != 0
         && (unsigned __int8)KiTryToAcquireThreadLock(*(_QWORD *)(v24 + 8), &v161) )
  {
    if ( (*(_DWORD *)(v55 + 120) & 0x400000) != 0 )
      KiUpdateVPBackingThreadPriority(v55, v24, 0LL);
    KiReleaseThreadLockSafe(v55);
  }
  if ( KiGroupSchedulingEnabled )
  {
    if ( KiEvaluateGroupSchedulingPreemption((struct _KPRCB *)v24, (_KTHREAD *)v55, i, &v152) )
    {
LABEL_104:
      if ( *(_BYTE *)(v55 + 388) == 2 )
        *(_BYTE *)(v55 + 565) = 1;
      v56 = 2;
      if ( v20 )
        v56 = 6;
      if ( (*(_BYTE *)(i + 2) & 4) == 0 || (v92 = KiIsThreadRankNonZero(i, (struct _KPRCB *)v24), v57 = 1, !v92) )
        v57 = *(_BYTE *)(i + 195);
      **(_BYTE **)(v24 + 56) = v57;
      if ( *(_QWORD *)(v24 + 25016) )
      {
        v135 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( i != *(_QWORD *)(v24 + 24) )
          v135 = (unsigned int)v57;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v24 + 25016), v135, 0LL);
      }
      *(_QWORD *)(v24 + 16) = i;
      v58 = *(_QWORD *)(v24 + 25016);
      if ( v58 )
        *(_BYTE *)(v58 + 16) = i == *(_QWORD *)(v24 + 24);
      if ( *(_BYTE *)(i + 388) == 1 || (v56 & 4) != 0 )
        *(_DWORD *)(i + 132) = *(_DWORD *)(i + 132) - *(_DWORD *)(i + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(i + 388) = 3;
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 48), 0LL);
      KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
      v36 = *(_DWORD *)(i + 588);
      v59 = *(char *)(i + 195);
      *(_QWORD *)(i + 64) = 0LL;
      v60 = KeGetCurrentPrcb();
      v61 = v60->SchedulerAssist;
      if ( v61 )
      {
        if ( v60->NestingLevel <= 1u )
        {
          v136 = v61[5] - 1;
          v61[5] = v136;
          if ( !v136 )
            KiRemoveSystemWorkPriorityKick(v60);
        }
      }
      if ( a1 != v24 )
      {
        v62 = KeGetCurrentPrcb();
        LOBYTE(v61) = 2;
        ++v62->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v25, v61);
        if ( (KiVelocityFlags & 2) != 0 && *(_QWORD *)(v24 + 25016) && *(_QWORD *)(a1 + 25016) && v59 >= 8 )
        {
          LOBYTE(v63) = 1;
          v137 = KiSetVpThreadSystemWork(a1, v63);
          v138 = **(_DWORD **)(v24 + 25016);
          if ( (v138 & 0x40000) != 0 && (unsigned __int8)v138 < v59 )
          {
            v5 = HvlpVirtualProcessorsIdentityMapped == 0;
            v139 = *(_QWORD *)(a1 + 25016);
            *(_DWORD *)(v139 + 12) = 2;
            v140 = *(unsigned int *)(v24 + 36);
            if ( v5 )
              LODWORD(v140) = (unsigned __int8)byte_1405766D1[2 * (unsigned int)v140] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v140] << 6);
            *(_DWORD *)(v139 + 8) = v140;
            __writemsr(0x400000C2u, (unsigned int)v140);
          }
          if ( v137 )
            KiSetVpThreadSystemWork(a1, 0LL);
        }
      }
      if ( (xmmword_140572410 & 0x8000000) != 0 )
        goto LABEL_347;
      return;
    }
    goto LABEL_173;
  }
  if ( *(_BYTE *)(i + 195) > *(_BYTE *)(v55 + 195) )
    goto LABEL_104;
LABEL_136:
  v68 = v26;
  if ( !v20 )
  {
    v26 = v152;
    *(_DWORD *)(i + 436) = MEMORY[0xFFFFF78000000320];
  }
  if ( !v26 )
  {
    v68 = *(_QWORD *)(i + 104);
    if ( v68 )
      v68 += *(unsigned int *)(v24 + 216);
  }
  v69 = *(_QWORD *)(v24 + 25016);
  if ( v69 )
    *(_BYTE *)(v69 + 16) = 0;
  *(_BYTE *)(i + 388) = 1;
  v160 = 0;
  if ( v68
    && (*(_DWORD *)(i + 120) & 0xC00) == 0
    && (unsigned int)KiGetThreadEffectiveRankNonZero(i, v68, p_AbPropagateBoostsList, 0, &v160) )
  {
    KiAddThreadToScbQueue(v24, v95, i, v162);
    goto LABEL_156;
  }
  v70 = *(_DWORD *)(i + 120);
  v71 = *(char *)(i + 195);
  if ( (v70 & 0x400000) != 0 )
  {
    _InterlockedOr(*(volatile signed __int32 **)(i + 1520), 0x40000u);
    v70 = *(_DWORD *)(i + 120);
  }
  v72 = *(_QWORD *)(v24 + 24896);
  if ( (v70 & 0x2000) != 0 && v72 && (v72 & *(_QWORD *)(i + 576)) == v72 && !v160 )
  {
    v73 = *(_QWORD *)(v24 + 24904);
    v74 = KeGetCurrentPrcb();
    v75 = (_QWORD *)(v73 + 16 * (v71 + 1));
    v158[0] = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)v74, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v73, 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)v74, 0);
      do
        KeYieldProcessorEx(v158);
      while ( *(_QWORD *)v73 );
    }
    v76 = (_QWORD *)(i + 216);
    if ( !v162 )
    {
      v77 = (_QWORD *)v75[1];
      if ( (_QWORD *)*v77 == v75 )
      {
        *v76 = v75;
        *(_QWORD *)(i + 224) = v77;
        *v77 = v76;
        v75[1] = v76;
        goto LABEL_155;
      }
LABEL_323:
      __fastfail(3u);
    }
    v96 = *v75;
    if ( *(_QWORD **)(*v75 + 8LL) != v75 )
      goto LABEL_323;
    *v76 = v96;
    *(_QWORD *)(i + 224) = v75;
    *(_QWORD *)(v96 + 8) = v76;
    *v75 = v76;
    _bittestandreset((signed __int32 *)(v24 + 22812), v71);
LABEL_155:
    *(_DWORD *)(v73 + 8) |= 1 << v71;
    *(_DWORD *)(i + 536) |= 0x80000000;
    ++*(_DWORD *)(v73 + 608);
    v78 = *(unsigned int *)(i + 84);
    *(_DWORD *)(i + 2032) = v78;
    *(_QWORD *)(v73 + 616) += v78;
    _InterlockedAnd64((volatile signed __int64 *)v73, 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  }
  else
  {
    v85 = (_QWORD *)(i + 216);
    v86 = (_QWORD *)(v24 + 16 * (v71 + 1432));
    if ( v162 )
    {
      v109 = *v86;
      if ( *(_QWORD **)(*v86 + 8LL) != v86 )
        goto LABEL_323;
      *v85 = v109;
      *(_QWORD *)(i + 224) = v86;
      *(_QWORD *)(v109 + 8) = v85;
      *v86 = v85;
      _bittestandset((signed __int32 *)(v24 + 22812), v71);
    }
    else
    {
      v87 = (_QWORD *)v86[1];
      if ( (_QWORD *)*v87 != v86 )
        goto LABEL_323;
      *v85 = v86;
      *(_QWORD *)(i + 224) = v87;
      *v87 = v85;
      v86[1] = v85;
    }
    v88 = *(_DWORD *)(v24 + 22808);
    ++*(_DWORD *)(v24 + 23476);
    *(_DWORD *)(v24 + 22808) = v88 | (1 << v71);
    v89 = *(unsigned int *)(i + 84);
    *(_DWORD *)(i + 2032) = v89;
    *(_QWORD *)(v24 + 23480) += v89;
  }
LABEL_156:
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 48), 0LL);
  KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  v79 = *(_DWORD *)(i + 588);
  *(_QWORD *)(i + 64) = 0LL;
  v80 = KeGetCurrentPrcb();
  v81 = v80->SchedulerAssist;
  if ( v81 )
  {
    if ( v80->NestingLevel <= 1u )
    {
      v141 = v81[5] - 1;
      v81[5] = v141;
      if ( !v141 )
        KiRemoveSystemWorkPriorityKick(v80);
    }
  }
  if ( (xmmword_140572410 & 0x8000000) != 0 )
  {
    v142 = v79;
    goto LABEL_348;
  }
}
