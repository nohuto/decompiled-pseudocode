/*
 * XREFs of KeClockInterruptNotify @ 0x140060C40
 * Callers:
 *     <none>
 * Callees:
 *     KeAccumulateTicks @ 0x1400601D0 (KeAccumulateTicks.c)
 *     PoExecutePerfCheck @ 0x140061660 (PoExecutePerfCheck.c)
 *     KiForwardTick @ 0x140061720 (KiForwardTick.c)
 *     KiCheckGroupSchedulingQuantumEnd @ 0x140061B80 (KiCheckGroupSchedulingQuantumEnd.c)
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x14008BA90 (RtlGetInterruptTimePrecise.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400D0D34 (KiCheckPreferredHeteroProcessor.c)
 *     KiShouldScanSharedReadyQueue @ 0x1400D0FA0 (KiShouldScanSharedReadyQueue.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1400FCD90 (KiSetClockIntervalToMinimumRequested.c)
 *     KiEventClockStateChange @ 0x1400FCFB4 (KiEventClockStateChange.c)
 *     KiRestoreClockTickRate @ 0x1400FD058 (KiRestoreClockTickRate.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KeCheckAndApplyBamQos @ 0x140297E80 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x1402981E4 (KeUpdatePendingQosRequest.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1402985A0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14029880C (KiGenerateHeteroSets.c)
 *     KiResetForceIdle @ 0x14029B62C (KiResetForceIdle.c)
 *     KiSetForceIdleState @ 0x14029B7A4 (KiSetForceIdleState.c)
 *     PoExecuteIdleCheck @ 0x1402D3A20 (PoExecuteIdleCheck.c)
 *     PpmGetIdleConstrainedMask @ 0x1402D412C (PpmGetIdleConstrainedMask.c)
 *     PoSetProcessorQoS @ 0x1402DB258 (PoSetProcessorQoS.c)
 *     PpmEventIdleDurationExpiration @ 0x1402E58EC (PpmEventIdleDurationExpiration.c)
 */

void __fastcall KeClockInterruptNotify(__int64 a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v3; // r12
  LARGE_INTEGER *v6; // r14
  char v7; // di
  struct _KPRCB *v8; // rbx
  __int16 v9; // bp
  int v10; // esi
  __int64 v11; // rdx
  unsigned __int64 IdleNonParkedCpuSet; // rcx
  _KTHREAD *CurrentThread; // rdi
  unsigned int SystemHeteroCpuPolicy; // r15d
  struct _KPRCB *v15; // r15
  __int64 v16; // rcx
  bool v17; // zf
  bool v18; // bp
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  LARGE_INTEGER v21; // r8
  unsigned __int128 v22; // rax
  LONGLONG v23; // rdx
  __int64 v24; // r11
  unsigned __int128 v25; // rax
  unsigned __int64 v26; // r9
  LONGLONG v27; // rdx
  unsigned __int64 v28; // rsi
  __int64 v29; // r8
  __int64 v30; // rdx
  struct _KPRCB *v31; // rdx
  _DWORD *v32; // rcx
  struct _KPRCB *v33; // r14
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  unsigned __int64 v36; // rbp
  __int64 v37; // rcx
  unsigned __int64 v38; // rsi
  unsigned __int8 v39; // al
  __int64 v40; // r9
  __int16 *v41; // r8
  unsigned __int16 v42; // dx
  __int64 v43; // rcx
  __int64 v44; // rax
  struct _KPRCB *v45; // rsi
  int v46; // ebp
  __int64 v47; // rcx
  _KTHREAD *v48; // rdi
  _QWORD *v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rax
  struct _KPRCB *v52; // rbp
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  struct _KPRCB *v57; // r14
  _KPRCBFLAG v58; // ecx
  _DWORD *v59; // rcx
  _DWORD *v60; // rcx
  char v61; // dl
  unsigned __int64 v62; // r8
  char v63; // al
  unsigned __int64 v64; // rax
  unsigned __int8 v65; // si
  unsigned __int8 v66; // di
  volatile CCHAR v67; // t1
  unsigned __int64 v68; // rdx
  _DWORD *v69; // rcx
  int v70; // eax
  int v71; // eax
  int v72; // eax
  LARGE_INTEGER InterruptTimePrecise; // rbp
  __int64 v74; // rdx
  int v75; // eax
  int v76; // eax
  struct _KPRCB *v77; // rcx
  int v78; // eax
  int v79; // eax
  _DWORD *v80; // rcx
  int v81; // eax
  int v82; // eax
  struct _KPRCB *Prcb; // rax
  __int64 v84; // rax
  unsigned int PrcbFlags; // ecx
  int v86; // edx
  bool v87; // r15
  unsigned int v88; // edx
  char v89; // al
  struct _KPRCB *v90; // rcx
  _KNODE *ParentNode; // r13
  unsigned __int64 GroupSetMember; // rax
  unsigned __int64 v93; // rdx
  unsigned __int8 EfficiencySchedulingClass; // r11
  int v95; // r10d
  unsigned __int64 v96; // rax
  __int64 v97; // r9
  unsigned __int8 v98; // al
  int v99; // edx
  bool v100; // bp
  _KPRCBFLAG v101; // edx
  char v102; // al
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *v104; // rcx
  char v105; // [rsp+30h] [rbp-2E8h]
  unsigned int v106; // [rsp+34h] [rbp-2E4h] BYREF
  int v107; // [rsp+38h] [rbp-2E0h] BYREF
  int v108; // [rsp+3Ch] [rbp-2DCh] BYREF
  unsigned __int64 v109; // [rsp+40h] [rbp-2D8h]
  struct _KPRCB *v110; // [rsp+48h] [rbp-2D0h]
  __int64 v111; // [rsp+50h] [rbp-2C8h] BYREF
  __int64 v112; // [rsp+58h] [rbp-2C0h] BYREF
  LARGE_INTEGER *v113; // [rsp+60h] [rbp-2B8h]
  __int64 v114; // [rsp+68h] [rbp-2B0h]
  int v115; // [rsp+70h] [rbp-2A8h]
  __int64 v116; // [rsp+78h] [rbp-2A0h]
  __int64 v117; // [rsp+80h] [rbp-298h]
  struct _KPRCB *v118; // [rsp+88h] [rbp-290h]
  _QWORD *v119; // [rsp+90h] [rbp-288h]
  char v120[8]; // [rsp+98h] [rbp-280h] BYREF
  __int64 v121; // [rsp+A0h] [rbp-278h] BYREF
  __int64 v122; // [rsp+A8h] [rbp-270h] BYREF
  _QWORD v123[2]; // [rsp+B0h] [rbp-268h] BYREF
  __int16 v124; // [rsp+C0h] [rbp-258h]
  LARGE_INTEGER PerformanceCounter; // [rsp+C8h] [rbp-250h] BYREF
  _DWORD v126[44]; // [rsp+D0h] [rbp-248h] BYREF
  _WORD v127[88]; // [rsp+180h] [rbp-198h] BYREF
  char v128[8]; // [rsp+230h] [rbp-E8h] BYREF
  __int64 v129; // [rsp+238h] [rbp-E0h]
  int v130; // [rsp+310h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v113 = 0LL;
  v111 = 0LL;
  v6 = 0LL;
  if ( !KiForceIdleDisabled )
  {
    _disable();
    v52 = KeGetCurrentPrcb();
    v107 = 0;
    SchedulerAssist = v52->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v52->NestingLevel <= 1u )
      {
        v70 = SchedulerAssist[5];
        SchedulerAssist[5] = v70 + 1;
        if ( v70 == -1 )
LABEL_122:
          KiRemoveSystemWorkPriorityKick(v52);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
    {
      v59 = v52->SchedulerAssist;
      if ( v59 )
      {
        if ( v52->NestingLevel <= 1u )
        {
          v71 = v59[5] - 1;
          v59[5] = v71;
          if ( !v71 )
            KiRemoveSystemWorkPriorityKick(v52);
        }
      }
      do
        KeYieldProcessorEx(&v107);
      while ( KiForceIdleLock );
      v60 = v52->SchedulerAssist;
      if ( v60 )
      {
        if ( v52->NestingLevel <= 1u )
        {
          v72 = v60[5];
          v60[5] = v72 + 1;
          if ( v72 == -1 )
            goto LABEL_122;
        }
      }
    }
    if ( CurrentPrcb->ClockOwner && !KiForceIdleDisabled && KiForceIdleState == 4 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      ((void (__fastcall *)(_QWORD))PoExecuteIdleCheck)((LARGE_INTEGER)InterruptTimePrecise.QuadPart);
      if ( KiForceIdleWatchdogResetCount == 32 )
      {
        off_1403FF600[0]();
        v75 = 0;
      }
      else
      {
        v75 = KiForceIdleWatchdogResetCount + 1;
      }
      KiForceIdleWatchdogResetCount = v75;
      if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiForceIdleActiveLastStartTime) > 0x1312D00 )
      {
        LOBYTE(v74) = 1;
        KiResetForceIdle(2LL, v74);
      }
      else
      {
        ++qword_140422750;
        v3 = 1;
        v6 = (LARGE_INTEGER *)((char *)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex);
        v113 = v6;
        KiClockTickSkipTraceIndex = ((_BYTE)KiClockTickSkipTraceIndex + 1) & 0xF;
        LOBYTE(v6->LowPart) = 0;
        v6[1] = InterruptTimePrecise;
      }
    }
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
    v54 = KeGetCurrentPrcb();
    v55 = v54->SchedulerAssist;
    if ( v55 )
    {
      if ( v54->NestingLevel <= 1u )
      {
        v76 = v55[5] - 1;
        v55[5] = v76;
        if ( !v76 )
          KiRemoveSystemWorkPriorityKick(v54);
      }
    }
    _enable();
    if ( v3 )
    {
      if ( KiClockOwnerOneShotRequestState == 1 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        KiClockOwnerOneShotRequestState = 2;
        KiSetClockIntervalToMinimumRequested();
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v104 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v104->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v104);
        }
        __writecr8(CurrentIrql);
        if ( v6 )
          LOBYTE(v6->LowPart) = 1;
        ++qword_140422758;
      }
      return;
    }
  }
  v7 = *(_BYTE *)(a1 + 368) & 1;
  if ( !CurrentPrcb->ClockOwner )
  {
    v8 = KeGetCurrentPrcb();
    v9 = v130;
    ++v8->ClockInterrupts;
    ++v8->InterruptLastCount;
    _disable();
    v10 = MEMORY[0xFFFFF78000000320];
    if ( (v9 & 0x200) != 0 )
      _enable();
    KeAccumulateTicks(v8, v8->LastTick, MEMORY[0xFFFFF78000000320], a2, v7);
    CurrentThread = v8->CurrentThread;
    v8->ClockKeepAlive = 1;
    if ( CurrentThread == v8->IdleThread )
      goto LABEL_11;
    if ( CurrentThread->CycleTime >= CurrentThread->QuantumTarget )
      goto LABEL_12;
    SystemHeteroCpuPolicy = CurrentThread->SystemHeteroCpuPolicy;
    if ( CurrentThread->SystemHeteroCpuPolicy )
    {
      if ( SystemHeteroCpuPolicy >= 5 )
        SystemHeteroCpuPolicy = KiConvertDynamicHeteroPolicy(CurrentThread, v11, v8);
      ParentNode = v8->ParentNode;
      KiGenerateHeteroSets(
        (_DWORD)ParentNode,
        CurrentThread->Affinity.Mask,
        SystemHeteroCpuPolicy,
        (unsigned int)&v112,
        (__int64)&v122,
        (__int64)&v121);
      GroupSetMember = v8->GroupSetMember;
      if ( (GroupSetMember & v121) == 0 )
        goto LABEL_12;
      if ( (GroupSetMember & v112) == 0 )
      {
        IdleNonParkedCpuSet = ParentNode->IdleNonParkedCpuSet;
        if ( v8->GroupSetMember != v8->CoreProcessorSet && (IdleNonParkedCpuSet & ParentNode->IdleSmtSet) != 0 )
          IdleNonParkedCpuSet &= ParentNode->IdleSmtSet;
        if ( (IdleNonParkedCpuSet & v112) != 0 )
          goto LABEL_12;
        v93 = v122 & IdleNonParkedCpuSet & ~v112;
        if ( SystemHeteroCpuPolicy - 3 <= 1 )
          EfficiencySchedulingClass = v8->PowerState.EfficiencySchedulingClass;
        else
          EfficiencySchedulingClass = v8->PowerState.PerformanceSchedulingClass;
        if ( v93 )
        {
          v95 = ParentNode->Affinity.Group << 6;
          do
          {
            _BitScanReverse64(&v96, v93);
            v115 = v96;
            v97 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v95 + v96)]];
            v98 = SystemHeteroCpuPolicy - 3 <= 1 ? *(_BYTE *)(v97 + 24226) : *(_BYTE *)(v97 + 24225);
            if ( v98 > EfficiencySchedulingClass )
              goto LABEL_12;
            v93 &= ~*(_QWORD *)(v97 + 200);
          }
          while ( v93 );
        }
      }
    }
    v15 = KeGetCurrentPrcb();
    IdleNonParkedCpuSet = (unsigned int)v15->PrcbFlags.PrcbFlags;
    if ( (IdleNonParkedCpuSet & 0xC) == 0 )
    {
      if ( (((unsigned __int8)IdleNonParkedCpuSet ^ *((_BYTE *)&CurrentThread->MiscFlags + 4)) & 3) != 0 )
        KeCheckAndApplyBamQos(v15, CurrentThread);
LABEL_11:
      if ( MEMORY[0xFFFFF78000000320] > v8->GenerationTarget )
      {
LABEL_12:
        v8->QuantumEnd = 1;
        if ( v8->NestingLevel )
        {
          v8->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(IdleNonParkedCpuSet) = 2;
          HalRequestSoftwareInterrupt(IdleNonParkedCpuSet);
        }
        return;
      }
      SchedulingGroup = CurrentThread->SchedulingGroup;
      if ( !SchedulingGroup || (IdleNonParkedCpuSet = (unsigned __int64)SchedulingGroup + v8->ScbOffset) == 0 )
      {
LABEL_78:
        if ( (signed int)(v8->ReadyScanTick - v10) < 0
          && (!(unsigned int)KiShouldScanSharedReadyQueue(v8) || (v8->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
          && (v8->ReadySummary & 0x7FFE) == 0 )
        {
          v8->ReadyScanTick = v10 + 75;
        }
        return;
      }
      while ( 1 )
      {
        v61 = *(_BYTE *)(IdleNonParkedCpuSet + 112);
        v62 = IdleNonParkedCpuSet - v8->ScbOffset;
        v63 = v61 & 0x10;
        if ( (v61 & 4) != 0 )
        {
          if ( v63 )
          {
            v64 = *(_QWORD *)(IdleNonParkedCpuSet + 24);
LABEL_105:
            if ( *(_QWORD *)IdleNonParkedCpuSet >= v64 )
              goto LABEL_12;
            goto LABEL_106;
          }
          if ( (v61 & 2) == 0
            && (*(__int64 *)(v62 + 48) <= 0 || *(_QWORD *)IdleNonParkedCpuSet >= *(_QWORD *)(IdleNonParkedCpuSet + 24)) )
          {
            goto LABEL_12;
          }
        }
        else
        {
          if ( v63 )
          {
            v64 = *(_QWORD *)(IdleNonParkedCpuSet + 8);
            goto LABEL_105;
          }
          if ( (v61 & 2) == 0 && *(__int64 *)(v62 + 48) <= 0 )
            goto LABEL_12;
        }
LABEL_106:
        IdleNonParkedCpuSet = *(_QWORD *)(IdleNonParkedCpuSet + 408);
        if ( !IdleNonParkedCpuSet )
          goto LABEL_78;
      }
    }
    _disable();
    IdleNonParkedCpuSet = v15->PrcbFlags.PrcbFlags & 0xFFFFFFF3;
    v99 = *((_DWORD *)&CurrentThread->0 + 1) & 3;
    v100 = (v9 & 0x200) != 0;
    if ( v99 != (v15->PrcbFlags.PrcbFlags & 3) )
    {
      v101.PrcbFlags = IdleNonParkedCpuSet | (4 * v99);
      v15->PrcbFlags = v101;
      v102 = PoSetProcessorQoS(v15, ((unsigned int)v101.PrcbFlags >> 2) & 3);
      IdleNonParkedCpuSet = (unsigned int)v15->PrcbFlags.PrcbFlags;
      if ( !v102 )
      {
LABEL_217:
        if ( (IdleNonParkedCpuSet & 0xC) == 0 )
          KeUpdatePendingQosRequest(v15);
        if ( v100 )
          _enable();
        goto LABEL_11;
      }
      IdleNonParkedCpuSet = (unsigned int)IdleNonParkedCpuSet & 0xFFFFFFF3;
    }
    v15->PrcbFlags.PrcbFlags = IdleNonParkedCpuSet;
    goto LABEL_217;
  }
  v16 = 24LL * (unsigned int)KiClockTickTraceIndex + 4336128;
  KiClockTickTraceIndex = (KiClockTickTraceIndex + 1) & 0xF;
  v17 = KiClockOwnerOneShotRequestState == 1;
  v119 = (_QWORD *)(0x140000000LL + v16);
  *(_QWORD *)(0x140000008LL + v16) = MEMORY[0xFFFFF78000000008];
  if ( v17 )
  {
    v65 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v65 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KiClockOwnerOneShotRequestState = 2;
    KiClockOwnerOneShotRequest = 0LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v65 < 2u )
    {
      v77 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v77->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v77);
    }
    __writecr8(v65);
  }
  v110 = KeGetCurrentPrcb();
  v105 = 0;
  v114 = MEMORY[0xFFFFF78000000320];
  _disable();
  v18 = (v130 & 0x200) != 0;
  _m_prefetchw((const void *)0xFFFFF78000000340LL);
  v19 = MEMORY[0xFFFFF78000000340];
  while ( (v19 & 1) != 0 )
  {
    v19 = MEMORY[0xFFFFF78000000340];
LABEL_146:
    _mm_pause();
  }
  v20 = v19;
  v19 = _InterlockedCompareExchange64((volatile signed __int64 *)0xFFFFF78000000340LL, v19 + 1, v19);
  if ( v20 != v19 )
    goto LABEL_146;
  v21 = KeQueryPerformanceCounter(0LL);
  *((_QWORD *)&v22 + 1) = 0LL;
  if ( v21.QuadPart > MEMORY[0xFFFFF78000000348] )
  {
    v23 = v21.QuadPart - MEMORY[0xFFFFF78000000348];
    if ( MEMORY[0xFFFFF78000000368] )
      v23 <<= MEMORY[0xFFFFF78000000368];
    v22 = (unsigned __int64)v23 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
    v116 = *((_QWORD *)&v22 + 1);
    KiSystemTimeErrorAccumulator += v22;
    if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v22 )
      v116 = ++*((_QWORD *)&v22 + 1);
  }
  v24 = *((_QWORD *)&v22 + 1) + MEMORY[0xFFFFF78000000014];
  *((_QWORD *)&v25 + 1) = 0LL;
  v26 = MEMORY[0xFFFFF78000000360];
  if ( v21.QuadPart > MEMORY[0xFFFFF78000000350] )
  {
    v27 = v21.QuadPart - MEMORY[0xFFFFF78000000350];
    if ( MEMORY[0xFFFFF78000000369] )
      v27 <<= MEMORY[0xFFFFF78000000369];
    v25 = (unsigned __int64)v27 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v117 = *((_QWORD *)&v25 + 1);
    KiInterruptTimeErrorAccumulator += v25;
    if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v25 )
      v117 = ++*((_QWORD *)&v25 + 1);
  }
  v28 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v25 + 1);
  MEMORY[0xFFFFF7800000001C] = HIDWORD(v24);
  MEMORY[0xFFFFF78000000014] = v24;
  MEMORY[0xFFFFF78000000010] = (MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v25 + 1)) >> 32;
  MEMORY[0xFFFFF78000000008] += *((_QWORD *)&v25 + 1);
  MEMORY[0xFFFFF78000000348] = v21.QuadPart;
  MEMORY[0xFFFFF78000000350] = v21.QuadPart;
  v29 = (unsigned int)KiTickOffset - *((_QWORD *)&v25 + 1);
  v109 = MEMORY[0xFFFFF78000000320];
  if ( v29 <= 0 )
  {
    v26 = KeMaximumIncrement;
    v30 = 1LL;
    v29 += KeMaximumIncrement;
    if ( v29 <= 0 )
    {
      v67 = KeNumberProcessorsGroup0[1];
      v68 = ((unsigned __int64)(((unsigned __int64)-v29
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v67)
          + 1;
      v26 = v68 * KeMaximumIncrement;
      v29 += v26;
      v30 = v68 + 1;
    }
    v109 = v30 + MEMORY[0xFFFFF78000000320];
    MEMORY[0xFFFFF78000000328] = (unsigned __int64)(v30 + MEMORY[0xFFFFF78000000320]) >> 32;
    MEMORY[0xFFFFF78000000320] += v30;
  }
  KiTickOffset = v29;
  ++MEMORY[0xFFFFF78000000340];
  v31 = KeGetCurrentPrcb();
  v118 = v31;
  v108 = 0;
  v32 = v31->SchedulerAssist;
  if ( v32 )
  {
    if ( v31->NestingLevel <= 1u )
    {
      v78 = v32[5];
      v32[5] = v78 + 1;
      if ( v78 == -1 )
        KiRemoveSystemWorkPriorityKick(v31);
    }
  }
  v33 = v118;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    v69 = v33->SchedulerAssist;
    if ( v69 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v79 = v69[5] - 1;
        v69[5] = v79;
        if ( !v79 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    do
      KeYieldProcessorEx(&v108);
    while ( KiForceIdleLock );
    v80 = v33->SchedulerAssist;
    if ( v80 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v81 = v80[5];
        v80[5] = v81 + 1;
        if ( v81 == -1 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
  }
  if ( KiForceIdleStartTime && v28 >= KiForceIdleStartTime && KiForceIdleState == 2 )
  {
    KiSetForceIdleState(1LL, v31, v29, v26);
    if ( !*(&KiForceIdleStartDpc + 7) )
      WORD1(KiForceIdleStartDpc) = v110->Number + 1280;
    KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStartDpc, 0);
  }
  if ( ((KiForceIdleState - 1) & 0xFFFFFFFD) == 0 )
    v105 = 1;
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v34 = KeGetCurrentPrcb();
  v35 = v34->SchedulerAssist;
  if ( v35 )
  {
    if ( v34->NestingLevel <= 1u )
    {
      v82 = v35[5] - 1;
      v35[5] = v82;
      if ( !v82 )
        KiRemoveSystemWorkPriorityKick(v34);
    }
  }
  if ( v18 )
    _enable();
  if ( KeMinimumIncrement - 1 + (int)v28 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v28;
  v36 = v109;
  if ( v109 != v114 && !--KiBalanceSetManagerCount )
  {
    KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
    KiInsertQueueDpc((ULONG_PTR)&KiBalanceSetManagerPeriodicDpc, 0);
  }
  v37 = PpmIdleDurationExpirationTimeout;
  if ( PpmIdleDurationExpirationTimeout )
  {
    v37 = PpmIdleLastIdleDurationExpirationTime + PpmIdleDurationExpirationTimeout;
    if ( PpmIdleLastIdleDurationExpirationTime + PpmIdleDurationExpirationTimeout < v28 )
    {
      if ( (unsigned __int8)PpmGetIdleConstrainedMask(v128) )
      {
        PpmIdleLastIdleDurationExpirationTime = v28;
        v126[0] = 1310721;
        memset(&v126[1], 0, 0xA4uLL);
        v123[1] = v129;
        v123[0] = v128;
        v124 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v106, v123) )
        {
          Prcb = (struct _KPRCB *)KeGetPrcb(v106);
          if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= v28 )
            KeAddProcessorAffinityEx(v126, v106);
        }
        if ( !(unsigned int)KeIsEmptyAffinityEx(v126) )
        {
          PpmEventIdleDurationExpiration(v126);
          HalRequestIpi(0LL, v126);
        }
      }
    }
  }
  if ( !v105 )
    PoExecutePerfCheck(v37, v35, v29, v26);
  v38 = v28 >> 18;
  if ( KiGroupSchedulingEnabled && v36 > KiGenerationEndTick )
  {
    v39 = 1;
    KiGenerationEndTick += (unsigned int)KiGenerationTicks;
  }
  else
  {
    v39 = 0;
  }
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
  {
    KiForwardTick((_DWORD)v110, KeNumberProcessors_0, v38, v39, (__int64)v127);
    LOWORD(v40) = KiClockCheckPending[0];
    if ( KiClockCheckPending[0] < v127[0] )
    {
      v41 = v127;
    }
    else
    {
      v41 = KiClockCheckPending;
      LOWORD(v40) = v127[0];
    }
    v42 = 0;
    word_140404CA2 = 20;
    KiClockCheckPending[0] = *v41;
    if ( (_WORD)v40 )
    {
      v42 = v40;
      v43 = 0LL;
      v40 = (unsigned __int16)v40;
      do
      {
        *(_QWORD *)&KiClockCheckPending[v43 + 4] |= *(_QWORD *)&v127[v43 + 4];
        v43 += 4LL;
        --v40;
      }
      while ( v40 );
    }
    for ( ; v42 < (unsigned __int16)*v41; *(_QWORD *)&KiClockCheckPending[4 * v44 + 4] = *(_QWORD *)&v41[4 * v44 + 4] )
      v44 = v42++;
    for ( dword_140404CA4 = 0; v42 < (unsigned __int16)word_140404CA2; *(_QWORD *)&KiClockCheckPending[4 * v84 + 4] = 0LL )
      v84 = v42++;
  }
  v45 = KeGetCurrentPrcb();
  ++v45->ClockInterrupts;
  ++v45->InterruptLastCount;
  _disable();
  v46 = MEMORY[0xFFFFF78000000320];
  if ( (v130 & 0x200) != 0 )
    _enable();
  KeAccumulateTicks(v45, v45->LastTick, MEMORY[0xFFFFF78000000320], a2, v7);
  v48 = v45->CurrentThread;
  v45->ClockKeepAlive = 1;
  if ( v48 != v45->IdleThread )
  {
    if ( v48->CycleTime >= v48->QuantumTarget || (unsigned int)KiCheckPreferredHeteroProcessor(v48, v45, 1LL) )
    {
LABEL_65:
      v45->QuantumEnd = 1;
      if ( v45->NestingLevel )
      {
        v45->InterruptRequest = 1;
      }
      else
      {
        LOBYTE(v47) = 2;
        HalRequestSoftwareInterrupt(v47);
      }
      goto LABEL_67;
    }
    v57 = KeGetCurrentPrcb();
    v58.PrcbFlags = (volatile int)v57->PrcbFlags;
    if ( (v58.PrcbFlags & 0xC) == 0 )
    {
      if ( ((LOBYTE(v58.PrcbFlags) ^ *((_BYTE *)&v48->MiscFlags + 4)) & 3) != 0 )
        KeCheckAndApplyBamQos(v57, v48);
      goto LABEL_64;
    }
    _disable();
    PrcbFlags = v57->PrcbFlags.PrcbFlags & 0xFFFFFFF3;
    v86 = *((_DWORD *)&v48->0 + 1) & 3;
    v87 = (v130 & 0x200) != 0;
    if ( v86 != (v57->PrcbFlags.PrcbFlags & 3) )
    {
      v88 = PrcbFlags | (4 * v86);
      v57->PrcbFlags.PrcbFlags = v88;
      v89 = PoSetProcessorQoS(v57, (v88 >> 2) & 3);
      PrcbFlags = v57->PrcbFlags.PrcbFlags;
      if ( !v89 )
      {
LABEL_182:
        if ( (PrcbFlags & 0xC) == 0 )
          KeUpdatePendingQosRequest(v57);
        if ( v87 )
          _enable();
        goto LABEL_64;
      }
      PrcbFlags &= 0xFFFFFFF3;
    }
    v57->PrcbFlags.PrcbFlags = PrcbFlags;
    goto LABEL_182;
  }
LABEL_64:
  if ( (unsigned __int8)KiCheckGroupSchedulingQuantumEnd(v45, v48) )
    goto LABEL_65;
  if ( (signed int)(v45->ReadyScanTick - v46) < 0
    && (!(unsigned int)((__int64 (*)(void))KiShouldScanSharedReadyQueue)()
     || (v45->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
    && (v45->ReadySummary & 0x7FFE) == 0 )
  {
    v45->ReadyScanTick = v46 + 75;
  }
LABEL_67:
  if ( KiClockOwnerOneShotRequestState == 2 )
  {
    v66 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v66 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KiSetClockIntervalToMinimumRequested();
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v66 < 2u )
    {
      v90 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v90->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v90);
    }
    __writecr8(v66);
  }
  v49 = v119;
  *v119 = MEMORY[0xFFFFF78000000350];
  v50 = MEMORY[0xFFFFF78000000008];
  if ( KiClockState == 2 )
  {
    KiRestoreClockTickRate(MEMORY[0xFFFFF78000000008], &v111, v120);
    _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0LL, 2LL, v120, &v111);
  }
  v51 = v50 + (unsigned int)KeTimeIncrement;
  v49[2] = v50;
  KiClockTimerNextTickTime = v51;
}
