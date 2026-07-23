/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x140567D74
 * Callers:
 *     NtSetSystemPowerState @ 0x14056EF00 (NtSetSystemPowerState.c)
 * Callees:
 *     PopCheckForWork @ 0x140010620 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400106A8 (PopGetPolicyWorker.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PopExecuteOnTargetProcessors @ 0x1400A5E08 (PopExecuteOnTargetProcessors.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     KeSuspendThread @ 0x1400F26E8 (KeSuspendThread.c)
 *     StringCchPrintfW @ 0x140134BD4 (StringCchPrintfW.c)
 *     PopIgnoreBatteryStatusChange @ 0x1401425E8 (PopIgnoreBatteryStatusChange.c)
 *     PopForceCompleteCsSleepStudySession @ 0x140142610 (PopForceCompleteCsSleepStudySession.c)
 *     PopThermalSxEntry @ 0x140142634 (PopThermalSxEntry.c)
 *     ExWakeTimersPause @ 0x1401428E0 (ExWakeTimersPause.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1401429CC (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1401429F8 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x140142A20 (PpmCheckResumeStatisticsCollection.c)
 *     PsIumResumeAfterHibernate @ 0x140142A58 (PsIumResumeAfterHibernate.c)
 *     PopThermalSxExit @ 0x140142A78 (PopThermalSxExit.c)
 *     ExWakeTimersResume @ 0x140142B40 (ExWakeTimersResume.c)
 *     PopSetPowerActionState @ 0x140143524 (PopSetPowerActionState.c)
 *     PopRunMaximumIrpWorkers @ 0x14015887C (PopRunMaximumIrpWorkers.c)
 *     PopActionRetrieveInitialState @ 0x140159704 (PopActionRetrieveInitialState.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14015988C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140159AA4 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PoSetUserPresent @ 0x140177870 (PoSetUserPresent.c)
 *     RtlBootStatusDisableFlushing @ 0x1401786EC (RtlBootStatusDisableFlushing.c)
 *     ZwSetSystemPowerState @ 0x1401BB770 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IoRaiseInformationalHardError @ 0x1402836F0 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x1402D3850 (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1402D8F64 (PopFxPrepareDevicesForShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1402DE96C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ExDeleteWakeTimerInfo @ 0x14031C790 (ExDeleteWakeTimerInfo.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopDiagTracePostSleepNotification @ 0x1405671A0 (PopDiagTracePostSleepNotification.c)
 *     PopDiagComputeEarlyHiberStats @ 0x1405673A4 (PopDiagComputeEarlyHiberStats.c)
 *     PopQpcTimeInMs @ 0x140567420 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x140567454 (PopCaptureTimeOnProcZero.c)
 *     PopNewWakeInfo @ 0x140567640 (PopNewWakeInfo.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140567B6C (ExUpdateSystemTimeFromCmos.c)
 *     PfPowerActionNotify @ 0x140568F10 (PfPowerActionNotify.c)
 *     PopSetDevicesSystemState @ 0x140569154 (PopSetDevicesSystemState.c)
 *     PopCheckpointSystemSleep @ 0x14056A714 (PopCheckpointSystemSleep.c)
 *     IoFreePoDeviceNotifyList @ 0x14056E534 (IoFreePoDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14056E750 (PopFlushVolumes.c)
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14057EC00 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x14057EE60 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x14057EEF0 (PopDiagTraceMtrrError.c)
 *     ExGetNextWakeTime @ 0x14057F734 (ExGetNextWakeTime.c)
 *     PopCheckResiliencyScenarios @ 0x14058AE14 (PopCheckResiliencyScenarios.c)
 *     PopIsDozeSupported @ 0x1405B1814 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1405B1968 (PopFilterCapabilities.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     MmLockPagableSectionByHandle @ 0x140620240 (MmLockPagableSectionByHandle.c)
 *     ExAcquireTimeRefreshLock @ 0x1406669FC (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406BFE98 (ExReleaseTimeRefreshLock.c)
 *     PopInitSystemSleeperThread @ 0x1406DE104 (PopInitSystemSleeperThread.c)
 *     PopEsExitSleep @ 0x1406DE1DC (PopEsExitSleep.c)
 *     PopBootLoaderTraceProcess @ 0x1406DE208 (PopBootLoaderTraceProcess.c)
 *     PpmPerfReApplyStates @ 0x1406DE270 (PpmPerfReApplyStates.c)
 *     PopSetSleepMarker @ 0x1406DE45C (PopSetSleepMarker.c)
 *     PopExecutePowerAction @ 0x1406DF390 (PopExecutePowerAction.c)
 *     PopTransitionCheckpoint @ 0x1406DF880 (PopTransitionCheckpoint.c)
 *     PopNotifyTelemetryOsState @ 0x1406DFA98 (PopNotifyTelemetryOsState.c)
 *     PopNotifyCallbacksPreSleep @ 0x1406E022C (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x1406E07D4 (PopAllocateHiberContext.c)
 *     ExSwapinWorkerThreads @ 0x1406E15BC (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x1406E17C0 (CmSetLazyFlushState.c)
 *     PoClearBroadcast @ 0x1406E1CE8 (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x1406E1D44 (PoInitializeBroadcast.c)
 *     PopEsEnterSleepShutdown @ 0x1406E2C0C (PopEsEnterSleepShutdown.c)
 *     PopFastS4Check @ 0x1406E3188 (PopFastS4Check.c)
 *     PopQueryPowerSettingUlong @ 0x1406E326C (PopQueryPowerSettingUlong.c)
 *     PopEnforceResiliencyScenarios @ 0x1406E3304 (PopEnforceResiliencyScenarios.c)
 *     PopDiagTracePreSleepNotification @ 0x1406E33A4 (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x1406E36A4 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopAdvanceSystemPowerState @ 0x1406E37E0 (PopAdvanceSystemPowerState.c)
 *     PopCurrentPowerStatePrecise @ 0x14071D430 (PopCurrentPowerStatePrecise.c)
 *     PopInitSIdle @ 0x14071D85C (PopInitSIdle.c)
 *     PopInitializePowerPolicySimulate @ 0x14071F614 (PopInitializePowerPolicySimulate.c)
 *     PopAcquireTransitionLock @ 0x14071F948 (PopAcquireTransitionLock.c)
 *     PopResetActionDefaults @ 0x14072006C (PopResetActionDefaults.c)
 *     PopQueueBatteryStatusTimeout @ 0x1407202CC (PopQueueBatteryStatusTimeout.c)
 *     MmZeroPageFileAtShutdown @ 0x14084D9E4 (MmZeroPageFileAtShutdown.c)
 *     PopFindNextSystemPowerState @ 0x14086718C (PopFindNextSystemPowerState.c)
 *     PopSetShutdownMarker @ 0x140867580 (PopSetShutdownMarker.c)
 *     PopZeroHiberFile @ 0x14086D030 (PopZeroHiberFile.c)
 *     PopDeferDoze @ 0x140870970 (PopDeferDoze.c)
 *     PsTerminateServerSilo @ 0x140887CD0 (PsTerminateServerSilo.c)
 *     RtlSetSystemBootStatusEx @ 0x140897160 (RtlSetSystemBootStatusEx.c)
 */

NTSTATUS __fastcall PopTransitionSystemPowerStateEx(__int64 a1)
{
  int v1; // edi
  _DWORD *v2; // r13
  _DWORD *v4; // r12
  int v5; // eax
  POWER_ACTION v6; // ecx
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 CurrentServerSilo; // rax
  POWER_ACTION v10; // esi
  int v11; // edx
  int v12; // eax
  bool v13; // cc
  int v14; // eax
  POWER_ACTION v15; // ecx
  _BYTE *v16; // rsi
  unsigned int v17; // eax
  unsigned int *v18; // r14
  int v19; // eax
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  char NextSystemPowerState; // al
  int HiberContext; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int inited; // eax
  __int64 v35; // r10
  _DWORD *v36; // r9
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 *v43; // rsi
  int v44; // r8d
  _DWORD *v45; // rdx
  _DWORD *v46; // r14
  __int64 *v47; // rcx
  unsigned __int64 v48; // rcx
  __int64 *v49; // rsi
  __int64 *v50; // r12
  char NextWakeTime; // al
  char v52; // al
  __int64 v53; // rcx
  __int64 v54; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v56; // rcx
  int v57; // ecx
  int v58; // r8d
  int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // rcx
  void *v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rax
  _DWORD *v65; // rax
  __int64 CheckStamp; // [rsp+30h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v68; // [rsp+50h] [rbp-30h] BYREF
  char *v69; // [rsp+58h] [rbp-28h]
  int v70; // [rsp+60h] [rbp-20h]
  int v71; // [rsp+68h] [rbp-18h]
  unsigned __int64 v72; // [rsp+70h] [rbp-10h]
  int v73; // [rsp+78h] [rbp-8h]
  char v74; // [rsp+C0h] [rbp+40h] BYREF
  int v75; // [rsp+C8h] [rbp+48h]

  v1 = 0;
  v2 = (_DWORD *)(a1 + 232);
  *(_BYTE *)(a1 + 24) = 0;
  v4 = (_DWORD *)(a1 + 236);
  *(_BYTE *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 148) = 1;
  *(_DWORD *)(a1 + 152) = 1;
  *(_BYTE *)(a1 + 256) = 1;
  *(_QWORD *)(a1 + 376) = 1LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_BYTE *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  v5 = PopSimulate & 0x10000;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 388) = v5 != 0 ? 300000000 : 600000000;
  PopTransitionCheckpoint(8LL, 1LL);
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - 1) > 5 )
    return -1073741811;
  v6 = *(_DWORD *)a1;
  v75 = 6;
  if ( (unsigned int)(v6 - 1) > 6
    || (*(_DWORD *)(a1 + 8) & 0xCFFFFC0) != 0
    || v6 < PowerActionShutdown && dword_1404187B4 >= 16 )
  {
    return -1073741811;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_BYTE *)(a1 + 72) = PreviousMode;
  if ( PreviousMode )
  {
    if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return ZwSetSystemPowerState(*(POWER_ACTION *)a1, *(SYSTEM_POWER_STATE *)(a1 + 4), *(_DWORD *)(a1 + 8));
    else
      return -1073741727;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  v10 = *(_DWORD *)a1;
  *(_QWORD *)(a1 + 96) = CurrentServerSilo;
  if ( !PsIsHostSilo(CurrentServerSilo) )
  {
    if ( (unsigned int)(v10 - 4) > 2 )
    {
      v1 = -1073741637;
    }
    else
    {
      v11 = -2147483599;
      if ( v10 != PowerActionShutdownReset )
        v11 = -1073741077;
      *(_DWORD *)(a1 + 32) = v11;
      PsTerminateServerSilo(*(_QWORD *)(a1 + 96));
    }
    *(_DWORD *)(a1 + 104) = v1;
    return v1;
  }
  if ( v10 == PowerActionShutdown )
    PopReadShutdownPolicy();
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  v12 = dword_1404187B4;
  v13 = dword_1404187B4 < 16;
  *(_DWORD *)(a1 + 124) = 128;
  if ( !v13 )
    v12 = 5;
  *(_DWORD *)(a1 + 120) = v12;
  PopAcquireTransitionLock(1LL);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  PopRunMaximumIrpWorkers();
  PopUnlockAfterSleepWorkItem.Parameter = 0LL;
  PopUnlockAfterSleepWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUnlockAfterSleepWorker;
  PopUnlockAfterSleepWorkItem.List.Flink = 0LL;
  CmSetLazyFlushState(0LL);
  PopNotifyCallbacksPreSleep();
  ExSwapinWorkerThreads(0LL);
  v14 = PoInitializeBroadcast(0LL);
  *(_DWORD *)(a1 + 104) = v14;
  if ( v14 >= 0 )
  {
    PopCheckPowerSourceAfterRtcWakeCancel();
    PopAcquirePolicyLock();
    *(_BYTE *)(a1 + 64) = 1;
    PopFilterCapabilities(&PopCapabilities, &unk_140418868);
    if ( byte_1404187A1 )
    {
      if ( byte_1404187A1 != 2 )
      {
        PopReleasePolicyLock();
        PoClearBroadcast();
        ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
        return -1073741791;
      }
    }
    else
    {
      PopResetActionDefaults();
    }
    PopSetPowerActionState(3);
    qword_1404187D8 = (__int64)qword_140418730;
    PopExecutePowerAction(a1 + 120, 0, a1 + 12, *(_DWORD *)(a1 + 4), 1);
    PopIgnoreBatteryStatusChange();
    PopCheckResiliencyScenarios();
    PopEnforceResiliencyScenarios(a1 + 248);
    PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
    v15 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 6 )
    {
      LODWORD(qword_1404187A4) = 6;
      v15 = *(_DWORD *)a1;
    }
    if ( (unsigned int)(v15 - 4) <= 2 )
    {
      PoPowerDownActionInProgress = 1;
      if ( v15 == PowerActionShutdownReset )
        PoPowerResetActionInProgress = 1;
      if ( PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
        PopZeroHiberFile(PopHiberInfo);
    }
    v16 = (_BYTE *)(a1 + 88);
    v17 = *(_DWORD *)a1 - 2;
    *(_BYTE *)(a1 + 88) = 0;
    v18 = (unsigned int *)(a1 + 28);
    *(_DWORD *)(a1 + 28) = 0;
    if ( v17 <= 1 )
      PoPowerDownActionInProgress = 1;
LABEL_39:
    *(_DWORD *)(a1 + 104) = -1073741536;
    while ( 1 )
    {
      if ( !*(_BYTE *)(a1 + 64) )
      {
        PopAcquirePolicyLock();
        *(_BYTE *)(a1 + 64) = 1;
      }
      if ( !(_DWORD)qword_1404187A4 )
      {
        *(_DWORD *)(a1 + 104) = 0;
        goto LABEL_170;
      }
      *(_BYTE *)(a1 + 144) = PopAction;
      PopAction = 0;
      v19 = *(_DWORD *)(a1 + 104);
      if ( v19 == -1073741536 )
      {
        if ( (*(_BYTE *)(a1 + 144) & 2) != 0 && (dword_1404187AC & 0x80000000) == 0 && (dword_1404187AC & 3) != 0 )
        {
          PopGetPolicyWorker(2);
          goto LABEL_170;
        }
        PopActionRetrieveInitialState(
          (_DWORD *)&qword_1404187A4 + 1,
          (_DWORD *)(a1 + 28),
          &dword_1404187C0,
          (_BYTE *)(a1 + 88));
        if ( (unsigned int)(qword_1404187A4 - 4) <= 2 )
        {
          byte_1404187A2 = 1;
          dword_1404187AC = *(_DWORD *)(a1 + 8);
        }
        *(_DWORD *)(a1 + 104) = 0;
        v19 = 0;
      }
      if ( v19 < 0 )
        goto LABEL_170;
      PopReleasePolicyLock();
      *(_BYTE *)(a1 + 64) = 0;
      *(_DWORD *)(a1 + 376) = 1;
      *(_DWORD *)(a1 + 380) = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, a1 + 376, a1 + 380);
      v20 = (_DWORD *)(a1 + 380);
      if ( (dword_1404187AC & 0x40000000) != 0 )
      {
        *(_DWORD *)(a1 + 376) = 0;
        *v20 = 0;
      }
      if ( !byte_140418886 && !byte_140418874 && !byte_14041887B )
        *v20 = 0;
      PopInitializePowerPolicySimulate();
      dword_1404187C4 = dword_1404187C0;
      v21 = ((unsigned int)dword_1404187AC >> 27) & 2;
      *(_DWORD *)(a1 + 108) = v21;
      PopAdvanceSystemPowerState(&dword_1404187C4, v21, HIDWORD(qword_1404187A4), *v18);
      if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
        break;
      if ( !(unsigned __int8)PopFastS4Check() )
      {
        dword_1404187C8 = dword_1404187C0;
        *(_DWORD *)(a1 + 44) = dword_1404187C0;
        v22 = dword_1404187C0;
        *(_BYTE *)(a1 + 36) = 0;
        goto LABEL_62;
      }
      *(_DWORD *)(a1 + 44) = dword_1404187C0;
      v23 = 0x140000000uLL;
      dword_1404187C8 = 5;
      *(_BYTE *)(a1 + 36) = 1;
      v24 = 6;
LABEL_63:
      *(_DWORD *)(a1 + 68) = v24;
      if ( (unsigned int)v24 > 6 )
        goto LABEL_76;
      v25 = 3LL * v24;
      if ( !qword_140419228[v25] )
        goto LABEL_76;
      if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
      {
        v26 = 6LL;
      }
      else
      {
        if ( byte_1404187A2 )
        {
          PopSetShutdownMarker(v25, 0x140000000uLL);
          goto LABEL_71;
        }
        v26 = (unsigned int)dword_1404187C0;
      }
      PopSetSleepMarker(v26, 0x140000000uLL);
LABEL_71:
      PopAcquirePolicyLock();
      if ( (PopAction & 6) != 0 )
      {
        *(_BYTE *)(a1 + 64) = 1;
        goto LABEL_39;
      }
      PopReleasePolicyLock();
      PopCheckpointSystemSleep(10LL);
      byte_1404187BC = 3;
      LOBYTE(v27) = *v16;
      PopDiagTraceKernelQueriesAllowed(v27);
      if ( !*v16
        || (v28 = PopSetDevicesSystemState(),
            v23 = 0x80000000LL,
            *(_DWORD *)(a1 + 104) = v28,
            (int)(v28 + 0x80000000) < 0)
        || v28 == -1073741536 )
      {
        if ( *(int *)(a1 + 104) >= 0 )
        {
          PopCheckpointSystemSleep(13LL);
          HiberContext = PopAllocateHiberContext();
          *(_DWORD *)(a1 + 104) = HiberContext;
          if ( HiberContext >= 0 )
          {
            *(_DWORD *)(a1 + 112) = PopNotifyTelemetryOsState(
                                      qword_1404187A4,
                                      dword_1404187C0,
                                      dword_1404187C8,
                                      *(_DWORD *)(a1 + 8),
                                      1);
            PopTransitionCheckpoint(9LL, 0LL);
            if ( !byte_1404187A2 )
            {
              PopDiagTracePreSleepNotification(
                *(_DWORD *)(a1 + 44),
                dword_1404187C8,
                dword_1404187B4,
                dword_1404187B8,
                *(_DWORD *)(a1 + 112));
              PopCheckpointSystemSleep(16LL);
              PopUmpoSendFlushSleepStudyLoggerNotification();
            }
            PopEsEnterSleepShutdown();
            PopForceCompleteCsSleepStudySession(dword_1404187B4);
            PopThermalSxEntry(v31);
            if ( !*(_BYTE *)(a1 + 24) )
            {
              if ( byte_1404187A2 )
              {
                v74 = 1;
                v68 = 5;
                v70 = 1;
                v69 = &v74;
                v71 = 11;
                v72 = 0xFFFFF780000002C4uLL;
                v73 = 4;
                RtlSetSystemBootStatusEx(&v68, 2LL, 0LL);
              }
              *(_BYTE *)(a1 + 24) = 1;
            }
            v32 = 5LL;
            if ( !*(_BYTE *)(a1 + 36) )
              v32 = (unsigned int)dword_1404187C0;
            PopFlushVolumes(v32);
            if ( dword_1404187C8 < dword_1404187C0 )
              dword_1404187C8 = dword_1404187C0;
            byte_1404187BC = 2;
            if ( byte_1404187A2 )
            {
              PopFxPrepareDevicesForShutdown();
              IoFreePoDeviceNotifyList(qword_1404187D8 + 48);
              if ( dword_1404187B4 == 2 )
                PopCriticalShutdownInProgress = 1;
              PopTransitionCheckpoint(8LL, 2LL);
              if ( PsGetCurrentProcess() == PsInitialSystemProcess )
                PopGracefulShutdown(0LL);
              PopShutdownWorkItem.Parameter = 0LL;
              PopShutdownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopGracefulShutdown;
              PopShutdownWorkItem.List.Flink = 0LL;
              ExQueueWorkItem(&PopShutdownWorkItem, CriticalWorkQueue);
              KeSuspendThread((__int64)KeGetCurrentThread());
              return -1073741077;
            }
            v33 = *(unsigned int *)(a1 + 68);
            KeMtrrComparisonFailed = 0;
            inited = PopInitSystemSleeperThread(v33, a1 + 264);
            *(_DWORD *)(a1 + 104) = inited;
            if ( inited >= 0 )
            {
              if ( !byte_140418850 )
              {
                ExWakeTimersPause();
                byte_140418850 = 1;
              }
              *(_QWORD *)(a1 + 192) = MEMORY[0xFFFFF78000000008];
              v35 = MEMORY[0xFFFFF78000000014];
              v36 = PopPolicy;
              *(_QWORD *)(a1 + 200) = MEMORY[0xFFFFF78000000014];
              *(_QWORD *)(a1 + 224) = 0LL;
              if ( v36[22]
                && dword_1404187C0 != 5
                && (unsigned __int8)PopIsDozeSupported(&PopCapabilities)
                && (dword_1404187AC & 0x40000000) == 0 )
              {
                v38 = *(_QWORD *)(a1 + 192);
                *(_QWORD *)(a1 + 216) = v38;
                v39 = v38 + 10000000LL * *(unsigned int *)(v37 + 88);
                *(_QWORD *)(a1 + 224) = -1LL;
                goto LABEL_106;
              }
              if ( byte_1404192F4
                && dword_1404187C0 == 5
                && !byte_140418900
                && qword_1404186E8
                && ((dword_1404187B4 - 11) & 0xFFFFFFFD) == 0 )
              {
                v40 = qword_1404186E8 - v35;
                *(_QWORD *)(a1 + 352) = qword_1404186E8 - v35;
                v41 = -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset;
                *(_QWORD *)(a1 + 224) = -2LL;
                v42 = v41 + v40;
                v39 = v42 + *(_QWORD *)(a1 + 192);
                *(_QWORD *)(a1 + 352) = v42;
LABEL_106:
                *(_QWORD *)(a1 + 216) = v39;
              }
              if ( *(_QWORD *)(a1 + 224) == -1LL && !qword_140418860 )
                qword_140418860 = *(_QWORD *)(a1 + 192);
              v43 = &qword_140418808;
              memset(&qword_140418808, 0, 0x48uLL);
              dword_140418800 = 3;
              if ( !byte_140418900 && dword_1404187B4 != 14 )
              {
                v45 = (_DWORD *)(a1 + 376);
                v46 = (_DWORD *)(a1 + 380);
                if ( dword_1404187C0 == 5 && *v45 != 1 && *v46 != 1 )
                {
                  PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, v2, v4);
                  if ( *v2 || *v4 )
                  {
                    v45 = (_DWORD *)(a1 + 376);
                    *v46 = 0;
                    *(_DWORD *)(a1 + 376) = 0;
                  }
                  else
                  {
                    v45 = (_DWORD *)(a1 + 376);
                  }
                }
                if ( *(_QWORD *)(a1 + 216) )
                {
                  if ( *(_QWORD *)(a1 + 224) == -2LL )
                  {
                    if ( *v45 )
                    {
                      qword_140418808 = *(_QWORD *)(a1 + 216);
                      qword_140418818[0] = *(_QWORD *)(a1 + 224);
                    }
                    if ( *v46 )
                    {
                      qword_140418820 = *(_QWORD *)(a1 + 216);
                      qword_140418830 = *(_QWORD *)(a1 + 224);
                    }
                  }
                  else
                  {
                    do
                    {
                      *v43 = *(_QWORD *)(a1 + 216);
                      v43 += 3;
                    }
                    while ( (__int64)v43 < (__int64)&unk_140418838 );
                    v47 = qword_140418818;
                    do
                    {
                      *v47 = *(_QWORD *)(a1 + 224);
                      v47 += 3;
                    }
                    while ( (__int64)v47 < (__int64)&qword_140418848 );
                  }
                }
                v48 = qword_140418858;
                *(_QWORD *)(a1 + 80) = qword_140418858;
                if ( v48 )
                {
                  if ( v48 < *(_QWORD *)(a1 + 192) + 20000000LL )
                    v48 = *(_QWORD *)(a1 + 192) + 20000000LL;
                  *(_QWORD *)(a1 + 80) = v48;
                }
                if ( *v45 )
                {
                  if ( *v45 != 2 || (LOBYTE(v44) = 1, PopSimulate < 0) )
                    LOBYTE(v44) = 0;
                  *(_BYTE *)(a1 + 208) = v44;
                  v49 = (__int64 *)(a1 + 56);
                  v50 = (__int64 *)(a1 + 240);
                  NextWakeTime = ExGetNextWakeTime(
                                   (unsigned int)*(_QWORD *)(a1 + 80) + 1,
                                   *(_QWORD *)(a1 + 216),
                                   v44,
                                   (int)a1 + 56,
                                   a1 + 240);
                  *(_BYTE *)(a1 + 384) = NextWakeTime;
                  if ( NextWakeTime )
                  {
                    qword_140418808 = *v49;
                    qword_140418818[0] = *v50;
                  }
                }
                else
                {
                  v49 = (__int64 *)(a1 + 56);
                  v50 = (__int64 *)(a1 + 240);
                }
                if ( *v46 )
                {
                  if ( *v46 != 2 || (LOBYTE(v44) = 1, PopSimulate < 0) )
                    LOBYTE(v44) = 0;
                  *(_BYTE *)(a1 + 208) = v44;
                  v52 = ExGetNextWakeTime(
                          (unsigned int)*(_QWORD *)(a1 + 80) + 1,
                          *(_QWORD *)(a1 + 216),
                          v44,
                          (_DWORD)v49,
                          (__int64)v50);
                  *(_BYTE *)(a1 + 384) = v52;
                  if ( v52 )
                  {
                    qword_140418820 = *v49;
                    qword_140418830 = *v50;
                  }
                }
              }
              qword_140418810[0] = qword_140418808;
              if ( qword_140418808
                && qword_140418808 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 388) )
              {
                qword_140418810[0] = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 388);
              }
              qword_140418828 = qword_140418820;
              if ( qword_140418820
                && qword_140418820 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 388) )
              {
                qword_140418828 = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 388);
              }
              v53 = qword_140418818[0];
              if ( (unsigned __int64)(qword_140418818[0] - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                v53 = *(int *)(qword_140418818[0] + 8);
              *(_QWORD *)(a1 + 360) = v53;
              v54 = qword_140418830;
              if ( (unsigned __int64)(qword_140418830 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                v54 = *(int *)(qword_140418830 + 8);
              *(_QWORD *)(a1 + 368) = v54;
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              LOBYTE(v56) = 1;
              qword_140418BD0 = PerformanceCounter.QuadPart;
              ExAcquireTimeRefreshLock(v56);
              ExUpdateSystemTimeFromCmos(1, 1u);
              ExReleaseTimeRefreshLock();
              ((void (__fastcall *)(__int64, __int64))off_1403FF300)(qword_140418810[0], qword_140418828);
              PopSetDevicesSystemState();
              PopNewWakeInfo();
              *(_QWORD *)(a1 + 344) = MEMORY[0xFFFFF78000000008];
              *(_DWORD *)(a1 + 148) = dword_14041918C;
              PpmCheckPausePpmEngineForSx();
              KeSetEvent((PRKEVENT)(a1 + 288), 0, 1u);
              KeWaitForSingleObject((PVOID)(a1 + 312), Executive, 0, 0, 0LL);
              qword_140418990 = 0LL;
              *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 340);
              PpmCheckResumePpmEngineFromSx();
              v57 = dword_1404187C0;
              if ( PoResumeFromHibernate )
                v57 = dword_1404187C8;
              dword_1404187CC = v57;
              if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
              {
                *(_DWORD *)(a1 + 44) = 6;
              }
              else
              {
                *(_DWORD *)(a1 + 44) = dword_1404187C0;
                v75 = dword_1404187C0;
              }
              v58 = dword_1404187CC;
              v59 = v75;
              CheckStamp = *(_QWORD *)(a1 + 368);
              v60 = *(_QWORD *)(a1 + 360);
              *(_DWORD *)(a1 + 40) = dword_1404187CC;
              PopDiagTracePostSleepNotification(
                v59,
                dword_1404187C8,
                v58,
                qword_140418810[0],
                qword_140418828,
                v60,
                CheckStamp);
              if ( KeMtrrComparisonFailed )
                PopDiagTraceMtrrError();
              if ( *(int *)(a1 + 104) < 0 && dword_1404187C0 == 5 )
              {
                StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
                RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
                IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
                PopDiagTraceHibernateErrorStatus(*(unsigned int *)(a1 + 104));
              }
LABEL_170:
              if ( byte_140418900 )
              {
                qword_140418DC0 = KeQueryPerformanceCounter(0LL).QuadPart;
                dword_1404188E4 = PopQpcTimeInMs(&qword_140418DB8, &qword_140418DC0);
              }
              if ( *(int *)(a1 + 104) >= 0 )
              {
                qword_1404187F0 = *(_QWORD *)(a1 + 344);
                ExUpdateSystemTimeFromCmos(1, 1u);
                LOBYTE(v61) = 1;
                if ( ((unsigned __int8 (__fastcall *)(__int64))off_1403FF688[0])(v61) )
                  ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
                qword_140418BE8 = KeQueryPerformanceCounter(0LL).QuadPart;
                PfPowerActionNotify(2LL, 0LL, 0LL);
                qword_1404187E8 = MEMORY[0xFFFFF78000000008];
                PopDiagComputeEarlyHiberStats();
                if ( *(_DWORD *)(a1 + 40) == 4 )
                  PopDiagTraceFirmwareS3Stats();
              }
              byte_1404187BD = 1;
              PoPowerDownActionInProgress = 0;
              PoPowerResetActionInProgress = 0;
              RtlBootStatusDisableFlushing(1);
              PpmCheckResumeStatisticsCollection();
              PsIumResumeAfterHibernate();
              if ( qword_1404187D8 )
              {
                PfPowerActionNotify(3LL, 0LL, 0LL);
                PopSetDevicesSystemState();
                PfPowerActionNotify(3LL, 1LL, 0LL);
              }
              v62 = *(void **)(a1 + 240);
              if ( v62 )
              {
                ExDeleteWakeTimerInfo(v62);
                *(_QWORD *)(a1 + 240) = 0LL;
              }
              ((void (__fastcall *)(_QWORD, _QWORD))off_1403FF300)(0LL, 0LL);
              *(_DWORD *)(a1 + 112) = PopNotifyTelemetryOsState(
                                        qword_1404187A4,
                                        dword_1404187C0,
                                        dword_1404187C8,
                                        *(_DWORD *)(a1 + 8),
                                        0);
              PopQueueBatteryStatusTimeout();
              PopExecuteOnTargetProcessors(
                (__int64)KeActiveProcessors,
                (__int64)PpmStartIllegalProcessorThrottleLogging,
                0LL,
                0LL);
              if ( *(_BYTE *)(a1 + 64) )
              {
                PopReleasePolicyLock();
                *(_BYTE *)(a1 + 64) = 0;
              }
              PoClearBroadcast();
              qword_1404187D8 = 0LL;
              PopEsExitSleep();
              PopCurrentPowerStatePrecise(a1 + 156, 0LL);
              *(_DWORD *)(a1 + 152) = dword_14041918C;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
              ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
              PopThermalSxExit(v63);
              if ( !*(_BYTE *)(a1 + 64) )
              {
                PopAcquirePolicyLock();
                *(_BYTE *)(a1 + 64) = 1;
              }
              if ( *(int *)(a1 + 104) >= 0 )
              {
                PopInitSIdle(1LL);
                PopAction = 0;
                if ( (unsigned __int64)dword_140418800 < 3 )
                {
                  qword_140418858 = qword_140418810[3 * dword_140418800];
                  v64 = qword_140418818[3 * dword_140418800];
                  PopFullWake = 0;
                  PopPendingUserPresenceDuringSystemSleep = 0;
                  PopPendingUserPresenceMonitorOnReason = 0;
                  if ( v64 == -1 )
                  {
                    if ( (unsigned __int8)PopDeferDoze(
                                            *(unsigned int *)(a1 + 376),
                                            *(unsigned int *)(a1 + 380),
                                            a1 + 156) )
                      qword_1404187A4 = *(_QWORD *)a1;
                    else
                      qword_1404187A4 = 0x500000002LL;
                    PopAction |= 2u;
LABEL_198:
                    *(_BYTE *)(a1 + 256) = 0;
                  }
                  else if ( v64 == -2 )
                  {
                    if ( !qword_1404187F8 )
                      qword_1404187F8 = qword_1404187E8;
                  }
                  else
                  {
                    v65 = (_DWORD *)(a1 + 380);
                    if ( dword_14041918C == 1 )
                    {
                      if ( !*v65 )
                      {
                        qword_1404187A4 = *(_QWORD *)a1;
                        PopAction = 2;
                        goto LABEL_198;
                      }
                    }
                    else if ( !*v65 && *(_DWORD *)(a1 + 148) == *(_DWORD *)(a1 + 152) )
                    {
                      PopCheckPowerSourceAfterRtcWakeSet();
                    }
                  }
                }
              }
              if ( byte_140418850 && *(_BYTE *)(a1 + 256) )
              {
                ExWakeTimersResume();
                byte_140418850 = 0;
                qword_140418858 = 0LL;
              }
              if ( PoResumeFromHibernate )
              {
                PopBootLoaderTraceProcess();
                PoResumeFromHibernate = 0;
              }
              byte_140418900 = 0;
              PopResetActionDefaults();
              PopSetPowerActionState(2);
              PopReleasePolicyLock();
              if ( PopPendingUserPresenceDuringSystemSleep )
                PoSetUserPresent((unsigned int)PopPendingUserPresenceMonitorOnReason);
              ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
              PopCheckForWork();
              if ( *(int *)(a1 + 104) >= 0 )
                PpmPerfReApplyStates();
              dword_1404187B4 = 16;
              qword_140418D50 = PopCaptureTimeOnProcZero();
              return *(_DWORD *)(a1 + 104);
            }
          }
        }
      }
      else
      {
LABEL_76:
        LOBYTE(v23) = *(_BYTE *)(a1 + 36);
        NextSystemPowerState = PopFindNextSystemPowerState(*v18, v23, a1 + 88);
        *(_BYTE *)(a1 + 48) = NextSystemPowerState;
        if ( !NextSystemPowerState )
          goto LABEL_170;
        *(_DWORD *)(a1 + 104) = 0;
      }
    }
    byte_140418900 = 1;
    *(_BYTE *)(a1 + 36) = 0;
    dword_1404187C8 = 5;
    *(_DWORD *)(a1 + 44) = 6;
    v22 = dword_1404187C0;
LABEL_62:
    v23 = 0x140000000uLL;
    v24 = PopPowerStateHandlerLookup[v22];
    goto LABEL_63;
  }
  ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
  return *(_DWORD *)(a1 + 104);
}
