/*
 * XREFs of PopDiagTraceControlCallback @ 0x140588FE0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x140005F88 (PopDiagTraceSystemLatencyUpdate.c)
 *     TraceLoggingProviderEnabled @ 0x1400129D8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     PopDiagTraceFxRundown @ 0x140141764 (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x140141E48 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x140142474 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x14058A28C (PopDiagTracePowerRequestCreate.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 *     PopCurrentPowerState @ 0x14058EED4 (PopCurrentPowerState.c)
 *     PopDiagTracePowerSetting @ 0x1406C5390 (PopDiagTracePowerSetting.c)
 *     PopRundownThermalRequests @ 0x1406DC2B0 (PopRundownThermalRequests.c)
 *     PopLoggingInformation @ 0x1406DCB00 (PopLoggingInformation.c)
 *     ExTraceTimerResolution @ 0x1406DCEFC (ExTraceTimerResolution.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1406DD1CC (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopDiagTracePlatformRoleRundown @ 0x1406DD25C (PopDiagTracePlatformRoleRundown.c)
 *     PopMeasureEnergyChange @ 0x14086EDD4 (PopMeasureEnergyChange.c)
 */

void __fastcall PopDiagTraceControlCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        struct _TlgProvider_t *CallbackContext)
{
  __int64 v7; // rcx
  __int64 *i; // rbx
  __int64 v9; // rcx
  PVOID *v10; // rbx
  __int64 v11; // r15
  unsigned int *v12; // rax
  int v13; // ebx
  PVOID v14; // r15
  char *v15; // r13
  unsigned int v16; // r12d
  char *v17; // r15
  ULONG v18; // ebx
  REGHANDLE v19; // rbx
  __int64 *v20; // rcx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rcx
  int v26; // r13d
  __int64 v27; // rax
  char *v28; // rbx
  __int64 v29; // r15
  unsigned int v30; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v31; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v32; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v33; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v34; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v35; // [rsp+44h] [rbp-BCh]
  unsigned int v36; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+58h] [rbp-A8h]
  int v39; // [rsp+5Ch] [rbp-A4h]
  int v40; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v42; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v43; // [rsp+6Ch] [rbp-94h] BYREF
  int v44; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v45; // [rsp+74h] [rbp-8Ch] BYREF
  int v46; // [rsp+78h] [rbp-88h] BYREF
  int v47; // [rsp+7Ch] [rbp-84h] BYREF
  int v48; // [rsp+80h] [rbp-80h] BYREF
  BOOL v49; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned __int64 v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v52; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v53; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v54; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v55; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-48h] BYREF
  int v57; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-38h]
  _DWORD v59[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+100h] [rbp+0h] BYREF
  int *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+120h] [rbp+20h] BYREF
  int *v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+140h] [rbp+40h] BYREF
  char *v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  char *v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF
  __int16 *v73; // [rsp+190h] [rbp+90h]
  __int64 v74; // [rsp+198h] [rbp+98h]
  __int16 *v75; // [rsp+1A0h] [rbp+A0h]
  __int64 v76; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 *v77; // [rsp+1B0h] [rbp+B0h]
  __int64 v78; // [rsp+1B8h] [rbp+B8h]
  int *v79; // [rsp+1C0h] [rbp+C0h]
  __int64 v80; // [rsp+1C8h] [rbp+C8h]
  __int64 *v81; // [rsp+1D0h] [rbp+D0h]
  __int64 v82; // [rsp+1D8h] [rbp+D8h]
  __int64 *v83; // [rsp+1E0h] [rbp+E0h]
  __int64 v84; // [rsp+1E8h] [rbp+E8h]
  unsigned __int64 *v85; // [rsp+1F0h] [rbp+F0h]
  __int64 v86; // [rsp+1F8h] [rbp+F8h]
  unsigned __int64 *v87; // [rsp+200h] [rbp+100h]
  __int64 v88; // [rsp+208h] [rbp+108h]
  __int16 *v89; // [rsp+210h] [rbp+110h]
  __int64 v90; // [rsp+218h] [rbp+118h]
  __int16 *v91; // [rsp+220h] [rbp+120h]
  __int64 v92; // [rsp+228h] [rbp+128h]
  int *v93; // [rsp+230h] [rbp+130h]
  __int64 v94; // [rsp+238h] [rbp+138h]
  unsigned int *v95; // [rsp+240h] [rbp+140h]
  __int64 v96; // [rsp+248h] [rbp+148h]
  unsigned int *v97; // [rsp+250h] [rbp+150h]
  __int64 v98; // [rsp+258h] [rbp+158h]
  int *v99; // [rsp+260h] [rbp+160h]
  __int64 v100; // [rsp+268h] [rbp+168h]
  unsigned int *v101; // [rsp+270h] [rbp+170h]
  __int64 v102; // [rsp+278h] [rbp+178h]
  __int64 *v103; // [rsp+280h] [rbp+180h]
  __int64 v104; // [rsp+288h] [rbp+188h]
  int *v105; // [rsp+290h] [rbp+190h]
  __int64 v106; // [rsp+298h] [rbp+198h]
  int *v107; // [rsp+2A0h] [rbp+1A0h]
  __int64 v108; // [rsp+2A8h] [rbp+1A8h]
  int *v109; // [rsp+2B0h] [rbp+1B0h]
  __int64 v110; // [rsp+2B8h] [rbp+1B8h]

  if ( (_DWORD)ControlCode == 2 )
  {
    if ( CallbackContext != &pCallbackContext )
    {
      ExTraceTimerResolution(SourceId, ControlCode, Level, MatchAnyKeyword);
      PopDiagTraceSystemLatencyUpdate(1, PopFxSystemLatencyLimit);
      PopAcquirePowerRequestPushLock(0LL);
      for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
      {
        LOBYTE(v7) = 1;
        PopDiagTracePowerRequestCreate(v7, i);
      }
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      *(_QWORD *)&UserData.Size = 4LL;
      v49 = dword_14041918C == 0;
      UserData.Ptr = (ULONGLONG)&v49;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_RUNDOWN, 0LL, 1u, &UserData);
      ExAcquireFastMutex(&PopSettingLock);
      v10 = (PVOID *)PopPowerSettings;
      if ( PopPowerSettings != &PopPowerSettings )
      {
        v11 = dword_14041918C;
        do
        {
          v12 = (unsigned int *)v10[v11 + 8];
          if ( v12 )
          {
            LOBYTE(v9) = 1;
            PopDiagTracePowerSetting(v9, v10 + 4, v12[1], v12 + 3);
          }
          v10 = (PVOID *)*v10;
        }
        while ( v10 != &PopPowerSettings );
      }
      KeReleaseGuardedMutex(&PopSettingLock);
      PopThermalTraceRundownEvents();
      PopAcquirePolicyLock();
      v13 = PopLoggingInformation(&P, &v36);
      PopReleasePolicyLock();
      v14 = P;
      if ( v13 >= 0 )
      {
        v15 = (char *)P + 4;
        v35 = *(_DWORD *)P;
        v16 = 0;
        if ( v35 )
        {
          v17 = (char *)P + v36;
          do
          {
            if ( v15 >= v17 )
              break;
            v18 = *((_DWORD *)v15 + 3) + 16;
            UserData.Ptr = (ULONGLONG)v15;
            UserData.Size = v18;
            UserData.Reserved = 0;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SLEEP_DISABLE_REASON_RUNDOWN, 0LL, 1u, &UserData);
            ++v16;
            v15 += v18;
          }
          while ( v16 < v35 );
          v14 = P;
        }
      }
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      if ( !_InterlockedCompareExchange(&PopDiagDeviceRundownRequests, 1, 0) )
        ExQueueWorkItem(&PopDiagDeviceRundownWorkItem, DelayedWorkQueue);
      PopDiagTraceFxRundown();
      PopDiagTracePlatformRoleRundown();
      PopRundownThermalRequests();
      PopAcquirePolicyLock();
      if ( PopDiagHandleRegistered )
      {
        v19 = PopDiagHandle;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN) )
        {
          *(_QWORD *)&v61.Size = 4LL;
          v61.Ptr = (ULONGLONG)&PopNetStandbyState;
          v63 = 4LL;
          v62 = &PopNetStandbyReason;
          EtwWrite(v19, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN, 0LL, 2u, &v61);
        }
        if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN) )
        {
          v27 = 0LL;
          v30 = 0;
          do
          {
            *(_QWORD *)&v64.Size = 4LL;
            v64.Ptr = (ULONGLONG)&v30;
            v66 = 4LL;
            v65 = &PopCsDeviceCompliance[v27];
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN, 0LL, 2u, &v64);
            v27 = v30 + 1;
            v30 = v27;
          }
          while ( (unsigned int)v27 < 5 );
        }
      }
      PopReleasePolicyLock();
      PopDiagTraceDynamicTickStatusRundown();
      PopDiagTraceDeepSleepConstraintRundown();
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerEventLock);
      if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE_RUNDOWN) )
      {
        v28 = (char *)&unk_14096ECB0;
        v29 = 43LL;
        do
        {
          v67.Ptr = (ULONGLONG)(v28 - 32);
          *(_QWORD *)&v67.Size = 4LL;
          v68 = v28 - 16;
          v69 = 4LL;
          v70 = v28;
          v71 = 8LL;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE_RUNDOWN, 0LL, 3u, &v67);
          v28 += 48;
          --v29;
        }
        while ( v29 );
      }
      v20 = &PopPowerEventLock;
      goto LABEL_29;
    }
    if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
    {
      memset(v59, 0, sizeof(v59));
      if ( TraceLoggingProviderEnabled(&pCallbackContext, 0, 0x800000000000uLL) )
      {
        if ( byte_14041782C )
        {
          PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
          if ( dword_1404177F0 != 1 && (unsigned int)(dword_1404177F0 - 4) > 1 )
          {
            v20 = &PopTelemetryOsState;
LABEL_29:
            PopReleaseRwLock((ULONG_PTR)v20);
            return;
          }
          v21 = (KiQueryUnbiasedInterruptTime() - qword_140417808) / 0x2710uLL;
          v22 = v21 - qword_140417818;
          v23 = (MEMORY[0xFFFFF78000000008] - qword_140417800) / 0x2710uLL;
          qword_140417818 = v21;
          v24 = v23 - qword_140417810;
          qword_140417810 = v23;
          v25 = v24;
          if ( v22 <= v24 )
            v25 = v22;
          v50 = v25;
          LODWORD(P) = ++dword_140417820;
          v38 = dword_1404177F0;
          v39 = dword_1404177F4;
          v35 = dword_140417824;
          v36 = dword_140417828;
          PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
          PopCurrentPowerState(v59);
          v26 = v59[2];
          v30 = 0;
          if ( v59[2] )
            v30 = (unsigned int)(100 * v59[3]) / v59[2];
          PopMeasureEnergyChange(&v57, &OsStateChangeEnergyCounter);
          v51 = qword_1404177F8;
          if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
          {
            v31 = 5;
            v32 = 1;
            v52 = v24;
            v40 = MEMORY[0xFFFFF780000002C4];
            v53 = v50;
            v33 = v38;
            v34 = v39;
            v41 = (int)P;
            v42 = v35;
            v43 = v36;
            v45 = v30;
            v56 = v58;
            v46 = v57;
            v47 = LOBYTE(v59[0]);
            v48 = HIBYTE(v59[0]);
            v73 = &v31;
            v75 = &v32;
            v77 = &v52;
            v79 = &v40;
            v81 = &v51;
            v83 = (__int64 *)&v53;
            v85 = &v54;
            v87 = &v55;
            v89 = &v33;
            v91 = &v34;
            v93 = &v41;
            v95 = &v42;
            v97 = &v43;
            v99 = &v44;
            v101 = &v45;
            v103 = &v56;
            v105 = &v46;
            v54 = v23;
            v55 = v21;
            v44 = v26;
            v74 = 2LL;
            v76 = 2LL;
            v78 = 8LL;
            v80 = 4LL;
            v82 = 8LL;
            v84 = 8LL;
            v86 = 8LL;
            v88 = 8LL;
            v90 = 2LL;
            v92 = 2LL;
            v94 = 4LL;
            v96 = 4LL;
            v98 = 4LL;
            v100 = 4LL;
            v102 = 4LL;
            v104 = 8LL;
            v106 = 4LL;
            v108 = 4LL;
            v107 = &v47;
            v109 = &v48;
            v110 = 4LL;
            TlgWrite(&pCallbackContext, &unk_14037117A, 0LL, 0LL, 0x15u, &pData);
          }
        }
      }
    }
  }
}
