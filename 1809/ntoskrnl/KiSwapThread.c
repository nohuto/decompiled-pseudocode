/*
 * XREFs of KiSwapThread @ 0x140056210
 * Callers:
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KeTerminateThread @ 0x140089A10 (KeTerminateThread.c)
 *     KiInSwapSingleProcess @ 0x14010CA40 (KiInSwapSingleProcess.c)
 * Callees:
 *     KiSearchForNewThread @ 0x140056AE0 (KiSearchForNewThread.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1EF0 (KiStartThreadCycleAccumulation.c)
 *     KiComputeGroupSchedulingRank @ 0x1400D3720 (KiComputeGroupSchedulingRank.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400F2868 (KiInsertDeferredPreemptionApc.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     KiProcessThreadWaitList @ 0x1400FBEE0 (KiProcessThreadWaitList.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140116A70 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140116F58 (KiRemoveSchedulingGroupQueue.c)
 *     KiCheckMaxOverQuotaTransition @ 0x14012AF0C (KiCheckMaxOverQuotaTransition.c)
 *     EtwTraceContextSwap @ 0x14017CA40 (EtwTraceContextSwap.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiEndCounterAccumulation @ 0x140296160 (KiEndCounterAccumulation.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140298E20 (KiSendHeteroRescheduleIntRequest.c)
 *     KiSetVpThreadSystemWork @ 0x140299950 (KiSetVpThreadSystemWork.c)
 */

__int64 __fastcall KiSwapThread(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // si
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ebp
  int v22; // ecx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 v25; // rsi
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // r8
  struct _KPRCB *v30; // rsi
  unsigned int v31; // ebp
  _DWORD *v32; // rcx
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  unsigned __int8 v35; // bp
  char v36; // r14
  __int64 v37; // rdi
  __int64 v39; // rsi
  char v40; // r12
  unsigned int v41; // r13d
  struct _KPRCB *v42; // rdx
  __int64 v43; // r11
  __int64 v44; // rax
  _DWORD *v45; // rcx
  volatile signed __int32 *v46; // r15
  struct _KPRCB *v47; // rsi
  _QWORD *v48; // rcx
  __int64 v49; // r10
  _QWORD *v50; // rax
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // r9
  __int64 v55; // rcx
  _QWORD *i; // rcx
  int v57; // r14d
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  _DWORD *v60; // rcx
  _DWORD *v61; // rcx
  _DWORD *v62; // rcx
  _DWORD *v63; // rcx
  struct _KPRCB *v64; // rcx
  _DWORD *v65; // rdx
  __int64 v66; // rax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  struct _KPRCB *v73; // rcx
  _DWORD *v74; // rdx
  int v75; // eax
  struct _KPRCB *v76; // rbp
  _DWORD *v77; // rcx
  int v78; // eax
  _DWORD *v79; // rcx
  int v80; // eax
  _DWORD *v81; // rcx
  int v82; // eax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  struct _KPRCB *v89; // rcx
  struct _KPRCB *v90; // rcx
  unsigned int v91; // [rsp+30h] [rbp-88h]
  __int64 v92; // [rsp+30h] [rbp-88h]
  int v93; // [rsp+38h] [rbp-80h] BYREF
  int v94; // [rsp+3Ch] [rbp-7Ch] BYREF
  int v95; // [rsp+40h] [rbp-78h] BYREF
  int v96; // [rsp+44h] [rbp-74h] BYREF
  __int64 v97; // [rsp+48h] [rbp-70h]
  __int64 v98; // [rsp+50h] [rbp-68h]
  struct _KPRCB *v99; // [rsp+58h] [rbp-60h]
  __int64 v100; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v101[2]; // [rsp+68h] [rbp-50h] BYREF

  if ( *(_QWORD *)(a2 + 11528) )
    KiProcessThreadWaitList(a2, 1LL, 0LL);
  KiAbProcessContextSwitch(a1, 0LL);
  _disable();
  *(_BYTE *)(a2 + 32) = 1;
  v5 = __rdtsc();
  v6 = v5 - *(_QWORD *)(a2 + 23488);
  v7 = v6 + *(unsigned int *)(a1 + 80);
  *(_QWORD *)(a1 + 72) += v6;
  v8 = 0xFFFFFFFFLL;
  if ( v7 > 0xFFFFFFFF )
    LODWORD(v7) = -1;
  *(_QWORD *)(a2 + 23488) = v5;
  v9 = *(_BYTE *)(a1 + 2);
  *(_DWORD *)(a1 + 80) = v7;
  if ( (v9 & 0x3E) != 0 )
  {
    if ( (v9 & 0x10) != 0 )
    {
      v8 = *(_QWORD *)(a2 + 23488) - *(_QWORD *)(a2 + 23496);
      *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 124) + 23504) += v8;
      v9 &= ~0x10u;
      *(_QWORD *)(a2 + 23496) = 0LL;
    }
    if ( (v9 & 0x20) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 1968);
      if ( v4 )
      {
        v10 = *(_QWORD *)(a2 + 24176);
        v11 = *(_QWORD *)(a2 + 24184);
        if ( v10 && v11 )
        {
          if ( *(_BYTE *)(v11 + 100) )
          {
            v12 = *(_DWORD *)(v11 + 116);
          }
          else
          {
            v12 = *(_DWORD *)(v11 + 72);
            if ( v12 >= *(_DWORD *)(v10 + 360) )
              v12 = *(_DWORD *)(v10 + 360);
          }
        }
        else
        {
          v12 = 100;
        }
        if ( v12 < 0x4B )
          v13 = v12 / 0x19;
        else
          v13 = 3;
        v14 = *(unsigned __int8 *)(a2 + 24224);
        v15 = v13;
        v16 = v14 + 2LL * v13;
        v17 = *(_QWORD *)(v4 + 8 * v16);
        v8 = v4 + 8 * v16;
        v18 = KiTimelineBitmapTime;
        *(_QWORD *)v8 = v6 + v17;
        v19 = *(_DWORD *)(v4 + 192);
        if ( v18 > v19 )
        {
          LODWORD(v92) = v18;
          v8 = v18 - v19;
          if ( (unsigned int)v8 >= 0x20 )
            HIDWORD(v92) = 1;
          else
            HIDWORD(v92) = (*(_DWORD *)(v4 + 196) << (v18 - v19)) | 1;
          *(_QWORD *)(v4 + 192) = v92;
        }
        else
        {
          v20 = v19 - v18;
          if ( v20 < 0x20 )
            *(_DWORD *)(v4 + 196) |= 1 << v20;
        }
        if ( !KiEfficiencyClassSystem && (*(_DWORD *)(a1 + 120) & 3) == 2 )
        {
          v8 = 2 * v15;
          *(_QWORD *)(v4 + 16 * v15 + 8) += v6;
        }
        if ( *(_QWORD *)(a1 + 1912) )
        {
          *(_QWORD *)(v4 + 8 * (v14 + 16 + 2 * v15)) += v6;
          v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1912) + 1968LL) + 8 * (v14 + 8 + 2 * v15);
          _InterlockedExchangeAdd64((volatile signed __int64 *)v8, v6);
        }
      }
      v9 &= ~0x20u;
    }
    if ( (v9 & 0x40) != 0 )
    {
      if ( *(_QWORD *)(a2 + 25016) )
        KiSetVpThreadSystemWork(a2, 1LL);
      v66 = *(_QWORD *)(a1 + 1512);
      if ( v66 )
        *(_BYTE *)(v66 + 64) = 0;
      v9 &= ~0x40u;
    }
    if ( (v9 & 0x3E) != 0 )
    {
      v55 = *(_QWORD *)(a1 + 104);
      if ( v55 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a2 + 216) + v55); i; i = (_QWORD *)i[51] )
          *i += v6;
      }
      if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 136LL);
        if ( (*(_QWORD *)(a1 + 576) & v8) != v8 )
          *(_QWORD *)(a2 + 23528) += v6;
      }
      if ( *(_BYTE *)(a1 + 125) )
      {
        if ( (*(_DWORD *)(a1 + 120) & 3) == 2 )
          *(_QWORD *)(a2 + 23544) += v6;
        else
          *(_QWORD *)(a2 + 23536) += v6;
      }
      if ( *(_QWORD *)(a1 + 360) )
        KiEndCounterAccumulation(a1);
    }
  }
  _enable();
  v21 = 0;
  v22 = (*(_DWORD *)(a1 + 80) >> 1) + (*(_DWORD *)(a1 + 84) >> 1);
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = v22;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v67 = SchedulerAssist[5];
      SchedulerAssist[5] = v67 + 1;
      if ( v67 == -1 )
LABEL_144:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    v60 = CurrentPrcb->SchedulerAssist;
    if ( v60 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v68 = v60[5] - 1;
        v60[5] = v68;
        if ( !v68 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
    {
      if ( (++v21 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v60, v8, v4) )
      {
        HvlNotifyLongSpinWait(v21);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a2 + 48) );
    v61 = CurrentPrcb->SchedulerAssist;
    if ( v61 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v69 = v61[5];
        v61[5] = v69 + 1;
        if ( v69 == -1 )
          goto LABEL_144;
      }
    }
  }
  v25 = *(_QWORD *)(a1 + 104);
  v98 = v25;
  v26 = v25;
  if ( v25 )
    v25 += *(unsigned int *)(a2 + 216);
  if ( v25 )
  {
    v57 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v25 + 112) & 4) != 0 )
      {
        if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v25, v26) )
        {
          if ( (*(_BYTE *)(v25 + 112) & 1) != 0 )
            KiRemoveSchedulingGroupQueue(a2, v25, 1LL);
        }
        else if ( *(_QWORD *)v25 >= *(_QWORD *)(v25 + 24) && (*(_BYTE *)(v25 + 112) & 2) == 0 )
        {
          KiRecomputeGroupSchedulingRank(v26, v25, a2);
        }
      }
      else
      {
        KiComputeGroupSchedulingRank(v26, a2, v25);
      }
      v57 += *(_DWORD *)(v25 + 116);
      v25 = *(_QWORD *)(v25 + 408);
      if ( !v25 )
        break;
      v26 = v25 - *(unsigned int *)(a2 + 216);
      v98 = v26;
    }
  }
  v28 = KiSearchForNewThread(a2, 0LL);
  if ( !v28 )
  {
    v30 = KeGetCurrentPrcb();
    v31 = 0;
    v32 = v30->SchedulerAssist;
    if ( v32 )
    {
      if ( v30->NestingLevel <= 1u )
      {
        v70 = v32[5];
        v32[5] = v70 + 1;
        if ( v70 == -1 )
LABEL_158:
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
    {
      v58 = v30->SchedulerAssist;
      if ( v58 )
      {
        if ( v30->NestingLevel <= 1u )
        {
          v71 = v58[5] - 1;
          v58[5] = v71;
          if ( !v71 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
      do
      {
        if ( (++v31 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v58, v27, v29) )
        {
          HvlNotifyLongSpinWait(v31);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a2 + 48) );
      v59 = v30->SchedulerAssist;
      if ( v59 )
      {
        if ( v30->NestingLevel <= 1u )
        {
          v72 = v59[5];
          v59[5] = v72 + 1;
          if ( v72 == -1 )
            goto LABEL_158;
        }
      }
    }
    v28 = *(_QWORD *)(a2 + 16);
    if ( !v28 )
    {
      v28 = *(_QWORD *)(a2 + 24);
      if ( !KeHeteroSystem || KeHeteroSystemVirtual )
        goto LABEL_38;
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      v73 = KeGetCurrentPrcb();
      v74 = v73->SchedulerAssist;
      if ( v74 )
      {
        if ( v73->NestingLevel <= 1u )
        {
          v75 = v74[5] - 1;
          v74[5] = v75;
          if ( !v75 )
            KiRemoveSystemWorkPriorityKick(v73);
        }
      }
      KiSendHeteroRescheduleIntRequest(a2);
      v76 = KeGetCurrentPrcb();
      v93 = 0;
      v77 = v76->SchedulerAssist;
      if ( v77 )
      {
        if ( v76->NestingLevel <= 1u )
        {
          v78 = v77[5];
          v77[5] = v78 + 1;
          if ( v78 == -1 )
LABEL_176:
            KiRemoveSystemWorkPriorityKick(v76);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      {
        v79 = v76->SchedulerAssist;
        if ( v79 )
        {
          if ( v76->NestingLevel <= 1u )
          {
            v80 = v79[5] - 1;
            v79[5] = v80;
            if ( !v80 )
              KiRemoveSystemWorkPriorityKick(v76);
          }
        }
        do
          KeYieldProcessorEx(&v93);
        while ( *(_QWORD *)(a2 + 48) );
        v81 = v76->SchedulerAssist;
        if ( v81 )
        {
          if ( v76->NestingLevel <= 1u )
          {
            v82 = v81[5];
            v81[5] = v82 + 1;
            if ( v82 == -1 )
              goto LABEL_176;
          }
        }
      }
      if ( !*(_QWORD *)(a2 + 16) )
        goto LABEL_38;
      v28 = *(_QWORD *)(a2 + 16);
    }
    *(_QWORD *)(a2 + 16) = 0LL;
LABEL_38:
    KiUpdatePriorityMatrixThreadState(a2, v28, 2LL, 2LL);
  }
  if ( v28 != *(_QWORD *)(a2 + 24) && v28 != a1 && *(_BYTE *)(v28 + 113) )
  {
    KiUpdatePriorityMatrixThreadState(a2, v28, 2LL, 3LL);
    v28 = *(_QWORD *)(a2 + 24);
    KiUpdatePriorityMatrixThreadState(a2, v28, 0LL, 2LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v33 = KeGetCurrentPrcb();
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v83 = v34[5] - 1;
      v34[5] = v83;
      if ( !v83 )
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  v35 = *(_BYTE *)(a1 + 390);
  if ( a1 == v28 )
  {
    v36 = *(_BYTE *)(v28 + 193) && !*(_WORD *)(v28 + 486) && !v35;
    _disable();
    KiStartThreadCycleAccumulation(a2, v28, 0LL);
    _enable();
    if ( (*(_DWORD *)(v28 + 120) & 0x800) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v28 + 120), 0xBu);
      KiInsertDeferredPreemptionApc(a2, v28, 0LL);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(a1, a1);
  }
  else
  {
    v36 = KiSwapContext(a1, v28, v35);
  }
  v37 = *(_QWORD *)(a1 + 200);
  if ( _bittestandreset((signed __int32 *)(a1 + 116), 9u) )
  {
    v39 = a1 + 256;
    v40 = 0;
    v41 = -129;
    while ( 1 )
    {
      v94 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v39, 7u) )
      {
        do
          KeYieldProcessorEx(&v94);
        while ( (*(_DWORD *)v39 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(v39 + 3) & 0xC0) == 0 )
        break;
      v42 = KeGetCurrentPrcb();
      v43 = *(unsigned __int8 *)(v39 + 2);
      v44 = *(unsigned int *)(v39 + 56);
      v91 = *(unsigned __int8 *)(v39 + 2);
      v99 = v42;
      v95 = 0;
      v45 = v42->SchedulerAssist;
      v46 = (volatile signed __int32 *)(KiProcessorBlock[v44] + 13952 + 32 * (v43 + 16));
      v97 = KiProcessorBlock[v44] + 13952;
      if ( v45 )
      {
        if ( v42->NestingLevel <= 1u )
        {
          v84 = v45[5];
          v45[5] = v84 + 1;
          if ( v84 == -1 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      v47 = v99;
      while ( _interlockedbittestandset64(v46, 0LL) )
      {
        v62 = v47->SchedulerAssist;
        if ( v62 )
        {
          if ( v47->NestingLevel <= 1u )
          {
            v85 = v62[5] - 1;
            v62[5] = v85;
            if ( !v85 )
              KiRemoveSystemWorkPriorityKick(v47);
          }
        }
        do
          KeYieldProcessorEx(&v95);
        while ( *(_QWORD *)v46 );
        v63 = v47->SchedulerAssist;
        if ( v63 )
        {
          if ( v47->NestingLevel <= 1u )
          {
            v86 = v63[5];
            v63[5] = v86 + 1;
            if ( v86 == -1 )
              KiRemoveSystemWorkPriorityKick(v47);
          }
        }
      }
      v39 = a1 + 256;
      if ( *(char *)(a1 + 259) >= 0 )
      {
        v48 = *(_QWORD **)(a1 + 288);
        v49 = v97;
        v50 = *(_QWORD **)(a1 + 296);
        if ( v48[1] != a1 + 288 || *v50 != a1 + 288 )
          __fastfail(3u);
        *v50 = v48;
        v48[1] = v50;
        if ( v50 == v48 )
        {
          *(_DWORD *)(32 * (v91 + 16LL) + v49 + 28) = -1;
          if ( KiSerializeTimerExpiration )
          {
            v53 = v91 & 0x3F;
            v54 = 8LL * (v91 >> 6);
          }
          else
          {
            v53 = *(unsigned __int8 *)(v49 - 13743);
            v54 = (unsigned __int64)v91 << 6;
          }
          _interlockedbittestandreset64(
            (volatile signed __int32 *)(qword_1405434C8[2 * *(unsigned __int8 *)(v49 - 13744)] + v54),
            v53);
        }
        _InterlockedAnd64((volatile signed __int64 *)v46, 0LL);
        v51 = KeGetCurrentPrcb();
        v52 = v51->SchedulerAssist;
        if ( v52 )
        {
          if ( v51->NestingLevel <= 1u )
          {
            v88 = v52[5] - 1;
            v52[5] = v88;
            if ( !v88 )
              KiRemoveSystemWorkPriorityKick(v51);
          }
        }
        v41 = -1073741953;
        goto LABEL_62;
      }
      _InterlockedAnd64((volatile signed __int64 *)v46, 0LL);
      v64 = KeGetCurrentPrcb();
      v65 = v64->SchedulerAssist;
      if ( v65 )
      {
        if ( v64->NestingLevel <= 1u )
        {
          v87 = v65[5] - 1;
          v65[5] = v87;
          if ( !v87 )
            KiRemoveSystemWorkPriorityKick(v64);
        }
      }
      if ( _InterlockedExchange64((volatile __int64 *)(v97 + 8LL * (*(_BYTE *)(a1 + 259) & 0x3F)), 0LL) )
      {
        v41 = 16777087;
LABEL_62:
        v40 = 1;
        break;
      }
      _InterlockedAnd((volatile signed __int32 *)v39, 0xFFFFFF7F);
      v96 = 0;
      while ( *(char *)(a1 + 259) < 0 )
        KeYieldProcessorEx(&v96);
    }
    _InterlockedAnd((volatile signed __int32 *)v39, v41);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      if ( !v40 )
        goto LABEL_78;
      v100 = v39;
      v101[0] = &v100;
      v101[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v101, 1, 1073872896, 3925, 1538);
    }
    if ( v40 )
      goto LABEL_44;
LABEL_78:
    *(_BYTE *)(a1 + 481) = 4;
    *(_QWORD *)(a1 + 264) = a1 + 464;
    *(_QWORD *)(a1 + 272) = a1 + 464;
  }
LABEL_44:
  if ( v36 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v89 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v89->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v89);
    }
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v35 < 2u )
  {
    v90 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v90->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v90);
  }
  __writecr8(v35);
  return v37;
}
