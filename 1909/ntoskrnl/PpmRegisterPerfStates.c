/*
 * XREFs of PpmRegisterPerfStates @ 0x140776250
 * Callers:
 *     PpmPerfRegisterNativePerfStates @ 0x140776070 (PpmPerfRegisterNativePerfStates.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408B7380 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     PpmConvertTime @ 0x140004EB4 (PpmConvertTime.c)
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x140098ED8 (PopExecuteOnTargetProcessors.c)
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x14009E170 (KeIsEmptyAffinityEx.c)
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1400FFEE0 (KeFindFirstSetRightGroupAffinity.c)
 *     KeOrAffinityEx @ 0x1400FFF10 (KeOrAffinityEx.c)
 *     KeFirstGroupAffinityEx @ 0x14012FA70 (KeFirstGroupAffinityEx.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140170690 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmInstallFeedbackCounters @ 0x140193F88 (PpmInstallFeedbackCounters.c)
 *     PpmParkApplyPolicy @ 0x140194948 (PpmParkApplyPolicy.c)
 *     KeIsEqualAffinityEx @ 0x140194E20 (KeIsEqualAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x140194EC0 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14074501C (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x14074760C (PpmUpdateProcessorPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x140776088 (PpmReinitializeHeteroEngine.c)
 *     PpmAllocatePerfCheck @ 0x140776C0C (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x140776E5C (PpmCheckReInit.c)
 */

__int64 __fastcall PpmRegisterPerfStates(__int64 a1, char a2)
{
  __int64 v3; // rdi
  unsigned int v4; // r12d
  unsigned int v5; // r14d
  char *v6; // rsi
  char v7; // r13
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // r15d
  __int64 *v13; // rdx
  __int64 v14; // r8
  bool v15; // zf
  int v16; // ecx
  unsigned int v17; // ebx
  SIZE_T v18; // r14
  char *PoolWithTag; // rax
  int v20; // ebx
  char *v21; // r14
  __int64 v22; // r15
  char *v23; // r14
  __int64 v24; // r12
  __int64 v25; // rdx
  ULONG v26; // ebx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  int v30; // eax
  bool v31; // al
  __int64 *v32; // r10
  __int64 v33; // rbx
  int v34; // r11d
  char *v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rdx
  ULONG FirstSetRightGroupAffinity; // eax
  __int64 Prcb; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  int v41; // edx
  __int64 v42; // rcx
  _DWORD *v43; // rax
  char v44; // al
  unsigned int v45; // ebx
  char *v46; // rdi
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 *v49; // rcx
  char *v50; // rdx
  char **v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rdx
  char v55; // al
  signed __int32 v57[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v58; // [rsp+28h] [rbp-E0h]
  __int64 v59; // [rsp+30h] [rbp-D8h] BYREF
  int v60; // [rsp+38h] [rbp-D0h]
  int v61; // [rsp+3Ch] [rbp-CCh]
  ULONG v62; // [rsp+40h] [rbp-C8h]
  unsigned int v63; // [rsp+44h] [rbp-C4h]
  __int64 v64; // [rsp+48h] [rbp-C0h]
  char *v65; // [rsp+50h] [rbp-B8h]
  __int64 v66; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+60h] [rbp-A8h]
  __int64 v68; // [rsp+68h] [rbp-A0h]
  _QWORD v69[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v70[3]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v71[44]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v72[176]; // [rsp+148h] [rbp+40h] BYREF

  v68 = a1;
  v3 = a1;
  memset(v72, 0, 0xA8uLL);
  v69[0] = 0LL;
  v69[1] = 0LL;
  memset(&v71[2], 0, 0xA0uLL);
  v4 = *(_DWORD *)(v3 + 16);
  v5 = *(_DWORD *)(v3 + 36);
  v66 = 0LL;
  v67 = 0LL;
  v6 = 0LL;
  v61 = *(_DWORD *)(v3 + 20);
  v7 = 0;
  v63 = v4;
  v71[0] = 1310721;
  memset(&v71[1], 0, 0xA4uLL);
  KeQueryActiveProcessorAffinity((__int64)v72);
  if ( !a2 )
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v8 = -1;
  v9 = 0LL;
  v59 = -1LL;
  if ( v5 )
  {
    v10 = *(_QWORD *)(v3 + 408);
    do
    {
      v11 = *(unsigned int *)(v10 + 24 * v9 + 12);
      if ( (unsigned int)v11 >= 2 )
        goto LABEL_18;
      if ( *((_DWORD *)&v59 + v11) == -1 )
        *((_DWORD *)&v59 + v11) = v9;
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < v5 );
    v8 = v59;
  }
  if ( v8 == -1 && HIDWORD(v59) == -1 )
  {
LABEL_18:
    v20 = -1073741811;
    goto LABEL_47;
  }
  v12 = 0;
  v13 = &v59;
  v14 = 2LL;
  do
  {
    v15 = *(_DWORD *)v13 == -1;
    v16 = v12 + 1;
    v13 = (__int64 *)((char *)v13 + 4);
    if ( v15 )
      v16 = v12;
    v12 = v16;
    --v14;
  }
  while ( v14 );
  v60 = v16;
  v17 = (136 * v4 + 695) & 0xFFFFFFF8;
  v18 = v17 + 48 * v4 * v16;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x704D5050u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v20 = -1073741670;
    goto LABEL_47;
  }
  memset(PoolWithTag, 0, v18);
  v21 = v6 + 688;
  v15 = *(_BYTE *)(v3 + 11) == 0;
  v65 = &v6[v17];
  if ( !v15 )
  {
    PpmPerfQosTransitionHysteresis = *(_DWORD *)(v3 + 48);
    PpmPerfQosTransitionHysteresis19h2 = *(_DWORD *)(v3 + 432);
  }
  LODWORD(v58) = 0;
  if ( !v4 )
  {
LABEL_44:
    if ( (unsigned int)KeIsEmptyAffinityEx(v71) )
    {
      v6[207] = 1;
    }
    else
    {
      KeFirstGroupAffinityEx(v69, v71);
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)v69);
      Prcb = KeGetPrcb(FirstSetRightGroupAffinity);
      *((_QWORD *)v6 + 2) = Prcb;
      v6[204] = *(_BYTE *)(Prcb + 24224);
    }
    KeCopyAffinityEx((__int64)(v6 + 24), (unsigned __int16 *)v71);
    *((_QWORD *)v6 + 27) = *(_QWORD *)(v3 + 256);
    *((_QWORD *)v6 + 29) = *(_QWORD *)(v3 + 272);
    *((_QWORD *)v6 + 30) = *(_QWORD *)(v3 + 280);
    *((_QWORD *)v6 + 31) = *(_QWORD *)(v3 + 288);
    *((_QWORD *)v6 + 32) = *(_QWORD *)(v3 + 296);
    *((_QWORD *)v6 + 28) = *(_QWORD *)(v3 + 264);
    *((_QWORD *)v6 + 24) = *(_QWORD *)(v3 + 80);
    *((_QWORD *)v6 + 26) = v21;
    *((_DWORD *)v6 + 127) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v41 = v61;
    v42 = 4LL;
    *((LARGE_INTEGER *)v6 + 84) = PerformanceCounter;
    *((_DWORD *)v6 + 77) = v41;
    *((_DWORD *)v6 + 50) = v4;
    *((_DWORD *)v6 + 81) = *(_DWORD *)(v3 + 44);
    *((_DWORD *)v6 + 78) = *(_DWORD *)(v3 + 24);
    *((_DWORD *)v6 + 79) = *(_DWORD *)(v3 + 28);
    *((_DWORD *)v6 + 80) = *(_DWORD *)(v3 + 32);
    v6[345] = *(_BYTE *)(v3 + 4);
    *((_QWORD *)v6 + 35) = *(_QWORD *)(v3 + 336);
    *((_QWORD *)v6 + 36) = *(_QWORD *)(v3 + 344);
    *((_QWORD *)v6 + 37) = *(_QWORD *)(v3 + 352);
    *((_QWORD *)v6 + 33) = *(_QWORD *)(v3 + 320);
    *((_QWORD *)v6 + 34) = *(_QWORD *)(v3 + 328);
    v6[351] = *(_BYTE *)(v3 + 52);
    v43 = v6 + 524;
    do
    {
      *(v43 - 1) = 100;
      *v43 = v41;
      v43 += 10;
      --v42;
    }
    while ( v42 );
    v6[346] = *(_BYTE *)(v3 + 6);
    v6[347] = *(_BYTE *)(v3 + 7);
    v6[348] = *(_BYTE *)(v3 + 8);
    if ( *(_WORD *)(v3 + 4) == 253 || (v44 = 1, *(_QWORD *)(v3 + 352)) )
      v44 = 0;
    v6[350] = v44;
    v6[349] = *(_BYTE *)(v3 + 11);
    if ( PpmPerfQosManageIdleProcessors == -1 )
      PpmPerfQosManageIdleProcessors = *(_BYTE *)(v3 + 12) != 0;
    *((_QWORD *)v6 + 41) = *(_QWORD *)(v3 + 56);
    *((_QWORD *)v6 + 42) = *(_QWORD *)(v3 + 64);
    v6[344] = 100;
    if ( PpmCheckMinimumPeriod <= (unsigned __int64)*(unsigned int *)(v3 + 40) )
      PpmCheckMinimumPeriod = *(unsigned int *)(v3 + 40);
    if ( *((_QWORD *)v6 + 30) )
      PpmAllowedActions |= 0x40u;
    if ( *((_QWORD *)v6 + 29) )
      PpmAllowedActions |= 0x20u;
    if ( *((_QWORD *)v6 + 28) )
      PpmAllowedActions |= 0x200u;
    if ( *((_QWORD *)v6 + 32) )
      PpmAllowedActions |= 0x80u;
    if ( *((_QWORD *)v6 + 31) )
      PpmAllowedActions |= 0x100u;
    if ( *(_BYTE *)(v3 + 9) )
      PpmPerfEppViaPerfControl = 1;
    if ( *(_BYTE *)(v3 + 10) )
      PpmPerfAutonomousActivityWindowViaPerfControl = 1;
    _InterlockedOr(v57, 0);
    v45 = 0;
    if ( v4 )
    {
      v46 = v65;
      do
      {
        if ( !v21[16] )
        {
          v47 = *(_QWORD *)v21;
          v48 = 2LL;
          *(_DWORD *)(v47 + 24240) = 0x10000;
          *(_QWORD *)(v47 + 24184) = &v6[136 * v45 + 688];
          v49 = &v59;
          *(_QWORD *)(v47 + 24176) = v6;
          v50 = &v46[48 * v12 * v45];
          v70[0] = 0LL;
          v70[1] = 0LL;
          v51 = (char **)v70;
          do
          {
            if ( *(_DWORD *)v49 != -1 )
            {
              *v51 = v50;
              v50 += 48;
            }
            v49 = (__int64 *)((char *)v49 + 4);
            ++v51;
            --v48;
          }
          while ( v48 );
          PpmInstallFeedbackCounters(v47, v70);
        }
        ++v45;
        v21 += 136;
      }
      while ( v45 < v4 );
      v3 = v68;
    }
    if ( !PpmPerfGlobalContext )
      PpmPerfGlobalContext = *(_QWORD *)(v3 + 72);
    v52 = PpmPerfControlReadFeedback;
    if ( !PpmPerfControlReadFeedback )
    {
      v52 = *(_QWORD *)(v3 + 360);
      PpmPerfControlReadFeedback = v52;
    }
    if ( !PpmPerfControlAcquirePerformance )
      PpmPerfControlAcquirePerformance = *(_QWORD *)(v3 + 368);
    if ( !PpmPerfControlCommitPerformance )
      PpmPerfControlCommitPerformance = *(_QWORD *)(v3 + 376);
    if ( !PpmParkPreferenceHandler )
      PpmParkPreferenceHandler = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v3 + 384);
    if ( !PpmParkMaskHandler )
      PpmParkMaskHandler = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v3 + 392);
    if ( !PpmCheckCompleteHandler )
      PpmCheckCompleteHandler = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v3 + 400);
    if ( !PpmPerfControlStartPolicyUpdate )
      PpmPerfControlStartPolicyUpdate = *(__int64 (**)(void))(v3 + 304);
    if ( !PpmPerfControlCompletePolicyUpdate )
      PpmPerfControlCompletePolicyUpdate = *(__int64 (**)(void))(v3 + 312);
    if ( v52 )
      PpmCheckPollForFeedback = 1;
    v53 = (_QWORD *)qword_1405724B0;
    ++PpmPerfDomainCount;
    if ( *(__int64 **)qword_1405724B0 != &PpmPerfDomainHead )
      __fastfail(3u);
    *(_QWORD *)v6 = &PpmPerfDomainHead;
    v7 = 1;
    *((_QWORD *)v6 + 1) = v53;
    *v53 = v6;
    v54 = PpmPerfDomainHead;
    qword_1405724B0 = (__int64)v6;
    while ( (__int64 *)v54 != &PpmPerfDomainHead )
    {
      v55 = *(_BYTE *)(v54 + 349);
      v54 = *(_QWORD *)v54;
      v7 = v55 != 0 ? v7 : 0;
    }
    KeOrAffinityEx((unsigned __int16 *)v71, PpmPerfStatesRegistered, PpmPerfStatesRegistered);
    *((_WORD *)v6 + 342) = 257;
    PpmUpdateProcessorPolicy(&PpmAllowedActions, (__int64)v6);
    PopExecuteOnTargetProcessors((__int64)v71, (__int64)PpmCheckReset, 0LL, 0LL);
    if ( ((*(_QWORD *)&v71[2 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6) + 2] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F)) & 1) != 0 )
      PpmParkApplyPolicy();
    PpmCheckReInit();
    v6 = 0LL;
    v20 = 0;
    PpmPerfUpdateDomainPolicy(1);
    goto LABEL_110;
  }
  v22 = 0LL;
  v23 = v6 + 708;
  while ( 1 )
  {
    v24 = *(_QWORD *)(v3 + 416);
    *(v23 - 4) = *(_BYTE *)(v22 + v24 + 28);
    v25 = *(unsigned int *)(v22 + v24);
    if ( !*(_BYTE *)(v22 + v24 + 28) )
      break;
    v26 = -1;
    *(_DWORD *)v23 = v25;
LABEL_32:
    *((_DWORD *)v23 + 7) = 100;
    *(_QWORD *)(v23 - 12) = *(_QWORD *)(v22 + v24 + 8);
    *((_DWORD *)v23 + 1) = *(_DWORD *)(v22 + v24 + 16);
    *((_DWORD *)v23 + 2) = *(_DWORD *)(v22 + v24 + 20);
    v30 = *(_DWORD *)(v22 + v24 + 24);
    *(_QWORD *)(v23 + 108) = 0LL;
    *((_DWORD *)v23 + 3) = v30;
    *((_DWORD *)v23 + 14) = v61;
    *((_DWORD *)v23 + 9) = 100;
    *((_DWORD *)v23 + 13) = 100;
    *((_DWORD *)v23 + 15) = 1;
    *((_DWORD *)v23 + 16) = 100;
    *((_DWORD *)v23 + 17) = 100;
    *((_DWORD *)v23 + 24) = 100;
    v31 = !*(_BYTE *)(v3 + 7) && *(_BYTE *)(v3 + 11);
    v23[101] = v31;
    if ( *(_DWORD *)(v22 + v24 + 16) < 0x64u )
    {
      *(_QWORD *)(v23 + 20) = MEMORY[0xFFFFF78000000008];
      PopDiagTraceProcessorThrottlePerfTrack(100 - *(_DWORD *)(v22 + v24 + 16), v26);
    }
    v32 = &v59;
    v33 = 2LL;
    v34 = v60 * v58;
    v35 = &v65[48 * (unsigned int)(v60 * v58)];
    do
    {
      v36 = *(unsigned int *)v32;
      if ( (_DWORD)v36 != -1 )
      {
        v37 = *(_QWORD *)(v3 + 408);
        *((_QWORD *)v35 + 5) = *(_QWORD *)(*(_QWORD *)(v3 + 424) + 8LL * (unsigned int)(v34 + v36));
        v35[33] = *(_BYTE *)(v37 + 24 * v36 + 17);
        v35[32] = *(_BYTE *)(v37 + 24 * v36 + 16);
        v35[34] = *(_BYTE *)(v37 + 24 * v36 + 18);
        v35[35] = *(_BYTE *)(v37 + 24 * v36 + 8);
        *(_QWORD *)v35 = *(_QWORD *)(v37 + 24 * v36);
        v35 += 48;
      }
      v32 = (__int64 *)((char *)v32 + 4);
      --v33;
    }
    while ( v33 );
    v4 = v63;
    v22 += 32LL;
    LODWORD(v58) = v58 + 1;
    v23 += 136;
    if ( (unsigned int)v58 >= v63 )
    {
      v12 = v60;
      v21 = v6 + 688;
      goto LABEL_44;
    }
  }
  v62 = *(_DWORD *)(v22 + v24);
  if ( (_DWORD)v25 != -1
    && ((*(_QWORD *)&PpmPerfStatesRegistered[4
                                           * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v25] >> 6)
                                           + 4] >> (KiProcessorIndexToNumberMappingTable[v25] & 0x3F)) & 1) == 0 )
  {
    v64 = KeGetPrcb(v25);
    v20 = PpmAllocatePerfCheck(v64);
    if ( v20 < 0 )
      goto LABEL_47;
    v26 = v62;
    KeAddProcessorAffinityEx(v71, v62);
    v27 = v64;
    *(_QWORD *)(v23 - 20) = v64;
    v28 = (unsigned int)PpmPerfQosTransitionHysteresisOverride;
    if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    {
      v28 = (unsigned int)PpmPerfQosTransitionHysteresis19h2;
      if ( !PpmPerfQosTransitionHysteresisUse19h2Value )
        v28 = (unsigned int)PpmPerfQosTransitionHysteresis;
    }
    v29 = PpmConvertTime(v28, 0xF4240uLL, 1000000LL * *(unsigned int *)(v27 + 68));
    *(_QWORD *)(v64 + 24296) = v29;
    goto LABEL_32;
  }
  v20 = -1073741811;
LABEL_47:
  PpmReleaseLock(&PpmPerfPolicyLock);
LABEL_110:
  if ( ((unsigned int)PpmPerfDomainCount > 1 || v7)
    && (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, (unsigned __int16 *)PpmCheckRegistered) )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfSchedulerDirectedPerfStatesSupported = v7;
    PpmReinitializeHeteroEngine(1);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x704D5050u);
  v66 = 0LL;
  v67 = -1LL;
  KeSetTimer2((__int64)&PpmPerfTelemetryTimer, -36000000000LL, 36000000000LL, (__int64)&v66);
  return (unsigned int)v20;
}
