/*
 * XREFs of PopDiagTraceControlCallback @ 0x1406EFCB0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     TraceLoggingProviderEnabled @ 0x14008B944 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1400F0B64 (PopDiagTraceSystemLatencyUpdate.c)
 *     PopDiagTraceFxRundown @ 0x14015AB78 (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x14015CD24 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x14015D428 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopPlTraceLogPowerPlane @ 0x140305244 (PopPlTraceLogPowerPlane.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406719F8 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x140673170 (PopDiagTracePowerRequestCreate.c)
 *     PopCurrentPowerState @ 0x14069B760 (PopCurrentPowerState.c)
 *     PopDiagTracePowerSetting @ 0x1406E7570 (PopDiagTracePowerSetting.c)
 *     PopRundownThermalRequests @ 0x14071F588 (PopRundownThermalRequests.c)
 *     PopLoggingInformation @ 0x14071FF94 (PopLoggingInformation.c)
 *     ExTraceTimerResolution @ 0x140720820 (ExTraceTimerResolution.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1407209A0 (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopDiagTracePlatformRoleRundown @ 0x140720A30 (PopDiagTracePlatformRoleRundown.c)
 *     PopMeasureEnergyChange @ 0x1408A9F24 (PopMeasureEnergyChange.c)
 */

void __fastcall PopDiagTraceControlCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        ULONG64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        struct _TlgProvider_t *CallbackContext)
{
  __int64 *i; // rbx
  PVOID *v8; // rbx
  __int64 v9; // r15
  _DWORD *v10; // rax
  int v11; // ebx
  PVOID v12; // r15
  char *v13; // r13
  unsigned int v14; // r12d
  char *v15; // r15
  ULONG v16; // ebx
  REGHANDLE v17; // rbx
  REGHANDLE v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rcx
  ULONG Size; // r13d
  __int64 v25; // rax
  char *v26; // rbx
  __int64 v27; // r15
  ULONG v28; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v29; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v31; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v32; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v33; // [rsp+44h] [rbp-BCh]
  unsigned int v34; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+58h] [rbp-A8h]
  int v37; // [rsp+5Ch] [rbp-A4h]
  int v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v40; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v41; // [rsp+6Ch] [rbp-94h] BYREF
  ULONG v42; // [rsp+70h] [rbp-90h] BYREF
  ULONG v43; // [rsp+74h] [rbp-8Ch] BYREF
  int v44; // [rsp+78h] [rbp-88h] BYREF
  int Ptr_low; // [rsp+7Ch] [rbp-84h] BYREF
  int v46; // [rsp+80h] [rbp-80h] BYREF
  BOOL v47; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v48; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v53; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v54; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v55; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58[2]; // [rsp+D8h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+108h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+118h] [rbp+18h] BYREF
  int *v62; // [rsp+128h] [rbp+28h]
  __int64 v63; // [rsp+130h] [rbp+30h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+138h] [rbp+38h] BYREF
  int *v65; // [rsp+148h] [rbp+48h]
  __int64 v66; // [rsp+150h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+158h] [rbp+58h] BYREF
  char *v68; // [rsp+168h] [rbp+68h]
  __int64 v69; // [rsp+170h] [rbp+70h]
  char *v70; // [rsp+178h] [rbp+78h]
  __int64 v71; // [rsp+180h] [rbp+80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  __int16 *v73; // [rsp+1B0h] [rbp+B0h]
  __int64 v74; // [rsp+1B8h] [rbp+B8h]
  __int16 *v75; // [rsp+1C0h] [rbp+C0h]
  __int64 v76; // [rsp+1C8h] [rbp+C8h]
  unsigned __int64 *v77; // [rsp+1D0h] [rbp+D0h]
  __int64 v78; // [rsp+1D8h] [rbp+D8h]
  int *v79; // [rsp+1E0h] [rbp+E0h]
  __int64 v80; // [rsp+1E8h] [rbp+E8h]
  __int64 *v81; // [rsp+1F0h] [rbp+F0h]
  __int64 v82; // [rsp+1F8h] [rbp+F8h]
  __int64 *v83; // [rsp+200h] [rbp+100h]
  __int64 v84; // [rsp+208h] [rbp+108h]
  unsigned __int64 *v85; // [rsp+210h] [rbp+110h]
  __int64 v86; // [rsp+218h] [rbp+118h]
  unsigned __int64 *v87; // [rsp+220h] [rbp+120h]
  __int64 v88; // [rsp+228h] [rbp+128h]
  __int16 *v89; // [rsp+230h] [rbp+130h]
  __int64 v90; // [rsp+238h] [rbp+138h]
  __int16 *v91; // [rsp+240h] [rbp+140h]
  __int64 v92; // [rsp+248h] [rbp+148h]
  int *v93; // [rsp+250h] [rbp+150h]
  __int64 v94; // [rsp+258h] [rbp+158h]
  unsigned int *v95; // [rsp+260h] [rbp+160h]
  __int64 v96; // [rsp+268h] [rbp+168h]
  unsigned int *v97; // [rsp+270h] [rbp+170h]
  __int64 v98; // [rsp+278h] [rbp+178h]
  ULONG *v99; // [rsp+280h] [rbp+180h]
  __int64 v100; // [rsp+288h] [rbp+188h]
  ULONG *v101; // [rsp+290h] [rbp+190h]
  __int64 v102; // [rsp+298h] [rbp+198h]
  __int64 *v103; // [rsp+2A0h] [rbp+1A0h]
  __int64 v104; // [rsp+2A8h] [rbp+1A8h]
  int *v105; // [rsp+2B0h] [rbp+1B0h]
  __int64 v106; // [rsp+2B8h] [rbp+1B8h]
  int *p_Ptr_low; // [rsp+2C0h] [rbp+1C0h]
  __int64 v108; // [rsp+2C8h] [rbp+1C8h]
  int *v109; // [rsp+2D0h] [rbp+1D0h]
  __int64 v110; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v111; // [rsp+2E0h] [rbp+1E0h]
  __int64 v112; // [rsp+2E8h] [rbp+1E8h]

  if ( (_DWORD)ControlCode == 2 )
  {
    UserData.Ptr = 0LL;
    *(_QWORD *)&UserData.Size = 0LL;
    if ( CallbackContext == &pCallbackContext )
    {
      if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
      {
        memset(v58, 0, sizeof(v58));
        v48 = 0LL;
        v50 = 0LL;
        v51 = 0LL;
        if ( TraceLoggingProviderEnabled(&pCallbackContext, 0, 0x800000000000uLL) )
        {
          if ( byte_14044206C )
          {
            PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
            if ( dword_140442030 == 1 || (unsigned int)(dword_140442030 - 4) <= 1 )
            {
              v19 = (KiQueryUnbiasedInterruptTime() - qword_140442048) / 0x2710uLL;
              v20 = v19 - qword_140442058;
              v21 = (MEMORY[0xFFFFF78000000008] - qword_140442040) / 0x2710uLL;
              qword_140442058 = v19;
              v22 = v21 - qword_140442050;
              qword_140442050 = v21;
              v23 = v22;
              if ( v20 <= v22 )
                v23 = v20;
              v49 = v23;
              LODWORD(P) = ++dword_140442060;
              v36 = dword_140442030;
              v37 = dword_140442034;
              v33 = dword_140442064;
              v34 = dword_140442068;
              PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
              PopCurrentPowerState(v58);
              Size = v58[0].Size;
              v28 = 0;
              if ( v58[0].Size )
                v28 = 100 * v58[0].Reserved / v58[0].Size;
              PopMeasureEnergyChange(&v50, &OsStateChangeEnergyCounter);
              v48 = qword_140442038;
              if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
              {
                v29 = 5;
                v30 = 1;
                v52 = v22;
                v38 = MEMORY[0xFFFFF780000002C4];
                v53 = v49;
                v31 = v36;
                v32 = v37;
                v39 = (int)P;
                v40 = v33;
                v41 = v34;
                v43 = v28;
                v56 = v51;
                v44 = v50;
                Ptr_low = LOBYTE(v58[0].Ptr);
                v46 = BYTE3(v58[0].Ptr);
                v73 = &v29;
                v75 = &v30;
                v77 = &v52;
                v79 = &v38;
                v81 = &v48;
                v83 = (__int64 *)&v53;
                v85 = &v54;
                v87 = &v55;
                v89 = &v31;
                v91 = &v32;
                v93 = &v39;
                v95 = &v40;
                v97 = &v41;
                v99 = &v42;
                v101 = &v43;
                v103 = &v56;
                v105 = &v44;
                v54 = v21;
                v55 = v19;
                v42 = Size;
                v57 = 0x1000000LL;
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
                p_Ptr_low = &Ptr_low;
                v109 = &v46;
                v111 = &v57;
                v108 = 4LL;
                v110 = 4LL;
                v112 = 8LL;
                TlgWrite(&pCallbackContext, &unk_1403902F0, 0LL, 0LL, 0x16u, &pData);
              }
            }
            else
            {
              PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
            }
          }
        }
      }
      if ( PopPowerPlane )
        PopPlTraceLogPowerPlane((unsigned __int16 *)PopPowerPlane, ControlCode, Level, MatchAnyKeyword);
    }
    else
    {
      ExTraceTimerResolution(SourceId, ControlCode, Level, MatchAnyKeyword);
      PopDiagTraceSystemLatencyUpdate(1, PopFxSystemLatencyLimit);
      PopAcquirePowerRequestPushLock(0);
      for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
        PopDiagTracePowerRequestCreate(1, (__int64)i);
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      *(_QWORD *)&UserData.Size = 4LL;
      v47 = dword_140443A2C == 0;
      UserData.Ptr = (ULONGLONG)&v47;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_RUNDOWN, 0LL, 1u, &UserData);
      ExAcquireFastMutex(&PopSettingLock);
      v8 = (PVOID *)PopPowerSettings;
      if ( PopPowerSettings != &PopPowerSettings )
      {
        v9 = dword_140443A2C;
        do
        {
          v10 = v8[v9 + 8];
          if ( v10 )
            PopDiagTracePowerSetting(1, (ULONGLONG)(v8 + 4), v10[1], (__int64)(v10 + 3));
          v8 = (PVOID *)*v8;
        }
        while ( v8 != &PopPowerSettings );
      }
      KeReleaseGuardedMutex(&PopSettingLock);
      PopThermalTraceRundownEvents();
      P = 0LL;
      PopAcquirePolicyLock();
      v11 = PopLoggingInformation(&P, &v34);
      PopReleasePolicyLock();
      v12 = P;
      if ( v11 >= 0 )
      {
        v13 = (char *)P + 4;
        v33 = *(_DWORD *)P;
        v14 = 0;
        if ( v33 )
        {
          v15 = (char *)P + v34;
          do
          {
            if ( v13 >= v15 )
              break;
            v16 = *((_DWORD *)v13 + 3) + 16;
            UserData.Ptr = (ULONGLONG)v13;
            UserData.Size = v16;
            UserData.Reserved = 0;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SLEEP_DISABLE_REASON_RUNDOWN, 0LL, 1u, &UserData);
            ++v14;
            v13 += v16;
          }
          while ( v14 < v33 );
          v12 = P;
        }
      }
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      if ( !_InterlockedCompareExchange(&PopDiagDeviceRundownRequests, 1, 0) )
        ExQueueWorkItem(&PopDiagDeviceRundownWorkItem, DelayedWorkQueue);
      PopDiagTraceFxRundown();
      PopDiagTracePlatformRoleRundown();
      PopRundownThermalRequests();
      PopAcquirePolicyLock();
      if ( PopDiagHandleRegistered )
      {
        v17 = PopDiagHandle;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN) )
        {
          *(_QWORD *)&v61.Size = 4LL;
          v61.Ptr = (ULONGLONG)&PopNetStandbyState;
          v63 = 4LL;
          v62 = &PopNetStandbyReason;
          EtwWrite(v17, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN, 0LL, 2u, &v61);
        }
        if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN) )
        {
          v25 = 0LL;
          v28 = 0;
          do
          {
            *(_QWORD *)&v64.Size = 4LL;
            v64.Ptr = (ULONGLONG)&v28;
            v66 = 4LL;
            v65 = &PopCsDeviceCompliance[v25];
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN, 0LL, 2u, &v64);
            v25 = v28 + 1;
            v28 = v25;
          }
          while ( (unsigned int)v25 < 5 );
        }
      }
      PopReleasePolicyLock();
      PopDiagTraceDynamicTickStatusRundown();
      PopDiagTraceDeepSleepConstraintRundown();
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerEventLock);
      if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE_RUNDOWN) )
      {
        v26 = (char *)&unk_1409ADDA0;
        v27 = 44LL;
        do
        {
          v67.Ptr = (ULONGLONG)(v26 - 32);
          *(_QWORD *)&v67.Size = 4LL;
          v68 = v26 - 16;
          v69 = 4LL;
          v70 = v26;
          v71 = 8LL;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE_RUNDOWN, 0LL, 3u, &v67);
          v26 += 48;
          --v27;
        }
        while ( v27 );
      }
      PopReleaseRwLock((ULONG_PTR)&PopPowerEventLock);
      PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
      if ( PopDiagHandleRegistered )
      {
        v18 = PopDiagHandle;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_RUNDOWN) )
        {
          *(_QWORD *)&v60.Size = 4LL;
          v60.Ptr = (ULONGLONG)&PopIdleScanInterval;
          EtwWrite(v18, &POP_ETW_EVENT_SYSTEM_IDLE_RUNDOWN, 0LL, 1u, &v60);
        }
      }
      PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
    }
  }
}
