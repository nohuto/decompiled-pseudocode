/*
 * XREFs of KiDeferredReadyThread @ 0x1400C32D0
 * Callers:
 *     KiSearchForNewThread @ 0x140056AE0 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x14005B570 (KeClearSystemPriority.c)
 *     KiFastReadyThread @ 0x1400A2B98 (KiFastReadyThread.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiReadyThread @ 0x1400C5040 (KiReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5170 (KiDirectSwitchThread.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KeSetPriorityBoost @ 0x1400CEF60 (KeSetPriorityBoost.c)
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400F3B18 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiComputeThreadAffinity @ 0x14008A420 (KiComputeThreadAffinity.c)
 *     KiChooseTargetProcessor @ 0x1400C4310 (KiChooseTargetProcessor.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400C60C0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1400CFE18 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1400D0D74 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400D0EC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1400D0F10 (KiComputeNewPriority.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400D15A0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiPrcbInGroupAffinity @ 0x1400D57B4 (KiPrcbInGroupAffinity.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400D796C (KiSetBasePriorityAndClearDecrement.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     KiTryToAcquireThreadLock @ 0x1401151F0 (KiTryToAcquireThreadLock.c)
 *     KiAddThreadToScbQueue @ 0x140117004 (KiAddThreadToScbQueue.c)
 *     KiSetLockOwnershipQuantum @ 0x1401175B0 (KiSetLockOwnershipQuantum.c)
 *     KiScheduleNextForegroundBoost @ 0x140122A2C (KiScheduleNextForegroundBoost.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x140129D50 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1401B4B10 (KiReadGuestSchedulerAssistPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiHeteroChooseTargetProcessor @ 0x14029887C (KiHeteroChooseTargetProcessor.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 *     KiSetVpThreadSystemWork @ 0x140299950 (KiSetVpThreadSystemWork.c)
 *     KiIsThreadRankBiased @ 0x14029B8A0 (KiIsThreadRankBiased.c)
 *     EtwTraceIdealProcessor @ 0x14030FFFC (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiDeferredReadyThread(__int64 a1, __int64 a2, __int64 p_AbPropagateBoostsList, unsigned __int64 a4)
{
  __int64 i; // rbx
  unsigned __int64 v5; // r15
  char v6; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  unsigned int GuestSchedulerAssistPriority; // edi
  char v13; // al
  char v14; // r14
  char v15; // al
  char v16; // al
  char v17; // di
  unsigned __int8 v18; // di
  unsigned int v19; // eax
  char v20; // si
  unsigned __int8 v21; // cl
  char v22; // al
  unsigned int v23; // eax
  char v24; // dl
  struct _KPRCB *v25; // rcx
  _QWORD *v26; // rdx
  char v27; // r10
  char v28; // dl
  char v29; // cl
  char v30; // si
  int v31; // eax
  struct _KPRCB *v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  bool v35; // r12
  int v36; // r11d
  int v37; // esi
  char v38; // cl
  struct _KPRCB *v39; // rcx
  _QWORD *v40; // rdx
  int v41; // eax
  char v42; // r14
  unsigned __int8 v43; // r13
  unsigned __int16 v44; // dx
  unsigned __int64 v45; // rcx
  int v46; // r10d
  __int64 v47; // rsi
  struct _KPRCB *v48; // rdi
  int v49; // eax
  __int64 v50; // rdx
  _DWORD *v51; // rcx
  int v52; // eax
  _DWORD *v53; // rcx
  int v54; // eax
  unsigned int v55; // r15d
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // r14
  __int64 v59; // r8
  unsigned __int64 v60; // r8
  struct _KPRCB *v61; // rcx
  _DWORD *v62; // rdx
  int v63; // eax
  unsigned int v64; // r15d
  unsigned int v65; // edi
  __int64 v66; // r14
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned __int64 v70; // rcx
  struct _KPRCB *v71; // rdi
  _DWORD *v72; // rcx
  int v73; // eax
  _DWORD *v74; // rcx
  int v75; // eax
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rdx
  int v79; // ecx
  __int64 v80; // r8
  __int64 v81; // r10
  __int64 v82; // r10
  __int64 result; // rax
  __int64 v84; // r14
  __int64 v85; // r8
  struct _KPRCB *v86; // rcx
  _DWORD *v87; // rdx
  unsigned int v88; // r14d
  int v89; // edi
  struct _KPRCB *v90; // rcx
  _DWORD *v91; // rdx
  __int64 v92; // r13
  struct _KPRCB *v93; // rax
  _DWORD *v94; // rdx
  bool v95; // zf
  int v96; // eax
  __int64 v97; // r12
  __int64 v98; // rcx
  __int64 v99; // rdi
  struct _KPRCB *v100; // r14
  _QWORD *v101; // r15
  _DWORD *v102; // rcx
  int v103; // eax
  _DWORD *v104; // rcx
  int v105; // eax
  _QWORD *v106; // rax
  __int64 v107; // rcx
  _QWORD *v108; // rcx
  struct _KPRCB *v109; // rcx
  _DWORD *v110; // rdx
  _QWORD *v111; // rcx
  _QWORD *v112; // rax
  __int64 v113; // rdx
  _QWORD *v114; // rdx
  int v115; // eax
  struct _KPRCB *v116; // rcx
  _DWORD *v117; // rdx
  unsigned int v118; // edi
  struct _KPRCB *v119; // rcx
  _DWORD *v120; // rdx
  __int64 v121; // r9
  __int64 v122; // rax
  __int64 v123; // r8
  int v124; // eax
  __int64 v125; // rcx
  int v126; // eax
  struct _KPRCB *v127; // rcx
  _DWORD *v128; // rdx
  int v129; // eax
  struct _KPRCB *v130; // rcx
  int v131; // eax
  struct _KPRCB *v132; // rax
  char v133; // r8
  int v134; // edx
  __int64 v135; // rdx
  __int64 v136; // rcx
  unsigned int v137; // [rsp+30h] [rbp-50h]
  BOOL v138; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v139; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v140; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int16 v141; // [rsp+48h] [rbp-38h]
  int v142; // [rsp+50h] [rbp-30h] BYREF
  int v143; // [rsp+54h] [rbp-2Ch] BYREF
  int v144; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v145[7]; // [rsp+5Ch] [rbp-24h] BYREF
  char v147; // [rsp+C8h] [rbp+48h] BYREF
  char v148; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v149; // [rsp+D8h] [rbp+58h]

  for ( i = a2; ; i = v58 )
  {
    v5 = *(_QWORD *)(i + 72);
    v95 = *(_BYTE *)(i + 566) == 1;
    v149 = 0;
    if ( v95 )
      v6 = *(_BYTE *)(i + 567);
    else
      v6 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    v142 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v9 = SchedulerAssist[5];
          SchedulerAssist[5] = v9 + 1;
          if ( v9 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(i + 64), 0LL) )
        break;
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v11 = v10[5] - 1;
          v10[5] = v11;
          if ( !v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v142, a2, p_AbPropagateBoostsList);
      while ( *(_QWORD *)(i + 64) );
    }
    if ( (*(_DWORD *)(i + 120) & 0x400000) != 0 )
    {
      GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(i);
      v13 = *(_BYTE *)(i + 195);
      if ( (*(_BYTE *)(i + 564) & 0xF0) != 0 )
      {
        if ( (int)GuestSchedulerAssistPriority > v13 )
          goto LABEL_22;
      }
      else if ( GuestSchedulerAssistPriority != v13 )
      {
LABEL_22:
        KiSetBasePriorityAndClearDecrement(i, 0LL, 0LL);
        KiUpdateThreadPriority(0LL, i, GuestSchedulerAssistPriority, 0LL);
      }
      v14 = 1;
      goto LABEL_25;
    }
    v14 = 0;
LABEL_25:
    v15 = *(_BYTE *)(i + 566);
    if ( !v15 )
    {
      if ( v5 < *(_QWORD *)(i + 32) )
      {
        v149 = *(unsigned __int8 *)(i + 565);
        goto LABEL_93;
      }
      LOBYTE(a2) = 1;
      v16 = KiComputeNewPriority(i, a2);
      if ( !v14 )
        KiUpdateThreadPriority(0LL, i, (unsigned int)v16, 0LL);
      KiTryScheduleNextForegroundBoost(i);
      goto LABEL_90;
    }
    if ( *(char *)(i + 195) < 16 )
    {
      v18 = 0;
      v19 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(i + 436);
      if ( v5 >= *(_QWORD *)(i + 32) )
      {
        v18 = 4;
        if ( v19 < 2 )
          v18 = 5;
      }
      if ( v18 >= 4u || *(char *)(i + 563) >= 14 || !*(_BYTE *)(i + 564) && v19 >= 2 )
      {
        v20 = *(_BYTE *)(i + 195);
        v18 |= 8u;
        if ( v20 < 16 )
        {
          v21 = *(_BYTE *)(i + 564);
          v22 = v20 - (v21 >> 4) - (v21 & 0xF) - 1;
          v20 = *(_BYTE *)(i + 563);
          if ( v22 >= v20 )
            v20 = v22;
          if ( v21 )
          {
            if ( (v21 & 0xF) != 0 )
              *(_DWORD *)(i + 1424) = MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(i + 564) = 0;
          }
          v23 = *(_DWORD *)(i + 1408);
          if ( v23 )
          {
            _BitScanReverse((unsigned int *)&p_AbPropagateBoostsList, v23);
            v24 = v20;
            if ( v20 < (int)p_AbPropagateBoostsList )
              v24 = p_AbPropagateBoostsList;
            v145[1] = p_AbPropagateBoostsList;
            v20 = v24;
          }
        }
        if ( !v14 )
        {
          v25 = KeGetCurrentPrcb();
          if ( v20 > *(char *)(i + 195) )
          {
            if ( *(_BYTE *)(i + 793) )
            {
              v26 = (_QWORD *)(i + 1376);
              if ( *(_QWORD *)(i + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = (__int64)&v25->AbPropagateBoostsList;
                if ( v25 != (struct _KPRCB *)-25720LL )
                {
                  *v26 = *(_QWORD *)p_AbPropagateBoostsList;
                  *(_QWORD *)p_AbPropagateBoostsList = v26;
                  _InterlockedIncrement16((volatile signed __int16 *)(i + 1420));
                  KiAbQueueAutoBoostDpc(v25);
                }
              }
            }
          }
          v95 = (*(_DWORD *)(i + 120) & 0x400000) == 0;
          *(_BYTE *)(i + 195) = v20;
          if ( !v95 )
          {
            LOBYTE(p_AbPropagateBoostsList) = 1;
            KiSetSchedulerAssistPriority(*(_QWORD *)(i + 1512), (unsigned int)v20, p_AbPropagateBoostsList, a4);
          }
        }
      }
      if ( *(_BYTE *)(*(_QWORD *)(i + 544) + 1466LL) == 2 )
        v18 |= 2u;
      if ( (v18 & 1) != 0 )
        goto LABEL_67;
      if ( (*(_DWORD *)(i + 120) & 8) != 0 )
        goto LABEL_67;
      v27 = *(_BYTE *)(i + 195);
      if ( v27 <= 0 )
        goto LABEL_67;
      p_AbPropagateBoostsList = *(unsigned __int8 *)(i + 564);
      if ( (_BYTE)p_AbPropagateBoostsList )
      {
        if ( (p_AbPropagateBoostsList & 0xF0) != 0 || (v28 = v18 >> 1, (v18 & 2) == 0) )
        {
LABEL_67:
          if ( (v18 & 6) == 6 && (*(_DWORD *)(i + 120) & 8) == 0 && *(char *)(i + 195) > 0 )
            KiScheduleNextForegroundBoost(i);
LABEL_71:
          v15 = *(_BYTE *)(i + 566);
          v17 = v18 >> 3;
          goto LABEL_72;
        }
      }
      else
      {
        v28 = v18 >> 1;
      }
      v36 = *(char *)(i + 563);
      a4 = (unsigned int)(v36 + v6);
      v37 = v36 + v6;
      if ( (v28 & 1) != 0 )
        v37 += SBYTE6(Mm64BitPhysicalAddress);
      if ( v37 >= 16 )
        v37 = 15;
      if ( v37 > v27 )
      {
        v38 = 0;
        if ( v37 > (int)a4 )
          v38 = v37 - v36 - v6;
        *(_BYTE *)(i + 564) = p_AbPropagateBoostsList ^ (v38 ^ p_AbPropagateBoostsList) & 0xF;
        v39 = KeGetCurrentPrcb();
        if ( (char)v37 > v27 )
        {
          if ( *(_BYTE *)(i + 793) )
          {
            v40 = (_QWORD *)(i + 1376);
            if ( *(_QWORD *)(i + 1376) == 1LL )
            {
              p_AbPropagateBoostsList = (__int64)&v39->AbPropagateBoostsList;
              if ( v39 != (struct _KPRCB *)-25720LL )
              {
                *v40 = *(_QWORD *)p_AbPropagateBoostsList;
                *(_QWORD *)p_AbPropagateBoostsList = v40;
                _InterlockedIncrement16((volatile signed __int16 *)(i + 1420));
                KiAbQueueAutoBoostDpc(v39);
              }
            }
          }
        }
        v41 = *(_DWORD *)(i + 120);
        *(_BYTE *)(i + 195) = v37;
        if ( (v41 & 0x400000) != 0 )
        {
          LOBYTE(p_AbPropagateBoostsList) = 1;
          KiSetSchedulerAssistPriority(*(_QWORD *)(i + 1512), (unsigned int)(char)v37, p_AbPropagateBoostsList, a4);
        }
      }
      goto LABEL_71;
    }
    v17 = 1;
LABEL_72:
    if ( v15 != 2 )
      goto LABEL_89;
    p_AbPropagateBoostsList = *(unsigned __int8 *)(i + 195);
    if ( (char)p_AbPropagateBoostsList > 0 )
    {
      v29 = *(_BYTE *)(i + 567);
      if ( (char)p_AbPropagateBoostsList < v29 && (char)p_AbPropagateBoostsList < 13 && (*(_DWORD *)(i + 120) & 8) == 0 )
      {
        v30 = 13;
        if ( v29 < 13 )
          v30 = *(_BYTE *)(i + 567);
        v31 = *(_DWORD *)(i + 120);
        *(_BYTE *)(i + 564) += 16 * (v30 - p_AbPropagateBoostsList);
        v32 = KeGetCurrentPrcb();
        if ( v30 > (char)p_AbPropagateBoostsList )
        {
          if ( *(_BYTE *)(i + 793) )
          {
            p_AbPropagateBoostsList = i + 1376;
            if ( *(_QWORD *)(i + 1376) == 1LL )
            {
              a4 = (unsigned __int64)&v32->AbPropagateBoostsList;
              if ( v32 != (struct _KPRCB *)-25720LL )
              {
                *(_QWORD *)p_AbPropagateBoostsList = *(_QWORD *)a4;
                *(_QWORD *)a4 = p_AbPropagateBoostsList;
                _InterlockedIncrement16((volatile signed __int16 *)(i + 1420));
                KiAbQueueAutoBoostDpc(v32);
                v31 = *(_DWORD *)(i + 120);
              }
            }
          }
        }
        *(_BYTE *)(i + 195) = v30;
        if ( (v31 & 0x400000) != 0 )
        {
          LOBYTE(p_AbPropagateBoostsList) = 1;
          KiSetSchedulerAssistPriority(*(_QWORD *)(i + 1512), (unsigned int)v30, p_AbPropagateBoostsList, a4);
        }
        v33 = *(_QWORD *)(i + 32);
        if ( v5 > v33 || v33 - v5 < (unsigned int)KiLockQuantumTarget )
          *(_QWORD *)(i + 32) = v5 + (unsigned int)KiLockQuantumTarget;
LABEL_89:
        if ( !v17 )
          goto LABEL_93;
        goto LABEL_90;
      }
    }
    if ( !v17 )
    {
      KiSetLockOwnershipQuantum(i, v5);
      goto LABEL_93;
    }
LABEL_90:
    v34 = v5 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(i + 651);
    if ( (*(_DWORD *)(i + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(i + 120), 5u);
    *(_QWORD *)(i + 32) = v34;
LABEL_93:
    v95 = *(_DWORD *)(i + 484) == 0;
    v137 = *(_DWORD *)(i + 588);
    *(_WORD *)(i + 565) = 0;
    v35 = !v95 || *(_BYTE *)(i + 390) == 1;
    v42 = 0;
    v43 = _bittestandreset((signed __int32 *)(i + 116), 1u);
    if ( *(_QWORD *)(i + 568) != KiCpuSetSequence && (*(_DWORD *)(i + 116) & 8) == 0 )
      KiComputeThreadAffinity(i);
    v44 = *(_WORD *)(i + 584);
    v45 = *(_QWORD *)(i + 576);
    v141 = v44;
    v140 = v45;
    if ( !KiForceIdleDisabled )
    {
      if ( KiForceIdleState == 4 )
      {
        v66 = *(unsigned int *)(i + 536);
        LODWORD(v66) = v66 & 0x7FFFFFFF;
        v47 = KiProcessorBlock[v66];
        if ( !(unsigned int)KiPrcbInGroupAffinity(v47, &v140) )
        {
          _BitScanReverse64(&v70, v140);
          v145[3] = v70;
          v66 = *(unsigned int *)(v69 + 4LL * ((unsigned int)v70 + (v141 << 6)) + 5533504);
          v47 = *(_QWORD *)(v69 + 8 * v66 + 5520704);
        }
        v71 = KeGetCurrentPrcb();
        v144 = 0;
        while ( 1 )
        {
          v72 = v71->SchedulerAssist;
          if ( v72 )
          {
            if ( v71->NestingLevel <= 1u )
            {
              v73 = v72[5];
              v72[5] = v73 + 1;
              if ( v73 == -1 )
                KiRemoveSystemWorkPriorityKick(v71);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v47 + 48), 0LL) )
            break;
          v74 = v71->SchedulerAssist;
          if ( v74 )
          {
            if ( v71->NestingLevel <= 1u )
            {
              v75 = v74[5] - 1;
              v74[5] = v75;
              if ( !v75 )
                KiRemoveSystemWorkPriorityKick(v71);
            }
          }
          do
            KeYieldProcessorEx(&v144, v67, v68);
          while ( *(_QWORD *)(v47 + 48) );
        }
        *(_DWORD *)(i + 536) = v66;
        v76 = *(_QWORD *)(i + 104);
        if ( v76 )
          v76 += *(unsigned int *)(v47 + 216);
        v139 = v76;
LABEL_185:
        if ( !v43 )
          *(_DWORD *)(i + 436) = MEMORY[0xFFFFF78000000320];
        v77 = *(_QWORD *)(v47 + 25016);
        if ( v77 )
          *(_BYTE *)(v77 + 16) = 0;
        KiSetThreadState(i, 1LL);
        v147 = 0;
        if ( v81
          && (*(_DWORD *)(i + 120) & 0xC00) == 0
          && (unsigned int)KiGetThreadEffectiveRankNonZero(v79, v81, v80, 0, (__int64)&v147) )
        {
          result = KiAddThreadToScbQueue(v47, v82, i, v149);
          goto LABEL_254;
        }
        v96 = *(_DWORD *)(i + 120);
        v97 = *(char *)(i + 195);
        if ( (v96 & 0x400000) != 0 )
        {
          _InterlockedOr(*(volatile signed __int32 **)(i + 1512), 0x40000u);
          v96 = *(_DWORD *)(i + 120);
        }
        v98 = *(_QWORD *)(v47 + 24896);
        if ( (v96 & 0x2000) != 0 && v98 && (v98 & *(_QWORD *)(i + 576)) == v98 && !v147 )
        {
          v99 = *(_QWORD *)(v47 + 24904);
          v100 = KeGetCurrentPrcb();
          v101 = (_QWORD *)(v99 + 16 * (v97 + 1));
          v145[0] = 0;
          while ( 1 )
          {
            v102 = v100->SchedulerAssist;
            if ( v102 )
            {
              if ( v100->NestingLevel <= 1u )
              {
                v103 = v102[5];
                v102[5] = v103 + 1;
                if ( v103 == -1 )
                  KiRemoveSystemWorkPriorityKick(v100);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)v99, 0LL) )
              break;
            v104 = v100->SchedulerAssist;
            if ( v104 )
            {
              if ( v100->NestingLevel <= 1u )
              {
                v105 = v104[5] - 1;
                v104[5] = v105;
                if ( !v105 )
                  KiRemoveSystemWorkPriorityKick(v100);
              }
            }
            do
              KeYieldProcessorEx(v145, v78, v80);
            while ( *(_QWORD *)v99 );
          }
          v106 = (_QWORD *)(i + 216);
          if ( v149 )
          {
            v107 = *v101;
            if ( *(_QWORD **)(*v101 + 8LL) == v101 )
            {
              *v106 = v107;
              *(_QWORD *)(i + 224) = v101;
              *(_QWORD *)(v107 + 8) = v106;
              *v101 = v106;
              _bittestandreset((signed __int32 *)(v47 + 22812), v97);
LABEL_243:
              *(_DWORD *)(v99 + 8) |= 1 << v97;
              *(_DWORD *)(i + 536) |= 0x80000000;
              ++*(_DWORD *)(v99 + 608);
              result = *(unsigned int *)(i + 84);
              *(_DWORD *)(i + 2016) = result;
              *(_QWORD *)(v99 + 616) += result;
              _InterlockedAnd64((volatile signed __int64 *)v99, 0LL);
              v109 = KeGetCurrentPrcb();
              v110 = v109->SchedulerAssist;
              if ( v110 )
              {
                if ( v109->NestingLevel <= 1u )
                {
                  result = (unsigned int)(v110[5] - 1);
                  v110[5] = result;
                  if ( !(_DWORD)result )
                    result = KiRemoveSystemWorkPriorityKick(v109);
                }
              }
LABEL_254:
              _InterlockedAnd64((volatile signed __int64 *)(v47 + 48), 0LL);
              v116 = KeGetCurrentPrcb();
              v117 = v116->SchedulerAssist;
              if ( v117 )
              {
                if ( v116->NestingLevel <= 1u )
                {
                  result = (unsigned int)(v117[5] - 1);
                  v117[5] = result;
                  if ( !(_DWORD)result )
                    result = KiRemoveSystemWorkPriorityKick(v116);
                }
              }
              v118 = *(_DWORD *)(i + 588);
              *(_QWORD *)(i + 64) = 0LL;
              v119 = KeGetCurrentPrcb();
              v120 = v119->SchedulerAssist;
              if ( v120 )
              {
                if ( v119->NestingLevel <= 1u )
                {
                  result = (unsigned int)(v120[5] - 1);
                  v120[5] = result;
                  if ( !(_DWORD)result )
                    result = KiRemoveSystemWorkPriorityKick(v119);
                }
              }
              if ( (xmmword_140542350 & 0x8000000) != 0 )
              {
                v121 = v118;
                return EtwTraceIdealProcessor(i, 1350LL, v137, v121);
              }
              return result;
            }
          }
          else
          {
            v108 = (_QWORD *)v101[1];
            if ( (_QWORD *)*v108 == v101 )
            {
              *v106 = v101;
              *(_QWORD *)(i + 224) = v108;
              *v108 = v106;
              v101[1] = v106;
              goto LABEL_243;
            }
          }
LABEL_251:
          __fastfail(3u);
        }
        v111 = (_QWORD *)(i + 216);
        v112 = (_QWORD *)(v47 + 16 * (v97 + 1432));
        if ( v149 )
        {
          v113 = *v112;
          if ( *(_QWORD **)(*v112 + 8LL) != v112 )
            goto LABEL_251;
          *v111 = v113;
          *(_QWORD *)(i + 224) = v112;
          *(_QWORD *)(v113 + 8) = v111;
          *v112 = v111;
          _bittestandset((signed __int32 *)(v47 + 22812), v97);
        }
        else
        {
          v114 = (_QWORD *)v112[1];
          if ( (_QWORD *)*v114 != v112 )
            goto LABEL_251;
          *v111 = v112;
          *(_QWORD *)(i + 224) = v114;
          *v114 = v111;
          v112[1] = v111;
        }
        v115 = *(_DWORD *)(v47 + 22808);
        ++*(_DWORD *)(v47 + 23476);
        *(_DWORD *)(v47 + 22808) = v115 | (1 << v97);
        result = *(unsigned int *)(i + 84);
        *(_DWORD *)(i + 2016) = result;
        *(_QWORD *)(v47 + 23480) += result;
        goto LABEL_254;
      }
      v44 = v141;
      v45 = v140;
    }
    if ( ((v45 - 1) & v45) != 0 )
    {
      if ( *(_BYTE *)(i + 125) )
      {
        v47 = KiHeteroChooseTargetProcessor(a1, i, &v140, &v138);
      }
      else
      {
        v46 = a1;
        v42 = KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(i, a1) && !v35;
        v47 = KiChooseTargetProcessor(v46, i, (unsigned int)&v140, (unsigned int)&v138, v42);
      }
    }
    else
    {
      v48 = KeGetCurrentPrcb();
      v49 = v44;
      v50 = 0x140000000uLL;
      _BitScanReverse64(&v45, v45);
      v145[2] = v45;
      v143 = 0;
      v47 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v45 + (v49 << 6))]];
      while ( 1 )
      {
        v51 = v48->SchedulerAssist;
        if ( v51 )
        {
          if ( v48->NestingLevel <= 1u )
          {
            v52 = v51[5];
            v51[5] = v52 + 1;
            if ( v52 == -1 )
              KiRemoveSystemWorkPriorityKick(v48);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v47 + 48), 0LL) )
          break;
        v53 = v48->SchedulerAssist;
        if ( v53 )
        {
          if ( v48->NestingLevel <= 1u )
          {
            v54 = v53[5] - 1;
            v53[5] = v54;
            if ( !v54 )
              KiRemoveSystemWorkPriorityKick(v48);
          }
        }
        do
          KeYieldProcessorEx(&v143, v50, p_AbPropagateBoostsList);
        while ( *(_QWORD *)(v47 + 48) );
      }
      v138 = (*(_BYTE *)(v47 + 35) & 1) == 0;
    }
    v55 = *(_DWORD *)(v47 + 36);
    *(_DWORD *)(i + 536) = v55;
    v56 = *(_QWORD *)(i + 104);
    if ( v56 )
      v56 += *(unsigned int *)(v47 + 216);
    v139 = v56;
    if ( v56 )
    {
      v57 = v56;
      while ( (*(_BYTE *)(v57 + 112) & 2) == 0 )
      {
        v57 = *(_QWORD *)(v57 + 408);
        if ( !v57 )
          goto LABEL_150;
      }
      if ( !v35 )
        goto LABEL_185;
    }
LABEL_150:
    if ( v138 )
      break;
    if ( v42 )
      goto LABEL_185;
    v58 = *(_QWORD *)(v47 + 16);
    if ( !v58 )
    {
      v84 = *(_QWORD *)(v47 + 8);
      if ( v84 == i )
      {
        KiUpdateVPBackingThreadPriority(i, v47, 0LL);
      }
      else if ( (*(_DWORD *)(v84 + 120) & 0x400000) != 0
             && (unsigned __int8)KiTryToAcquireThreadLock(*(_QWORD *)(v47 + 8), &v148) )
      {
        if ( (*(_DWORD *)(v84 + 120) & 0x400000) != 0 )
          KiUpdateVPBackingThreadPriority(v84, v47, 0LL);
        KiReleaseThreadLockSafe(v84);
      }
      if ( KiGroupSchedulingEnabled )
      {
        if ( !(unsigned __int8)KiEvaluateGroupSchedulingPreemption(v47, v84, i, &v139) )
          goto LABEL_185;
      }
      else if ( *(_BYTE *)(i + 195) <= *(_BYTE *)(v84 + 195) )
      {
        goto LABEL_185;
      }
      if ( *(_BYTE *)(v84 + 388) == 2 )
        *(_BYTE *)(v84 + 565) = 1;
      v85 = 2LL;
      if ( v43 )
        v85 = 6LL;
      result = KiUpdatePriorityMatrixThreadState(v47, i, v85, 3LL);
      _InterlockedAnd64((volatile signed __int64 *)(v47 + 48), 0LL);
      v86 = KeGetCurrentPrcb();
      v87 = v86->SchedulerAssist;
      if ( v87 )
      {
        if ( v86->NestingLevel <= 1u )
        {
          result = (unsigned int)(v87[5] - 1);
          v87[5] = result;
          if ( !(_DWORD)result )
            result = KiRemoveSystemWorkPriorityKick(v86);
        }
      }
      v88 = *(_DWORD *)(i + 588);
      v89 = *(char *)(i + 195);
      *(_QWORD *)(i + 64) = 0LL;
      v90 = KeGetCurrentPrcb();
      v91 = v90->SchedulerAssist;
      if ( v91 )
      {
        if ( v90->NestingLevel <= 1u )
        {
          result = (unsigned int)(v91[5] - 1);
          v91[5] = result;
          if ( !(_DWORD)result )
            result = KiRemoveSystemWorkPriorityKick(v90);
        }
      }
      v92 = a1;
      if ( a1 != v47 )
      {
        v93 = KeGetCurrentPrcb();
        LOBYTE(v91) = 2;
        ++v93->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v55, v91);
        result = (unsigned int)KiVelocityFlags;
        if ( (KiVelocityFlags & 2) != 0 )
        {
          if ( *(_QWORD *)(v47 + 25016) )
          {
            v95 = *(_QWORD *)(a1 + 25016) == 0LL;
            goto LABEL_288;
          }
        }
      }
      goto LABEL_297;
    }
    KiTryToUpdateVPBackingThreadPriority(*(_QWORD *)(v47 + 16), v47);
    if ( KiGroupSchedulingEnabled )
    {
      if ( !(unsigned __int8)KiEvaluateGroupSchedulingPreemption(v47, v58, i, &v139) )
        goto LABEL_185;
    }
    else if ( *(_BYTE *)(i + 195) <= *(_BYTE *)(v58 + 195) )
    {
      goto LABEL_185;
    }
    *(_BYTE *)(v58 + 565) = 1;
    v59 = 2LL;
    if ( v43 )
      v59 = 6LL;
    KiUpdatePriorityMatrixThreadState(v47, i, v59, 3LL);
    if ( *(_BYTE *)(v58 + 388) == 1 )
      *(_DWORD *)(v58 + 116) |= 2u;
    KiSetThreadState(v58, 7LL);
    _InterlockedAnd64((volatile signed __int64 *)(v47 + 48), v60);
    v61 = KeGetCurrentPrcb();
    v62 = v61->SchedulerAssist;
    if ( v62 )
    {
      if ( v61->NestingLevel <= 1u )
      {
        v63 = v62[5] - 1;
        v62[5] = v63;
        if ( !v63 )
          KiRemoveSystemWorkPriorityKick(v61);
      }
    }
    v64 = *(_DWORD *)(i + 588);
    v65 = *(char *)(i + 195);
    KiReleaseThreadLockSafe(i);
    KiHvEnlightenedGuestPriorityKick(a1, v47, v65);
    if ( (xmmword_140542350 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(i, 1350LL, v137, v64);
  }
  v122 = *(_QWORD *)(v47 + 16);
  if ( v122 && v122 != *(_QWORD *)(v47 + 24) )
    __fastfail(0x1Eu);
  v123 = 2LL;
  if ( v43 )
    v123 = 6LL;
  KiUpdatePriorityMatrixThreadState(v47, i, v123, 3LL);
  v124 = *(unsigned __int8 *)(v47 + 35);
  v125 = *(_QWORD *)(v47 + 192);
  *(_BYTE *)(v47 + 11883) = 0;
  if ( (v124 & 1) != 0 )
    __fastfail(0x21u);
  v126 = v124 + 1;
  *(_BYTE *)(v47 + 35) = v126;
  if ( v126 == 1 )
    _interlockedbittestandreset64((volatile signed __int32 *)v125, *(unsigned __int8 *)(v47 + 209));
  _interlockedbittestandreset64((volatile signed __int32 *)(v125 + 16), *(unsigned __int8 *)(v47 + 209));
  _InterlockedAnd64((volatile signed __int64 *)(v125 + 8), ~*(_QWORD *)(v47 + 24920));
  _InterlockedAnd64((volatile signed __int64 *)(v47 + 48), 0LL);
  v127 = KeGetCurrentPrcb();
  v128 = v127->SchedulerAssist;
  if ( v128 )
  {
    if ( v127->NestingLevel <= 1u )
    {
      v129 = v128[5] - 1;
      v128[5] = v129;
      if ( !v129 )
        KiRemoveSystemWorkPriorityKick(v127);
    }
  }
  v88 = *(_DWORD *)(i + 588);
  v89 = *(char *)(i + 195);
  *(_QWORD *)(i + 64) = 0LL;
  v130 = KeGetCurrentPrcb();
  v94 = v130->SchedulerAssist;
  if ( v94 )
  {
    if ( v130->NestingLevel <= 1u )
    {
      v131 = v94[5] - 1;
      v94[5] = v131;
      if ( !v131 )
        KiRemoveSystemWorkPriorityKick(v130);
    }
  }
  v92 = a1;
  if ( v47 != a1 && *(_BYTE *)(v47 + 7) )
  {
    v132 = KeGetCurrentPrcb();
    LOBYTE(v94) = 2;
    ++v132->SynchCounters.IpiSendSoftwareInterruptCount;
    HalSendSoftwareInterrupt(v55, v94);
  }
  result = (unsigned int)KiVelocityFlags;
  if ( (KiVelocityFlags & 2) != 0 && *(_QWORD *)(v47 + 25016) && *(_QWORD *)(a1 + 25016) )
  {
    v95 = a1 == v47;
LABEL_288:
    if ( !v95 && v89 >= 8 )
    {
      LOBYTE(v94) = 1;
      result = KiSetVpThreadSystemWork(v92, v94);
      v133 = result;
      v134 = **(_DWORD **)(v47 + 25016);
      if ( (v134 & 0x40000) != 0 && (unsigned __int8)v134 < v89 )
      {
        v95 = HvlpVirtualProcessorsIdentityMapped == 0;
        v135 = *(_QWORD *)(v92 + 25016);
        *(_DWORD *)(v135 + 12) = 2;
        v136 = *(unsigned int *)(v47 + 36);
        if ( v95 )
          LODWORD(v136) = (unsigned __int8)byte_140546541[2 * (unsigned int)v136] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v136] << 6);
        *(_DWORD *)(v135 + 8) = v136;
        result = (unsigned int)v136;
        __writemsr(0x400000C2u, (unsigned int)v136);
      }
      if ( v133 )
        result = KiSetVpThreadSystemWork(v92, 0LL);
    }
  }
LABEL_297:
  if ( (xmmword_140542350 & 0x8000000) != 0 )
  {
    v121 = v88;
    return EtwTraceIdealProcessor(i, 1350LL, v137, v121);
  }
  return result;
}
