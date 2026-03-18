/*
 * XREFs of PopInitializeHeteroProcessors @ 0x140777198
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140776D6C (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x14009E170 (KeIsEmptyAffinityEx.c)
 *     PpmHeteroDetectHgsCores @ 0x140194D0C (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140194D64 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeIsEqualAffinityEx @ 0x140194E20 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x1402EF08C (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     PsEnumProcesses @ 0x140638AD8 (PsEnumProcesses.c)
 *     PpmEventHeteroPolicy @ 0x140777464 (PpmEventHeteroPolicy.c)
 *     PopConfigureHeteroPolicies @ 0x1407774E8 (PopConfigureHeteroPolicies.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140777DE0 (PopDetectSimulatedHeteroProcessors.c)
 *     KeConfigureHeteroProcessors @ 0x14087DBE8 (KeConfigureHeteroProcessors.c)
 */

char __fastcall PopInitializeHeteroProcessors(char a1, signed __int64 a2)
{
  bool v3; // bl
  char v4; // di
  int v5; // r15d
  unsigned __int8 v6; // r14
  char *v7; // rsi
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  unsigned int v11; // ebx
  unsigned __int8 v12; // al
  int v13; // eax
  ULONG ActiveProcessorCount; // eax
  _BYTE *v15; // rcx
  __int64 v16; // r8
  char v17; // al
  _WORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 *v22; // rcx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rax
  char v25; // bl
  char v26; // cl
  unsigned int v27; // ebx
  __int64 v28; // r10
  unsigned int v29; // r11d
  unsigned __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // r9
  unsigned int i; // ecx
  __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // r8d
  char v37; // r9
  unsigned __int64 v38; // r10
  __int64 *v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 j; // rax
  char v43; // dl
  int v44; // r9d
  unsigned __int64 v45; // r10
  __int64 v46; // rax
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rcx
  __int64 k; // rcx
  __int64 v50; // rdi
  __int64 v51; // r8
  char v52; // al
  __int64 Prcb; // rax
  __int16 v54; // cx
  int v55; // [rsp+38h] [rbp-69h] BYREF
  __int16 v56; // [rsp+3Ch] [rbp-65h] BYREF
  ULONG v57; // [rsp+40h] [rbp-61h] BYREF
  ULONG v58; // [rsp+44h] [rbp-5Dh] BYREF
  unsigned __int16 *v59[2]; // [rsp+48h] [rbp-59h] BYREF
  __int16 v60; // [rsp+58h] [rbp-49h]
  int v61; // [rsp+5Ah] [rbp-47h]
  __int16 v62; // [rsp+5Eh] [rbp-43h]
  unsigned __int16 *v63[2]; // [rsp+60h] [rbp-41h] BYREF
  __int16 v64; // [rsp+70h] [rbp-31h]
  int v65; // [rsp+72h] [rbp-2Fh]
  __int16 v66; // [rsp+76h] [rbp-2Bh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-29h] BYREF
  __int64 v68; // [rsp+88h] [rbp-19h]
  __int64 v69; // [rsp+90h] [rbp-11h]
  __int64 v70; // [rsp+98h] [rbp-9h]
  __int64 v71; // [rsp+A0h] [rbp-1h]
  __int64 v72; // [rsp+A8h] [rbp+7h]
  __int64 v73; // [rsp+B0h] [rbp+Fh]
  __int64 v74; // [rsp+B8h] [rbp+17h]
  __int64 v75; // [rsp+C0h] [rbp+1Fh]

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
  v55 = v5;
  if ( !(_BYTE)v5 || (v6 = 1, PpmPerfQosGroupPolicyDisable) )
    v6 = 0;
  if ( a1 )
  {
    v7 = (char *)PpmHeteroCapabilityTest;
    v8 = 0;
    if ( *(_DWORD *)PpmHeteroCapabilityTest )
    {
      do
      {
        v9 = v8++;
        *(_WORD *)&v7[2 * v9 + 7 + v9] = 0;
      }
      while ( v8 < *(_DWORD *)v7 );
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(PpmCheckRegistered) )
    {
      if ( (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, (unsigned __int16 *)PpmCheckRegistered) )
      {
        if ( PpmPerfDomainCount != 1 )
        {
          v22 = (__int64 *)PpmPerfDomainHead;
          v23 = 0LL;
          if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
          {
            do
            {
              v24 = v23;
              v23 = v22[42];
              v22 = (__int64 *)*v22;
              if ( v24 > v23 )
                v23 = v24;
            }
            while ( v22 != &PpmPerfDomainHead );
            if ( v23 )
            {
              v25 = 0;
              v26 = 0;
              if ( v23 >= 0x7FFFFFFFFFFFLL )
              {
                _BitScanReverse(&v27, HIDWORD(v23) + 0xFFFF);
                v25 = v27 - 14;
                v26 = v25;
              }
              v28 = PpmPerfDomainHead;
              v29 = -1;
              v30 = v23 >> v26;
              if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
              {
                do
                {
                  v31 = *(_QWORD *)(v28 + 336) >> v25;
                  *(_BYTE *)(v28 + 344) = 100 * v31 / v30;
                  if ( v31 == v30 )
                  {
                    v32 = 0x10000LL;
                  }
                  else
                  {
                    v32 = ((v31 << 16) + (v30 >> 1)) / v30;
                    if ( v32 <= 1 )
                      v32 = 1LL;
                  }
                  for ( i = 0; i < *(_DWORD *)(v28 + 200); ++i )
                  {
                    v34 = *(_QWORD *)(v28 + 208);
                    v35 = 136LL * i;
                    if ( !*(_BYTE *)(v35 + v34 + 16) )
                      *(_DWORD *)(*(_QWORD *)(v35 + v34) + 24240LL) = v32;
                  }
                  v28 = *(_QWORD *)v28;
                  if ( v29 >= v32 )
                    v29 = v32;
                }
                while ( (__int64 *)v28 != &PpmPerfDomainHead );
                LOBYTE(v5) = v55;
              }
              v36 = PpmPerfDomainCount;
              v37 = 0;
              PpmHeteroMinRelativePerformance = v29;
              v38 = 0LL;
              while ( v36 )
              {
                v39 = (__int64 *)PpmPerfDomainHead;
                v40 = -1LL;
                while ( v39 != &PpmPerfDomainHead )
                {
                  v41 = v39[42];
                  if ( v41 > v38 && v40 >= v41 )
                    v40 = v39[42];
                  v39 = (__int64 *)*v39;
                }
                for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
                {
                  if ( *(_QWORD *)(j + 336) == v40 )
                  {
                    *(_BYTE *)(j + 205) = v37;
                    --v36;
                  }
                }
                v38 = v40;
                ++v37;
              }
              PpmHeteroNominalPerformanceClasses = v37;
              v43 = 0;
              v44 = PpmPerfDomainCount;
              v45 = 0LL;
              while ( v44 )
              {
                v46 = PpmPerfDomainHead;
                v47 = 0xFFFFFFFFLL;
                while ( (__int64 *)v46 != &PpmPerfDomainHead )
                {
                  v48 = *(_QWORD *)(v46 + 336) * *(unsigned int *)(v46 + 312);
                  if ( v48 > v45 && v47 >= v48 )
                    v47 = *(_QWORD *)(v46 + 336) * *(unsigned int *)(v46 + 312);
                  v46 = *(_QWORD *)v46;
                }
                for ( k = PpmPerfDomainHead; (__int64 *)k != &PpmPerfDomainHead; k = *(_QWORD *)k )
                {
                  if ( *(_QWORD *)(k + 336) * *(unsigned int *)(k + 312) == v47 )
                  {
                    if ( *(_BYTE *)(k + 206) != v43 )
                      *(_BYTE *)(k + 206) = v43;
                    --v44;
                  }
                }
                v45 = v47;
                ++v43;
              }
              PpmHeteroHighestPerformanceClasses = v43;
            }
          }
        }
      }
    }
    PpmHeteroUpdateHgsConfiguration();
    v10 = PopDetectSimulatedHeteroProcessors(v7);
    v55 = v10;
    v11 = v10 != 0;
    if ( !v10 )
    {
      v12 = PpmHeteroDetectHgsCores((__int64)v7);
      v55 = v12;
      if ( v12 )
      {
        v11 = 5;
      }
      else
      {
        v61 = 0;
        v62 = 0;
        if ( PpmHeteroNominalPerformanceClasses || PpmHeteroHighestPerformanceClasses )
        {
          v59[1] = (unsigned __int16 *)qword_14042A6A8[0];
          v59[0] = PpmPerfStatesRegistered;
          v60 = 0;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v57, v59) )
          {
            v50 = v57;
            v51 = *(_QWORD *)(KeGetPrcb(v57) + 24176);
            if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses <= 1u )
              v52 = *(_BYTE *)(v51 + 206);
            else
              v52 = *(_BYTE *)(v51 + 205);
            v7[2 * v50 + 8 + v50] = v52;
          }
          v4 = 1;
          v7[5] = 1;
          v13 = 1;
        }
        else
        {
          v13 = 0;
        }
        v55 = v13;
        if ( v13 )
        {
          v11 = 3;
        }
        else if ( v6 )
        {
          v55 = 1;
          v11 = 4;
        }
      }
    }
    if ( v11 == PopHeteroSystem )
    {
      v4 = 0;
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount )
      {
        v15 = v7 + 7;
        a2 = (_BYTE *)PpmHeteroCapability - v7;
        v16 = ActiveProcessorCount;
        do
        {
          if ( v15[a2] != *v15 || v15[a2 + 1] != v15[1] )
            v4 = 1;
          v15 += 3;
          --v16;
        }
        while ( v16 );
      }
    }
  }
  else
  {
    v11 = PopHeteroSystem;
    v7 = (char *)PpmHeteroCapability;
    v4 = 0;
    v55 = PopHeteroSystem != 0;
  }
  LOBYTE(a2) = a1;
  v17 = PopConfigureHeteroPolicies(v11, a2);
  if ( (v4 || v11 && v17) && (unsigned int)KeConfigureHeteroProcessors(v7, v6, &v55) )
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopUpdateSingleProcessHeteroPolicies, 0LL);
  if ( v55 )
  {
    PopHeteroSystem = v11;
    if ( v7 != PpmHeteroCapability )
      memmove(PpmHeteroCapability, v7, 3 * (*(_DWORD *)v7 + 2));
    if ( v6 )
      PpmIdleEnableIdleDurationExpirationTimeout();
    goto LABEL_116;
  }
  v18 = PpmHeteroCapability;
  v19 = 0LL;
  PopHeteroSystem = 0;
  if ( *(_DWORD *)PpmHeteroCapability )
  {
    do
    {
      v20 = (unsigned int)v19;
      v19 = (unsigned int)(v19 + 1);
      *(_WORD *)((char *)&v18[v20 + 3] + v20 + 1) = 0;
      *((_BYTE *)&v18[v20 + 3] + v20) = 0;
      v18[2] = 0;
    }
    while ( (unsigned int)v19 < *(_DWORD *)v18 );
  }
  if ( (_BYTE)v5 )
LABEL_116:
    PpmPerfQosSupportedAndConfigured = 1;
  if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 || PopHeteroSystem == 6 )
    PpmHeteroPolicy = 0;
  else
    PpmHeteroPolicy = PpmHeteroDesiredPolicy;
  if ( PpmPerfArtificialDomainSetting == -1 )
    PpmPerfArtificialDomainEnabled = PopHeteroSystem != 0;
  v65 = 0;
  v66 = 0;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE) )
  {
    v63[1] = (unsigned __int16 *)qword_14042A808[0];
    v63[0] = (unsigned __int16 *)PpmCheckRegistered;
    v64 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v58, v63) )
    {
      Prcb = KeGetPrcb(v58);
      v54 = *(unsigned __int8 *)(Prcb + 208);
      UserData.Ptr = (ULONGLONG)&v56;
      v56 = v54;
      v72 = Prcb + 24225;
      v68 = Prcb + 209;
      v74 = Prcb + 24226;
      v70 = Prcb + 24224;
      *(_QWORD *)&UserData.Size = 2LL;
      v69 = 1LL;
      v71 = 1LL;
      v73 = 1LL;
      v75 = 1LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE, 0LL, 5u, &UserData);
    }
  }
  PpmEventHeteroPolicy(0LL, v18, v19);
  return v4;
}
