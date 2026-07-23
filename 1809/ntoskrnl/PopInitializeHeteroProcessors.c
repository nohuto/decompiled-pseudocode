/*
 * XREFs of PopInitializeHeteroProcessors @ 0x140750624
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140750214 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     PpmHeteroDetectHgsCores @ 0x14018A354 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14018A3A4 (PpmHeteroUpdateHgsConfiguration.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x1402D4E70 (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     PsEnumProcesses @ 0x1405B2AFC (PsEnumProcesses.c)
 *     PpmEventHeteroPolicy @ 0x1407508B0 (PpmEventHeteroPolicy.c)
 *     PopConfigureHeteroPolicies @ 0x140750934 (PopConfigureHeteroPolicies.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140750FD4 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1407510BC (PpmHeteroComputeRelativePerformance.c)
 *     KeConfigureHeteroProcessors @ 0x140843D08 (KeConfigureHeteroProcessors.c)
 */

char __fastcall PopInitializeHeteroProcessors(__int64 a1, signed __int64 a2)
{
  char v2; // r12
  bool v3; // bl
  char v4; // si
  char v5; // r15
  unsigned __int8 v6; // r14
  char *v7; // rbx
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  unsigned int v10; // edi
  unsigned __int8 v11; // al
  int v12; // eax
  ULONG ActiveProcessorCount; // eax
  _BYTE *v14; // rcx
  __int64 v15; // r8
  char v16; // al
  _WORD *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v21; // rsi
  __int64 v22; // r8
  char v23; // al
  __int64 Prcb; // rax
  __int16 v25; // cx
  int v26; // [rsp+38h] [rbp-69h] BYREF
  __int16 v27; // [rsp+3Ch] [rbp-65h] BYREF
  ULONG v28; // [rsp+40h] [rbp-61h] BYREF
  ULONG v29; // [rsp+44h] [rbp-5Dh] BYREF
  unsigned __int16 *v30[2]; // [rsp+48h] [rbp-59h] BYREF
  __int16 v31; // [rsp+58h] [rbp-49h]
  unsigned __int16 *v32[2]; // [rsp+60h] [rbp-41h] BYREF
  __int16 v33; // [rsp+70h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-29h] BYREF
  __int64 v35; // [rsp+88h] [rbp-19h]
  __int64 v36; // [rsp+90h] [rbp-11h]
  __int64 v37; // [rsp+98h] [rbp-9h]
  __int64 v38; // [rsp+A0h] [rbp-1h]
  __int64 v39; // [rsp+A8h] [rbp+7h]
  __int64 v40; // [rsp+B0h] [rbp+Fh]
  __int64 v41; // [rsp+B8h] [rbp+17h]
  __int64 v42; // [rsp+C0h] [rbp+1Fh]

  v2 = a1;
  v3 = 0;
  v4 = 1;
  if ( (PpmBackgroundProfile || PpmEntryLevelPerfProfile || PpmMultimediaQosProfile)
    && PpmPerfSchedulerDirectedPerfStatesSupported )
  {
    v3 = KeQueryActiveProcessorCountEx(0) >= 2;
  }
  v5 = v3;
  if ( PpmPerfVmQosSupported )
    v5 = 1;
  if ( !v5 || (v6 = 1, PpmPerfQosGroupPolicyDisable) )
    v6 = 0;
  if ( v2 )
  {
    v7 = (char *)PpmHeteroCapabilityTest;
    v8 = 0LL;
    if ( *(_DWORD *)PpmHeteroCapabilityTest )
    {
      do
      {
        a1 = (unsigned int)v8;
        v8 = (unsigned int)(v8 + 1);
        *(_WORD *)&v7[2 * a1 + 7 + a1] = 0;
      }
      while ( (unsigned int)v8 < *(_DWORD *)v7 );
    }
    PpmHeteroComputeRelativePerformance(a1, v8);
    PpmHeteroUpdateHgsConfiguration();
    v9 = PopDetectSimulatedHeteroProcessors(v7);
    v26 = v9;
    v10 = v9 != 0;
    if ( !v9 )
    {
      v11 = PpmHeteroDetectHgsCores((__int64)v7);
      v26 = v11;
      if ( v11 )
      {
        v10 = 5;
      }
      else
      {
        if ( PpmHeteroNominalPerformanceClasses || PpmHeteroHighestPerformanceClasses )
        {
          v30[1] = (unsigned __int16 *)qword_1404050A8[0];
          v30[0] = PpmPerfStatesRegistered;
          v31 = 0;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v28, v30) )
          {
            v21 = v28;
            v22 = *(_QWORD *)(KeGetPrcb(v28) + 24176);
            if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses <= 1u )
              v23 = *(_BYTE *)(v22 + 206);
            else
              v23 = *(_BYTE *)(v22 + 205);
            v7[2 * v21 + 8 + v21] = v23;
          }
          v4 = 1;
          v7[5] = 1;
          v12 = 1;
        }
        else
        {
          v12 = 0;
        }
        v26 = v12;
        if ( v12 )
        {
          v10 = 3;
        }
        else if ( v6 )
        {
          v26 = 1;
          v10 = 4;
        }
      }
    }
    if ( v10 == PopHeteroSystem )
    {
      v4 = 0;
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount )
      {
        v14 = v7 + 7;
        a2 = (_BYTE *)PpmHeteroCapability - v7;
        v15 = ActiveProcessorCount;
        do
        {
          if ( v14[a2] != *v14 || v14[a2 + 1] != v14[1] )
            v4 = 1;
          v14 += 3;
          --v15;
        }
        while ( v15 );
      }
    }
  }
  else
  {
    v10 = PopHeteroSystem;
    v7 = (char *)PpmHeteroCapability;
    v4 = 0;
    v26 = PopHeteroSystem != 0;
  }
  LOBYTE(a2) = v2;
  v16 = PopConfigureHeteroPolicies(v10, a2);
  if ( (v4 || v10 && v16) && (unsigned int)KeConfigureHeteroProcessors(v7, v6, &v26) )
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopUpdateSingleProcessHeteroPolicies, 0LL);
  if ( v26 )
  {
    PopHeteroSystem = v10;
    if ( v7 != PpmHeteroCapability )
      memmove(PpmHeteroCapability, v7, 3 * (*(_DWORD *)v7 + 2));
    if ( v6 )
      PpmIdleEnableIdleDurationExpirationTimeout();
    goto LABEL_62;
  }
  v17 = PpmHeteroCapability;
  v18 = 0LL;
  PopHeteroSystem = 0;
  if ( *(_DWORD *)PpmHeteroCapability )
  {
    do
    {
      v19 = (unsigned int)v18;
      v18 = (unsigned int)(v18 + 1);
      *(_WORD *)((char *)&v17[v19 + 3] + v19 + 1) = 0;
      *((_BYTE *)&v17[v19 + 3] + v19) = 0;
      v17[2] = 0;
    }
    while ( (unsigned int)v18 < *(_DWORD *)v17 );
  }
  if ( v5 )
LABEL_62:
    PpmPerfQosSupportedAndConfigured = 1;
  if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 || PopHeteroSystem == 6 )
    PpmHeteroPolicy = 0;
  else
    PpmHeteroPolicy = PpmHeteroDesiredPolicy;
  if ( PpmPerfArtificialDomainSetting == -1 )
    PpmPerfArtificialDomainEnabled = PopHeteroSystem != 0;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE) )
  {
    v32[1] = (unsigned __int16 *)qword_140405158[0];
    v32[0] = (unsigned __int16 *)PpmCheckRegistered;
    v33 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v29, v32) )
    {
      Prcb = KeGetPrcb(v29);
      v25 = *(unsigned __int8 *)(Prcb + 208);
      UserData.Ptr = (ULONGLONG)&v27;
      v27 = v25;
      v39 = Prcb + 24225;
      v35 = Prcb + 209;
      v41 = Prcb + 24226;
      v37 = Prcb + 24224;
      *(_QWORD *)&UserData.Size = 2LL;
      v36 = 1LL;
      v38 = 1LL;
      v40 = 1LL;
      v42 = 1LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE, 0LL, 5u, &UserData);
    }
  }
  PpmEventHeteroPolicy(0LL, v17, v18);
  return v4;
}
