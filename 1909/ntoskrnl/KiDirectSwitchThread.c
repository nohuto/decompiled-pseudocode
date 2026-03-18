/*
 * XREFs of KiDirectSwitchThread @ 0x14006BC80
 * Callers:
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 * Callees:
 *     KiUpdateThreadPriority @ 0x1400100B0 (KiUpdateThreadPriority.c)
 *     KiIsThreadRankNonZero @ 0x140014B90 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140014C20 (KiGetThreadEffectiveRankNonZero.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400E95A8 (KiSetBasePriorityAndClearDecrement.c)
 *     KiScheduleNextForegroundBoost @ 0x140123C88 (KiScheduleNextForegroundBoost.c)
 *     KiAbQueueAutoBoostDpc @ 0x14013062C (KiAbQueueAutoBoostDpc.c)
 *     KiGetComparisonRanks @ 0x1401325E8 (KiGetComparisonRanks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiBeginCounterAccumulation @ 0x1402AC33C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x1402AC4A0 (KiEndCounterAccumulation.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1402AF84C (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0380 (KiSetSchedulerAssistPriority.c)
 *     KiSetVpThreadSystemWork @ 0x1402B04D0 (KiSetVpThreadSystemWork.c)
 *     EtwTraceReadyThread @ 0x14032DC54 (EtwTraceReadyThread.c)
 */

bool __fastcall KiDirectSwitchThread(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int64 *v11; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned int v15; // r12d
  char v16; // si
  unsigned int v17; // r15d
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // edx
  __int64 v23; // r10
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned __int64 v31; // rax
  _QWORD *v32; // rdx
  unsigned __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  char v38; // al
  bool v39; // zf
  _SINGLE_LIST_ENTRY *v40; // r8
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v42; // r13
  _DWORD *SchedulerAssist; // rcx
  int v44; // eax
  char v45; // r9
  char v46; // r15
  unsigned __int8 v47; // si
  unsigned int v48; // eax
  char v49; // bp
  unsigned __int8 v50; // dl
  char v51; // cl
  unsigned int v52; // eax
  struct _KPRCB *v53; // rcx
  struct _SINGLE_LIST_ENTRY *v54; // r8
  char v55; // r9
  char v56; // dl
  int v57; // r11d
  int v58; // ebp
  char v59; // si
  struct _KPRCB *v60; // rbp
  _DWORD *v61; // rcx
  int v62; // ebp
  unsigned __int64 v63; // r11
  unsigned __int64 v64; // r8
  unsigned int v65; // ecx
  __int64 v66; // rdx
  unsigned int v67; // ecx
  char *v68; // rax
  unsigned __int64 v69; // r13
  __int64 *v70; // rbp
  char v71; // cl
  __int64 v72; // rax
  struct _KPRCB *v73; // rcx
  _DWORD *v74; // rdx
  struct _KPRCB *v75; // rcx
  __int64 v76; // r8
  bool result; // al
  char v78; // dl
  struct _KPRCB *v79; // rcx
  char *v80; // rcx
  unsigned int v81; // edx
  __int64 v82; // rcx
  __int64 v83; // rax
  unsigned int v84; // ecx
  char v85; // al
  struct _KPRCB *v86; // rcx
  int v87; // eax
  __int64 v88; // rcx
  _QWORD *i; // rcx
  __int64 v90; // rax
  __int64 v91; // rsi
  __int64 v92; // r8
  __int64 v93; // r10
  __int64 v94; // r10
  __int64 v95; // r10
  bool IsThreadRankNonZero; // al
  volatile signed __int32 *v97; // r15
  __int64 *v98; // rax
  __int64 **v99; // rcx
  _DWORD *v100; // rcx
  _DWORD *v101; // rcx
  _DWORD *v102; // rcx
  _DWORD *v103; // rcx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  _SINGLE_LIST_ENTRY *v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rax
  int v108; // eax
  int v109; // eax
  int v110; // eax
  unsigned int GuestSchedulerAssistPriority; // esi
  char v112; // dl
  char v113; // al
  char v114; // cl
  struct _SINGLE_LIST_ENTRY *v115; // rdx
  int v116; // eax
  int v117; // eax
  int v118; // eax
  __int64 v119; // rdx
  int v120; // eax
  int v121; // eax
  unsigned int ThreadEffectiveRankNonZero; // [rsp+30h] [rbp-88h] BYREF
  _SINGLE_LIST_ENTRY *v123; // [rsp+38h] [rbp-80h]
  unsigned int v124; // [rsp+40h] [rbp-78h] BYREF
  int v125; // [rsp+44h] [rbp-74h]
  int v126; // [rsp+48h] [rbp-70h] BYREF
  int v127; // [rsp+4Ch] [rbp-6Ch] BYREF
  __int64 v128; // [rsp+50h] [rbp-68h]
  int v129; // [rsp+58h] [rbp-60h]
  unsigned __int64 v130; // [rsp+60h] [rbp-58h]
  char v131; // [rsp+C0h] [rbp+8h]
  char v133; // [rsp+D0h] [rbp+18h]
  bool v134; // [rsp+D8h] [rbp+20h]

  v133 = a3;
  v3 = *(__int64 **)(a1 + 11528);
  v5 = *v3;
  v6 = (__int64)(v3 - 27);
  *(_QWORD *)(a1 + 11528) = *v3;
  if ( *(_QWORD *)(a1 + 16) || (*(_DWORD *)(v3 - 12) & 0x120000) != 0x20000 )
  {
    *v3 = v5;
    result = 0;
    *(_QWORD *)(a1 + 11528) = v3;
    return result;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
  {
    EtwTraceReadyThread(v3 - 27, 1LL, a2, 1LL);
    v6 = (__int64)(v3 - 27);
  }
  v7 = *(v3 - 14);
  v8 = *(_QWORD *)(a1 + 8);
  ThreadEffectiveRankNonZero = 0;
  v124 = 0;
  v128 = v7;
  if ( v7 )
  {
    v90 = *(unsigned int *)(a1 + 216);
    v39 = v90 + v7 == 0;
    v91 = v90 + v7;
    v128 = v91;
    if ( !v39 )
    {
      ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v6, v91, a3, 1, 0LL);
      if ( ThreadEffectiveRankNonZero )
      {
        v93 = *(_QWORD *)(v8 + 104);
        if ( v93 )
        {
          v94 = *(unsigned int *)(a1 + 216) + v93;
          if ( v94 )
          {
            v124 = KiGetThreadEffectiveRankNonZero(v8, v94, v92, 1, 0LL);
            if ( v124 )
              KiGetComparisonRanks(v91, v95, &ThreadEffectiveRankNonZero, &v124);
          }
        }
      }
    }
  }
  v9 = *((unsigned __int8 *)v3 + 371);
  v10 = (__int64 *)*(v3 - 1);
  v131 = 0;
  v125 = 1;
  v11 = &v10[6 * v9];
  do
  {
    if ( *((_BYTE *)v10 + 17) < 5u )
    {
      v97 = (volatile signed __int32 *)v10[4];
      KiAcquireKobjectLockSafe(v97);
      if ( *((_BYTE *)v10 + 17) == 4 )
      {
        v98 = (__int64 *)*v10;
        v99 = (__int64 **)v10[1];
        if ( *(__int64 **)(*v10 + 8) != v10 || *v99 != v10 )
          __fastfail(3u);
        *v99 = v98;
        v98[1] = (__int64)v99;
      }
      _InterlockedAnd(v97, 0xFFFFFF7F);
    }
    v10 += 6;
  }
  while ( v10 != v11 );
  v134 = *(_QWORD *)(a1 + 11528) == 0LL;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v12 = __rdtsc();
  v13 = v12 - *(_QWORD *)(a1 + 23488);
  v14 = v13 + *(unsigned int *)(v8 + 80);
  v130 = v13 + *(_QWORD *)(v8 + 72);
  *(_QWORD *)(v8 + 72) = v130;
  if ( v14 > 0xFFFFFFFF )
    LODWORD(v14) = -1;
  *(_QWORD *)(a1 + 23488) = v12;
  v15 = 3;
  v16 = *(_BYTE *)(v8 + 2);
  *(_DWORD *)(v8 + 80) = v14;
  v17 = 100;
  if ( (v16 & 0x3E) != 0 )
  {
    if ( (v16 & 0x10) != 0 )
    {
      *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v8 + 124) + 23504) += *(_QWORD *)(a1 + 23488)
                                                                      - *(_QWORD *)(a1 + 23496);
      v16 &= ~0x10u;
      *(_QWORD *)(a1 + 23496) = 0LL;
    }
    if ( (v16 & 0x20) != 0 )
    {
      v18 = *(_QWORD *)(v8 + 1984);
      if ( v18 )
      {
        v19 = *(_QWORD *)(a1 + 24176);
        v20 = *(_QWORD *)(a1 + 24184);
        if ( v19 && v20 )
        {
          if ( *(_BYTE *)(v20 + 100) )
          {
            v21 = *(_DWORD *)(v20 + 116);
          }
          else
          {
            v21 = *(_DWORD *)(v20 + 72);
            if ( v21 >= *(_DWORD *)(v19 + 360) )
              v21 = *(_DWORD *)(v19 + 360);
          }
        }
        else
        {
          v21 = 100;
        }
        if ( v21 < 0x4B )
          v22 = v21 / 0x19;
        else
          v22 = 3;
        v23 = *(unsigned __int8 *)(a1 + 24224);
        v24 = v22;
        v25 = v23 + 2LL * v22;
        v26 = *(_QWORD *)(v18 + 8 * v25);
        v27 = (_QWORD *)(v18 + 8 * v25);
        v28 = KiTimelineBitmapTime;
        *v27 = v13 + v26;
        v29 = *(_DWORD *)(v18 + 192);
        if ( v28 > v29 )
        {
          LODWORD(v123) = v28;
          if ( v28 - v29 >= 0x20 )
            HIDWORD(v123) = 1;
          else
            HIDWORD(v123) = (*(_DWORD *)(v18 + 196) << (v28 - v29)) | 1;
          *(_QWORD *)(v18 + 192) = v123;
        }
        else
        {
          v30 = v29 - v28;
          if ( v30 < 0x20 )
            *(_DWORD *)(v18 + 196) |= 1 << v30;
        }
        if ( !KiEfficiencyClassSystem && (*(_DWORD *)(v8 + 120) & 3) == 2 )
          *(_QWORD *)(v18 + 16 * v24 + 8) += v13;
        if ( *(_QWORD *)(v8 + 1928) )
        {
          *(_QWORD *)(v18 + 8 * (v23 + 16 + 2 * v24)) += v13;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v8 + 1928) + 1984LL) + 8 * (v23 + 8 + 2 * v24)),
            v13);
        }
      }
      v16 &= ~0x20u;
    }
    if ( (v16 & 0x40) != 0 )
    {
      if ( *(_QWORD *)(a1 + 25016) )
        KiSetVpThreadSystemWork(a1, 1LL);
      v106 = *(_QWORD *)(v8 + 1520);
      if ( v106 )
        *(_BYTE *)(v106 + 64) = 0;
      v16 &= ~0x40u;
    }
    if ( (v16 & 0x3E) != 0 )
    {
      v88 = *(_QWORD *)(v8 + 104);
      if ( v88 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v88); i; i = (_QWORD *)i[51] )
          *i += v13;
      }
      if ( (*(_BYTE *)(v8 + 2) & 8) != 0
        && (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL) & *(_QWORD *)(v8 + 576)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                             + 136LL) )
      {
        *(_QWORD *)(a1 + 23528) += v13;
      }
      if ( *(_BYTE *)(v8 + 125) )
      {
        if ( (*(_DWORD *)(v8 + 120) & 3) == 2 )
          *(_QWORD *)(a1 + 23544) += v13;
        else
          *(_QWORD *)(a1 + 23536) += v13;
      }
      if ( *(_QWORD *)(v8 + 360) )
        KiEndCounterAccumulation(v8);
    }
  }
  v31 = __rdtsc();
  v32 = (_QWORD *)((unsigned __int64)HIDWORD(v31) << 32);
  v33 = v31;
  v34 = v31 - *(_QWORD *)(a1 + 23488);
  *(_QWORD *)(a1 + 23608) += v34;
  v35 = *(unsigned __int8 *)(v8 + 2);
  if ( (v35 & 0x20) != 0 )
  {
    v36 = *(_QWORD *)(a1 + 24176);
    v37 = *(_QWORD *)(a1 + 24184);
    if ( v36 && v37 )
    {
      if ( *(_BYTE *)(v37 + 100) )
      {
        v17 = *(_DWORD *)(v37 + 116);
      }
      else
      {
        v17 = *(_DWORD *)(v37 + 72);
        if ( v17 >= *(_DWORD *)(v36 + 360) )
          v17 = *(_DWORD *)(v36 + 360);
      }
    }
    if ( v17 < 0x4B )
      v15 = v17 / 0x19;
    v32 = (_QWORD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 24224) + 2952LL + 2LL * v15));
    *v32 += v34;
    v35 = *(unsigned __int8 *)(v8 + 2);
  }
  if ( (v35 & 0x40) != 0 )
  {
    if ( *(_QWORD *)(a1 + 25016) )
      KiSetVpThreadSystemWork(a1, 0LL);
    v107 = *(_QWORD *)(v8 + 1520);
    if ( v107 )
      *(_BYTE *)(v107 + 64) = 1;
  }
  *(_QWORD *)(a1 + 23488) = v33;
  v38 = *(_BYTE *)(v8 + 2);
  if ( (v38 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 23496) = v33;
    v38 = *(_BYTE *)(v8 + 2);
  }
  if ( (v38 & 2) != 0 )
    KiBeginCounterAccumulation(v8, 0LL);
  v39 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v39 )
  {
    LOBYTE(v35) = 2;
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(v35);
  }
  _enable();
  v40 = (_SINGLE_LIST_ENTRY *)*(v3 - 18);
  CurrentPrcb = KeGetCurrentPrcb();
  v42 = *(_QWORD *)(v8 + 32);
  v123 = v40;
  v126 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v108 = SchedulerAssist[5];
      SchedulerAssist[5] = v108 + 1;
      if ( v108 == -1 )
LABEL_222:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)v3 - 38, 0LL) )
  {
    v102 = CurrentPrcb->SchedulerAssist;
    if ( v102 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v109 = v102[5] - 1;
        v102[5] = v109;
        if ( !v109 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v126);
    while ( *(v3 - 19) );
    v103 = CurrentPrcb->SchedulerAssist;
    if ( v103 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v110 = v103[5];
        v103[5] = v110 + 1;
        if ( v110 == -1 )
          goto LABEL_222;
      }
    }
  }
  if ( *(unsigned __int8 *)(a1 + 208) == *((_WORD *)v3 + 184) && (*(_QWORD *)(a1 + 200) & v3[45]) != 0 )
  {
    v44 = *((_DWORD *)v3 - 24);
    v125 = 0;
    if ( (v44 & 0x400000) != 0 )
    {
      GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v3 - 27, v32, v40);
      if ( GuestSchedulerAssistPriority != *((char *)v3 - 21) )
      {
        KiSetBasePriorityAndClearDecrement(v3 - 27, 0LL, 0LL);
        KiUpdateThreadPriority(0LL, (__int64)(v3 - 27), (_SINGLE_LIST_ENTRY *)GuestSchedulerAssistPriority, 0);
      }
      v45 = 1;
    }
    else
    {
      v45 = 0;
    }
    v46 = *((_BYTE *)v3 - 21);
    if ( v46 >= 16 )
    {
      v59 = 1;
LABEL_83:
      v60 = KeGetCurrentPrcb();
      v127 = 0;
      v61 = v60->SchedulerAssist;
      if ( v61 )
      {
        if ( v60->NestingLevel <= 1u )
        {
          v116 = v61[5];
          v61[5] = v116 + 1;
          if ( v116 == -1 )
LABEL_243:
            KiRemoveSystemWorkPriorityKick(v60);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v100 = v60->SchedulerAssist;
        if ( v100 )
        {
          if ( v60->NestingLevel <= 1u )
          {
            v117 = v100[5] - 1;
            v100[5] = v117;
            if ( !v117 )
              KiRemoveSystemWorkPriorityKick(v60);
          }
        }
        do
          KeYieldProcessorEx(&v127);
        while ( *(_QWORD *)(a1 + 48) );
        v101 = v60->SchedulerAssist;
        if ( v101 )
        {
          if ( v60->NestingLevel <= 1u )
          {
            v118 = v101[5];
            v101[5] = v118 + 1;
            if ( v118 == -1 )
              goto LABEL_243;
          }
        }
      }
      v62 = *(char *)(v8 + 195);
      if ( *(_QWORD *)(a1 + 16) )
        goto LABEL_106;
      if ( ThreadEffectiveRankNonZero <= v124 && (ThreadEffectiveRankNonZero != v124 || v46 > v62) )
      {
        *(_BYTE *)(v8 + 565) = 1;
        goto LABEL_98;
      }
      v63 = v130;
      v64 = (unsigned int)(1 << v46);
      v65 = *(_DWORD *)(*(_QWORD *)(a1 + 24904) + 8LL) | *(_DWORD *)(a1 + 22808);
      v66 = (unsigned int)KiDirectQuantumTarget;
      if ( (unsigned int)KiDirectQuantumTarget + v130 <= v42 && !ThreadEffectiveRankNonZero )
      {
        if ( v62 >= 16 )
        {
          v62 = 15;
          if ( v46 >= 16 )
            v62 = v46;
        }
        v67 = v64 & v65;
        if ( v67 )
          v68 = (char *)v123 + (unsigned int)KiDirectQuantumTarget;
        else
          v68 = (char *)v123 + v42 - v130;
        _interlockedbittestandset((volatile signed __int32 *)v3 - 24, 5u);
        v69 = v42 - v66;
        *(v3 - 23) = (__int64)v68;
        v59 = 0;
        if ( v67 )
          v63 = v69;
        *(_QWORD *)(v8 + 32) = v63;
        if ( v133 && v46 != v62 )
        {
          v79 = KeGetCurrentPrcb();
          if ( (char)v62 > *((char *)v3 - 21) )
          {
            if ( *((_BYTE *)v3 + 577) )
            {
              v64 = (unsigned __int64)(v3 + 145);
              if ( v3[145] == 1 )
              {
                p_AbPropagateBoostsList = &v79->AbPropagateBoostsList;
                if ( v79 != (struct _KPRCB *)-25720LL )
                {
                  *(_SINGLE_LIST_ENTRY *)v64 = (_SINGLE_LIST_ENTRY)p_AbPropagateBoostsList->Next;
                  p_AbPropagateBoostsList->Next = (struct _SINGLE_LIST_ENTRY *)v64;
                  _InterlockedIncrement16((volatile signed __int16 *)v3 + 602);
                  KiAbQueueAutoBoostDpc(v79);
                }
              }
            }
          }
          v39 = (*(_DWORD *)(v3 - 12) & 0x400000) == 0;
          *((_BYTE *)v3 - 21) = v62;
          if ( !v39 )
          {
            LOBYTE(v64) = 1;
            KiSetSchedulerAssistPriority(v3[163], (unsigned int)(char)v62, v64);
          }
          *((_BYTE *)v3 + 348) += 16 * (v62 - v46);
        }
        goto LABEL_98;
      }
      if ( (unsigned int)v64 > v65 )
      {
        if ( !ThreadEffectiveRankNonZero )
          goto LABEL_98;
        if ( v65 <= 1 )
        {
          v81 = *(_DWORD *)(*(_QWORD *)(v128 + 416) + 116LL);
          v82 = *(_QWORD *)(a1 + 22904);
          if ( (v82 & 1) != 0 )
          {
            if ( v82 == 1 )
              goto LABEL_98;
            v83 = v82 ^ ((a1 + 22896) | 1);
          }
          else
          {
            v83 = *(_QWORD *)(a1 + 22904);
          }
          if ( !v83 )
            goto LABEL_98;
          v84 = *(_DWORD *)(v83 + 28);
          if ( v84 == v81 )
          {
            if ( *(unsigned __int16 *)(v83 + 26) < (unsigned int)v64 )
            {
LABEL_98:
              *((_BYTE *)v3 + 349) = 0;
              v70 = v3 - 27;
              *((_DWORD *)v3 + 80) = *(_DWORD *)(a1 + 36);
              v131 = 1;
              if ( (*((_BYTE *)v3 - 214) & 4) == 0
                || (IsThreadRankNonZero = KiIsThreadRankNonZero((__int64)(v3 - 27), (struct _KPRCB *)a1),
                    v71 = 1,
                    !IsThreadRankNonZero) )
              {
                v71 = *((_BYTE *)v3 - 21);
              }
              **(_BYTE **)(a1 + 56) = v71;
              v72 = *(_QWORD *)(a1 + 25016);
              if ( v72 )
              {
                v119 = (unsigned int)KiVpThreadSystemWorkPriority;
                if ( v70 != *(__int64 **)(a1 + 24) )
                  v119 = (unsigned int)v71;
                KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 25016), v119, 0LL);
                v72 = *(_QWORD *)(a1 + 25016);
              }
              *(_QWORD *)(a1 + 16) = v70;
              if ( v72 )
                *(_BYTE *)(v72 + 16) = v70 == *(__int64 **)(a1 + 24);
              if ( *((_BYTE *)v3 + 172) == 1 )
                *((_DWORD *)v3 - 21) = *((_DWORD *)v3 - 21) - *((_DWORD *)v3 + 55) + MEMORY[0xFFFFF78000000320];
              *((_BYTE *)v3 + 172) = 3;
            }
          }
          else if ( v84 > v81 )
          {
            goto LABEL_98;
          }
        }
      }
LABEL_106:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v73 = KeGetCurrentPrcb();
      v74 = v73->SchedulerAssist;
      if ( v74 )
      {
        if ( v73->NestingLevel <= 1u )
        {
          v120 = v74[5] - 1;
          v74[5] = v120;
          if ( !v120 )
            KiRemoveSystemWorkPriorityKick(v73);
        }
      }
      if ( v59 )
      {
        v80 = (char *)v123 + KiCyclesPerClockQuantum * (unsigned int)*((unsigned __int8 *)v3 + 435);
        if ( (*(_DWORD *)(v3 - 12) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)v3 - 24, 5u);
        *(v3 - 23) = (__int64)v80;
      }
      goto LABEL_108;
    }
    v47 = 0;
    v48 = MEMORY[0xFFFFF78000000320] - *((_DWORD *)v3 + 55);
    if ( (unsigned __int64)v123 >= *(v3 - 23) )
    {
      v47 = 4;
      if ( v48 < 2 )
        v47 = 5;
    }
    if ( v47 >= 4u || *((char *)v3 + 347) >= 14 || v48 >= 2 && !*((_BYTE *)v3 + 348) )
    {
      v49 = *((_BYTE *)v3 - 21);
      v47 |= 8u;
      if ( v49 < 16 )
      {
        if ( KiForegrounBoostVelocityFlag
          && *(_BYTE *)(v3[41] + 1466) == 2
          && (v40 = (_SINGLE_LIST_ENTRY *)*((unsigned __int8 *)v3 + 348),
              v112 = (unsigned __int8)v40 & 0xF,
              ((unsigned __int8)v40 & 0xF) != 0 && (*(_DWORD *)(v3 - 12) & 8) == 0) )
        {
          v113 = v112 + *((_BYTE *)v3 + 347);
          *((_BYTE *)v3 + 348) = v112;
          v114 = v49 - ((unsigned __int8)v40 >> 4) - 1;
          v49 = v113;
          if ( v114 >= v113 )
            v49 = v114;
        }
        else
        {
          v50 = *((_BYTE *)v3 + 348);
          v51 = *((_BYTE *)v3 + 347);
          if ( (char)(v49 - (v50 >> 4) - (v50 & 0xF) - 1) >= v51 )
            v51 = v49 - (*((_BYTE *)v3 + 348) >> 4) - (*((_BYTE *)v3 + 348) & 0xF) - 1;
          v49 = v51;
          if ( v50 )
          {
            if ( (v50 & 0xF) != 0 )
              *((_DWORD *)v3 + 302) = MEMORY[0xFFFFF78000000320];
            *((_BYTE *)v3 + 348) = 0;
            v49 = v51;
          }
        }
        v52 = *((_DWORD *)v3 + 298);
        if ( v52 )
        {
          _BitScanReverse((unsigned int *)&v40, v52);
          v78 = v49;
          if ( v49 < (int)v40 )
            v78 = (char)v40;
          v129 = (int)v40;
          v49 = v78;
        }
      }
      if ( !v45 )
      {
        v53 = KeGetCurrentPrcb();
        if ( v49 > *((char *)v3 - 21) )
        {
          if ( *((_BYTE *)v3 + 577) )
          {
            v115 = (struct _SINGLE_LIST_ENTRY *)(v3 + 145);
            if ( v3[145] == 1 )
            {
              v40 = &v53->AbPropagateBoostsList;
              if ( v53 != (struct _KPRCB *)-25720LL )
              {
                v115->Next = v40->Next;
                v40->Next = v115;
                _InterlockedIncrement16((volatile signed __int16 *)v3 + 602);
                KiAbQueueAutoBoostDpc(v53);
              }
            }
          }
        }
        v39 = (*(_DWORD *)(v3 - 12) & 0x400000) == 0;
        *((_BYTE *)v3 - 21) = v49;
        if ( !v39 )
        {
          LOBYTE(v40) = 1;
          KiSetSchedulerAssistPriority(v3[163], (unsigned int)v49, v40);
        }
      }
    }
    if ( *(_BYTE *)(v3[41] + 1466) == 2 )
      v47 |= 2u;
    if ( ((unsigned __int8)~v47 & ((*(_DWORD *)(v3 - 12) & 8) == 0)) != 0 )
    {
      v54 = (struct _SINGLE_LIST_ENTRY *)*((unsigned __int8 *)v3 - 21);
      if ( (char)v54 > 0 )
      {
        v55 = *((_BYTE *)v3 + 348);
        if ( !v55 )
        {
          v56 = v47 >> 1;
LABEL_77:
          v57 = *((char *)v3 + 347);
          v58 = v57 + (char)a2;
          if ( (v56 & 1) != 0 )
            v58 += SBYTE6(Mm64BitPhysicalAddress);
          if ( v58 >= 16 )
            v58 = 15;
          if ( v58 > (char)v54 )
          {
            v85 = 0;
            if ( v58 > v57 + (char)a2 )
              v85 = v58 - v57 - a2;
            *((_BYTE *)v3 + 348) = v55 ^ (v55 ^ v85) & 0xF;
            v86 = KeGetCurrentPrcb();
            if ( (char)v58 > (char)v54 )
            {
              if ( *((_BYTE *)v3 + 577) )
              {
                v54 = (struct _SINGLE_LIST_ENTRY *)(v3 + 145);
                if ( v3[145] == 1 )
                {
                  v105 = &v86->AbPropagateBoostsList;
                  if ( v86 != (struct _KPRCB *)-25720LL )
                  {
                    v54->Next = v105->Next;
                    v105->Next = v54;
                    _InterlockedIncrement16((volatile signed __int16 *)v3 + 602);
                    KiAbQueueAutoBoostDpc(v86);
                  }
                }
              }
            }
            v87 = *((_DWORD *)v3 - 24);
            *((_BYTE *)v3 - 21) = v58;
            if ( (v87 & 0x400000) != 0 )
            {
              LOBYTE(v54) = 1;
              KiSetSchedulerAssistPriority(v3[163], (unsigned int)(char)v58, v54);
            }
          }
LABEL_82:
          v46 = *((_BYTE *)v3 - 21);
          v59 = v47 >> 3;
          goto LABEL_83;
        }
        if ( (v55 & 0xF0) == 0 )
        {
          v56 = v47 >> 1;
          if ( (v47 & 2) != 0 )
            goto LABEL_77;
        }
      }
    }
    if ( !KiForegrounBoostVelocityFlag && (v47 & 6) == 6 && (*(_DWORD *)(v3 - 12) & 8) == 0 && *((char *)v3 - 21) > 0 )
      KiScheduleNextForegroundBoost(v3 - 27);
    goto LABEL_82;
  }
LABEL_108:
  *(v3 - 19) = 0LL;
  v75 = KeGetCurrentPrcb();
  v76 = (__int64)v75->SchedulerAssist;
  if ( v76 )
  {
    if ( v75->NestingLevel <= 1u )
    {
      v121 = *(_DWORD *)(v76 + 20) - 1;
      *(_DWORD *)(v76 + 20) = v121;
      if ( !v121 )
        KiRemoveSystemWorkPriorityKick(v75);
    }
  }
  if ( !v131 )
  {
    *((_BYTE *)v3 + 350) = v125;
    *((_BYTE *)v3 + 351) = a2;
    KiDeferredReadyThread(a1, (__int64)(v3 - 27), v76);
  }
  return v134;
}
