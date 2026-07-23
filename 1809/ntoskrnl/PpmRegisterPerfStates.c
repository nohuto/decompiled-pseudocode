/*
 * XREFs of PpmRegisterPerfStates @ 0x14074F6AC
 * Callers:
 *     PpmPerfRegisterNativePerfStates @ 0x14074F660 (PpmPerfRegisterNativePerfStates.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14087C790 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1400165E0 (KeFindFirstSetRightGroupAffinity.c)
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     PopExecuteOnTargetProcessors @ 0x1400A5E08 (PopExecuteOnTargetProcessors.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x1400A7C54 (PpmConvertTime.c)
 *     KeOrAffinityEx @ 0x1400DC970 (KeOrAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     KeFirstGroupAffinityEx @ 0x14012E300 (KeFirstGroupAffinityEx.c)
 *     PpmInstallFeedbackCounters @ 0x140189628 (PpmInstallFeedbackCounters.c)
 *     PpmParkApplyPolicy @ 0x140189FB0 (PpmParkApplyPolicy.c)
 *     KeIsEqualAffinityEx @ 0x14018A430 (KeIsEqualAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x14018A4D0 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1402E1DA8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14071AE2C (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x14071DDD8 (PpmUpdateProcessorPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x14074F678 (PpmReinitializeHeteroEngine.c)
 *     PpmAllocatePerfCheck @ 0x1407501A4 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x140750304 (PpmCheckReInit.c)
 */

__int64 __fastcall PpmRegisterPerfStates(_DWORD *a1, char a2)
{
  unsigned int v2; // r13d
  int v4; // eax
  _DWORD *v5; // rdi
  unsigned int v6; // r14d
  char *v7; // rsi
  char v8; // r12
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // r15d
  __int64 *v14; // rdx
  __int64 v15; // r8
  bool v16; // zf
  int v17; // ecx
  unsigned int v18; // ebx
  SIZE_T v19; // r14
  char *PoolWithTag; // rax
  int v21; // ebx
  char *v22; // r14
  unsigned int v23; // r11d
  __int64 v24; // r15
  char *v25; // r14
  __int64 v26; // r13
  __int64 v27; // rdx
  ULONG v28; // ebx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  int v32; // eax
  bool v33; // al
  __int64 *v34; // r10
  __int64 v35; // r13
  int v36; // ebx
  char *v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rdx
  ULONG FirstSetRightGroupAffinity; // eax
  __int64 Prcb; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  int v43; // edx
  __int64 v44; // rcx
  _DWORD *v45; // rax
  char v46; // al
  unsigned int v47; // ebx
  char *v48; // rdi
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // rcx
  char *v52; // rdx
  char **v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rdx
  char v57; // al
  signed __int32 v59[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v60; // [rsp+28h] [rbp-E0h]
  __int64 v61; // [rsp+30h] [rbp-D8h] BYREF
  int v62; // [rsp+38h] [rbp-D0h]
  int v63; // [rsp+3Ch] [rbp-CCh]
  ULONG v64; // [rsp+40h] [rbp-C8h]
  unsigned int v65; // [rsp+44h] [rbp-C4h]
  __int64 v66; // [rsp+48h] [rbp-C0h]
  char *v67; // [rsp+50h] [rbp-B8h]
  _DWORD *v68; // [rsp+58h] [rbp-B0h]
  _QWORD v69[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v70[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v71[3]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v72[44]; // [rsp+98h] [rbp-70h] BYREF
  char v73[176]; // [rsp+148h] [rbp+40h] BYREF

  v2 = a1[4];
  v4 = a1[5];
  v5 = a1;
  v6 = a1[9];
  v68 = a1;
  v65 = v2;
  v7 = 0LL;
  v63 = v4;
  v8 = 0;
  v72[0] = 1310721;
  memset(&v72[1], 0, 0xA4uLL);
  KeQueryActiveProcessorAffinity((__int64)v73);
  if ( !a2 )
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v9 = -1;
  v10 = 0LL;
  v61 = -1LL;
  if ( v6 )
  {
    v11 = *((_QWORD *)v5 + 51);
    do
    {
      v12 = *(unsigned int *)(v11 + 24 * v10 + 12);
      if ( (unsigned int)v12 >= 2 )
        goto LABEL_18;
      if ( *((_DWORD *)&v61 + v12) == -1 )
        *((_DWORD *)&v61 + v12) = v10;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < v6 );
    v9 = v61;
  }
  if ( v9 == -1 && HIDWORD(v61) == -1 )
  {
LABEL_18:
    v21 = -1073741811;
    goto LABEL_47;
  }
  v13 = 0;
  v14 = &v61;
  v15 = 2LL;
  do
  {
    v16 = *(_DWORD *)v14 == -1;
    v17 = v13 + 1;
    v14 = (__int64 *)((char *)v14 + 4);
    if ( v16 )
      v17 = v13;
    v13 = v17;
    --v15;
  }
  while ( v15 );
  v62 = v17;
  v18 = (136 * v2 + 695) & 0xFFFFFFF8;
  v19 = v18 + 48 * v2 * v17;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x704D5050u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v21 = -1073741670;
    goto LABEL_47;
  }
  memset(PoolWithTag, 0, v19);
  v22 = v7 + 688;
  v16 = *((_BYTE *)v5 + 11) == 0;
  v67 = &v7[v18];
  if ( !v16 && v5[12] != -1 )
    PpmPerfQosTransitionHysteresis = v5[12];
  v23 = 0;
  LODWORD(v60) = 0;
  if ( !v2 )
  {
LABEL_44:
    if ( (unsigned int)KeIsEmptyAffinityEx(v72) )
    {
      v7[207] = 1;
    }
    else
    {
      KeFirstGroupAffinityEx(v71, v72);
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)v71);
      Prcb = KeGetPrcb(FirstSetRightGroupAffinity);
      *((_QWORD *)v7 + 2) = Prcb;
      v7[204] = *(_BYTE *)(Prcb + 24224);
    }
    KeCopyAffinityEx((__int64)(v7 + 24), (unsigned __int16 *)v72);
    *((_QWORD *)v7 + 27) = *((_QWORD *)v5 + 32);
    *((_QWORD *)v7 + 29) = *((_QWORD *)v5 + 34);
    *((_QWORD *)v7 + 30) = *((_QWORD *)v5 + 35);
    *((_QWORD *)v7 + 31) = *((_QWORD *)v5 + 36);
    *((_QWORD *)v7 + 32) = *((_QWORD *)v5 + 37);
    *((_QWORD *)v7 + 28) = *((_QWORD *)v5 + 33);
    *((_QWORD *)v7 + 24) = *((_QWORD *)v5 + 10);
    *((_QWORD *)v7 + 26) = v22;
    *((_DWORD *)v7 + 127) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v43 = v63;
    v44 = 4LL;
    *((LARGE_INTEGER *)v7 + 84) = PerformanceCounter;
    *((_DWORD *)v7 + 77) = v43;
    *((_DWORD *)v7 + 50) = v2;
    *((_DWORD *)v7 + 81) = v5[11];
    *((_DWORD *)v7 + 78) = v5[6];
    *((_DWORD *)v7 + 79) = v5[7];
    *((_DWORD *)v7 + 80) = v5[8];
    v7[345] = *((_BYTE *)v5 + 4);
    *((_QWORD *)v7 + 35) = *((_QWORD *)v5 + 42);
    *((_QWORD *)v7 + 36) = *((_QWORD *)v5 + 43);
    *((_QWORD *)v7 + 37) = *((_QWORD *)v5 + 44);
    *((_QWORD *)v7 + 33) = *((_QWORD *)v5 + 40);
    *((_QWORD *)v7 + 34) = *((_QWORD *)v5 + 41);
    v7[351] = *((_BYTE *)v5 + 52);
    v45 = v7 + 524;
    do
    {
      *(v45 - 1) = 100;
      *v45 = v43;
      v45 += 10;
      --v44;
    }
    while ( v44 );
    v7[346] = *((_BYTE *)v5 + 6);
    v7[347] = *((_BYTE *)v5 + 7);
    v7[348] = *((_BYTE *)v5 + 8);
    if ( *((_WORD *)v5 + 2) == 253 || (v46 = 1, *((_QWORD *)v5 + 44)) )
      v46 = 0;
    v7[350] = v46;
    v7[349] = *((_BYTE *)v5 + 11);
    if ( PpmPerfQosManageIdleProcessors == -1 )
      PpmPerfQosManageIdleProcessors = *((_BYTE *)v5 + 12) != 0;
    *((_QWORD *)v7 + 41) = *((_QWORD *)v5 + 7);
    *((_QWORD *)v7 + 42) = *((_QWORD *)v5 + 8);
    v7[344] = 100;
    if ( PpmCheckMinimumPeriod <= (unsigned __int64)(unsigned int)v5[10] )
      PpmCheckMinimumPeriod = (unsigned int)v5[10];
    if ( *((_QWORD *)v7 + 30) )
      PpmAllowedActions |= 0x40u;
    if ( *((_QWORD *)v7 + 29) )
      PpmAllowedActions |= 0x20u;
    if ( *((_QWORD *)v7 + 28) )
      PpmAllowedActions |= 0x200u;
    if ( *((_QWORD *)v7 + 32) )
      PpmAllowedActions |= 0x80u;
    if ( *((_QWORD *)v7 + 31) )
      PpmAllowedActions |= 0x100u;
    if ( *((_BYTE *)v5 + 9) )
      PpmPerfEppViaPerfControl = 1;
    if ( *((_BYTE *)v5 + 10) )
      PpmPerfAutonomousActivityWindowViaPerfControl = 1;
    _InterlockedOr(v59, 0);
    v47 = 0;
    if ( v2 )
    {
      v48 = v67;
      do
      {
        if ( !v22[16] )
        {
          v49 = *(_QWORD *)v22;
          v50 = 2LL;
          *(_DWORD *)(v49 + 24240) = 0x10000;
          *(_QWORD *)(v49 + 24184) = &v7[136 * v47 + 688];
          v51 = &v61;
          *(_QWORD *)(v49 + 24176) = v7;
          v52 = &v48[48 * v13 * v47];
          v69[0] = 0LL;
          v69[1] = 0LL;
          v53 = (char **)v69;
          do
          {
            if ( *(_DWORD *)v51 != -1 )
            {
              *v53 = v52;
              v52 += 48;
            }
            v51 = (__int64 *)((char *)v51 + 4);
            ++v53;
            --v50;
          }
          while ( v50 );
          PpmInstallFeedbackCounters(v49, v69);
        }
        ++v47;
        v22 += 136;
      }
      while ( v47 < v2 );
      v5 = v68;
    }
    if ( !PpmPerfGlobalContext )
      PpmPerfGlobalContext = *((_QWORD *)v5 + 9);
    v54 = PpmPerfControlReadFeedback;
    if ( !PpmPerfControlReadFeedback )
    {
      v54 = *((_QWORD *)v5 + 45);
      PpmPerfControlReadFeedback = v54;
    }
    if ( !PpmPerfControlAcquirePerformance )
      PpmPerfControlAcquirePerformance = *((_QWORD *)v5 + 46);
    if ( !PpmPerfControlCommitPerformance )
      PpmPerfControlCommitPerformance = *((_QWORD *)v5 + 47);
    if ( !PpmParkPreferenceHandler )
      PpmParkPreferenceHandler = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v5 + 48);
    if ( !PpmParkMaskHandler )
      PpmParkMaskHandler = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v5 + 49);
    if ( !PpmCheckCompleteHandler )
      PpmCheckCompleteHandler = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v5 + 50);
    if ( !PpmPerfControlStartPolicyUpdate )
      PpmPerfControlStartPolicyUpdate = (__int64 (*)(void))*((_QWORD *)v5 + 38);
    if ( !PpmPerfControlCompletePolicyUpdate )
      PpmPerfControlCompletePolicyUpdate = (__int64 (*)(void))*((_QWORD *)v5 + 39);
    if ( v54 )
      PpmCheckPollForFeedback = 1;
    v55 = (_QWORD *)qword_1405423F8;
    ++PpmPerfDomainCount;
    if ( *(__int64 **)qword_1405423F8 != &PpmPerfDomainHead )
      __fastfail(3u);
    *(_QWORD *)v7 = &PpmPerfDomainHead;
    v8 = 1;
    *((_QWORD *)v7 + 1) = v55;
    *v55 = v7;
    v56 = PpmPerfDomainHead;
    qword_1405423F8 = (__int64)v7;
    while ( (__int64 *)v56 != &PpmPerfDomainHead )
    {
      v57 = *(_BYTE *)(v56 + 349);
      v56 = *(_QWORD *)v56;
      v8 = v57 != 0 ? v8 : 0;
    }
    KeOrAffinityEx((unsigned __int16 *)v72, PpmPerfStatesRegistered, PpmPerfStatesRegistered);
    *((_WORD *)v7 + 342) = 257;
    PpmUpdateProcessorPolicy(&PpmAllowedActions, (__int64)v7);
    PopExecuteOnTargetProcessors((__int64)v72, (__int64)PpmCheckReset, 0LL, 0LL);
    if ( ((*(_QWORD *)&v72[2 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6) + 2] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F)) & 1) != 0 )
      PpmParkApplyPolicy();
    PpmCheckReInit();
    v7 = 0LL;
    v21 = 0;
    PpmPerfUpdateDomainPolicy(1);
    goto LABEL_110;
  }
  v24 = 0LL;
  v25 = v7 + 708;
  while ( 1 )
  {
    v26 = *((_QWORD *)v5 + 52);
    *(v25 - 4) = *(_BYTE *)(v24 + v26 + 28);
    v27 = *(unsigned int *)(v24 + v26);
    if ( !*(_BYTE *)(v24 + v26 + 28) )
      break;
    v28 = -1;
    *(_DWORD *)v25 = v27;
LABEL_32:
    *((_DWORD *)v25 + 7) = 100;
    *(_QWORD *)(v25 - 12) = *(_QWORD *)(v24 + v26 + 8);
    *((_DWORD *)v25 + 1) = *(_DWORD *)(v24 + v26 + 16);
    *((_DWORD *)v25 + 2) = *(_DWORD *)(v24 + v26 + 20);
    v32 = *(_DWORD *)(v24 + v26 + 24);
    *(_QWORD *)(v25 + 108) = 0LL;
    *((_DWORD *)v25 + 3) = v32;
    *((_DWORD *)v25 + 14) = v63;
    *((_DWORD *)v25 + 9) = 100;
    *((_DWORD *)v25 + 13) = 100;
    *((_DWORD *)v25 + 15) = 1;
    *((_DWORD *)v25 + 16) = 100;
    *((_DWORD *)v25 + 17) = 100;
    *((_DWORD *)v25 + 24) = 100;
    v33 = !*((_BYTE *)v5 + 7) && *((_BYTE *)v5 + 11);
    v25[101] = v33;
    if ( *(_DWORD *)(v24 + v26 + 16) < 0x64u )
    {
      *(_QWORD *)(v25 + 20) = MEMORY[0xFFFFF78000000008];
      PopDiagTraceProcessorThrottlePerfTrack(100 - *(_DWORD *)(v24 + v26 + 16), v28);
      v23 = v60;
    }
    v34 = &v61;
    v35 = 2LL;
    v36 = v62 * v23;
    v37 = &v67[48 * v62 * v23];
    do
    {
      v38 = *(unsigned int *)v34;
      if ( (_DWORD)v38 != -1 )
      {
        v39 = *((_QWORD *)v5 + 51);
        *((_QWORD *)v37 + 5) = *(_QWORD *)(*((_QWORD *)v5 + 53) + 8LL * (unsigned int)(v36 + v38));
        v37[33] = *(_BYTE *)(v39 + 24 * v38 + 17);
        v37[32] = *(_BYTE *)(v39 + 24 * v38 + 16);
        v37[34] = *(_BYTE *)(v39 + 24 * v38 + 18);
        v37[35] = *(_BYTE *)(v39 + 24 * v38 + 8);
        *(_QWORD *)v37 = *(_QWORD *)(v39 + 24 * v38);
        v37 += 48;
      }
      v34 = (__int64 *)((char *)v34 + 4);
      --v35;
    }
    while ( v35 );
    v2 = v65;
    ++v23;
    v24 += 32LL;
    v25 += 136;
    LODWORD(v60) = v23;
    if ( v23 >= v65 )
    {
      v13 = v62;
      v22 = v7 + 688;
      goto LABEL_44;
    }
  }
  v64 = *(_DWORD *)(v24 + v26);
  if ( (_DWORD)v27 != -1
    && ((*(_QWORD *)&PpmPerfStatesRegistered[4
                                           * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v27] >> 6)
                                           + 4] >> (KiProcessorIndexToNumberMappingTable[v27] & 0x3F)) & 1) == 0 )
  {
    v66 = KeGetPrcb(v27);
    v21 = PpmAllocatePerfCheck(v66);
    if ( v21 < 0 )
      goto LABEL_47;
    v28 = v64;
    KeAddProcessorAffinityEx(v72, v64);
    v29 = v66;
    *(_QWORD *)(v25 - 20) = v66;
    v30 = (unsigned int)PpmPerfQosTransitionHysteresisOverride;
    if ( PpmPerfQosTransitionHysteresisOverride == -1 )
      v30 = (unsigned int)PpmPerfQosTransitionHysteresis;
    v31 = PpmConvertTime(v30, 0xF4240uLL, 1000000LL * *(unsigned int *)(v29 + 68));
    v23 = v60;
    *(_QWORD *)(v66 + 24296) = v31;
    goto LABEL_32;
  }
  v21 = -1073741811;
LABEL_47:
  PpmReleaseLock(&PpmPerfPolicyLock);
LABEL_110:
  if ( ((unsigned int)PpmPerfDomainCount > 1 || v8)
    && (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, (unsigned __int16 *)PpmCheckRegistered) )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfSchedulerDirectedPerfStatesSupported = v8;
    PpmReinitializeHeteroEngine(1);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x704D5050u);
  v70[1] = -1LL;
  v70[0] = 0LL;
  KeSetTimer2((__int64)&PpmPerfTelemetryTimer, -36000000000LL, 36000000000LL, (__int64)v70);
  return (unsigned int)v21;
}
