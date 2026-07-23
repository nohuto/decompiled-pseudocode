/*
 * XREFs of NtPowerInformation @ 0x14058D170
 * Callers:
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1402E8D04 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1402E8EC8 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1402E9188 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14058D0D4 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1406F1218 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1406FF9B0 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x140841070 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x14087EE10 (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x14087EEE8 (TtmpCalloutCreateWatchdog.c)
 *     TtmpCalloutDestroyWatchdog @ 0x14087EF48 (TtmpCalloutDestroyWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x14087EFD0 (TtmpCalloutWatchdogCallback.c)
 *     VslRegisterIumPowerCallbacks @ 0x1409E0644 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     PoClearPowerRequestInternal @ 0x1400027C4 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140002E88 (PoSetPowerRequestInternal.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryActiveGroupCount @ 0x1400E3C90 (KeQueryActiveGroupCount.c)
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 *     PopDisksRegisteredForIdle @ 0x140139640 (PopDisksRegisteredForIdle.c)
 *     PoPowerOffMonitor @ 0x140142DA8 (PoPowerOffMonitor.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x140158CAC (PopDiagTraceSessionDisplayStateChange.c)
 *     PopEventCalloutDispatch @ 0x14017852C (PopEventCalloutDispatch.c)
 *     ExVerifySuite @ 0x14018DEE0 (ExVerifySuite.c)
 *     PpmHeteroHgsBackupInit @ 0x140192B80 (PpmHeteroHgsBackupInit.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1402D3EAC (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x1402D3EF4 (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402D5BB0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x1402D5C88 (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x1402D6F1C (PopCapabilityCheck.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1402D84BC (PopFxIsDevicePotentialDripsConstraint.c)
 *     PpmClearSimulatedLoad @ 0x1402DB39C (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402DB7A4 (PpmSetSimulatedLoad.c)
 *     PopUpdatePowerButtonHoldState @ 0x1402E4C3C (PopUpdatePowerButtonHoldState.c)
 *     PpmParkSetLpiCap @ 0x1402E81E0 (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x14031C820 (ExGetWakeTimerList.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PnpWinlogonExternalDmaNotification @ 0x140583044 (PnpWinlogonExternalDmaNotification.c)
 *     PopPowerRequestCreateInfo @ 0x140589318 (PopPowerRequestCreateInfo.c)
 *     PopPowerRequestActionInfo @ 0x140589A30 (PopPowerRequestActionInfo.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140589B1C (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopGetSettingValue @ 0x14058A744 (PopGetSettingValue.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058BA3C (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x14058C338 (PopSetPowerSettingValue.c)
 *     PopCurrentPowerState @ 0x14058EED4 (PopCurrentPowerState.c)
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     PopBlackBoxUpdate @ 0x14058F4C4 (PopBlackBoxUpdate.c)
 *     PopGetSettingNotificationName @ 0x14058F66C (PopGetSettingNotificationName.c)
 *     PopFilterCapabilities @ 0x1405B1968 (PopFilterCapabilities.c)
 *     TtmIsEnabled @ 0x1405B1C70 (TtmIsEnabled.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406554B4 (ExCheckFullProcessInformationAccess.c)
 *     PopEtEnergyTrackerQuery @ 0x14069D39C (PopEtEnergyTrackerQuery.c)
 *     PopCapturePlatformRole @ 0x1406CCDD4 (PopCapturePlatformRole.c)
 *     PopLoggingInformation @ 0x1406DCB00 (PopLoggingInformation.c)
 *     PopGetSessionId @ 0x1406DCDB4 (PopGetSessionId.c)
 *     PopPdcInvocation @ 0x1406DD320 (PopPdcInvocation.c)
 *     PopMonitorInvocation @ 0x1406DD428 (PopMonitorInvocation.c)
 *     PopSessionInputChange @ 0x1406DD7A0 (PopSessionInputChange.c)
 *     PopUmpoSendLegacyEvent @ 0x1406DF05C (PopUmpoSendLegacyEvent.c)
 *     PopDiagTraceServiceNotification @ 0x1406E2054 (PopDiagTraceServiceNotification.c)
 *     PopValidateServiceNotification @ 0x1406E2124 (PopValidateServiceNotification.c)
 *     PopDiagTraceAppPowerMessage @ 0x1406E2158 (PopDiagTraceAppPowerMessage.c)
 *     PopGetWakeSource @ 0x1406E2284 (PopGetWakeSource.c)
 *     PopSessionClosed @ 0x1406E2698 (PopSessionClosed.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x1406E27FC (PopDiagTraceAppPowerMessageEnd.c)
 *     PopSuspendResumeInvocation @ 0x1406E2984 (PopSuspendResumeInvocation.c)
 *     PopReadHiberbootPolicy @ 0x1406E2E0C (PopReadHiberbootPolicy.c)
 *     PopSetDisplayStatus @ 0x1406E31A0 (PopSetDisplayStatus.c)
 *     PopEnforceResiliencyScenarios @ 0x1406E3304 (PopEnforceResiliencyScenarios.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406E3954 (EtwpCoverageUserIsAdmin.c)
 *     PopSuspendResumePdc @ 0x1406E3AD0 (PopSuspendResumePdc.c)
 *     PopLogSleepDisabled @ 0x14070BCD4 (PopLogSleepDisabled.c)
 *     PopProcessorInformation @ 0x14070E9B8 (PopProcessorInformation.c)
 *     PopCurrentPowerStatePrecise @ 0x14071D430 (PopCurrentPowerStatePrecise.c)
 *     PopUpdateConsoleDisplayState @ 0x14071D4F8 (PopUpdateConsoleDisplayState.c)
 *     PopSessionConnectionChange @ 0x14071E928 (PopSessionConnectionChange.c)
 *     PopAcquireTransitionLock @ 0x14071F948 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14071F9A4 (PopReleaseTransitionLock.c)
 *     PopSessionConnectionInvocation @ 0x140720210 (PopSessionConnectionInvocation.c)
 *     PopSessionCreated @ 0x140720290 (PopSessionCreated.c)
 *     PopEsGetState @ 0x1407203FC (PopEsGetState.c)
 *     PopEnableHiberFile @ 0x14074716C (PopEnableHiberFile.c)
 *     PopChangeCapability @ 0x140748394 (PopChangeCapability.c)
 *     PopResetCurrentPolicies @ 0x1407487DC (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1407488A4 (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x140748B48 (PopVerifySystemPowerPolicy.c)
 *     PopEtEnergyTrackerCreate @ 0x14075D570 (PopEtEnergyTrackerCreate.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x140867774 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopApplyAdminPolicy @ 0x140869D4C (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x140869EEC (PopGetPowerRequestListInfo.c)
 *     PopSetHiberFileSize @ 0x14086CE24 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x14086CF30 (PopSetHiberFileType.c)
 *     PopThermalProcessUsermodeEvent @ 0x14086D6C0 (PopThermalProcessUsermodeEvent.c)
 *     PopBatteryDeviceState @ 0x14086E048 (PopBatteryDeviceState.c)
 *     PopPdcCsDeviceNotification @ 0x140870270 (PopPdcCsDeviceNotification.c)
 *     PopProcessSessionDisplayStateChange @ 0x140870698 (PopProcessSessionDisplayStateChange.c)
 *     PopScreenOff @ 0x1408706F8 (PopScreenOff.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x14087351C (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopSessionWinlogonNotification @ 0x14087A25C (PopSessionWinlogonNotification.c)
 *     PopUserPresentOverride @ 0x14087A470 (PopUserPresentOverride.c)
 *     PpmParkApplyForcedMask @ 0x14087D794 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14087D868 (PpmParkClearForcedMask.c)
 *     TtmCleanupCurrentSession @ 0x14088097C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x140880AE8 (TtmInitCurrentSession.c)
 *     TtmNotifySessionDisplayBurst @ 0x140880E6C (TtmNotifySessionDisplayBurst.c)
 *     TtmDispatchApi @ 0x140882960 (TtmDispatchApi.c)
 *     PopInitPlatformSettings @ 0x1409DDD88 (PopInitPlatformSettings.c)
 */

NTSTATUS __stdcall NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  POWER_INFORMATION_LEVEL v8; // ebx
  __int64 v9; // rcx
  _QWORD *v10; // r15
  __int64 v11; // rdx
  KPROCESSOR_MODE v12; // r15
  ULONG v13; // r13d
  void *v14; // r14
  void *v15; // r12
  int v16; // eax
  unsigned __int64 v17; // rax
  NTSTATUS WakeSource; // ebx
  unsigned __int64 v19; // rax
  char v20; // r13
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  LUID v28; // rcx
  unsigned __int64 v29; // rcx
  size_t v30; // rax
  int v31; // eax
  unsigned __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  char *v40; // rcx
  int v41; // r13d
  int v42; // edx
  int v43; // edx
  int v44; // edx
  int v45; // edx
  bool v46; // zf
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  bool v50; // sf
  __int64 v51; // rcx
  __int64 *v52; // rax
  int v53; // eax
  USHORT v54; // bx
  int v55; // eax
  UINT v56; // edx
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned int SessionId; // eax
  unsigned int *PoolWithTag; // rax
  unsigned int *v61; // rbx
  NTSTATUS v62; // eax
  _QWORD *v63; // rax
  unsigned int v64; // eax
  __int64 v65; // rcx
  unsigned int v66; // r13d
  unsigned int v67; // eax
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned int v71; // eax
  unsigned int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rdx
  unsigned int v77; // eax
  char v78; // al
  int Info; // eax
  unsigned int v80; // edx
  __int64 v81; // rcx
  int PowerRequestListInfo; // eax
  int v83; // eax
  NTSTATUS SettingNotificationName; // eax
  char IsDevicePotentialDripsConstraint; // al
  __int64 v86; // rcx
  char v87; // r13
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  unsigned int v91; // eax
  bool v92; // bl
  int v93; // ebx
  char v95; // [rsp+40h] [rbp-6F8h]
  unsigned int Length; // [rsp+44h] [rbp-6F4h]
  UINT Length_4; // [rsp+48h] [rbp-6F0h] BYREF
  char v98; // [rsp+4Ch] [rbp-6ECh] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+4Dh] [rbp-6EBh]
  char v100; // [rsp+4Eh] [rbp-6EAh]
  void *Src; // [rsp+50h] [rbp-6E8h] BYREF
  char v102[8]; // [rsp+58h] [rbp-6E0h] BYREF
  PVOID v103; // [rsp+60h] [rbp-6D8h]
  int v104; // [rsp+68h] [rbp-6D0h]
  POWER_INFORMATION_LEVEL v106; // [rsp+70h] [rbp-6C8h]
  _PROCESSOR_NUMBER v107; // [rsp+74h] [rbp-6C4h] BYREF
  UINT v108; // [rsp+78h] [rbp-6C0h] BYREF
  char v109[8]; // [rsp+80h] [rbp-6B8h] BYREF
  PVOID P[2]; // [rsp+88h] [rbp-6B0h] BYREF
  unsigned __int64 v111; // [rsp+98h] [rbp-6A0h]
  LUID v112; // [rsp+A0h] [rbp-698h]
  __int64 v113[192]; // [rsp+B0h] [rbp-688h] BYREF
  wchar_t psz[32]; // [rsp+6B0h] [rbp-88h] BYREF

  v111 = (unsigned __int64)OutputBuffer;
  v8 = InformationLevel;
  v106 = InformationLevel;
  memset(v113, 0, sizeof(v113));
  Src = 0LL;
  Length_4 = 0;
  v10 = 0LL;
  v103 = 0LL;
  P[0] = 0LL;
  LOBYTE(v11) = 0;
  v95 = 0;
  v100 = 0;
  v98 = 0;
  v107 = 0;
  if ( (unsigned int)v8 > SessionAllowExternalDmaDevices )
  {
    WakeSource = -1073741811;
    goto LABEL_489;
  }
  v12 = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v12;
  v13 = InputBuffer != 0LL ? InputBufferLength : 0;
  v14 = (void *)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
  P[1] = v14;
  Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v15 = (void *)(v111 & -(__int64)(Length != 0));
  if ( !v12 )
  {
    v10 = (_QWORD *)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
    v103 = v10;
LABEL_59:
    if ( (unsigned int)v8 > TraceApplicationPowerMessageEnd || (v31 = -234812256, !_bittest(&v31, v8)) )
    {
      v32 = (unsigned int)(v8 - 38);
      if ( (unsigned int)v32 > 0x39 || (v9 = 0x3FFE3BE75BE26EDLL, !_bittest64(&v9, v32)) )
      {
        PopAcquirePolicyLock();
        LOBYTE(v11) = 1;
        v95 = 1;
        v100 = 1;
      }
    }
    switch ( v8 )
    {
      case SystemPowerPolicyAc:
      case SystemPowerPolicyDc:
        if ( !v10 )
        {
          if ( !v15 )
            goto LABEL_68;
LABEL_75:
          v33 = (__int64 *)&unk_1404190A4;
          goto LABEL_76;
        }
        if ( v13 < 0xE8 )
          goto LABEL_73;
        WakeSource = PopApplyPolicy(0LL, 0LL, v10, v13);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( WakeSource >= 0 )
          goto LABEL_75;
        goto LABEL_70;
      case VerifySystemPolicyAc:
      case VerifySystemPolicyDc:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 < 0xE8 )
          goto LABEL_73;
        WakeSource = PopVerifySystemPowerPolicy(v10, v113);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        v33 = v113;
LABEL_76:
        Src = v33;
        Length_4 = 232;
        goto LABEL_483;
      case SystemPowerCapabilities:
        if ( !v10 )
        {
          if ( !v15 )
            goto LABEL_68;
LABEL_100:
          BYTE9(PopCapabilities) = PopFullWake & 1;
          byte_1404192F5 = PopDisksRegisteredForIdle();
          PopFilterCapabilities(&PopCapabilities, v113);
          Src = v113;
          Length_4 = 76;
LABEL_101:
          v10 = v103;
          goto LABEL_483;
        }
        if ( (PopSimulate & 1) == 0 )
          goto LABEL_68;
        if ( v13 >= 0x4C )
        {
          PopCapabilities = *(_OWORD *)v10;
          unk_1404192F0 = *((_OWORD *)v10 + 1);
          xmmword_140419300 = *((_OWORD *)v10 + 2);
          xmmword_140419310 = *((_OWORD *)v10 + 3);
          qword_140419320 = v10[8];
          dword_140419328 = *((_DWORD *)v10 + 18);
          WakeSource = PopResetCurrentPolicies(v9, v11);
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
          if ( WakeSource < 0 )
            goto LABEL_70;
          goto LABEL_100;
        }
LABEL_73:
        WakeSource = -1073741789;
LABEL_69:
        InputBuffer = v14;
        goto LABEL_70;
      case SystemBatteryState:
        if ( v10 || !v15 )
          goto LABEL_68;
        PopCurrentPowerState(v113);
        goto LABEL_113;
      case SystemPowerStateHandler:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 < 0x18 )
          goto LABEL_73;
        v38 = *(unsigned int *)v10;
        if ( (unsigned int)v38 >= 7 )
          goto LABEL_68;
        v39 = 3 * v38;
        if ( qword_140419228[3 * v38] )
        {
          if ( (_DWORD)v38 != 4 || (void (__noreturn *)())qword_140419288 != PopShutdownHandler )
            goto LABEL_68;
        }
        *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v38) = *(_OWORD *)v10;
        qword_140419230[3 * v38] = v10[2];
        word_140419225[12 * v38] = 0;
        byte_140419227[24 * v38] = 0;
        v40 = 0LL;
        v41 = 0;
        if ( (_DWORD)v38 )
        {
          v42 = v38 - 1;
          if ( v42 )
          {
            v43 = v42 - 1;
            if ( v43 )
            {
              v44 = v43 - 1;
              if ( v44 )
              {
                v45 = v44 - 1;
                if ( !v45 )
                {
                  v40 = (char *)&PopCapabilities + 7;
                  goto LABEL_143;
                }
                if ( v45 != 2 )
                  goto LABEL_143;
                v41 = 4;
                v46 = (PopSimulate & 0x2000) == 0;
                v40 = (char *)&unk_1404192F1;
              }
              else
              {
                v41 = 5;
                v46 = (PopSimulate & 0x2000) == 0;
                v40 = (char *)&PopCapabilities + 6;
              }
            }
            else
            {
              v41 = 4;
              v46 = (PopSimulate & 0x20) == 0;
              v40 = (char *)&PopCapabilities + 5;
            }
          }
          else
          {
            v41 = 3;
            v46 = (PopSimulate & 0x40) == 0;
            v40 = (char *)&PopCapabilities + 4;
          }
        }
        else
        {
          v41 = 2;
          v46 = (PopSimulate & 8) == 0;
          v40 = (char *)&PopCapabilities + 3;
        }
        if ( !v46 )
          v40 = 0LL;
LABEL_143:
        v47 = v41 & (unsigned int)-(byte_140419224[8 * v39] != 0);
        if ( (int)v47 > (int)qword_140419320 )
          LODWORD(qword_140419320) = byte_140419224[8 * v39] != 0 ? v41 : 0;
        if ( v40 )
        {
          LOBYTE(v47) = 1;
          PopChangeCapability(v40, v47);
        }
        goto LABEL_483;
      case ProcessorStateHandler:
        if ( v10 || !v15 )
          goto LABEL_68;
        PpmHeteroHgsBackupInit();
        Src = &PpmProcessorDriverDispatchTable;
        Length_4 = 272;
        goto LABEL_483;
      case SystemPowerPolicyCurrent:
        if ( v10 || !v15 )
          goto LABEL_68;
        v33 = (__int64 *)PopPolicy;
        goto LABEL_76;
      case AdministratorPowerPolicy:
        if ( v10 )
        {
          if ( v13 < 0x18 )
            goto LABEL_73;
          WakeSource = PopApplyAdminPolicy(0LL, v10);
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
          if ( WakeSource < 0 || (WakeSource = PopResetCurrentPolicies(v35, v34), WakeSource < 0) )
          {
LABEL_70:
            v20 = v95;
            goto LABEL_490;
          }
        }
        else if ( !v15 )
        {
          goto LABEL_68;
        }
        v36 = (__int64 *)&PopAdminPolicy;
        goto LABEL_85;
      case SystemReserveHiberFile:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( !v13 )
          goto LABEL_73;
        PopAcquireTransitionLock(3LL);
        PopAcquirePolicyLock();
        LOBYTE(v48) = 1;
        LOBYTE(v49) = *(_BYTE *)v10;
        WakeSource = PopEnableHiberFile(v49, v48);
        PopReleasePolicyLock();
        PopReleaseTransitionLock(3LL);
        goto LABEL_157;
      case ProcessorInformation:
        if ( v10 || !v15 )
          goto LABEL_68;
        v53 = PopProcessorInformation(v113, 1536LL, KeGetCurrentPrcb()->Group, &Length_4);
        v10 = v103;
        goto LABEL_177;
      case SystemPowerInformation:
        if ( v10 || !v15 )
          goto LABEL_68;
        LODWORD(v113[0]) = 0;
        HIDWORD(v113[0]) = dword_1404186C4;
        LODWORD(v113[1]) = dword_1404186CC - dword_1404186C8;
        BYTE4(v113[1]) = PopCoolingMode;
        Src = v113;
        Length_4 = 16;
        goto LABEL_483;
      case ProcessorStateHandler2:
      case ProcessorPowerPolicyAc:
      case ProcessorPowerPolicyDc:
      case VerifyProcessorPowerPolicyAc:
      case VerifyProcessorPowerPolicyDc:
      case ProcessorPowerPolicyCurrent:
      case ProcessorPerfStates:
      case ProcessorIdleStates:
      case ProcessorCap:
      case ProcessorIdleDomains:
      case ProcessorIdleStatesHv:
      case ProcessorPerfStatesHv:
      case ProcessorPerfCapHv:
      case RegisterSpmPowerSettings:
      case PlatformIdleStates:
      case ProcessorIdleVeto:
      case PlatformIdleVeto:
        goto LABEL_77;
      case LastWakeTime:
        if ( v10 || !v15 )
          goto LABEL_68;
        v52 = &qword_1404187E8;
        goto LABEL_166;
      case LastSleepTime:
        if ( v10 || !v15 )
          goto LABEL_68;
        v52 = &qword_1404187F0;
        goto LABEL_166;
      case SystemExecutionState:
        if ( v10 || !v15 )
          goto LABEL_68;
        if ( dword_1403FF780 )
          LODWORD(v113[0]) |= 1u;
        if ( PopPowerRequestAttributes[0] )
          LODWORD(v113[0]) |= 2u;
        goto LABEL_205;
      case SystemPowerStateNotifyHandler:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 < 0x10 )
          goto LABEL_73;
        if ( (_QWORD)PopPowerStateNotifyHandler && *v10 )
          goto LABEL_68;
        PopPowerStateNotifyHandler = *(_OWORD *)v10;
        goto LABEL_483;
      case SystemPowerStateLogging:
        if ( v10 || !v15 )
          goto LABEL_68;
        WakeSource = PopLoggingInformation(P, &v108);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        Src = P[0];
        Length_4 = v108;
        goto LABEL_483;
      case SystemPowerLoggingEntry:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 < 8 )
          goto LABEL_73;
        v55 = PopLogSleepDisabled(*(unsigned int *)v10, *((unsigned int *)v10 + 1), 0LL, 0LL);
        goto LABEL_192;
      case SetPowerSettingValue:
        if ( !v10 )
          goto LABEL_68;
        if ( v15 )
          goto LABEL_68;
        if ( Length )
          goto LABEL_68;
        if ( v13 < 0x1C )
          goto LABEL_68;
        v56 = *((_DWORD *)v10 + 6);
        if ( !v56 || *((_DWORD *)v10 + 5) > 2u )
          goto LABEL_68;
        if ( *(_DWORD *)v10 != 1 )
        {
          WakeSource = -1073741736;
          goto LABEL_69;
        }
        WakeSource = RtlUIntAdd(0x1Cu, v56, &Length_4);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        if ( v13 < Length_4 )
          goto LABEL_68;
        SessionId = PopGetSessionId(v58, v57);
        v55 = PopSetPowerSettingValue(
                (LPCGUID)((char *)v10 + 4),
                SessionId,
                *((_DWORD *)v10 + 5),
                *((_DWORD *)v10 + 6),
                (char *)v10 + 28);
LABEL_192:
        WakeSource = v55;
        v50 = v55 < 0;
        goto LABEL_158;
      case SystemMonitorHiberBootPowerOff:
        PopSuspendResumePdc(1LL, v11);
        PopHiberBootForceMonitorOff = 1;
        SettingNotificationName = PoPowerOffMonitor();
        goto LABEL_364;
      case SystemVideoState:
        if ( v10 || !v15 )
          goto LABEL_68;
        Length_4 = 4;
        Src = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
        if ( !Src )
          goto LABEL_226;
        v98 = 1;
        *(_DWORD *)Src = PopConsoleDisplayState;
        goto LABEL_483;
      case TraceApplicationPowerMessage:
      case TraceApplicationPowerMessageEnd:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 < 8 )
          goto LABEL_73;
        if ( v8 == TraceApplicationPowerMessage )
          PopDiagTraceAppPowerMessage(v10, v11);
        else
          PopDiagTraceAppPowerMessageEnd(v10, v11);
        goto LABEL_483;
      case SystemWakeSource:
        if ( v10 || !v15 )
          goto LABEL_68;
        if ( (_BYTE)v11 )
          PopReleasePolicyLock();
        v20 = 0;
        v95 = 0;
        Length_4 = 0;
        WakeSource = PopGetWakeSource(0LL, &Length_4);
        if ( WakeSource != -1073741789 )
          goto LABEL_242;
        Src = ExAllocatePoolWithTag(NonPagedPoolNx, Length_4, 0x206D654Du);
        if ( !Src )
        {
          WakeSource = -1073741670;
          InputBuffer = v14;
          goto LABEL_490;
        }
        v98 = 1;
        WakeSource = PopGetWakeSource(Src, &Length_4);
LABEL_242:
        InputBuffer = v14;
        if ( WakeSource < 0 )
          goto LABEL_490;
        v100 = 0;
        goto LABEL_483;
      case SystemHiberFileInformation:
        if ( !v15 )
          goto LABEL_68;
        if ( !(_DWORD)dword_1404188E0 || !qword_1404188D8 )
        {
          WakeSource = -1073741275;
          goto LABEL_69;
        }
        Length_4 = dword_1404188E0 + 8;
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(dword_1404188E0 + 8), 0x206D654Du);
        v61 = PoolWithTag;
        if ( !PoolWithTag )
        {
LABEL_226:
          WakeSource = -1073741670;
          goto LABEL_69;
        }
        Src = PoolWithTag;
        v98 = 1;
        memmove(PoolWithTag + 2, qword_1404188D8, (unsigned int)dword_1404188E0);
        *v61 = (unsigned int)dword_1404188E0 >> 4;
        goto LABEL_483;
      case TraceServicePowerMessage:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( PreviousMode != 1 )
          goto LABEL_220;
        WakeSource = PopValidateServiceNotification(v10, v13);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        PopDiagTraceServiceNotification(v10);
        goto LABEL_483;
      case ProcessorLoad:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 == 6 )
        {
          v62 = PpmSetSimulatedLoad((__int64)v10);
          goto LABEL_256;
        }
        if ( v13 != 4 )
          goto LABEL_257;
        v62 = PpmClearSimulatedLoad((_PROCESSOR_NUMBER *)v10);
        goto LABEL_256;
      case PowerShutdownNotification:
        if ( !v10 || v15 || v13 != 24 )
          goto LABEL_68;
        v63 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x206D654Du);
        if ( !v63 )
          goto LABEL_226;
        *(_OWORD *)v63 = *(_OWORD *)v10;
        v63[2] = v10[2];
        if ( !_InterlockedCompareExchange64(
                (volatile signed __int64 *)&PopShutdownNotificationCallback,
                (signed __int64)v63,
                0LL) )
          goto LABEL_101;
        ExFreePoolWithTag(v63, 0x206D654Du);
        WakeSource = -1073741823;
        v10 = v103;
        goto LABEL_69;
      case MonitorCapabilities:
        if ( !v10 || v13 != 4 || v15 )
          goto LABEL_68;
        v107 = (_PROCESSOR_NUMBER)(*(_DWORD *)v10 != 0);
        PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE, 4LL, &v107);
        goto LABEL_483;
      case SessionPowerInit:
        if ( v10 )
          goto LABEL_68;
        if ( !v15 )
          goto LABEL_68;
        v66 = Length;
        if ( Length != 64 )
          goto LABEL_68;
        LOBYTE(v113[6]) = (unsigned int)PopEsGetState(v9, v11) == 1;
        LOBYTE(v113[7]) = TtmIsEnabled(v74);
        if ( !(unsigned __int8)TtmIsEnabled(v75) )
          goto LABEL_305;
        WakeSource = TtmInitCurrentSession();
        InputBuffer = v14;
        if ( WakeSource < 0 )
          goto LABEL_70;
        PopNotifySessionUserPowerRequestsPresent();
LABEL_305:
        PopAcquirePolicyLock();
        LODWORD(v113[2]) = 0;
        v113[0] = (__int64)&PopNoMoreInput;
        v113[1] = (__int64)&PopHiberBootForceMonitorOff;
        LODWORD(v113[3]) = byte_140419191 != 0;
        HIDWORD(v113[3]) = dword_14041918C;
        HIDWORD(v113[2]) = dword_1404191AC;
        v113[4] = qword_1404191B0;
        HIDWORD(v113[6]) = HIDWORD(qword_1404191B8);
        v113[5] = __PAIR64__(dword_1404191C0, qword_1404191B8);
        BYTE1(v113[6]) = PopLidOpened;
        Src = v113;
        Length_4 = 64;
        v77 = PopGetSessionId(byte_140419191 != 0, v76);
        PopSessionCreated(v77);
        PopReleasePolicyLock();
        goto LABEL_484;
      case SessionDisplayState:
        if ( !v10 || v13 != 16 || v15 )
          goto LABEL_68;
        if ( *((_BYTE *)v10 + 13) && *((_BYTE *)v10 + 12) )
        {
          if ( PopPlatformAoAc )
          {
            LOBYTE(v9) = *((_BYTE *)v10 + 15);
            PopProcessSessionDisplayStateChange(v9, *((unsigned int *)v10 + 2));
          }
          PopSetDisplayStatus(*((unsigned int *)v10 + 1), v11);
          PopUpdateConsoleDisplayState(*((unsigned int *)v10 + 1));
        }
        v78 = *((_BYTE *)v10 + 14);
        if ( v78 )
        {
          if ( *((_BYTE *)v10 + 12) )
          {
            ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (char *)v10 + 4, 4u, 0LL, 0LL, 0, 0);
            v78 = *((_BYTE *)v10 + 14);
          }
          if ( v78 )
            PopDiagTraceSessionDisplayStateChange(
              *((_DWORD *)v10 + 1) == 0,
              *(_DWORD *)v10,
              *((unsigned __int8 *)v10 + 12),
              *((_DWORD *)v10 + 2));
        }
        goto LABEL_483;
      case PowerRequestCreate:
      case PlmPowerRequestCreate:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 != 40 )
          goto LABEL_73;
        v66 = Length;
        if ( Length != 8 )
          goto LABEL_73;
        LOBYTE(v11) = v8 == PlmPowerRequestCreate;
        Info = PopPowerRequestCreateInfo((unsigned __int64)v10, v11, v113);
        goto LABEL_324;
      case PowerRequestAction:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 != 24 )
          goto LABEL_73;
        v55 = PopPowerRequestActionInfo((__int64)v10);
        goto LABEL_192;
      case GetPowerRequestList:
        if ( v10 || !v15 )
          goto LABEL_68;
        PowerRequestListInfo = PopGetPowerRequestListInfo(&Src, &Length_4);
        goto LABEL_336;
      case ProcessorInformationEx:
        if ( !v10 )
          goto LABEL_68;
        if ( v13 < 2 )
          goto LABEL_68;
        if ( !v15 )
          goto LABEL_68;
        v54 = *(_WORD *)v10;
        if ( v54 >= KeQueryActiveGroupCount() )
          goto LABEL_68;
        v53 = PopProcessorInformation(v113, 1536LL, v54, &Length_4);
LABEL_177:
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        WakeSource = v53;
        if ( v53 < 0 )
          goto LABEL_70;
        Src = v113;
        goto LABEL_483;
      case NotifyUserModeLegacyPowerEvent:
        if ( !v10 || v13 != 16 )
          goto LABEL_68;
        v83 = PopUmpoSendLegacyEvent(v10, v11);
        WakeSource = v83;
        if ( v83 >= 0 )
          goto LABEL_483;
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( v83 == -1073741536 )
          goto LABEL_483;
        goto LABEL_70;
      case GroupPark:
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_220;
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 == 16 )
        {
          v62 = PpmParkApplyForcedMask(v10, v11);
          goto LABEL_256;
        }
        if ( v13 != 2 )
          goto LABEL_257;
        v62 = PpmParkClearForcedMask(v10, v11);
        goto LABEL_256;
      case WakeTimerList:
        if ( v10 || !v15 )
          goto LABEL_68;
        PowerRequestListInfo = ExGetWakeTimerList(&Src, &Length_4);
LABEL_336:
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        WakeSource = PowerRequestListInfo;
        if ( PowerRequestListInfo < 0 )
          goto LABEL_70;
        v98 = 1;
        goto LABEL_483;
      case SystemHiberFileSize:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 < 4 )
          goto LABEL_73;
        PopAcquireTransitionLock(5LL);
        PopAcquirePolicyLock();
        WakeSource = PopSetHiberFileSize(*(unsigned int *)v10, v109);
        PopReleasePolicyLock();
        v51 = 5LL;
        goto LABEL_164;
      case ProcessorSetIdle:
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_220;
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 == 8 )
        {
          v62 = PpmSetSimulatedIdle((__int64)v10);
        }
        else
        {
          if ( v13 != 4 )
          {
LABEL_257:
            WakeSource = -1073741811;
            goto LABEL_157;
          }
          v62 = PpmClearSimulatedIdle((_PROCESSOR_NUMBER *)v10);
        }
        goto LABEL_256;
      case LogicalProcessorIdling:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 != 8 )
          goto LABEL_73;
        v66 = Length;
        if ( Length != 4 )
          goto LABEL_73;
        WakeSource = PpmParkSetLpiCap(*(_DWORD *)v10, *((_DWORD *)v10 + 1), (unsigned int *)v113);
        if ( WakeSource < 0 )
          goto LABEL_69;
        Src = v113;
        Length_4 = 4;
        goto LABEL_484;
      case UserPresence:
        if ( !ExVerifySuite(PhoneNT) )
        {
LABEL_77:
          WakeSource = -1073741822;
          goto LABEL_69;
        }
        if ( !v10 || v13 != 1 || v15 )
          goto LABEL_68;
        LOBYTE(v73) = *(_BYTE *)v10;
        WakeSource = PopUserPresentOverride(v73);
        if ( WakeSource >= 0 )
          goto LABEL_483;
        goto LABEL_69;
      case PowerSettingNotificationName:
        if ( !v15 )
          goto LABEL_68;
        if ( v14 && v13 != 20 || Length != 8 )
          goto LABEL_73;
        SettingNotificationName = PopGetSettingNotificationName(v10, v15);
        goto LABEL_364;
      case GetPowerSettingValue:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 != 16 || Length < 4 )
          goto LABEL_73;
        SettingNotificationName = PopGetSettingValue((__int64)v10, (__int64)v15, Length);
        goto LABEL_364;
      case IdleResiliency:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 < 8 )
          goto LABEL_73;
        PopEnforceResiliencyScenarios(v10);
        goto LABEL_483;
      case SessionRITState:
        if ( !v10 )
          goto LABEL_68;
        if ( v13 != 8 )
          goto LABEL_68;
        if ( !v15 )
          goto LABEL_68;
        v66 = Length;
        if ( Length != 8 )
          goto LABEL_68;
        v67 = PopGetSessionId(v9, v11);
        PopSessionInputChange(v67, v10, v15);
        goto LABEL_484;
      case SessionConnectNotification:
        if ( !v10 )
          goto LABEL_68;
        if ( v13 != 2 )
          goto LABEL_68;
        if ( !v15 )
          goto LABEL_68;
        v66 = Length;
        if ( Length != 8 )
          goto LABEL_68;
        v68 = PopGetSessionId(v9, v11);
        PopSessionConnectionChange(v68, v10, v15);
        v71 = PopGetSessionId(v70, v69);
        PopSessionConnectionInvocation(v71, v10);
        goto LABEL_484;
      case SessionPowerCleanup:
        if ( v10 || v15 )
          goto LABEL_68;
        v64 = PopGetSessionId(v9, v11);
        PopSessionClosed(v64);
        if ( (unsigned __int8)TtmIsEnabled(v65) )
          TtmCleanupCurrentSession();
        goto LABEL_483;
      case SessionLockState:
        if ( !v10 || v13 != 8 || v15 )
          goto LABEL_68;
        v72 = PopGetSessionId(v9, v11);
        PopSessionWinlogonNotification(v72, v10);
        goto LABEL_483;
      case SystemHiberbootState:
        if ( PsIsCurrentThreadInServerSilo() )
          goto LABEL_103;
        if ( v10 || !v15 )
          goto LABEL_68;
        PopFilterCapabilities(&PopCapabilities, v113);
        if ( BYTE2(v113[2]) )
          PopReadHiberbootPolicy((char *)&v113[2] + 2);
        v37 = (__int64 *)((char *)&v113[2] + 2);
        goto LABEL_109;
      case PlatformInformation:
        if ( v10 || !v15 )
          goto LABEL_68;
        IsDevicePotentialDripsConstraint = PopPlatformAoAc;
        goto LABEL_388;
      case PdcInvocation:
        if ( !v10 || v13 != 168 || v15 && Length != 184 )
          goto LABEL_68;
        SettingNotificationName = PopPdcInvocation(v10, v15);
        goto LABEL_364;
      case MonitorInvocation:
        if ( !v10 || v13 != 8 || v15 || Length )
          goto LABEL_68;
        SettingNotificationName = PopMonitorInvocation(v10, v11);
        goto LABEL_364;
      case FirmwareTableInformationRegistered:
        if ( v10 || v15 )
          goto LABEL_68;
        WakeSource = PopInitPlatformSettings(v9, v11);
        byte_1404192F4 = PopPlatformAoAc;
        goto LABEL_69;
      case SetShutdownSelectedTime:
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
        goto LABEL_483;
      case SuspendResumeInvocation:
        if ( !v10 || v13 != 8 || v15 && Length )
          goto LABEL_68;
        SettingNotificationName = PopSuspendResumeInvocation(v10, v11);
        goto LABEL_364;
      case ScreenOff:
      case ThermalStandby:
        if ( v10 || v15 )
          goto LABEL_68;
        v86 = 23LL;
        if ( v8 != ThermalStandby )
          v86 = 11LL;
        PopScreenOff(v86, v11);
        goto LABEL_402;
      case CsDeviceNotification:
        if ( PreviousMode )
          goto LABEL_220;
        if ( !v10 || v13 != 16 || v15 || Length )
          goto LABEL_68;
        SettingNotificationName = PopPdcCsDeviceNotification(v10, v11);
LABEL_364:
        WakeSource = SettingNotificationName;
        goto LABEL_69;
      case PlatformRole:
        if ( v10 || !v15 )
          goto LABEL_68;
        LODWORD(v113[0]) = PopCapturePlatformRole(v9, v11);
LABEL_205:
        Src = v113;
        Length_4 = 4;
        goto LABEL_483;
      case LastResumePerformance:
        if ( v10 || !v15 )
          goto LABEL_68;
        LODWORD(v113[0]) = qword_140418C88;
        v113[1] = qword_140418E20;
        v113[2] = qword_140418E28;
        if ( !PopSleepStats )
        {
          WakeSource = -1073741823;
          goto LABEL_69;
        }
        v36 = v113;
LABEL_85:
        Src = v36;
        Length_4 = 24;
        goto LABEL_483;
      case DisplayBurst:
        if ( v10 || v15 )
          goto LABEL_68;
        v87 = PopErrataReportingIncorrectLidState;
        if ( (unsigned __int8)TtmIsEnabled(v9) )
        {
          v91 = PopGetSessionId(v89, v88);
          TtmNotifySessionDisplayBurst(v91, 6LL);
        }
        else
        {
          v92 = 0;
          if ( !PopLidOpened )
            v92 = PopConsoleExternalDisplayConnected == 0;
          if ( !v92 )
            PopEventCalloutDispatch(10, 6LL);
          if ( !v87 )
          {
            LOBYTE(v90) = v92;
            LOBYTE(v88) = PopConsoleExternalDisplayConnected;
            LOBYTE(v89) = PopLidOpened;
            PopDiagTraceDisplayBurstWin32kCallout(v89, v88, v90);
          }
        }
        goto LABEL_483;
      case ExitLatencySamplingPercentage:
        if ( PreviousMode != 1 )
        {
LABEL_220:
          WakeSource = -1073741790;
          goto LABEL_69;
        }
        if ( v15 || Length )
          goto LABEL_68;
        if ( v10 )
        {
          if ( v13 != 4 )
            goto LABEL_68;
          PpmSetExitLatencySamplingPercentage((int *)v10);
        }
        else
        {
          PpmClearExitLatencySamplingPercentage();
        }
        goto LABEL_483;
      case SystemBatteryStatePrecise:
        if ( v10 || !v15 )
          goto LABEL_68;
        PopCurrentPowerStatePrecise(v113, 0LL);
LABEL_113:
        Src = v113;
        Length_4 = 32;
        goto LABEL_483;
      case ThermalEvent:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 < 0x10 || v13 < 2 * (unsigned int)*((unsigned __int16 *)v10 + 6) + 14 )
          goto LABEL_73;
        v55 = PopThermalProcessUsermodeEvent(v10, v11);
        goto LABEL_192;
      case PowerRequestActionInternal:
        v80 = *((_DWORD *)v10 + 2);
        v81 = *v10;
        if ( *((_BYTE *)v10 + 12) )
          PoSetPowerRequestInternal(v81, v80);
        else
          PoClearPowerRequestInternal(v81, v80);
        goto LABEL_483;
      case BatteryDeviceState:
        if ( !v10 || !v15 )
          goto LABEL_68;
        WakeSource = RtlStringCbLengthW((STRSAFE_PCNZWCH)v10, v13, 0LL);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        WakeSource = PopBatteryDeviceState(v10, v113);
        if ( WakeSource < 0 )
          goto LABEL_70;
        Src = v113;
        Length_4 = 52;
        goto LABEL_483;
      case PowerInformationInternal:
        if ( !v10 )
          goto LABEL_68;
        if ( v13 < 8 )
          goto LABEL_68;
        v93 = *(_DWORD *)v10;
        if ( (unsigned int)(*(_DWORD *)v10 - 51) <= 0xFCC || v93 >= 4106 )
          goto LABEL_68;
        if ( (unsigned int)(v93 - 4096) > 9 )
        {
          v62 = PopPowerInformationInternal(
                  v93,
                  (_DWORD)v10,
                  v13,
                  (_DWORD)v15,
                  (__int64)&Src,
                  (__int64)&Length_4,
                  (__int64)&v98);
        }
        else
        {
          if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode)
            && !PopCapabilityCheck(L"terminalPowerManagement")
            && !PopCapabilityCheck(L"shellExperienceComposer") )
          {
            WakeSource = -1073741727;
            goto LABEL_69;
          }
          v62 = TtmDispatchApi(
                  v93,
                  (_DWORD)v10,
                  v13,
                  (_DWORD)v15,
                  Length,
                  (__int64)&Src,
                  (__int64)&Length_4,
                  (__int64)&v98);
        }
LABEL_256:
        WakeSource = v62;
LABEL_157:
        v50 = WakeSource < 0;
LABEL_158:
        InputBuffer = v14;
        if ( !v50 )
          goto LABEL_483;
        goto LABEL_70;
      case SystemHiberFileType:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 < 4 )
          goto LABEL_73;
        PopAcquireTransitionLock(6LL);
        PopAcquirePolicyLock();
        WakeSource = PopSetHiberFileType(*(unsigned int *)v10, v109);
        PopReleasePolicyLock();
        v51 = 6LL;
LABEL_164:
        PopReleaseTransitionLock(v51);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        v52 = (__int64 *)v109;
LABEL_166:
        Src = v52;
        Length_4 = 8;
        goto LABEL_483;
      case PhysicalPowerButtonPress:
        if ( !v10 || v13 < 4 || v15 )
          goto LABEL_68;
        v107 = *(_PROCESSOR_NUMBER *)v10;
        PopUpdatePowerButtonHoldState(v107 != 0);
        goto LABEL_483;
      case QueryPotentialDripsConstraint:
        if ( !PopPlatformAoAc )
        {
LABEL_103:
          WakeSource = -1073741637;
          goto LABEL_69;
        }
        if ( !v10 || v13 != 336 || !v15 )
        {
LABEL_68:
          WakeSource = -1073741811;
          goto LABEL_69;
        }
        IsDevicePotentialDripsConstraint = PopFxIsDevicePotentialDripsConstraint(v10);
LABEL_388:
        LOBYTE(v113[0]) = IsDevicePotentialDripsConstraint;
        v37 = v113;
LABEL_109:
        Src = v37;
        Length_4 = 1;
LABEL_483:
        v66 = Length;
LABEL_484:
        if ( !Src || !v15 )
          goto LABEL_402;
        if ( v66 < Length_4 )
          goto LABEL_73;
        memmove(v15, Src, Length_4);
LABEL_402:
        WakeSource = 0;
        goto LABEL_69;
      case EnergyTrackerCreate:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 != 12 )
          goto LABEL_73;
        v66 = Length;
        if ( Length != 8 )
          goto LABEL_73;
        Info = PopEtEnergyTrackerCreate(v10, v113);
LABEL_324:
        InputBuffer = v14;
        WakeSource = Info;
        if ( Info < 0 )
          goto LABEL_70;
        Src = v113;
        Length_4 = 8;
        goto LABEL_484;
      case EnergyTrackerQuery:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 != 8 )
          goto LABEL_73;
        v66 = Length;
        if ( Length < 0xC )
          goto LABEL_73;
        WakeSource = PopEtEnergyTrackerQuery(*v10, v15, Length);
        InputBuffer = v14;
        if ( WakeSource >= 0 )
          goto LABEL_484;
        goto LABEL_70;
      case UpdateBlackBoxRecorder:
        if ( !v10 || v15 || Length )
          goto LABEL_68;
        if ( v13 != 32 )
          goto LABEL_73;
        LOBYTE(v11) = PreviousMode;
        WakeSource = PopBlackBoxUpdate(v10, v11);
        InputBuffer = v14;
        if ( WakeSource < 0 )
          goto LABEL_70;
        goto LABEL_483;
      case SessionAllowExternalDmaDevices:
        if ( !v10 || v13 != 1 || v15 )
          goto LABEL_68;
        PnpWinlogonExternalDmaNotification(v10);
        goto LABEL_483;
      default:
        goto LABEL_68;
    }
  }
  if ( (unsigned int)v8 > SetPowerSettingValue || (v16 = 50462912, !_bittest(&v16, v8)) )
  {
    v17 = (unsigned int)(v8 - 30);
    if ( (unsigned int)v17 > 0x3D || (v9 = 0x209E02E385CA1E1FLL, !_bittest64(&v9, v17)) )
    {
      v19 = (unsigned int)(v8 - 37);
      if ( (unsigned int)v19 <= 0x3A && (v9 = 0x608801808940903LL, _bittest64(&v9, v19)) || (unsigned int)(v8 - 2) <= 1 )
      {
        WakeSource = SeIsAppContainerOrIdentifyLevelContext(0LL, v102);
        v104 = WakeSource;
        if ( WakeSource < 0 )
        {
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
          v10 = v103;
          v20 = 0;
          goto LABEL_490;
        }
        v8 = v106;
        if ( v102[0] )
        {
          if ( v106 != ScreenOff && v106 != ThermalStandby )
          {
            WakeSource = -1073741790;
            v104 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
            v10 = v103;
            v20 = 0;
            goto LABEL_490;
          }
          if ( !PopCapabilityCheck(L"ID_CAP_SCREENOFF") )
          {
            WakeSource = -1073741790;
            v104 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
            v10 = v103;
            v20 = 0;
            goto LABEL_490;
          }
        }
      }
      if ( (unsigned int)(v8 - 92) <= 1 )
      {
        LOBYTE(v9) = v12;
        WakeSource = ExCheckFullProcessInformationAccess(v9);
        v104 = WakeSource;
        if ( WakeSource < 0 )
        {
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
          v10 = v103;
          v20 = 0;
          goto LABEL_490;
        }
        v8 = v106;
      }
      v21 = (unsigned int)(v8 - 28);
      if ( (unsigned int)v21 <= 0x32 )
      {
        v9 = 0x4000000420001LL;
        if ( _bittest64(&v9, v21) )
        {
          if ( !(unsigned __int8)EtwpCoverageUserIsAdmin() )
          {
            WakeSource = -1073741790;
            v104 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
            v10 = v103;
            v20 = 0;
            goto LABEL_490;
          }
        }
      }
      if ( v14 )
      {
        v22 = (unsigned int)(v8 - 11);
        if ( (unsigned int)v22 > 0x3D || (v23 = 0x2001800900000001LL, !_bittest64(&v23, v22)) )
        {
          if ( PsIsCurrentThreadInServerSilo() )
          {
            WakeSource = -1073741637;
            v104 = -1073741637;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
            v10 = v103;
            v20 = 0;
            goto LABEL_490;
          }
        }
        if ( v8 == AdministratorPowerPolicy
          || (v24 = (unsigned int)(v8 - 38), (unsigned int)v24 <= 0x39)
          && (v25 = 0x218000004422401LL, _bittest64(&v25, v24)) )
        {
          if ( !(unsigned __int8)EtwpCoverageUserIsAdmin() )
          {
            WakeSource = -1073741790;
            v104 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
            v10 = v103;
            v20 = 0;
            goto LABEL_490;
          }
        }
        if ( (unsigned int)(v8 - 2) > 1 )
        {
          v26 = (unsigned int)(v8 - 37);
          if ( (unsigned int)v26 > 0x3A || (v27 = 0x7AE005828F40BC3LL, !_bittest64(&v27, v26)) )
          {
            if ( v8 != ProcessorInformation )
            {
              v28 = SeShutdownPrivilege;
              if ( v8 == SystemReserveHiberFile )
                v28 = SeCreatePagefilePrivilege;
              v112 = v28;
              if ( !SeSinglePrivilegeCheck(v28, v12) )
              {
                WakeSource = -1073741727;
                v104 = -1073741727;
                InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
                v10 = v103;
                v20 = 0;
                goto LABEL_490;
              }
            }
          }
        }
        if ( v13 )
        {
          v29 = (unsigned __int64)v14 + v13;
          if ( v29 > 0x7FFFFFFF0000LL || v29 < (unsigned __int64)v14 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v30 = v13;
        if ( v13 > 0x40 )
        {
          v10 = ExAllocatePoolWithTag(PagedPool, v13, 0x206D654Du);
          v103 = v10;
          v30 = v13;
          if ( !v10 )
          {
            WakeSource = -1073741670;
            v104 = -1073741670;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
            v20 = 0;
            goto LABEL_490;
          }
        }
        else
        {
          v10 = psz;
          v103 = psz;
        }
        memmove(v10, v14, v30);
      }
      else
      {
        v10 = v103;
      }
      if ( v15 )
        ProbeForWrite(v15, Length, 1u);
      LOBYTE(v11) = 0;
      goto LABEL_59;
    }
  }
  WakeSource = -1073741790;
  InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
  v10 = v103;
LABEL_489:
  v20 = 0;
LABEL_490:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v98 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v20 )
    PopReleasePolicyLock();
  if ( v10 && v10 != InputBuffer && v10 != (_QWORD *)psz )
    ExFreePoolWithTag(v10, 0x206D654Du);
  return WakeSource;
}
