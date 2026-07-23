/*
 * XREFs of KiDirectSwitchThread @ 0x1400C5170
 * Callers:
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400D15A0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400D796C (KiSetBasePriorityAndClearDecrement.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     KiScheduleNextForegroundBoost @ 0x140122A2C (KiScheduleNextForegroundBoost.c)
 *     KiGetComparisonRanks @ 0x1401361A8 (KiGetComparisonRanks.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1401B4B10 (KiReadGuestSchedulerAssistPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiBeginCounterAccumulation @ 0x140295FFC (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140296160 (KiEndCounterAccumulation.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 *     KiSetVpThreadSystemWork @ 0x140299950 (KiSetVpThreadSystemWork.c)
 *     EtwTraceReadyThread @ 0x140310544 (EtwTraceReadyThread.c)
 */

bool __fastcall KiDirectSwitchThread(__int64 a1, unsigned int a2, char a3, unsigned __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // r13
  int v12; // r8d
  __int64 v13; // r10
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 *v18; // r14
  volatile signed __int32 *v19; // rbp
  __int64 *v20; // rcx
  __int64 **v21; // rax
  unsigned __int64 v22; // rax
  unsigned int v23; // r14d
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  char v27; // di
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // ecx
  unsigned int v32; // edx
  __int64 v33; // r10
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD *i; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rdi
  __int64 p_AbPropagateBoostsList; // r8
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // edx
  __int64 v47; // rax
  char v48; // al
  unsigned __int64 v49; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v51; // r12
  _DWORD *SchedulerAssist; // rcx
  int v53; // eax
  _DWORD *v54; // rcx
  int v55; // eax
  int v56; // eax
  unsigned int GuestSchedulerAssistPriority; // edi
  char v58; // r10
  char v59; // r15
  char v60; // bp
  unsigned __int8 v61; // bp
  unsigned int v62; // eax
  char v63; // di
  char v64; // cl
  unsigned __int8 v65; // dl
  char v66; // cl
  unsigned int v67; // eax
  bool v68; // zf
  char v69; // r10
  struct _KPRCB *v70; // rdi
  _DWORD *v71; // rcx
  int v72; // eax
  _DWORD *v73; // rcx
  int v74; // eax
  int v75; // r11d
  int v76; // edi
  char v77; // al
  struct _KPRCB *v78; // rcx
  int v79; // eax
  int v80; // edi
  unsigned __int64 v81; // r10
  unsigned int v82; // ecx
  int v83; // ecx
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // r12
  struct _KPRCB *v86; // rcx
  _QWORD *v87; // rdx
  unsigned int v88; // edx
  __int64 v89; // rcx
  __int64 v90; // rax
  unsigned int v91; // ecx
  struct _KPRCB *v92; // rcx
  _DWORD *v93; // rdx
  int v94; // eax
  unsigned __int64 v95; // rcx
  struct _KPRCB *v96; // rcx
  _DWORD *v97; // rdx
  int v98; // eax
  unsigned int ThreadEffectiveRankNonZero; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v101; // [rsp+34h] [rbp-84h] BYREF
  unsigned __int64 v102; // [rsp+38h] [rbp-80h]
  int v103; // [rsp+40h] [rbp-78h]
  int v104; // [rsp+44h] [rbp-74h] BYREF
  int v105; // [rsp+48h] [rbp-70h] BYREF
  __int64 v106; // [rsp+50h] [rbp-68h]
  int v107; // [rsp+58h] [rbp-60h]
  unsigned __int64 v108; // [rsp+60h] [rbp-58h]
  char v109; // [rsp+C0h] [rbp+8h]
  char v110; // [rsp+C8h] [rbp+10h]
  bool v112; // [rsp+D8h] [rbp+20h]

  v110 = a2;
  v5 = *(_QWORD *)(a1 + 11528) - 216LL;
  v6 = a2;
  v7 = *(__int64 **)(a1 + 11528);
  v8 = *v7;
  *(_QWORD *)(a1 + 11528) = *v7;
  if ( *(_QWORD *)(a1 + 16) || (v9 = *(_DWORD *)(v5 + 120), (v9 & 0x20000) == 0) || (v9 & 0x100000) != 0 )
  {
    *v7 = v8;
    *(_QWORD *)(a1 + 11528) = v7;
    return 0;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v5, 1LL, v6, 1LL);
  v10 = *(_QWORD *)(v5 + 104);
  v11 = *(_QWORD *)(a1 + 8);
  v106 = v10;
  if ( v10 )
  {
    v10 += *(unsigned int *)(a1 + 216);
    v106 = v10;
  }
  ThreadEffectiveRankNonZero = 0;
  v101 = 0;
  if ( v10 )
  {
    ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v5, v10, v6, 1, 0LL);
    if ( ThreadEffectiveRankNonZero )
    {
      v13 = *(_QWORD *)(v11 + 104);
      if ( v13 )
      {
        v14 = *(unsigned int *)(a1 + 216) + v13;
        if ( v14 )
        {
          v101 = KiGetThreadEffectiveRankNonZero(v11, v14, v12, 1, 0LL);
          if ( v101 )
            KiGetComparisonRanks(v10, v15, &ThreadEffectiveRankNonZero, &v101);
        }
      }
    }
  }
  v16 = *(unsigned __int8 *)(v5 + 587);
  v17 = *(__int64 **)(v5 + 208);
  v109 = 0;
  v103 = 1;
  v18 = &v17[6 * v16];
  do
  {
    if ( *((_BYTE *)v17 + 17) < 5u )
    {
      v19 = (volatile signed __int32 *)v17[4];
      KiAcquireKobjectLockSafe(v19);
      if ( *((_BYTE *)v17 + 17) == 4 )
      {
        v20 = (__int64 *)*v17;
        v21 = (__int64 **)v17[1];
        if ( *(__int64 **)(*v17 + 8) != v17 || *v21 != v17 )
          __fastfail(3u);
        *v21 = v20;
        v20[1] = (__int64)v21;
      }
      _InterlockedAnd(v19, 0xFFFFFF7F);
    }
    v17 += 6;
  }
  while ( v17 != v18 );
  v112 = *(_QWORD *)(a1 + 11528) == 0LL;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v22 = __rdtsc();
  v23 = 100;
  v24 = v22 - *(_QWORD *)(a1 + 23488);
  v25 = v24 + *(_QWORD *)(v11 + 72);
  v26 = v24 + *(unsigned int *)(v11 + 80);
  *(_QWORD *)(v11 + 72) = v25;
  *(_QWORD *)(a1 + 23488) = v22;
  v27 = *(_BYTE *)(v11 + 2);
  v108 = v25;
  if ( v26 > 0xFFFFFFFF )
    LODWORD(v26) = -1;
  *(_DWORD *)(v11 + 80) = v26;
  if ( (v27 & 0x3E) != 0 )
  {
    if ( (v27 & 0x10) != 0 )
    {
      *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v11 + 124) + 23504) += *(_QWORD *)(a1 + 23488)
                                                                       - *(_QWORD *)(a1 + 23496);
      v27 &= ~0x10u;
      *(_QWORD *)(a1 + 23496) = 0LL;
    }
    if ( (v27 & 0x20) != 0 )
    {
      v28 = *(_QWORD *)(v11 + 1968);
      if ( v28 )
      {
        v29 = *(_QWORD *)(a1 + 24176);
        v30 = *(_QWORD *)(a1 + 24184);
        if ( v29 && v30 )
        {
          if ( *(_BYTE *)(v30 + 100) )
          {
            v31 = *(_DWORD *)(v30 + 116);
          }
          else
          {
            v31 = *(_DWORD *)(v30 + 72);
            if ( v31 >= *(_DWORD *)(v29 + 360) )
              v31 = *(_DWORD *)(v29 + 360);
          }
        }
        else
        {
          v31 = 100;
        }
        if ( v31 >= 0x4B )
          v32 = 3;
        else
          v32 = v31 / 0x19;
        v33 = *(unsigned __int8 *)(a1 + 24224);
        a4 = v32;
        *(_QWORD *)(v28 + 8 * (v33 + 2LL * v32)) += v24;
        v34 = *(_DWORD *)(v28 + 192);
        if ( KiTimelineBitmapTime <= v34 )
        {
          v35 = v34 - KiTimelineBitmapTime;
          if ( v35 < 0x20 )
            *(_DWORD *)(v28 + 196) |= 1 << v35;
        }
        else
        {
          LODWORD(v102) = KiTimelineBitmapTime;
          if ( KiTimelineBitmapTime - v34 >= 0x20 )
            HIDWORD(v102) = 1;
          else
            HIDWORD(v102) = (*(_DWORD *)(v28 + 196) << (KiTimelineBitmapTime - v34)) | 1;
          *(_QWORD *)(v28 + 192) = v102;
        }
        if ( !KiEfficiencyClassSystem && (*(_DWORD *)(v11 + 120) & 3) == 2 )
          *(_QWORD *)(v28 + 16LL * v32 + 8) += v24;
        if ( *(_QWORD *)(v11 + 1912) )
        {
          *(_QWORD *)(v28 + 8 * (v33 + 16 + 2LL * v32)) += v24;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v11 + 1912) + 1968LL) + 8 * (v33 + 8 + 2LL * v32)),
            v24);
        }
      }
      v27 &= ~0x20u;
    }
    if ( (v27 & 0x40) != 0 )
    {
      if ( *(_QWORD *)(a1 + 25016) )
        KiSetVpThreadSystemWork(a1, 1LL);
      v36 = *(_QWORD *)(v11 + 1512);
      if ( v36 )
        *(_BYTE *)(v36 + 64) = 0;
      v27 &= ~0x40u;
    }
    if ( (v27 & 0x3E) != 0 )
    {
      v37 = *(_QWORD *)(v11 + 104);
      if ( v37 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v37); i; i = (_QWORD *)i[51] )
          *i += v24;
      }
      if ( (*(_BYTE *)(v11 + 2) & 8) != 0
        && (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL) & *(_QWORD *)(v11 + 576)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                              + 136LL) )
      {
        *(_QWORD *)(a1 + 23528) += v24;
      }
      if ( *(_BYTE *)(v11 + 125) )
      {
        if ( (*(_DWORD *)(v11 + 120) & 3) == 2 )
          *(_QWORD *)(a1 + 23544) += v24;
        else
          *(_QWORD *)(a1 + 23536) += v24;
      }
      if ( *(_QWORD *)(v11 + 360) )
        KiEndCounterAccumulation(v11);
    }
  }
  v39 = __rdtsc();
  v40 = (unsigned __int64)HIDWORD(v39) << 32;
  v41 = v39;
  p_AbPropagateBoostsList = v39 - *(_QWORD *)(a1 + 23488);
  *(_QWORD *)(a1 + 23608) += p_AbPropagateBoostsList;
  v43 = *(unsigned __int8 *)(v11 + 2);
  if ( (v43 & 0x20) != 0 )
  {
    v44 = *(_QWORD *)(a1 + 24176);
    v45 = *(_QWORD *)(a1 + 24184);
    if ( v44 && v45 )
    {
      if ( *(_BYTE *)(v45 + 100) )
      {
        v23 = *(_DWORD *)(v45 + 116);
      }
      else
      {
        v23 = *(_DWORD *)(v45 + 72);
        if ( v23 >= *(_DWORD *)(v44 + 360) )
          v23 = *(_DWORD *)(v44 + 360);
      }
    }
    if ( v23 >= 0x4B )
      v46 = 3;
    else
      v46 = v23 / 0x19;
    v40 = a1 + 8 * (*(unsigned __int8 *)(a1 + 24224) + 2952LL + 2LL * v46);
    *(_QWORD *)v40 += p_AbPropagateBoostsList;
    v43 = *(unsigned __int8 *)(v11 + 2);
  }
  if ( (v43 & 0x40) != 0 )
  {
    if ( *(_QWORD *)(a1 + 25016) )
      KiSetVpThreadSystemWork(a1, 0LL);
    v47 = *(_QWORD *)(v11 + 1512);
    if ( v47 )
      *(_BYTE *)(v47 + 64) = 1;
  }
  *(_QWORD *)(a1 + 23488) = v41;
  v48 = *(_BYTE *)(v11 + 2);
  if ( (v48 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 23496) = v41;
    v48 = *(_BYTE *)(v11 + 2);
  }
  if ( (v48 & 2) != 0 )
    KiBeginCounterAccumulation(v11, 0LL);
  *(_BYTE *)(a1 + 32) = 0;
  if ( *(_BYTE *)(a1 + 6) )
  {
    LOBYTE(v43) = 2;
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(v43);
  }
  _enable();
  v49 = *(_QWORD *)(v5 + 72);
  CurrentPrcb = KeGetCurrentPrcb();
  v51 = *(_QWORD *)(v11 + 32);
  v102 = v49;
  v104 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v53 = SchedulerAssist[5];
        SchedulerAssist[5] = v53 + 1;
        if ( v53 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
      break;
    v54 = CurrentPrcb->SchedulerAssist;
    if ( v54 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v55 = v54[5] - 1;
        v54[5] = v55;
        if ( !v55 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v104, v40, p_AbPropagateBoostsList);
    while ( *(_QWORD *)(v5 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(v5 + 584) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v5 + 576)) != 0LL )
  {
    v56 = *(_DWORD *)(v5 + 120);
    v103 = 0;
    if ( (v56 & 0x400000) != 0 )
    {
      GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v5);
      if ( GuestSchedulerAssistPriority != *(char *)(v5 + 195) )
      {
        KiSetBasePriorityAndClearDecrement(v5, 0LL, 0LL);
        KiUpdateThreadPriority(0LL, v5, GuestSchedulerAssistPriority, 0LL);
      }
      v58 = 1;
    }
    else
    {
      v58 = 0;
    }
    v59 = *(_BYTE *)(v5 + 195);
    if ( v59 >= 16 )
    {
      v60 = 1;
LABEL_153:
      v70 = KeGetCurrentPrcb();
      v105 = 0;
      while ( 1 )
      {
        v71 = v70->SchedulerAssist;
        if ( v71 )
        {
          if ( v70->NestingLevel <= 1u )
          {
            v72 = v71[5];
            v71[5] = v72 + 1;
            if ( v72 == -1 )
              KiRemoveSystemWorkPriorityKick(v70);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v73 = v70->SchedulerAssist;
        if ( v73 )
        {
          if ( v70->NestingLevel <= 1u )
          {
            v74 = v73[5] - 1;
            v73[5] = v74;
            if ( !v74 )
              KiRemoveSystemWorkPriorityKick(v70);
          }
        }
        do
          KeYieldProcessorEx(&v105, v40, p_AbPropagateBoostsList);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v80 = *(char *)(v11 + 195);
      if ( *(_QWORD *)(a1 + 16) )
        goto LABEL_218;
      if ( ThreadEffectiveRankNonZero > v101 || ThreadEffectiveRankNonZero == v101 && v59 <= v80 )
      {
        v81 = v108;
        a4 = (unsigned int)(1 << v59);
        v82 = *(_DWORD *)(*(_QWORD *)(a1 + 24904) + 8LL) | *(_DWORD *)(a1 + 22808);
        p_AbPropagateBoostsList = (unsigned int)KiDirectQuantumTarget;
        if ( (unsigned int)KiDirectQuantumTarget + v108 <= v51 && !ThreadEffectiveRankNonZero )
        {
          if ( v80 >= 16 )
          {
            v80 = 15;
            if ( v59 >= 16 )
              v80 = v59;
          }
          v83 = a4 & v82;
          if ( v83 )
            v84 = (unsigned int)KiDirectQuantumTarget + v102;
          else
            v84 = v51 + v102 - v108;
          _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 5u);
          v85 = v51 - p_AbPropagateBoostsList;
          *(_QWORD *)(v5 + 32) = v84;
          v60 = 0;
          if ( v83 )
            v81 = v85;
          *(_QWORD *)(v11 + 32) = v81;
          if ( a3 && v59 != v80 )
          {
            v86 = KeGetCurrentPrcb();
            if ( (char)v80 > *(char *)(v5 + 195) )
            {
              if ( *(_BYTE *)(v5 + 793) )
              {
                v87 = (_QWORD *)(v5 + 1376);
                if ( *(_QWORD *)(v5 + 1376) == 1LL )
                {
                  p_AbPropagateBoostsList = (__int64)&v86->AbPropagateBoostsList;
                  if ( v86 != (struct _KPRCB *)-25720LL )
                  {
                    *v87 = *(_QWORD *)p_AbPropagateBoostsList;
                    *(_QWORD *)p_AbPropagateBoostsList = v87;
                    _InterlockedIncrement16((volatile signed __int16 *)(v5 + 1420));
                    KiAbQueueAutoBoostDpc(v86);
                  }
                }
              }
            }
            v68 = (*(_DWORD *)(v5 + 120) & 0x400000) == 0;
            *(_BYTE *)(v5 + 195) = v80;
            if ( !v68 )
            {
              LOBYTE(p_AbPropagateBoostsList) = 1;
              KiSetSchedulerAssistPriority(*(_QWORD *)(v5 + 1512), (unsigned int)(char)v80, p_AbPropagateBoostsList, a4);
            }
            *(_BYTE *)(v5 + 564) += 16 * (v80 - v59);
          }
          goto LABEL_217;
        }
        if ( (unsigned int)a4 <= v82 )
          goto LABEL_218;
        if ( !ThreadEffectiveRankNonZero )
          goto LABEL_217;
        if ( v82 > 1 )
          goto LABEL_218;
        v88 = *(_DWORD *)(*(_QWORD *)(v106 + 416) + 116LL);
        v89 = *(_QWORD *)(a1 + 22904);
        if ( (v89 & 1) != 0 )
        {
          if ( v89 == 1 )
            goto LABEL_217;
          v90 = v89 ^ ((a1 + 22896) | 1);
        }
        else
        {
          v90 = *(_QWORD *)(a1 + 22904);
        }
        if ( v90 )
        {
          v91 = *(_DWORD *)(v90 + 28);
          if ( v91 == v88 )
          {
            if ( *(unsigned __int16 *)(v90 + 26) >= (unsigned int)a4 )
              goto LABEL_218;
          }
          else if ( v91 <= v88 )
          {
            goto LABEL_218;
          }
        }
      }
      else
      {
        *(_BYTE *)(v11 + 565) = 1;
      }
LABEL_217:
      *(_BYTE *)(v5 + 565) = 0;
      v109 = 1;
      *(_DWORD *)(v5 + 536) = *(_DWORD *)(a1 + 36);
      KiUpdatePriorityMatrixThreadState(a1, v5, 2LL, 3LL);
LABEL_218:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v92 = KeGetCurrentPrcb();
      v93 = v92->SchedulerAssist;
      if ( v93 )
      {
        if ( v92->NestingLevel <= 1u )
        {
          v94 = v93[5] - 1;
          v93[5] = v94;
          if ( !v94 )
            KiRemoveSystemWorkPriorityKick(v92);
        }
      }
      if ( v60 )
      {
        v95 = v102 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v5 + 651);
        if ( (*(_DWORD *)(v5 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 5u);
        *(_QWORD *)(v5 + 32) = v95;
      }
      goto LABEL_226;
    }
    v61 = 0;
    v62 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v5 + 436);
    if ( v49 >= *(_QWORD *)(v5 + 32) )
    {
      v61 = 4;
      if ( v62 < 2 )
        v61 = 5;
    }
    if ( v61 >= 4u || *(char *)(v5 + 563) >= 14 || !*(_BYTE *)(v5 + 564) && v62 >= 2 )
    {
      v63 = *(_BYTE *)(v5 + 195);
      v61 |= 8u;
      v64 = v63;
      if ( v63 < 16 )
      {
        v65 = *(_BYTE *)(v5 + 564);
        a4 = *(unsigned __int8 *)(v5 + 563);
        p_AbPropagateBoostsList = v65;
        LOBYTE(p_AbPropagateBoostsList) = v65 & 0xF;
        v66 = v63 - (v65 >> 4) - (v65 & 0xF) - 1;
        if ( v66 >= (char)a4 )
          a4 = (unsigned __int8)v66;
        if ( v65 )
        {
          if ( (_BYTE)p_AbPropagateBoostsList )
          {
            v63 = *(_BYTE *)(v5 + 195);
            *(_DWORD *)(v5 + 1424) = MEMORY[0xFFFFF78000000320];
          }
          *(_BYTE *)(v5 + 564) = 0;
        }
        v67 = *(_DWORD *)(v5 + 1408);
        v40 = (unsigned __int8)v63;
        v64 = v63;
        v63 = a4;
        if ( v67 )
        {
          _BitScanReverse((unsigned int *)&p_AbPropagateBoostsList, v67);
          v107 = p_AbPropagateBoostsList;
          if ( (char)a4 < (int)p_AbPropagateBoostsList )
            v63 = p_AbPropagateBoostsList;
        }
      }
      if ( !v58 )
      {
        a4 = (unsigned __int64)KeGetCurrentPrcb();
        if ( v63 > v64 )
        {
          if ( *(_BYTE *)(v5 + 793) )
          {
            v40 = v5 + 1376;
            if ( *(_QWORD *)(v5 + 1376) == 1LL )
            {
              p_AbPropagateBoostsList = a4 + 25720;
              if ( a4 != -25720LL )
              {
                *(_QWORD *)v40 = *(_QWORD *)p_AbPropagateBoostsList;
                *(_QWORD *)p_AbPropagateBoostsList = v40;
                _InterlockedIncrement16((volatile signed __int16 *)(v5 + 1420));
                KiAbQueueAutoBoostDpc((PVOID)a4);
              }
            }
          }
        }
        v68 = (*(_DWORD *)(v5 + 120) & 0x400000) == 0;
        *(_BYTE *)(v5 + 195) = v63;
        if ( !v68 )
        {
          LOBYTE(p_AbPropagateBoostsList) = 1;
          KiSetSchedulerAssistPriority(*(_QWORD *)(v5 + 1512), (unsigned int)v63, p_AbPropagateBoostsList, a4);
        }
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(v5 + 544) + 1466LL) == 2 )
      v61 |= 2u;
    if ( (v61 & 1) != 0 )
      goto LABEL_148;
    if ( (*(_DWORD *)(v5 + 120) & 8) != 0 )
      goto LABEL_148;
    v69 = *(_BYTE *)(v5 + 195);
    if ( v69 <= 0 )
      goto LABEL_148;
    p_AbPropagateBoostsList = *(unsigned __int8 *)(v5 + 564);
    if ( (_BYTE)p_AbPropagateBoostsList )
    {
      if ( (p_AbPropagateBoostsList & 0xF0) != 0 || (v40 = v61, LOBYTE(v40) = v61 >> 1, (v61 & 2) == 0) )
      {
LABEL_148:
        if ( (v61 & 6) == 6 && (*(_DWORD *)(v5 + 120) & 8) == 0 && *(char *)(v5 + 195) > 0 )
          KiScheduleNextForegroundBoost(v5);
LABEL_152:
        v59 = *(_BYTE *)(v5 + 195);
        v60 = v61 >> 3;
        goto LABEL_153;
      }
    }
    else
    {
      v40 = v61;
      LOBYTE(v40) = v61 >> 1;
    }
    v75 = *(char *)(v5 + 563);
    a4 = (unsigned int)(v75 + v110);
    v76 = v75 + v110;
    if ( (v40 & 1) != 0 )
      v76 += SBYTE6(Mm64BitPhysicalAddress);
    if ( v76 >= 16 )
      v76 = 15;
    if ( v76 > v69 )
    {
      v77 = 0;
      if ( v76 > (int)a4 )
        v77 = v76 - v110 - v75;
      *(_BYTE *)(v5 + 564) = p_AbPropagateBoostsList ^ (p_AbPropagateBoostsList ^ v77) & 0xF;
      v78 = KeGetCurrentPrcb();
      if ( (char)v76 > v69 )
      {
        if ( *(_BYTE *)(v5 + 793) )
        {
          v40 = v5 + 1376;
          if ( *(_QWORD *)(v5 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = (__int64)&v78->AbPropagateBoostsList;
            if ( v78 != (struct _KPRCB *)-25720LL )
            {
              *(_QWORD *)v40 = *(_QWORD *)p_AbPropagateBoostsList;
              *(_QWORD *)p_AbPropagateBoostsList = v40;
              _InterlockedIncrement16((volatile signed __int16 *)(v5 + 1420));
              KiAbQueueAutoBoostDpc(v78);
            }
          }
        }
      }
      v79 = *(_DWORD *)(v5 + 120);
      *(_BYTE *)(v5 + 195) = v76;
      if ( (v79 & 0x400000) != 0 )
      {
        LOBYTE(p_AbPropagateBoostsList) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v5 + 1512), (unsigned int)(char)v76, p_AbPropagateBoostsList, a4);
      }
    }
    goto LABEL_152;
  }
LABEL_226:
  *(_QWORD *)(v5 + 64) = 0LL;
  v96 = KeGetCurrentPrcb();
  v97 = v96->SchedulerAssist;
  if ( v97 )
  {
    if ( v96->NestingLevel <= 1u )
    {
      v98 = v97[5] - 1;
      v97[5] = v98;
      if ( !v98 )
        KiRemoveSystemWorkPriorityKick(v96);
    }
  }
  if ( !v109 )
  {
    *(_BYTE *)(v5 + 566) = v103;
    *(_BYTE *)(v5 + 567) = v110;
    KiDeferredReadyThread(a1, v5, p_AbPropagateBoostsList, a4);
  }
  return v112;
}
