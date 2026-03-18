/*
 * XREFs of PopDiagTraceControlCallback @ 0x14069D910
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     TraceLoggingProviderEnabled @ 0x14008A644 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1400EDCA4 (PopDiagTraceSystemLatencyUpdate.c)
 *     PopDiagTraceFxRundown @ 0x14015A4D8 (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x14015C684 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x14015CD88 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopPlTraceLogPowerPlane @ 0x140305794 (PopPlTraceLogPowerPlane.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopCurrentPowerState @ 0x14067E620 (PopCurrentPowerState.c)
 *     PopDiagTracePowerRequestCreate @ 0x14069F53C (PopDiagTracePowerRequestCreate.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A0544 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerSetting @ 0x1406E63E0 (PopDiagTracePowerSetting.c)
 *     PopRundownThermalRequests @ 0x14071D6F8 (PopRundownThermalRequests.c)
 *     PopLoggingInformation @ 0x14071E104 (PopLoggingInformation.c)
 *     ExTraceTimerResolution @ 0x14071E990 (ExTraceTimerResolution.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x14071EB10 (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopDiagTracePlatformRoleRundown @ 0x14071EBA0 (PopDiagTracePlatformRoleRundown.c)
 *     PopMeasureEnergyChange @ 0x1408AA6C4 (PopMeasureEnergyChange.c)
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
  REGHANDLE v20; // rbx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rcx
  ULONG Size; // r13d
  __int64 v27; // rax
  char *v28; // rbx
  __int64 v29; // r15
  ULONG v30; // [rsp+30h] [rbp-D0h] BYREF
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
  ULONG v44; // [rsp+70h] [rbp-90h] BYREF
  ULONG v45; // [rsp+74h] [rbp-8Ch] BYREF
  int v46; // [rsp+78h] [rbp-88h] BYREF
  int Ptr_low; // [rsp+7Ch] [rbp-84h] BYREF
  int v48; // [rsp+80h] [rbp-80h] BYREF
  BOOL v49; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v54; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v55; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v56; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v57; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60[2]; // [rsp+D8h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+108h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+118h] [rbp+18h] BYREF
  int *v64; // [rsp+128h] [rbp+28h]
  __int64 v65; // [rsp+130h] [rbp+30h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+138h] [rbp+38h] BYREF
  int *v67; // [rsp+148h] [rbp+48h]
  __int64 v68; // [rsp+150h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+158h] [rbp+58h] BYREF
  char *v70; // [rsp+168h] [rbp+68h]
  __int64 v71; // [rsp+170h] [rbp+70h]
  char *v72; // [rsp+178h] [rbp+78h]
  __int64 v73; // [rsp+180h] [rbp+80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  __int16 *v75; // [rsp+1B0h] [rbp+B0h]
  __int64 v76; // [rsp+1B8h] [rbp+B8h]
  __int16 *v77; // [rsp+1C0h] [rbp+C0h]
  __int64 v78; // [rsp+1C8h] [rbp+C8h]
  unsigned __int64 *v79; // [rsp+1D0h] [rbp+D0h]
  __int64 v80; // [rsp+1D8h] [rbp+D8h]
  int *v81; // [rsp+1E0h] [rbp+E0h]
  __int64 v82; // [rsp+1E8h] [rbp+E8h]
  __int64 *v83; // [rsp+1F0h] [rbp+F0h]
  __int64 v84; // [rsp+1F8h] [rbp+F8h]
  __int64 *v85; // [rsp+200h] [rbp+100h]
  __int64 v86; // [rsp+208h] [rbp+108h]
  unsigned __int64 *v87; // [rsp+210h] [rbp+110h]
  __int64 v88; // [rsp+218h] [rbp+118h]
  unsigned __int64 *v89; // [rsp+220h] [rbp+120h]
  __int64 v90; // [rsp+228h] [rbp+128h]
  __int16 *v91; // [rsp+230h] [rbp+130h]
  __int64 v92; // [rsp+238h] [rbp+138h]
  __int16 *v93; // [rsp+240h] [rbp+140h]
  __int64 v94; // [rsp+248h] [rbp+148h]
  int *v95; // [rsp+250h] [rbp+150h]
  __int64 v96; // [rsp+258h] [rbp+158h]
  unsigned int *v97; // [rsp+260h] [rbp+160h]
  __int64 v98; // [rsp+268h] [rbp+168h]
  unsigned int *v99; // [rsp+270h] [rbp+170h]
  __int64 v100; // [rsp+278h] [rbp+178h]
  ULONG *v101; // [rsp+280h] [rbp+180h]
  __int64 v102; // [rsp+288h] [rbp+188h]
  ULONG *v103; // [rsp+290h] [rbp+190h]
  __int64 v104; // [rsp+298h] [rbp+198h]
  __int64 *v105; // [rsp+2A0h] [rbp+1A0h]
  __int64 v106; // [rsp+2A8h] [rbp+1A8h]
  int *v107; // [rsp+2B0h] [rbp+1B0h]
  __int64 v108; // [rsp+2B8h] [rbp+1B8h]
  int *p_Ptr_low; // [rsp+2C0h] [rbp+1C0h]
  __int64 v110; // [rsp+2C8h] [rbp+1C8h]
  int *v111; // [rsp+2D0h] [rbp+1D0h]
  __int64 v112; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v113; // [rsp+2E0h] [rbp+1E0h]
  __int64 v114; // [rsp+2E8h] [rbp+1E8h]

  if ( (_DWORD)ControlCode == 2 )
  {
    UserData.Ptr = 0LL;
    *(_QWORD *)&UserData.Size = 0LL;
    if ( CallbackContext == &pCallbackContext )
    {
      if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
      {
        memset(v60, 0, sizeof(v60));
        v50 = 0LL;
        v52 = 0LL;
        v53 = 0LL;
        if ( TraceLoggingProviderEnabled(&pCallbackContext, 0, 0x800000000000uLL) )
        {
          if ( byte_1404420EC )
          {
            PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
            if ( dword_1404420B0 == 1 || (unsigned int)(dword_1404420B0 - 4) <= 1 )
            {
              v21 = (KiQueryUnbiasedInterruptTime() - qword_1404420C8) / 0x2710uLL;
              v22 = v21 - qword_1404420D8;
              v23 = (MEMORY[0xFFFFF78000000008] - qword_1404420C0) / 0x2710uLL;
              qword_1404420D8 = v21;
              v24 = v23 - qword_1404420D0;
              qword_1404420D0 = v23;
              v25 = v24;
              if ( v22 <= v24 )
                v25 = v22;
              v51 = v25;
              LODWORD(P) = ++dword_1404420E0;
              v38 = dword_1404420B0;
              v39 = dword_1404420B4;
              v35 = dword_1404420E4;
              v36 = dword_1404420E8;
              PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
              PopCurrentPowerState(v60);
              Size = v60[0].Size;
              v30 = 0;
              if ( v60[0].Size )
                v30 = 100 * v60[0].Reserved / v60[0].Size;
              PopMeasureEnergyChange(&v52, &OsStateChangeEnergyCounter);
              v50 = qword_1404420B8;
              if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
              {
                v31 = 5;
                v32 = 1;
                v54 = v24;
                v40 = MEMORY[0xFFFFF780000002C4];
                v55 = v51;
                v33 = v38;
                v34 = v39;
                v41 = (int)P;
                v42 = v35;
                v43 = v36;
                v45 = v30;
                v58 = v53;
                v46 = v52;
                Ptr_low = LOBYTE(v60[0].Ptr);
                v48 = BYTE3(v60[0].Ptr);
                v75 = &v31;
                v77 = &v32;
                v79 = &v54;
                v81 = &v40;
                v83 = &v50;
                v85 = (__int64 *)&v55;
                v87 = &v56;
                v89 = &v57;
                v91 = &v33;
                v93 = &v34;
                v95 = &v41;
                v97 = &v42;
                v99 = &v43;
                v101 = &v44;
                v103 = &v45;
                v105 = &v58;
                v107 = &v46;
                v56 = v23;
                v57 = v21;
                v44 = Size;
                v59 = 0x1000000LL;
                v76 = 2LL;
                v78 = 2LL;
                v80 = 8LL;
                v82 = 4LL;
                v84 = 8LL;
                v86 = 8LL;
                v88 = 8LL;
                v90 = 8LL;
                v92 = 2LL;
                v94 = 2LL;
                v96 = 4LL;
                v98 = 4LL;
                v100 = 4LL;
                v102 = 4LL;
                v104 = 4LL;
                v106 = 8LL;
                v108 = 4LL;
                p_Ptr_low = &Ptr_low;
                v111 = &v48;
                v113 = &v59;
                v110 = 4LL;
                v112 = 4LL;
                v114 = 8LL;
                TlgWrite(&pCallbackContext, &unk_140390027, 0LL, 0LL, 0x16u, &pData);
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
      PopAcquirePowerRequestPushLock(0LL);
      for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
      {
        LOBYTE(v7) = 1;
        PopDiagTracePowerRequestCreate(v7, i);
      }
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      *(_QWORD *)&UserData.Size = 4LL;
      v49 = dword_140443ACC == 0;
      UserData.Ptr = (ULONGLONG)&v49;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_RUNDOWN, 0LL, 1u, &UserData);
      ExAcquireFastMutex(&PopSettingLock);
      v10 = (PVOID *)PopPowerSettings;
      if ( PopPowerSettings != &PopPowerSettings )
      {
        v11 = dword_140443ACC;
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
      P = 0LL;
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
          *(_QWORD *)&v63.Size = 4LL;
          v63.Ptr = (ULONGLONG)&PopNetStandbyState;
          v65 = 4LL;
          v64 = &PopNetStandbyReason;
          EtwWrite(v19, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN, 0LL, 2u, &v63);
        }
        if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN) )
        {
          v27 = 0LL;
          v30 = 0;
          do
          {
            *(_QWORD *)&v66.Size = 4LL;
            v66.Ptr = (ULONGLONG)&v30;
            v68 = 4LL;
            v67 = &PopCsDeviceCompliance[v27];
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN, 0LL, 2u, &v66);
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
        v28 = (char *)&unk_1409ADDA0;
        v29 = 44LL;
        do
        {
          v69.Ptr = (ULONGLONG)(v28 - 32);
          *(_QWORD *)&v69.Size = 4LL;
          v70 = v28 - 16;
          v71 = 4LL;
          v72 = v28;
          v73 = 8LL;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE_RUNDOWN, 0LL, 3u, &v69);
          v28 += 48;
          --v29;
        }
        while ( v29 );
      }
      PopReleaseRwLock((ULONG_PTR)&PopPowerEventLock);
      PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
      if ( PopDiagHandleRegistered )
      {
        v20 = PopDiagHandle;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_RUNDOWN) )
        {
          *(_QWORD *)&v62.Size = 4LL;
          v62.Ptr = (ULONGLONG)&PopIdleScanInterval;
          EtwWrite(v20, &POP_ETW_EVENT_SYSTEM_IDLE_RUNDOWN, 0LL, 1u, &v62);
        }
      }
      PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
    }
  }
}
