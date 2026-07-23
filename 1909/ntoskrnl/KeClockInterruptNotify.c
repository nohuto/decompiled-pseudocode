/*
 * XREFs of KeClockInterruptNotify @ 0x1400348F0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140011C08 (KiCheckPreferredHeteroProcessor.c)
 *     KiShouldScanSharedReadyQueue @ 0x140011F00 (KiShouldScanSharedReadyQueue.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeAccumulateTicks @ 0x140033750 (KeAccumulateTicks.c)
 *     PoExecutePerfCheck @ 0x140036090 (PoExecutePerfCheck.c)
 *     KiForwardTick @ 0x140036140 (KiForwardTick.c)
 *     KiCheckGroupSchedulingQuantumEnd @ 0x1400365E0 (KiCheckGroupSchedulingQuantumEnd.c)
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x14009E170 (KeIsEmptyAffinityEx.c)
 *     RtlGetInterruptTimePrecise @ 0x14009E740 (RtlGetInterruptTimePrecise.c)
 *     KiRestoreClockTickRate @ 0x140111F6C (KiRestoreClockTickRate.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1401123DC (KiSetClockIntervalToMinimumRequested.c)
 *     KiEventClockStateChange @ 0x140112604 (KiEventClockStateChange.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiIsQosGroupingActive @ 0x1401BF2D4 (KiIsQosGroupingActive.c)
 *     KiIsQosGroupingClass @ 0x1401BF2F8 (KiIsQosGroupingClass.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeCheckAndApplyBamQos @ 0x1402AE8A0 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x1402AEC04 (KeUpdatePendingQosRequest.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1402AEFC0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x1402AF0D8 (KiGenerateHeteroSets.c)
 *     KiResetForceIdle @ 0x1402B2674 (KiResetForceIdle.c)
 *     KiSetForceIdleState @ 0x1402B27EC (KiSetForceIdleState.c)
 *     PoExecuteIdleCheck @ 0x1402EDC2C (PoExecuteIdleCheck.c)
 *     PpmGetIdleConstrainedMask @ 0x1402EE380 (PpmGetIdleConstrainedMask.c)
 *     PoSetProcessorQoS @ 0x1402F66A8 (PoSetProcessorQoS.c)
 *     PpmEventIdleDurationExpiration @ 0x140301E38 (PpmEventIdleDurationExpiration.c)
 */

void __fastcall KeClockInterruptNotify(__int64 a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  char v3; // bp
  __int64 v4; // r8
  struct _KPRCB *v6; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // eax
  LARGE_INTEGER InterruptTimePrecise; // rbx
  __int64 v12; // rdx
  int v13; // eax
  char *v14; // r14
  __int64 PrcbFlags; // rcx
  unsigned __int64 v16; // rdx
  int v17; // eax
  char v18; // cl
  __int64 v19; // rcx
  bool v20; // zf
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *v22; // rcx
  unsigned __int8 v23; // r13
  __int64 v24; // r12
  bool v25; // bp
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  LARGE_INTEGER v28; // r8
  unsigned __int128 v29; // rax
  LONGLONG v30; // rdx
  __int64 v31; // r11
  unsigned __int64 v32; // r9
  LONGLONG v33; // rdx
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rsi
  __int64 v36; // r8
  volatile CCHAR v37; // t1
  unsigned __int64 v38; // rdx
  struct _KPRCB *v39; // rbx
  _DWORD *v40; // rcx
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  bool v44; // bl
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  int v47; // eax
  struct _KPRCB *Prcb; // rax
  unsigned __int64 v49; // rdi
  __int64 v50; // r9
  __int16 *v51; // r8
  unsigned __int16 v52; // dx
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  struct _KPRCB *v56; // rbx
  __int16 v57; // r12
  int v58; // ebp
  __int64 v59; // rsi
  struct _KPRCB *v60; // rdi
  _KPRCBFLAG v61; // eax
  unsigned int v62; // ecx
  int v63; // edx
  bool v64; // r12
  unsigned int v65; // edx
  char v66; // al
  unsigned __int8 v67; // bl
  struct _KPRCB *v68; // rcx
  _QWORD *v69; // rdi
  __int64 v70; // rbx
  __int64 v71; // rax
  struct _KPRCB *v72; // rbx
  __int16 v73; // bp
  int v74; // r15d
  _KTHREAD *CurrentThread; // rsi
  unsigned int SystemHeteroCpuPolicy; // edi
  _KNODE *ParentNode; // r14
  __int64 v78; // rdx
  unsigned __int64 GroupSetMember; // rax
  unsigned __int8 v80; // r10
  int v81; // r11d
  unsigned __int64 v82; // rax
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // rdi
  bool v85; // bp
  _KPRCBFLAG v86; // edx
  char v87; // al
  char v88; // al
  unsigned __int64 v89; // rax
  unsigned __int8 v90; // bl
  struct _KPRCB *v91; // rcx
  char v93; // [rsp+31h] [rbp-387h]
  char v94; // [rsp+32h] [rbp-386h]
  ULONG v95; // [rsp+34h] [rbp-384h] BYREF
  int v96; // [rsp+38h] [rbp-380h] BYREF
  int v97; // [rsp+3Ch] [rbp-37Ch] BYREF
  struct _KPRCB *v98; // [rsp+40h] [rbp-378h]
  __int64 v99; // [rsp+48h] [rbp-370h] BYREF
  unsigned __int64 v100; // [rsp+50h] [rbp-368h] BYREF
  _BYTE *v101; // [rsp+58h] [rbp-360h]
  _QWORD *v102; // [rsp+60h] [rbp-358h] BYREF
  __int64 v103; // [rsp+68h] [rbp-350h]
  __int64 v104; // [rsp+70h] [rbp-348h]
  int v105; // [rsp+78h] [rbp-340h]
  __int64 v106; // [rsp+80h] [rbp-338h]
  __int64 v107; // [rsp+88h] [rbp-330h]
  _QWORD *v108; // [rsp+90h] [rbp-328h]
  char v109[8]; // [rsp+98h] [rbp-320h] BYREF
  __int64 v110; // [rsp+A0h] [rbp-318h] BYREF
  __int64 v111; // [rsp+A8h] [rbp-310h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+B0h] [rbp-308h] BYREF
  _DWORD v113[44]; // [rsp+C0h] [rbp-2F8h] BYREF
  _QWORD v114[22]; // [rsp+170h] [rbp-248h] BYREF
  _QWORD v115[44]; // [rsp+220h] [rbp-198h] BYREF
  int v116; // [rsp+3B0h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = a2;
  v93 = 0;
  v101 = 0LL;
  v99 = 0LL;
  if ( !KiForceIdleDisabled )
  {
    _disable();
    v6 = KeGetCurrentPrcb();
    v96 = 0;
    while ( 1 )
    {
      SchedulerAssist = v6->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v6->NestingLevel <= 1u )
        {
          v8 = SchedulerAssist[5];
          SchedulerAssist[5] = v8 + 1;
          if ( v8 == -1 )
            KiRemoveSystemWorkPriorityKick(v6);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
        break;
      v9 = v6->SchedulerAssist;
      if ( v9 )
      {
        if ( v6->NestingLevel <= 1u )
        {
          v10 = v9[5] - 1;
          v9[5] = v10;
          if ( !v10 )
            KiRemoveSystemWorkPriorityKick(v6);
        }
      }
      do
        KeYieldProcessorEx(&v96);
      while ( KiForceIdleLock );
    }
    if ( CurrentPrcb->ClockOwner && !KiForceIdleDisabled && KiForceIdleState == 4 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      ((void (__fastcall *)(_QWORD))PoExecuteIdleCheck)((LARGE_INTEGER)InterruptTimePrecise.QuadPart);
      if ( KiForceIdleWatchdogResetCount == 32 )
      {
        off_140424600[0]();
        v13 = 0;
      }
      else
      {
        v13 = KiForceIdleWatchdogResetCount + 1;
      }
      KiForceIdleWatchdogResetCount = v13;
      if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiForceIdleActiveLastStartTime) > 0x1312D00 )
      {
        LOBYTE(v12) = 1;
        KiResetForceIdle(2LL, v12);
      }
      else
      {
        ++qword_14044D010;
        v3 = 1;
        v14 = (char *)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex;
        v93 = 1;
        v101 = v14;
        KiClockTickSkipTraceIndex = (KiClockTickSkipTraceIndex + 1) & 0xF;
        *v14 = 0;
        *((LARGE_INTEGER *)v14 + 1) = InterruptTimePrecise;
      }
    }
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
    PrcbFlags = (__int64)KeGetCurrentPrcb();
    v16 = *(_QWORD *)(PrcbFlags + 25016);
    if ( v16 )
    {
      if ( *(_BYTE *)(PrcbFlags + 32) <= 1u )
      {
        v17 = *(_DWORD *)(v16 + 20) - 1;
        *(_DWORD *)(v16 + 20) = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(PrcbFlags);
      }
    }
    _enable();
    if ( v3 )
      goto LABEL_215;
    LOBYTE(v4) = a2;
  }
  v18 = *(_BYTE *)(a1 + 368) & 1;
  v94 = v18;
  if ( !CurrentPrcb->ClockOwner )
  {
    v72 = KeGetCurrentPrcb();
    v73 = v116;
    ++v72->ClockInterrupts;
    ++v72->InterruptLastCount;
    _disable();
    v74 = MEMORY[0xFFFFF78000000320];
    if ( (v73 & 0x200) != 0 )
      _enable();
    KeAccumulateTicks((__int64)v72, v72->LastTick, MEMORY[0xFFFFF78000000320], v4, v18);
    CurrentThread = v72->CurrentThread;
    v72->ClockKeepAlive = 1;
    if ( CurrentThread == v72->IdleThread )
      goto LABEL_192;
    if ( CurrentThread->CycleTime >= CurrentThread->QuantumTarget )
      goto LABEL_200;
    SystemHeteroCpuPolicy = CurrentThread->SystemHeteroCpuPolicy;
    if ( CurrentThread->SystemHeteroCpuPolicy )
    {
      if ( SystemHeteroCpuPolicy >= 5 )
        SystemHeteroCpuPolicy = KiConvertDynamicHeteroPolicy(CurrentThread, v16, v72);
      ParentNode = v72->ParentNode;
      KiGenerateHeteroSets(
        (_DWORD)ParentNode,
        CurrentThread->Affinity.Mask,
        SystemHeteroCpuPolicy,
        (unsigned int)&v100,
        (__int64)&v111,
        (__int64)&v110);
      if ( (v110 & v72->GroupSetMember) == 0
        || (unsigned __int8)KiIsQosGroupingActive(
                              PrcbFlags,
                              v72->ParentNode->QosGroupingSets.SmtSet,
                              ParentNode->IdleNonParkedCpuSet)
        && (v78 & v4) != 0
        && (unsigned __int8)KiIsQosGroupingClass(*((_DWORD *)&CurrentThread->0 + 1) & 3)
        && (v16 & v72->GroupSetMember) == 0 )
      {
        goto LABEL_200;
      }
      GroupSetMember = v72->GroupSetMember;
      v16 = v100;
      if ( (v100 & GroupSetMember) == 0 )
      {
        if ( GroupSetMember != v72->CoreProcessorSet )
        {
          v16 = v100;
          if ( (v4 & ParentNode->IdleSmtSet) != 0 )
            v4 &= ParentNode->IdleSmtSet;
        }
        if ( (v4 & v16) != 0 )
          goto LABEL_200;
        v16 = v111 & v4 & ~v16;
        v80 = SystemHeteroCpuPolicy - 3 <= 1
            ? v72->PowerState.EfficiencySchedulingClass
            : v72->PowerState.PerformanceSchedulingClass;
        if ( v16 )
        {
          v81 = ParentNode->Affinity.Group << 6;
          while ( 1 )
          {
            _BitScanReverse64(&v82, v16);
            v105 = v82;
            v4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v81 + v82)]];
            v83 = SystemHeteroCpuPolicy - 3 <= 1 ? *(_BYTE *)(v4 + 24226) : *(_BYTE *)(v4 + 24225);
            if ( v83 > v80 )
              break;
            v16 &= ~*(_QWORD *)(v4 + 200);
            if ( !v16 )
              goto LABEL_181;
          }
LABEL_200:
          v72->QuantumEnd = 1;
          if ( v72->NestingLevel )
          {
            v72->InterruptRequest = 1;
          }
          else
          {
            LOBYTE(PrcbFlags) = 2;
            HalRequestSoftwareInterrupt(PrcbFlags);
          }
          goto LABEL_214;
        }
      }
    }
LABEL_181:
    v84 = KeGetCurrentPrcb();
    PrcbFlags = (unsigned int)v84->PrcbFlags.PrcbFlags;
    if ( (PrcbFlags & 0xC) == 0 )
    {
      if ( (((unsigned __int8)PrcbFlags ^ *((_BYTE *)&CurrentThread->MiscFlags + 4)) & 3) != 0 )
        KeCheckAndApplyBamQos(v84, CurrentThread);
      goto LABEL_192;
    }
    _disable();
    PrcbFlags = v84->PrcbFlags.PrcbFlags & 0xFFFFFFF3;
    v16 = *((_DWORD *)&CurrentThread->0 + 1) & 3;
    v85 = (v73 & 0x200) != 0;
    if ( (_DWORD)v16 != (v84->PrcbFlags.PrcbFlags & 3) )
    {
      v86.PrcbFlags = PrcbFlags | (4 * v16);
      v84->PrcbFlags = v86;
      v87 = PoSetProcessorQoS(v84, ((unsigned int)v86.PrcbFlags >> 2) & 3);
      PrcbFlags = (unsigned int)v84->PrcbFlags.PrcbFlags;
      if ( !v87 )
      {
LABEL_186:
        if ( (PrcbFlags & 0xC) == 0 )
          KeUpdatePendingQosRequest(v84);
        if ( v85 )
          _enable();
LABEL_192:
        if ( MEMORY[0xFFFFF78000000320] > v72->GenerationTarget )
          goto LABEL_200;
        PrcbFlags = (__int64)CurrentThread->SchedulingGroup;
        if ( !PrcbFlags || (PrcbFlags += v72->ScbOffset) == 0 )
        {
LABEL_208:
          if ( (signed int)(v72->ReadyScanTick - v74) < 0
            && (!KiShouldScanSharedReadyQueue((__int64)v72) || (v72->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
            && (v72->ReadySummary & 0x7FFE) == 0 )
          {
            v72->ReadyScanTick = v74 + 75;
          }
          goto LABEL_214;
        }
        while ( 1 )
        {
          v16 = *(unsigned __int8 *)(PrcbFlags + 112);
          v4 = PrcbFlags - v72->ScbOffset;
          v88 = v16 & 0x10;
          if ( (v16 & 4) != 0 )
          {
            if ( v88 )
              goto LABEL_205;
            if ( (v16 & 2) == 0 )
            {
              if ( *(__int64 *)(v4 + 48) <= 0 )
                goto LABEL_200;
LABEL_205:
              v89 = *(_QWORD *)(PrcbFlags + 24);
LABEL_206:
              if ( *(_QWORD *)PrcbFlags >= v89 )
                goto LABEL_200;
            }
          }
          else
          {
            if ( v88 )
            {
              v89 = *(_QWORD *)(PrcbFlags + 8);
              goto LABEL_206;
            }
            if ( (v16 & 2) == 0 && *(__int64 *)(v4 + 48) <= 0 )
              goto LABEL_200;
          }
          PrcbFlags = *(_QWORD *)(PrcbFlags + 408);
          if ( !PrcbFlags )
            goto LABEL_208;
        }
      }
      PrcbFlags = (unsigned int)PrcbFlags & 0xFFFFFFF3;
    }
    v84->PrcbFlags.PrcbFlags = PrcbFlags;
    goto LABEL_186;
  }
  v19 = 24LL * (unsigned int)KiClockTickTraceIndex + 4510400;
  KiClockTickTraceIndex = (KiClockTickTraceIndex + 1) & 0xF;
  v20 = KiClockOwnerOneShotRequestState == 1;
  v108 = (_QWORD *)(0x140000000LL + v19);
  *(_QWORD *)(0x140000008LL + v19) = MEMORY[0xFFFFF78000000008];
  if ( v20 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KiClockOwnerOneShotRequestState = 2;
    KiClockOwnerOneShotRequest = 0LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v22 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v22);
    }
    __writecr8(CurrentIrql);
  }
  memset(v114, 0, 0xA8uLL);
  v23 = 0;
  v98 = KeGetCurrentPrcb();
  v24 = MEMORY[0xFFFFF78000000320];
  _disable();
  v25 = (v116 & 0x200) != 0;
  _m_prefetchw((const void *)0xFFFFF78000000340LL);
  v26 = MEMORY[0xFFFFF78000000340];
  while ( (v26 & 1) != 0 )
  {
    v26 = MEMORY[0xFFFFF78000000340];
LABEL_71:
    _mm_pause();
  }
  v27 = v26;
  v26 = _InterlockedCompareExchange64((volatile signed __int64 *)0xFFFFF78000000340LL, v26 + 1, v26);
  if ( v27 != v26 )
    goto LABEL_71;
  v28 = KeQueryPerformanceCounter(0LL);
  *((_QWORD *)&v29 + 1) = 0LL;
  if ( v28.QuadPart > MEMORY[0xFFFFF78000000348] )
  {
    v30 = v28.QuadPart - MEMORY[0xFFFFF78000000348];
    if ( MEMORY[0xFFFFF78000000368] )
      v30 <<= MEMORY[0xFFFFF78000000368];
    v29 = (unsigned __int64)v30 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
    v106 = *((_QWORD *)&v29 + 1);
    KiSystemTimeErrorAccumulator += v29;
    if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v29 )
      v106 = ++*((_QWORD *)&v29 + 1);
  }
  v31 = *((_QWORD *)&v29 + 1) + MEMORY[0xFFFFF78000000014];
  *((_QWORD *)&v29 + 1) = 0LL;
  v32 = MEMORY[0xFFFFF78000000360];
  if ( v28.QuadPart > MEMORY[0xFFFFF78000000350] )
  {
    v33 = v28.QuadPart - MEMORY[0xFFFFF78000000350];
    if ( MEMORY[0xFFFFF78000000369] )
      v33 <<= MEMORY[0xFFFFF78000000369];
    v29 = (unsigned __int64)v33 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v107 = *((_QWORD *)&v29 + 1);
    KiInterruptTimeErrorAccumulator += v29;
    if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v29 )
      v107 = ++*((_QWORD *)&v29 + 1);
  }
  v34 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v29 + 1);
  MEMORY[0xFFFFF7800000001C] = HIDWORD(v31);
  MEMORY[0xFFFFF78000000014] = v31;
  MEMORY[0xFFFFF78000000010] = (MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v29 + 1)) >> 32;
  MEMORY[0xFFFFF78000000008] += *((_QWORD *)&v29 + 1);
  MEMORY[0xFFFFF78000000348] = v28.QuadPart;
  MEMORY[0xFFFFF78000000350] = v28.QuadPart;
  v35 = MEMORY[0xFFFFF78000000320];
  v36 = (unsigned int)KiTickOffset - *((_QWORD *)&v29 + 1);
  if ( v36 <= 0 )
  {
    v32 = KeMaximumIncrement;
    *((_QWORD *)&v29 + 1) = 1LL;
    v36 += KeMaximumIncrement;
    if ( v36 <= 0 )
    {
      v37 = KeNumberProcessorsGroup0[1];
      v38 = ((unsigned __int64)(((unsigned __int64)-v36
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v37)
          + 1;
      v32 = v38 * KeMaximumIncrement;
      v36 += v32;
      *((_QWORD *)&v29 + 1) = v38 + 1;
    }
    v35 = *((_QWORD *)&v29 + 1) + MEMORY[0xFFFFF78000000320];
    MEMORY[0xFFFFF78000000328] = (*((_QWORD *)&v29 + 1) + MEMORY[0xFFFFF78000000320]) >> 32;
    MEMORY[0xFFFFF78000000320] += *((_QWORD *)&v29 + 1);
  }
  KiTickOffset = v36;
  ++MEMORY[0xFFFFF78000000340];
  v39 = KeGetCurrentPrcb();
  v97 = 0;
  while ( 1 )
  {
    v40 = v39->SchedulerAssist;
    if ( v40 )
    {
      if ( v39->NestingLevel <= 1u )
      {
        v41 = v40[5];
        v40[5] = v41 + 1;
        if ( v41 == -1 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    v42 = v39->SchedulerAssist;
    if ( v42 )
    {
      if ( v39->NestingLevel <= 1u )
      {
        v43 = v42[5] - 1;
        v42[5] = v43;
        if ( !v43 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
    do
      KeYieldProcessorEx(&v97);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleStartTime && v34 >= KiForceIdleStartTime && KiForceIdleState == 2 )
  {
    KiSetForceIdleState(1LL, *((_QWORD *)&v29 + 1), v36, v32);
    if ( !*(&KiForceIdleStartDpc + 7) )
      WORD1(KiForceIdleStartDpc) = v98->Number + 1280;
    KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStartDpc, 0);
  }
  v44 = ((KiForceIdleState - 1) & 0xFFFFFFFD) == 0;
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v45 = KeGetCurrentPrcb();
  v46 = v45->SchedulerAssist;
  if ( v46 )
  {
    if ( v45->NestingLevel <= 1u )
    {
      v47 = v46[5] - 1;
      v46[5] = v47;
      if ( !v47 )
        KiRemoveSystemWorkPriorityKick(v45);
    }
  }
  if ( v25 )
    _enable();
  if ( KeMinimumIncrement - 1 + (int)v34 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v34;
  if ( v35 != v24 && !--KiBalanceSetManagerCount )
  {
    KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
    KiInsertQueueDpc((ULONG_PTR)&KiBalanceSetManagerPeriodicDpc, 0);
  }
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  memset(v115, 0, 0xA8uLL);
  memset(v113, 0, 0xA8uLL);
  if ( PpmIdleDurationExpirationTimeout
    && PpmIdleLastIdleDurationExpirationTime + PpmIdleDurationExpirationTimeout < v34
    && (unsigned __int8)PpmGetIdleConstrainedMask(v115) )
  {
    PpmIdleLastIdleDurationExpirationTime = v34;
    v113[0] = 1310721;
    memset(&v113[1], 0, 0xA4uLL);
    v103 = v115[1];
    v102 = v115;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v95, &v102) )
    {
      Prcb = (struct _KPRCB *)KeGetPrcb(v95);
      if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= v34 )
        KeAddProcessorAffinityEx(v113, v95);
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(v113) )
    {
      PpmEventIdleDurationExpiration(v113);
      HalRequestIpi(0LL, v113);
    }
  }
  if ( !v44 )
    PoExecutePerfCheck();
  v49 = v34 >> 18;
  if ( KiGroupSchedulingEnabled && v35 > KiGenerationEndTick )
  {
    v23 = 1;
    KiGenerationEndTick += (unsigned int)KiGenerationTicks;
  }
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
  {
    KiForwardTick((_DWORD)v98, KeNumberProcessors_0, v49, v23, (__int64)v114);
    memset(&v115[22], 0, 0xA8uLL);
    LOWORD(v50) = KiClockCheckPending[0];
    if ( (unsigned int)KiClockCheckPending[0] >= LOWORD(v114[0]) )
    {
      v51 = KiClockCheckPending;
      LOWORD(v50) = v114[0];
    }
    else
    {
      v51 = (__int16 *)v114;
    }
    word_14042A102 = 20;
    v52 = 0;
    KiClockCheckPending[0] = *v51;
    if ( (_WORD)v50 )
    {
      v52 = v50;
      v53 = 0LL;
      v50 = (unsigned __int16)v50;
      do
      {
        *(_QWORD *)&KiClockCheckPending[v53 / 2 + 4] |= v114[v53 / 8 + 1];
        v53 += 8LL;
        --v50;
      }
      while ( v50 );
    }
    for ( ; v52 < (unsigned __int16)*v51; *(_QWORD *)&KiClockCheckPending[4 * v54 + 4] = *(_QWORD *)&v51[4 * v54 + 4] )
      v54 = v52++;
    for ( dword_14042A104 = 0; v52 < (unsigned __int16)word_14042A102; *(_QWORD *)&KiClockCheckPending[4 * v55 + 4] = 0LL )
      v55 = v52++;
  }
  v56 = KeGetCurrentPrcb();
  ++v56->ClockInterrupts;
  ++v56->InterruptLastCount;
  _disable();
  v57 = v116;
  v58 = MEMORY[0xFFFFF78000000320];
  if ( (v116 & 0x200) != 0 )
    _enable();
  KeAccumulateTicks((__int64)v56, v56->LastTick, MEMORY[0xFFFFF78000000320], a2, v94);
  v59 = (__int64)v56->CurrentThread;
  v56->ClockKeepAlive = 1;
  if ( (_KTHREAD *)v59 == v56->IdleThread )
    goto LABEL_131;
  if ( *(_QWORD *)(v59 + 72) >= *(_QWORD *)(v59 + 32)
    || (unsigned int)KiCheckPreferredHeteroProcessor(v59, (__int64)v56, 1) )
  {
    goto LABEL_132;
  }
  v60 = KeGetCurrentPrcb();
  v61.PrcbFlags = (volatile int)v60->PrcbFlags;
  if ( (v61.PrcbFlags & 0xC) != 0 )
  {
    _disable();
    v62 = v60->PrcbFlags.PrcbFlags & 0xFFFFFFF3;
    v63 = *(_DWORD *)(v59 + 120) & 3;
    v64 = (v57 & 0x200) != 0;
    if ( v63 == (v60->PrcbFlags.PrcbFlags & 3) )
      goto LABEL_124;
    v65 = v62 | (4 * v63);
    v60->PrcbFlags.PrcbFlags = v65;
    v66 = PoSetProcessorQoS(v60, (v65 >> 2) & 3);
    v62 = v60->PrcbFlags.PrcbFlags;
    if ( v66 )
    {
      v62 &= 0xFFFFFFF3;
LABEL_124:
      v60->PrcbFlags.PrcbFlags = v62;
    }
    if ( (v62 & 0xC) == 0 )
      KeUpdatePendingQosRequest(v60);
    if ( v64 )
      _enable();
  }
  else if ( ((*(_BYTE *)(v59 + 120) ^ LOBYTE(v61.PrcbFlags)) & 3) != 0 )
  {
    KeCheckAndApplyBamQos(v60, v59);
  }
LABEL_131:
  if ( (unsigned __int8)KiCheckGroupSchedulingQuantumEnd(v56, v59) )
  {
LABEL_132:
    v56->QuantumEnd = 1;
    if ( v56->NestingLevel )
    {
      v56->InterruptRequest = 1;
    }
    else
    {
      LOBYTE(PrcbFlags) = 2;
      HalRequestSoftwareInterrupt(PrcbFlags);
    }
  }
  else if ( (signed int)(v56->ReadyScanTick - v58) < 0
         && (!KiShouldScanSharedReadyQueue(PrcbFlags) || (v56->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
         && (v56->ReadySummary & 0x7FFE) == 0 )
  {
    v56->ReadyScanTick = v58 + 75;
  }
  if ( KiClockOwnerOneShotRequestState == 2 )
  {
    v67 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v67 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ((void (*)(void))KiSetClockIntervalToMinimumRequested)();
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v67 < 2u )
    {
      v68 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v68->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v68);
    }
    __writecr8(v67);
  }
  v69 = v108;
  *v108 = MEMORY[0xFFFFF78000000350];
  v70 = MEMORY[0xFFFFF78000000008];
  if ( KiClockState == 2 )
  {
    KiRestoreClockTickRate(MEMORY[0xFFFFF78000000008], &v99, v109);
    _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0LL, 2LL, v109, &v99);
  }
  v71 = v70 + (unsigned int)KeTimeIncrement;
  v69[2] = v70;
  KiClockTimerNextTickTime = v71;
LABEL_214:
  if ( v93 )
  {
LABEL_215:
    if ( KiClockOwnerOneShotRequestState == 1 )
    {
      v90 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v90 < 2u )
      {
        PrcbFlags = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
        _InterlockedOr((volatile signed __int32 *)PrcbFlags, 0x10000u);
      }
      KiClockOwnerOneShotRequestState = 2;
      KiSetClockIntervalToMinimumRequested(PrcbFlags, v16, v4);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v90 < 2u )
      {
        v91 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v91->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v91);
      }
      __writecr8(v90);
      if ( v101 )
        *v101 = 1;
      ++qword_14044D018;
    }
  }
}
