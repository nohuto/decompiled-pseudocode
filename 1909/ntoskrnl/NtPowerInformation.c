/*
 * XREFs of NtPowerInformation @ 0x140699980
 * Callers:
 *     WheaLogInternalEvent @ 0x140199CC0 (WheaLogInternalEvent.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1403059B8 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x140305D38 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x140306008 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x1406998DC (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x14071BFC4 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140730BF4 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14087AF60 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x1408BAF84 (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x1408BB05C (TtmpCalloutCreateWatchdog.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1408BB0BC (TtmpCalloutDestroyWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x1408BB140 (TtmpCalloutWatchdogCallback.c)
 *     VslRegisterIumPowerCallbacks @ 0x140A23030 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140001BA8 (RtlStringCbLengthW.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     RtlUIntAdd @ 0x140003F38 (RtlUIntAdd.c)
 *     PoSetPowerRequestInternal @ 0x1400D6518 (PoSetPowerRequestInternal.c)
 *     PoClearPowerRequestInternal @ 0x1400D6A84 (PoClearPowerRequestInternal.c)
 *     KeQueryActiveGroupCount @ 0x1400D7A20 (KeQueryActiveGroupCount.c)
 *     PopDisksRegisteredForIdle @ 0x14013BB4C (PopDisksRegisteredForIdle.c)
 *     PoPowerOffMonitor @ 0x14015E574 (PoPowerOffMonitor.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14016A9A0 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopEventCalloutDispatch @ 0x14018237C (PopEventCalloutDispatch.c)
 *     ExVerifySuite @ 0x14018CA30 (ExVerifySuite.c)
 *     PpmHeteroHgsBackupInit @ 0x14019D188 (PpmHeteroHgsBackupInit.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1402EE0EC (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x1402EE134 (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402EFDE0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x1402EFEB8 (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x1402F15F4 (PopCapabilityCheck.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1402F34B8 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PpmClearSimulatedLoad @ 0x1402F67EC (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402F6AF8 (PpmSetSimulatedLoad.c)
 *     PpmParkSetLpiCap @ 0x1402F8664 (PpmParkSetLpiCap.c)
 *     PopUpdatePowerButtonHoldState @ 0x140301340 (PopUpdatePowerButtonHoldState.c)
 *     ExGetWakeTimerList @ 0x14033B030 (ExGetWakeTimerList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PnpWinlogonExternalDmaNotification @ 0x1405B0A04 (PnpWinlogonExternalDmaNotification.c)
 *     PopSessionWinlogonNotification @ 0x1405B5450 (PopSessionWinlogonNotification.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     PspIsContextAdmin @ 0x14061BFC4 (PspIsContextAdmin.c)
 *     PopFilterCapabilities @ 0x14066EEE8 (PopFilterCapabilities.c)
 *     TtmIsEnabled @ 0x140670BDC (TtmIsEnabled.c)
 *     PopPowerRequestActionInfo @ 0x1406723B0 (PopPowerRequestActionInfo.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14067249C (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     PopCurrentPowerState @ 0x14069B760 (PopCurrentPowerState.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     PopBlackBoxUpdate @ 0x14069C85C (PopBlackBoxUpdate.c)
 *     PopGetSettingNotificationName @ 0x14069D2A4 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValueAcDc @ 0x14069D520 (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x14069DE28 (PopSetPowerSettingValue.c)
 *     ExCheckFullProcessInformationAccess @ 0x14069E6AC (ExCheckFullProcessInformationAccess.c)
 *     PopGetSettingValue @ 0x1406A0DB8 (PopGetSettingValue.c)
 *     PopGetSessionId @ 0x1406A1320 (PopGetSessionId.c)
 *     PopPowerRequestCreateInfo @ 0x1406B3BE0 (PopPowerRequestCreateInfo.c)
 *     PopEtEnergyTrackerQuery @ 0x1406BF04C (PopEtEnergyTrackerQuery.c)
 *     PopCapturePlatformRole @ 0x1406EE084 (PopCapturePlatformRole.c)
 *     PopGetWakeSource @ 0x14071F400 (PopGetWakeSource.c)
 *     PopLoggingInformation @ 0x14071FF94 (PopLoggingInformation.c)
 *     PopMonitorInvocation @ 0x140720C4C (PopMonitorInvocation.c)
 *     PopSessionInputChange @ 0x140725AC4 (PopSessionInputChange.c)
 *     PopUmpoSendLegacyEvent @ 0x1407271BC (PopUmpoSendLegacyEvent.c)
 *     PopSuspendResumePdc @ 0x140728088 (PopSuspendResumePdc.c)
 *     PopDiagTraceServiceNotification @ 0x140729310 (PopDiagTraceServiceNotification.c)
 *     PopValidateServiceNotification @ 0x140729444 (PopValidateServiceNotification.c)
 *     PopDiagTraceAppPowerMessage @ 0x140729478 (PopDiagTraceAppPowerMessage.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x1407297D4 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopSessionClosed @ 0x140729998 (PopSessionClosed.c)
 *     PopSuspendResumeInvocation @ 0x14072A258 (PopSuspendResumeInvocation.c)
 *     PopReadHiberbootPolicy @ 0x14072A2CC (PopReadHiberbootPolicy.c)
 *     PopEnforceResiliencyScenarios @ 0x14072AA34 (PopEnforceResiliencyScenarios.c)
 *     PopSetDisplayStatus @ 0x14072C12C (PopSetDisplayStatus.c)
 *     PopUpdateConsoleDisplayState @ 0x1407304D4 (PopUpdateConsoleDisplayState.c)
 *     PopLogSleepDisabled @ 0x140738860 (PopLogSleepDisabled.c)
 *     PopProcessorInformation @ 0x14073C078 (PopProcessorInformation.c)
 *     PopSessionConnectionChange @ 0x1407487A8 (PopSessionConnectionChange.c)
 *     PopAcquireTransitionLock @ 0x1407491E0 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14074923C (PopReleaseTransitionLock.c)
 *     PopCurrentPowerStatePrecise @ 0x140749860 (PopCurrentPowerStatePrecise.c)
 *     PopSessionConnectionInvocation @ 0x140749CB0 (PopSessionConnectionInvocation.c)
 *     PopSessionCreated @ 0x140749D30 (PopSessionCreated.c)
 *     PopEsGetState @ 0x140749E6C (PopEsGetState.c)
 *     PopEnableHiberFile @ 0x140759E1C (PopEnableHiberFile.c)
 *     PopChangeCapability @ 0x14075AD34 (PopChangeCapability.c)
 *     PopResetCurrentPolicies @ 0x14075B17C (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14075B258 (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x14075B514 (PopVerifySystemPowerPolicy.c)
 *     PopEtEnergyTrackerCreate @ 0x140785B30 (PopEtEnergyTrackerCreate.c)
 *     PopPdcInvocation @ 0x140786D50 (PopPdcInvocation.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14084B640 (DbgkWerCaptureLiveKernelDump.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408A2274 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopApplyAdminPolicy @ 0x1408A485C (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x1408A49FC (PopGetPowerRequestListInfo.c)
 *     PopSetHiberFileSize @ 0x1408A7CFC (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1408A7E10 (PopSetHiberFileType.c)
 *     PopThermalProcessUsermodeEvent @ 0x1408A862C (PopThermalProcessUsermodeEvent.c)
 *     PpmParkApplyForcedMask @ 0x1408A8A58 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408A8B6C (PpmParkClearForcedMask.c)
 *     PopBatteryDeviceState @ 0x1408A91A8 (PopBatteryDeviceState.c)
 *     PopPdcCsDeviceNotification @ 0x1408AB4B4 (PopPdcCsDeviceNotification.c)
 *     PopProcessSessionDisplayStateChange @ 0x1408AB8DC (PopProcessSessionDisplayStateChange.c)
 *     PopScreenOff @ 0x1408AB93C (PopScreenOff.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x1408AE8C8 (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopUserPresentOverride @ 0x1408B5BC8 (PopUserPresentOverride.c)
 *     TtmCleanupCurrentSession @ 0x1408BCB88 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1408BCCE8 (TtmInitCurrentSession.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408BD06C (TtmNotifySessionDisplayBurst.c)
 *     TtmDispatchApi @ 0x1408BED60 (TtmDispatchApi.c)
 *     PopInitPlatformSettings @ 0x140A2006C (PopInitPlatformSettings.c)
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
  __int128 *v10; // r14
  __int64 v11; // rdx
  KPROCESSOR_MODE v12; // r14
  ULONG v13; // r13d
  void *v14; // r15
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
  int v30; // eax
  unsigned __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int128 *v35; // rax
  char *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  char *v39; // rcx
  int v40; // r13d
  int v41; // edx
  int v42; // edx
  int v43; // edx
  int v44; // edx
  bool v45; // zf
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  bool v49; // sf
  __int64 v50; // rcx
  __int64 *v51; // rax
  int v52; // eax
  USHORT v53; // bx
  int v54; // eax
  UINT v55; // edx
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int *PoolWithTag; // rax
  unsigned int *v59; // rbx
  NTSTATUS v60; // eax
  __int128 *v61; // rdx
  _QWORD *v62; // rax
  int v63; // eax
  unsigned int v64; // eax
  UINT v65; // r13d
  unsigned int v66; // eax
  unsigned int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned int v70; // eax
  unsigned int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // rdx
  unsigned int SessionId; // eax
  char v75; // al
  int Info; // eax
  unsigned int v77; // edx
  __int64 v78; // rcx
  int PowerRequestListInfo; // eax
  int v80; // eax
  NTSTATUS SettingNotificationName; // eax
  char IsDevicePotentialDripsConstraint; // al
  __int64 v83; // rcx
  char v84; // r13
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  unsigned int v88; // eax
  bool v89; // bl
  int v90; // ebx
  char v92; // [rsp+50h] [rbp-6F8h]
  ULONG Length; // [rsp+54h] [rbp-6F4h]
  UINT Length_4; // [rsp+58h] [rbp-6F0h] BYREF
  char v95; // [rsp+5Ch] [rbp-6ECh] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+5Dh] [rbp-6EBh]
  char v97; // [rsp+5Eh] [rbp-6EAh]
  void *Src; // [rsp+60h] [rbp-6E8h] BYREF
  char v99[8]; // [rsp+68h] [rbp-6E0h] BYREF
  PVOID v100; // [rsp+70h] [rbp-6D8h]
  int v101; // [rsp+78h] [rbp-6D0h]
  _PROCESSOR_NUMBER v102; // [rsp+7Ch] [rbp-6CCh]
  POWER_INFORMATION_LEVEL v104; // [rsp+84h] [rbp-6C4h]
  UINT v105; // [rsp+88h] [rbp-6C0h] BYREF
  char v106[8]; // [rsp+90h] [rbp-6B8h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-6B0h] BYREF
  int v108; // [rsp+A8h] [rbp-6A0h]
  unsigned __int64 v109; // [rsp+B0h] [rbp-698h]
  LUID v110; // [rsp+B8h] [rbp-690h]
  _QWORD v111[192]; // [rsp+C0h] [rbp-688h] BYREF
  wchar_t psz[32]; // [rsp+6C0h] [rbp-88h] BYREF

  v109 = (unsigned __int64)OutputBuffer;
  v8 = InformationLevel;
  v104 = InformationLevel;
  v108 = 0;
  v110 = 0LL;
  memset(v111, 0, sizeof(v111));
  Src = 0LL;
  Length_4 = 0;
  v10 = 0LL;
  v100 = 0LL;
  P[0] = 0LL;
  LOBYTE(v11) = 0;
  v92 = 0;
  v97 = 0;
  v95 = 0;
  v102 = 0;
  if ( (unsigned int)v8 > SessionAllowExternalDmaDevices )
  {
    WakeSource = -1073741811;
    goto LABEL_498;
  }
  v12 = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v12;
  v13 = InputBuffer != 0LL ? InputBufferLength : 0;
  v14 = (void *)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
  P[1] = v14;
  Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v15 = (void *)(v109 & -(__int64)(Length != 0));
  if ( !v12 )
  {
    v10 = (__int128 *)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
    v100 = v10;
LABEL_59:
    if ( (unsigned int)v8 > TraceApplicationPowerMessageEnd || (v30 = -234812256, !_bittest(&v30, v8)) )
    {
      v31 = (unsigned int)(v8 - 38);
      if ( (unsigned int)v31 > 0x39 || (v9 = 0x3FFE3BE75BE26EDLL, !_bittest64(&v9, v31)) )
      {
        PopAcquirePolicyLock();
        LOBYTE(v11) = 1;
        v92 = 1;
        v97 = 1;
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
          v32 = &unk_140443944;
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
        WakeSource = PopVerifySystemPowerPolicy(v10, v111);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        v32 = v111;
LABEL_76:
        Src = v32;
        Length_4 = 232;
        goto LABEL_492;
      case SystemPowerCapabilities:
        if ( !v10 )
        {
          if ( !v15 )
            goto LABEL_68;
LABEL_100:
          BYTE9(PopCapabilities) = PopFullWake & 1;
          byte_140443B95 = PopDisksRegisteredForIdle();
          PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v111);
          Src = v111;
          Length_4 = 76;
LABEL_101:
          v10 = (__int128 *)v100;
          goto LABEL_492;
        }
        if ( (PopSimulate & 1) == 0 )
          goto LABEL_68;
        if ( v13 >= 0x4C )
        {
          PopCapabilities = *v10;
          unk_140443B90 = v10[1];
          xmmword_140443BA0 = v10[2];
          xmmword_140443BB0 = v10[3];
          qword_140443BC0 = *((_QWORD *)v10 + 8);
          dword_140443BC8 = *((_DWORD *)v10 + 18);
          WakeSource = PopResetCurrentPolicies(v9, v11);
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
          if ( WakeSource < 0 )
            goto LABEL_70;
          goto LABEL_100;
        }
        goto LABEL_73;
      case SystemBatteryState:
        if ( v10 || !v15 )
          goto LABEL_68;
        PopCurrentPowerState(v111);
        goto LABEL_113;
      case SystemPowerStateHandler:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 < 0x18 )
          goto LABEL_73;
        v37 = *(unsigned int *)v10;
        if ( (unsigned int)v37 >= 7 )
          goto LABEL_68;
        v38 = 3 * v37;
        if ( qword_140443AC8[3 * v37] )
        {
          if ( (_DWORD)v37 != 4 || (void (__noreturn *)())qword_140443B28 != PopShutdownHandler )
            goto LABEL_68;
        }
        *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v37) = *v10;
        qword_140443AD0[3 * v37] = *((_QWORD *)v10 + 2);
        word_140443AC5[12 * v37] = 0;
        byte_140443AC7[24 * v37] = 0;
        v39 = 0LL;
        v40 = 0;
        if ( (_DWORD)v37 )
        {
          v41 = v37 - 1;
          if ( v41 )
          {
            v42 = v41 - 1;
            if ( v42 )
            {
              v43 = v42 - 1;
              if ( v43 )
              {
                v44 = v43 - 1;
                if ( !v44 )
                {
                  v39 = (char *)&PopCapabilities + 7;
                  goto LABEL_143;
                }
                if ( v44 != 2 )
                  goto LABEL_143;
                v40 = 4;
                v45 = (PopSimulate & 0x2000) == 0;
                v39 = (char *)&unk_140443B91;
              }
              else
              {
                v40 = 5;
                v45 = (PopSimulate & 0x2000) == 0;
                v39 = (char *)&PopCapabilities + 6;
              }
            }
            else
            {
              v40 = 4;
              v45 = (PopSimulate & 0x20) == 0;
              v39 = (char *)&PopCapabilities + 5;
            }
          }
          else
          {
            v40 = 3;
            v45 = (PopSimulate & 0x40) == 0;
            v39 = (char *)&PopCapabilities + 4;
          }
        }
        else
        {
          v40 = 2;
          v45 = (PopSimulate & 8) == 0;
          v39 = (char *)&PopCapabilities + 3;
        }
        if ( !v45 )
          v39 = 0LL;
LABEL_143:
        v46 = v40 & (unsigned int)-(byte_140443AC4[8 * v38] != 0);
        if ( (int)v46 > (int)qword_140443BC0 )
          LODWORD(qword_140443BC0) = byte_140443AC4[8 * v38] != 0 ? v40 : 0;
        if ( v39 )
        {
          LOBYTE(v46) = 1;
          PopChangeCapability(v39, v46);
        }
        goto LABEL_492;
      case ProcessorStateHandler:
        if ( v10 || !v15 )
          goto LABEL_68;
        PpmHeteroHgsBackupInit();
        Src = &PpmProcessorDriverDispatchTable;
        Length_4 = 272;
        goto LABEL_492;
      case SystemPowerPolicyCurrent:
        if ( v10 || !v15 )
          goto LABEL_68;
        v32 = PopPolicy;
        goto LABEL_76;
      case AdministratorPowerPolicy:
        if ( !v10 )
        {
          if ( !v15 )
            goto LABEL_68;
LABEL_84:
          v35 = &PopAdminPolicy;
          goto LABEL_85;
        }
        if ( v13 < 0x18 )
          goto LABEL_73;
        WakeSource = PopApplyAdminPolicy(0LL, v10);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( WakeSource >= 0 )
        {
          WakeSource = PopResetCurrentPolicies(v34, v33);
          if ( WakeSource >= 0 )
            goto LABEL_84;
        }
        goto LABEL_70;
      case SystemReserveHiberFile:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( !v13 )
          goto LABEL_73;
        PopAcquireTransitionLock(3LL);
        PopAcquirePolicyLock();
        LOBYTE(v47) = 1;
        LOBYTE(v48) = *(_BYTE *)v10;
        WakeSource = PopEnableHiberFile(v48, v47);
        PopReleasePolicyLock();
        PopReleaseTransitionLock(3LL);
        goto LABEL_157;
      case ProcessorInformation:
        if ( v10 || !v15 )
          goto LABEL_68;
        v52 = PopProcessorInformation(v111, 1536LL, KeGetCurrentPrcb()->Group, &Length_4);
        v10 = (__int128 *)v100;
        goto LABEL_177;
      case SystemPowerInformation:
        if ( v10 || !v15 )
          goto LABEL_68;
        LODWORD(v111[0]) = 0;
        HIDWORD(v111[0]) = dword_140442F04;
        LODWORD(v111[1]) = dword_140442F0C - dword_140442F08;
        BYTE4(v111[1]) = PopCoolingMode;
        Src = v111;
        Length_4 = 16;
        goto LABEL_492;
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
        v51 = &qword_140443008;
        goto LABEL_166;
      case LastSleepTime:
        if ( v10 || !v15 )
          goto LABEL_68;
        v51 = &qword_140443010;
        goto LABEL_166;
      case SystemExecutionState:
        if ( v10 || !v15 )
          goto LABEL_68;
        if ( dword_140424780 )
          LODWORD(v111[0]) |= 1u;
        if ( PopPowerRequestAttributes[0] )
          LODWORD(v111[0]) |= 2u;
        goto LABEL_205;
      case SystemPowerStateNotifyHandler:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 < 0x10 )
          goto LABEL_73;
        if ( (_QWORD)PopPowerStateNotifyHandler && *(_QWORD *)v10 )
          goto LABEL_68;
        PopPowerStateNotifyHandler = *v10;
        goto LABEL_492;
      case SystemPowerStateLogging:
        if ( v10 || !v15 )
          goto LABEL_68;
        WakeSource = PopLoggingInformation(P, &v105);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        Src = P[0];
        Length_4 = v105;
        goto LABEL_492;
      case SystemPowerLoggingEntry:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 < 8 )
          goto LABEL_73;
        v54 = PopLogSleepDisabled(*(unsigned int *)v10, *((unsigned int *)v10 + 1), 0LL, 0LL);
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
        v55 = *((_DWORD *)v10 + 6);
        if ( !v55 || *((_DWORD *)v10 + 5) > 2u )
          goto LABEL_68;
        if ( *(_DWORD *)v10 != 1 )
        {
          WakeSource = -1073741736;
          goto LABEL_69;
        }
        WakeSource = RtlUIntAdd(0x1Cu, v55, &Length_4);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        if ( v13 < Length_4 )
          goto LABEL_68;
        PopGetSessionId(v57, v56);
        v54 = PopSetPowerSettingValue((LPCGUID)((char *)v10 + 4), (char *)v10 + 28);
LABEL_192:
        WakeSource = v54;
        v49 = v54 < 0;
        goto LABEL_158;
      case SystemMonitorHiberBootPowerOff:
        PopSuspendResumePdc(1LL, v11);
        PopHiberBootForceMonitorOff = 1;
        SettingNotificationName = PoPowerOffMonitor();
        goto LABEL_374;
      case SystemVideoState:
        if ( v10 || !v15 )
          goto LABEL_68;
        Length_4 = 4;
        Src = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
        if ( !Src )
          goto LABEL_226;
        v95 = 1;
        *(_DWORD *)Src = PopConsoleDisplayState;
        goto LABEL_492;
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
        goto LABEL_492;
      case SystemWakeSource:
        if ( v10 || !v15 )
          goto LABEL_68;
        if ( (_BYTE)v11 )
          PopReleasePolicyLock();
        v20 = 0;
        v92 = 0;
        Length_4 = 0;
        WakeSource = PopGetWakeSource(0LL, &Length_4);
        if ( WakeSource != -1073741789 )
          goto LABEL_242;
        Src = ExAllocatePoolWithTag(NonPagedPoolNx, Length_4, 0x206D654Du);
        if ( !Src )
        {
          WakeSource = -1073741670;
          InputBuffer = v14;
          goto LABEL_499;
        }
        v95 = 1;
        WakeSource = PopGetWakeSource(Src, &Length_4);
LABEL_242:
        InputBuffer = v14;
        if ( WakeSource < 0 )
          goto LABEL_499;
        v97 = 0;
        goto LABEL_492;
      case SystemHiberFileInformation:
        if ( !v15 )
          goto LABEL_68;
        if ( !(_DWORD)dword_1404433A0 || !qword_140443398 )
        {
          WakeSource = -1073741275;
          goto LABEL_69;
        }
        Length_4 = dword_1404433A0 + 8;
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(dword_1404433A0 + 8), 0x206D654Du);
        v59 = PoolWithTag;
        if ( !PoolWithTag )
        {
LABEL_226:
          WakeSource = -1073741670;
          goto LABEL_69;
        }
        Src = PoolWithTag;
        v95 = 1;
        memmove(PoolWithTag + 2, qword_140443398, (unsigned int)dword_1404433A0);
        *v59 = (unsigned int)dword_1404433A0 >> 4;
        goto LABEL_492;
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
        goto LABEL_492;
      case ProcessorLoad:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 == 6 )
        {
          v60 = PpmSetSimulatedLoad((__int64)v10);
          goto LABEL_256;
        }
        if ( v13 != 4 )
          goto LABEL_257;
        v60 = PpmClearSimulatedLoad((_PROCESSOR_NUMBER *)v10);
        goto LABEL_256;
      case PowerShutdownNotification:
        if ( !v10 || v15 || v13 != 24 )
          goto LABEL_68;
        v62 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x206D654Du);
        if ( !v62 )
          goto LABEL_226;
        *(_OWORD *)v62 = *v10;
        v62[2] = *((_QWORD *)v10 + 2);
        if ( !_InterlockedCompareExchange64(
                (volatile signed __int64 *)&PopShutdownNotificationCallback,
                (signed __int64)v62,
                0LL) )
          goto LABEL_101;
        ExFreePoolWithTag(v62, 0x206D654Du);
        WakeSource = -1073741823;
        v10 = (__int128 *)v100;
        goto LABEL_69;
      case MonitorCapabilities:
        if ( !v10 || v13 != 4 || v15 )
          goto LABEL_68;
        v63 = (int)v102;
        if ( *(_DWORD *)v10 )
          v63 = 1;
        v102 = (_PROCESSOR_NUMBER)v63;
        PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE);
        goto LABEL_492;
      case SessionPowerInit:
        if ( v10 )
          goto LABEL_68;
        if ( !v15 )
          goto LABEL_68;
        v65 = Length;
        if ( Length != 64 )
          goto LABEL_68;
        LOBYTE(v111[6]) = (unsigned int)PopEsGetState(v9, v11) == 1;
        LOBYTE(v111[7]) = TtmIsEnabled();
        if ( !TtmIsEnabled() )
          goto LABEL_310;
        WakeSource = TtmInitCurrentSession();
        InputBuffer = v14;
        if ( WakeSource < 0 )
          goto LABEL_70;
        PopNotifySessionUserPowerRequestsPresent();
LABEL_310:
        PopAcquirePolicyLock();
        LODWORD(v111[2]) = 0;
        v111[0] = &PopNoMoreInput;
        v111[1] = &PopHiberBootForceMonitorOff;
        LODWORD(v111[3]) = byte_140443A31 != 0;
        HIDWORD(v111[3]) = dword_140443A2C;
        HIDWORD(v111[2]) = dword_140443A4C;
        v111[4] = qword_140443A50;
        HIDWORD(v111[6]) = HIDWORD(qword_140443A58);
        v111[5] = __PAIR64__(dword_140443A60, qword_140443A58);
        BYTE1(v111[6]) = PopLidOpened;
        Src = v111;
        Length_4 = 64;
        SessionId = PopGetSessionId(byte_140443A31 != 0, v73);
        PopSessionCreated(SessionId);
        PopReleasePolicyLock();
        goto LABEL_493;
      case SessionDisplayState:
        if ( !v10 || v13 != 16 || v15 )
          goto LABEL_68;
        if ( *((_BYTE *)v10 + 13) && *((_BYTE *)v10 + 12) )
        {
          if ( PopPlatformAoAc && !PopConsoleDisplayState && *((_DWORD *)v10 + 1) == 2 )
            DbgkWerCaptureLiveKernelDump(L"InvalidDisplayStateTransition", *(unsigned int *)v10, 0LL, 0LL, 0LL, 0);
          if ( PopPlatformAoAc && *((_DWORD *)v10 + 1) != 2 )
          {
            LOBYTE(v9) = *((_BYTE *)v10 + 15);
            PopProcessSessionDisplayStateChange(v9, *((unsigned int *)v10 + 2));
          }
          PopSetDisplayStatus(*((unsigned int *)v10 + 1), v11);
          PopUpdateConsoleDisplayState(*((unsigned int *)v10 + 1));
        }
        v75 = *((_BYTE *)v10 + 14);
        if ( v75 )
        {
          if ( *((_BYTE *)v10 + 12) )
          {
            ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (char *)v10 + 4, 4u, 0LL, 0LL, 0, 0);
            v75 = *((_BYTE *)v10 + 14);
          }
          if ( v75 )
            PopDiagTraceSessionDisplayStateChange(
              *((_DWORD *)v10 + 1) == 0,
              *(_DWORD *)v10,
              *((unsigned __int8 *)v10 + 12),
              *((_DWORD *)v10 + 2));
        }
        goto LABEL_492;
      case PowerRequestCreate:
      case PlmPowerRequestCreate:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 != 40 )
          goto LABEL_73;
        v65 = Length;
        if ( Length != 8 )
          goto LABEL_73;
        LOBYTE(v11) = v8 == PlmPowerRequestCreate;
        Info = PopPowerRequestCreateInfo(v10, v11, v111);
        goto LABEL_334;
      case PowerRequestAction:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 != 24 )
          goto LABEL_73;
        v54 = PopPowerRequestActionInfo((__int64)v10);
        goto LABEL_192;
      case GetPowerRequestList:
        if ( v10 || !v15 )
          goto LABEL_68;
        PowerRequestListInfo = PopGetPowerRequestListInfo(&Src, &Length_4);
        goto LABEL_346;
      case ProcessorInformationEx:
        if ( !v10 )
          goto LABEL_68;
        if ( v13 < 2 )
          goto LABEL_68;
        if ( !v15 )
          goto LABEL_68;
        v53 = *(_WORD *)v10;
        if ( v53 >= KeQueryActiveGroupCount() )
          goto LABEL_68;
        v52 = PopProcessorInformation(v111, 1536LL, v53, &Length_4);
LABEL_177:
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        WakeSource = v52;
        if ( v52 < 0 )
          goto LABEL_70;
        Src = v111;
        goto LABEL_492;
      case NotifyUserModeLegacyPowerEvent:
        if ( !v10 || v13 != 16 )
          goto LABEL_68;
        v80 = PopUmpoSendLegacyEvent(v10);
        WakeSource = v80;
        if ( v80 >= 0 )
          goto LABEL_492;
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( v80 == -1073741536 )
          goto LABEL_492;
        goto LABEL_70;
      case GroupPark:
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_220;
        if ( !v10 || v15 )
          goto LABEL_68;
        switch ( v13 )
        {
          case 0x10u:
            v61 = 0LL;
LABEL_265:
            v60 = PpmParkApplyForcedMask(v10, v61);
            goto LABEL_256;
          case 0x18u:
            v61 = v10 + 1;
            goto LABEL_265;
          case 2u:
            v60 = PpmParkClearForcedMask(v10, v11);
LABEL_256:
            WakeSource = v60;
            break;
          default:
LABEL_257:
            WakeSource = -1073741811;
            break;
        }
LABEL_157:
        v49 = WakeSource < 0;
LABEL_158:
        InputBuffer = v14;
        if ( v49 )
          goto LABEL_70;
LABEL_492:
        v65 = Length;
LABEL_493:
        if ( !Src || !v15 )
          goto LABEL_412;
        if ( v65 < Length_4 )
        {
LABEL_73:
          WakeSource = -1073741789;
        }
        else
        {
          memmove(v15, Src, Length_4);
LABEL_412:
          WakeSource = 0;
        }
LABEL_69:
        InputBuffer = v14;
LABEL_70:
        v20 = v92;
        goto LABEL_499;
      case WakeTimerList:
        if ( v10 || !v15 )
          goto LABEL_68;
        PowerRequestListInfo = ExGetWakeTimerList((ULONG_PTR *)&Src, &Length_4);
LABEL_346:
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        WakeSource = PowerRequestListInfo;
        if ( PowerRequestListInfo < 0 )
          goto LABEL_70;
        v95 = 1;
        goto LABEL_492;
      case SystemHiberFileSize:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 < 4 )
          goto LABEL_73;
        PopAcquireTransitionLock(5LL);
        PopAcquirePolicyLock();
        WakeSource = PopSetHiberFileSize(*(unsigned int *)v10, v106);
        PopReleasePolicyLock();
        v50 = 5LL;
        goto LABEL_164;
      case ProcessorSetIdle:
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_220;
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 == 8 )
        {
          v60 = PpmSetSimulatedIdle((__int64)v10);
          goto LABEL_256;
        }
        if ( v13 != 4 )
          goto LABEL_257;
        v60 = PpmClearSimulatedIdle((_PROCESSOR_NUMBER *)v10);
        goto LABEL_256;
      case LogicalProcessorIdling:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 != 8 )
          goto LABEL_73;
        v65 = Length;
        if ( Length != 4 )
          goto LABEL_73;
        WakeSource = PpmParkSetLpiCap(*(_DWORD *)v10, *((_DWORD *)v10 + 1), (unsigned int *)v111);
        if ( WakeSource < 0 )
          goto LABEL_69;
        Src = v111;
        Length_4 = 4;
        goto LABEL_493;
      case UserPresence:
        if ( !ExVerifySuite(PhoneNT) )
        {
LABEL_77:
          WakeSource = -1073741822;
          goto LABEL_69;
        }
        if ( !v10 || v13 != 1 || v15 )
          goto LABEL_68;
        LOBYTE(v72) = *(_BYTE *)v10;
        WakeSource = PopUserPresentOverride(v72);
        if ( WakeSource >= 0 )
          goto LABEL_492;
        goto LABEL_69;
      case PowerSettingNotificationName:
        if ( !v15 )
          goto LABEL_68;
        if ( v14 && v13 != 20 || Length != 8 )
          goto LABEL_73;
        SettingNotificationName = PopGetSettingNotificationName(v10, v15);
        goto LABEL_374;
      case GetPowerSettingValue:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 != 16 || Length < 4 )
          goto LABEL_73;
        SettingNotificationName = PopGetSettingValue(v10, v15, Length);
        goto LABEL_374;
      case IdleResiliency:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 < 8 )
          goto LABEL_73;
        PopEnforceResiliencyScenarios(v10);
        goto LABEL_492;
      case SessionRITState:
        if ( !v10 )
          goto LABEL_68;
        if ( v13 != 8 )
          goto LABEL_68;
        if ( !v15 )
          goto LABEL_68;
        v65 = Length;
        if ( Length != 8 )
          goto LABEL_68;
        v66 = PopGetSessionId(v9, v11);
        PopSessionInputChange(v66, v10, v15);
        goto LABEL_493;
      case SessionConnectNotification:
        if ( !v10 )
          goto LABEL_68;
        if ( v13 != 2 )
          goto LABEL_68;
        if ( !v15 )
          goto LABEL_68;
        v65 = Length;
        if ( Length != 8 )
          goto LABEL_68;
        v67 = PopGetSessionId(v9, v11);
        PopSessionConnectionChange(v67, v10, v15);
        v70 = PopGetSessionId(v69, v68);
        PopSessionConnectionInvocation(v70, v10);
        goto LABEL_493;
      case SessionPowerCleanup:
        if ( v10 || v15 )
          goto LABEL_68;
        v64 = PopGetSessionId(v9, v11);
        PopSessionClosed(v64);
        if ( TtmIsEnabled() )
          TtmCleanupCurrentSession();
        goto LABEL_492;
      case SessionLockState:
        if ( !v10 || v13 != 8 || v15 )
          goto LABEL_68;
        v71 = PopGetSessionId(v9, v11);
        PopSessionWinlogonNotification(v71, (__int64)v10);
        goto LABEL_492;
      case SystemHiberbootState:
        if ( PsIsCurrentThreadInServerSilo() )
          goto LABEL_103;
        if ( v10 || !v15 )
          goto LABEL_68;
        PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v111);
        if ( BYTE2(v111[2]) )
          PopReadHiberbootPolicy((char *)&v111[2] + 2);
        v36 = (char *)&v111[2] + 2;
        goto LABEL_109;
      case PlatformInformation:
        if ( v10 || !v15 )
          goto LABEL_68;
        IsDevicePotentialDripsConstraint = PopPlatformAoAc;
        goto LABEL_398;
      case PdcInvocation:
        if ( !v10 || v13 != 168 || v15 && Length != 184 )
          goto LABEL_68;
        SettingNotificationName = PopPdcInvocation(v10, v15);
        goto LABEL_374;
      case MonitorInvocation:
        if ( !v10 || v13 != 8 || v15 || Length )
          goto LABEL_68;
        SettingNotificationName = PopMonitorInvocation(v10, v11);
        goto LABEL_374;
      case FirmwareTableInformationRegistered:
        if ( v10 || v15 )
          goto LABEL_68;
        WakeSource = PopInitPlatformSettings(v9, v11);
        byte_140443B94 = PopPlatformAoAc;
        goto LABEL_69;
      case SetShutdownSelectedTime:
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
        goto LABEL_492;
      case SuspendResumeInvocation:
        if ( !v10 || v13 != 8 || v15 && Length )
          goto LABEL_68;
        SettingNotificationName = PopSuspendResumeInvocation(v10);
        goto LABEL_374;
      case ScreenOff:
      case ThermalStandby:
        if ( v10 || v15 )
          goto LABEL_68;
        v83 = 23LL;
        if ( v8 != ThermalStandby )
          v83 = 11LL;
        PopScreenOff(v83, v11);
        goto LABEL_412;
      case CsDeviceNotification:
        if ( PreviousMode )
          goto LABEL_220;
        if ( !v10 || v13 != 16 || v15 || Length )
          goto LABEL_68;
        SettingNotificationName = PopPdcCsDeviceNotification(v10, v11);
LABEL_374:
        WakeSource = SettingNotificationName;
        goto LABEL_69;
      case PlatformRole:
        if ( v10 || !v15 )
          goto LABEL_68;
        LODWORD(v111[0]) = PopCapturePlatformRole(v9, v11);
LABEL_205:
        Src = v111;
        Length_4 = 4;
        goto LABEL_492;
      case LastResumePerformance:
        if ( v10 || !v15 )
          goto LABEL_68;
        LODWORD(v111[0]) = qword_140443528;
        v111[1] = qword_1404436C0;
        v111[2] = qword_1404436C8;
        if ( !PopSleepStats )
        {
          WakeSource = -1073741823;
          goto LABEL_69;
        }
        v35 = (__int128 *)v111;
LABEL_85:
        Src = v35;
        Length_4 = 24;
        goto LABEL_492;
      case DisplayBurst:
        if ( v10 || v15 )
          goto LABEL_68;
        v84 = PopErrataReportingIncorrectLidState;
        if ( TtmIsEnabled() )
        {
          v88 = PopGetSessionId(v86, v85);
          TtmNotifySessionDisplayBurst(v88, 6LL);
        }
        else
        {
          v89 = 0;
          if ( !PopLidOpened )
            v89 = PopConsoleExternalDisplayConnected == 0;
          if ( !v89 )
            PopEventCalloutDispatch(10, 6LL);
          if ( !v84 )
          {
            LOBYTE(v87) = v89;
            LOBYTE(v85) = PopConsoleExternalDisplayConnected;
            LOBYTE(v86) = PopLidOpened;
            PopDiagTraceDisplayBurstWin32kCallout(v86, v85, v87);
          }
        }
        goto LABEL_492;
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
        goto LABEL_492;
      case SystemBatteryStatePrecise:
        if ( v10 || !v15 )
          goto LABEL_68;
        PopCurrentPowerStatePrecise(v111, 0LL);
LABEL_113:
        Src = v111;
        Length_4 = 32;
        goto LABEL_492;
      case ThermalEvent:
        if ( !v10 || v15 )
          goto LABEL_68;
        if ( v13 < 0x10 || v13 < 2 * (unsigned int)*((unsigned __int16 *)v10 + 6) + 14 )
          goto LABEL_73;
        v54 = PopThermalProcessUsermodeEvent(v10, v11);
        goto LABEL_192;
      case PowerRequestActionInternal:
        v77 = *((_DWORD *)v10 + 2);
        v78 = *(_QWORD *)v10;
        if ( *((_BYTE *)v10 + 12) )
          PoSetPowerRequestInternal(v78, v77);
        else
          PoClearPowerRequestInternal(v78, v77);
        goto LABEL_492;
      case BatteryDeviceState:
        if ( !v10 || !v15 )
          goto LABEL_68;
        WakeSource = RtlStringCbLengthW((STRSAFE_PCNZWCH)v10, v13, 0LL);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        WakeSource = PopBatteryDeviceState(v10, v111);
        if ( WakeSource < 0 )
          goto LABEL_70;
        Src = v111;
        Length_4 = 52;
        goto LABEL_492;
      case PowerInformationInternal:
        if ( !v10 )
          goto LABEL_68;
        if ( v13 < 8 )
          goto LABEL_68;
        v90 = *(_DWORD *)v10;
        if ( (unsigned int)(*(_DWORD *)v10 - 67) <= 0xFBC || v90 >= 4106 )
          goto LABEL_68;
        if ( (unsigned int)(v90 - 4096) > 9 )
        {
          v60 = PopPowerInformationInternal(
                  v90,
                  (_DWORD)v10,
                  v13,
                  (_DWORD)v15,
                  (__int64)&Src,
                  (__int64)&Length_4,
                  (__int64)&v95);
        }
        else
        {
          if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode)
            && !PopCapabilityCheck(L"terminalPowerManagement") )
          {
            WakeSource = -1073741727;
            goto LABEL_69;
          }
          v60 = TtmDispatchApi(
                  v90,
                  (_DWORD)v10,
                  v13,
                  (_DWORD)v15,
                  Length,
                  (__int64)&Src,
                  (__int64)&Length_4,
                  (__int64)&v95);
        }
        goto LABEL_256;
      case SystemHiberFileType:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 < 4 )
          goto LABEL_73;
        PopAcquireTransitionLock(6LL);
        PopAcquirePolicyLock();
        WakeSource = PopSetHiberFileType(*(unsigned int *)v10, v106);
        PopReleasePolicyLock();
        v50 = 6LL;
LABEL_164:
        PopReleaseTransitionLock(v50);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        v51 = (__int64 *)v106;
LABEL_166:
        Src = v51;
        Length_4 = 8;
        goto LABEL_492;
      case PhysicalPowerButtonPress:
        if ( !v10 || v13 < 4 || v15 )
          goto LABEL_68;
        v102 = *(_PROCESSOR_NUMBER *)v10;
        PopUpdatePowerButtonHoldState(v102 != 0);
        goto LABEL_492;
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
LABEL_398:
        LOBYTE(v111[0]) = IsDevicePotentialDripsConstraint;
        v36 = (char *)v111;
LABEL_109:
        Src = v36;
        Length_4 = 1;
        goto LABEL_492;
      case EnergyTrackerCreate:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 != 12 )
          goto LABEL_73;
        v65 = Length;
        if ( Length != 8 )
          goto LABEL_73;
        Info = PopEtEnergyTrackerCreate(v10, v111);
LABEL_334:
        InputBuffer = v14;
        WakeSource = Info;
        if ( Info < 0 )
          goto LABEL_70;
        Src = v111;
        Length_4 = 8;
        goto LABEL_493;
      case EnergyTrackerQuery:
        if ( !v10 || !v15 )
          goto LABEL_68;
        if ( v13 != 8 )
          goto LABEL_73;
        v65 = Length;
        if ( Length < 0xC )
          goto LABEL_73;
        WakeSource = PopEtEnergyTrackerQuery(*(_QWORD *)v10, v15);
        InputBuffer = v14;
        if ( WakeSource >= 0 )
          goto LABEL_493;
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
        goto LABEL_492;
      case SessionAllowExternalDmaDevices:
        if ( !v10 || v13 != 1 || v15 )
          goto LABEL_68;
        PnpWinlogonExternalDmaNotification(v10);
        goto LABEL_492;
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
        WakeSource = SeIsAppContainerOrIdentifyLevelContext(0LL, v99);
        v101 = WakeSource;
        if ( WakeSource < 0 )
        {
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
          v10 = (__int128 *)v100;
          v20 = 0;
          goto LABEL_499;
        }
        v8 = v104;
        if ( v99[0] )
        {
          if ( v104 != ScreenOff && v104 != ThermalStandby )
          {
            WakeSource = -1073741790;
            v101 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
            v10 = (__int128 *)v100;
            v20 = 0;
            goto LABEL_499;
          }
          if ( !PopCapabilityCheck(L"ID_CAP_SCREENOFF") )
          {
            WakeSource = -1073741790;
            v101 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
            v10 = (__int128 *)v100;
            v20 = 0;
            goto LABEL_499;
          }
        }
      }
      if ( (unsigned int)(v8 - 92) <= 1 )
      {
        LOBYTE(v9) = v12;
        WakeSource = ExCheckFullProcessInformationAccess(v9);
        v101 = WakeSource;
        if ( WakeSource < 0 )
        {
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
          v10 = (__int128 *)v100;
          v20 = 0;
          goto LABEL_499;
        }
        v8 = v104;
      }
      v21 = (unsigned int)(v8 - 28);
      if ( (unsigned int)v21 <= 0x32 )
      {
        v9 = 0x4000000420001LL;
        if ( _bittest64(&v9, v21) )
        {
          if ( !PspIsContextAdmin() )
          {
            WakeSource = -1073741790;
            v101 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
            v10 = (__int128 *)v100;
            v20 = 0;
            goto LABEL_499;
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
            v101 = -1073741637;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
            v10 = (__int128 *)v100;
            v20 = 0;
            goto LABEL_499;
          }
        }
        if ( v8 == AdministratorPowerPolicy
          || (v24 = (unsigned int)(v8 - 38), (unsigned int)v24 <= 0x39)
          && (v25 = 0x218000004422401LL, _bittest64(&v25, v24)) )
        {
          if ( !PspIsContextAdmin() )
          {
            WakeSource = -1073741790;
            v101 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
            v10 = (__int128 *)v100;
            v20 = 0;
            goto LABEL_499;
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
              v110 = v28;
              if ( !SeSinglePrivilegeCheck(v28, v12) )
              {
                WakeSource = -1073741727;
                v101 = -1073741727;
                InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
                v10 = (__int128 *)v100;
                v20 = 0;
                goto LABEL_499;
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
        if ( v13 > 0x40 )
        {
          v10 = (__int128 *)ExAllocatePoolWithTag(PagedPool, v13, 0x206D654Du);
          v100 = v10;
          if ( !v10 )
          {
            WakeSource = -1073741670;
            v101 = -1073741670;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
            v20 = 0;
            goto LABEL_499;
          }
        }
        else
        {
          v10 = (__int128 *)psz;
          v100 = psz;
        }
        memmove(v10, v14, v13);
      }
      else
      {
        v10 = (__int128 *)v100;
      }
      if ( v15 )
        ProbeForWrite(v15, Length, 1u);
      LOBYTE(v11) = 0;
      goto LABEL_59;
    }
  }
  WakeSource = -1073741790;
  InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
  v10 = (__int128 *)v100;
LABEL_498:
  v20 = 0;
LABEL_499:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v95 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v20 )
    PopReleasePolicyLock();
  if ( v10 && v10 != InputBuffer && v10 != (__int128 *)psz )
    ExFreePoolWithTag(v10, 0x206D654Du);
  return WakeSource;
}
