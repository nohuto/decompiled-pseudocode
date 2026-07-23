/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x140596DBC
 * Callers:
 *     NtSetSystemPowerState @ 0x14059D1A0 (NtSetSystemPowerState.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140006560 (PsGetCurrentServerSilo.c)
 *     PsGetCurrentProcess @ 0x1400065C0 (PsGetCurrentProcess.c)
 *     PsIsHostSilo @ 0x14000A9B0 (PsIsHostSilo.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PopExecuteOnTargetProcessors @ 0x140098ED8 (PopExecuteOnTargetProcessors.c)
 *     PopCheckForWork @ 0x1400D5AC0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400D5B48 (PopGetPolicyWorker.c)
 *     KeSuspendThread @ 0x1400E5C24 (KeSuspendThread.c)
 *     StringCchPrintfW @ 0x140136578 (StringCchPrintfW.c)
 *     PopIgnoreBatteryStatusChange @ 0x14015E270 (PopIgnoreBatteryStatusChange.c)
 *     PopForceCompleteCsSleepStudySession @ 0x14015E298 (PopForceCompleteCsSleepStudySession.c)
 *     ExWakeTimersPause @ 0x14015E2BC (ExWakeTimersPause.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14015E3A8 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14015E3D4 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14015E3FC (PpmCheckResumeStatisticsCollection.c)
 *     PsIumResumeAfterHibernate @ 0x14015E434 (PsIumResumeAfterHibernate.c)
 *     ExWakeTimersResume @ 0x14015E454 (ExWakeTimersResume.c)
 *     PopSetPowerActionState @ 0x14015EE4C (PopSetPowerActionState.c)
 *     PopThermalSxEntry @ 0x140166CE0 (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x140166DB0 (PopThermalSxExit.c)
 *     PopRunMaximumIrpWorkers @ 0x1401684F0 (PopRunMaximumIrpWorkers.c)
 *     PopActionRetrieveInitialState @ 0x140169624 (PopActionRetrieveInitialState.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1401698F4 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140169B64 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PoSetUserPresent @ 0x140181970 (PoSetUserPresent.c)
 *     RtlBootStatusDisableFlushing @ 0x140182504 (RtlBootStatusDisableFlushing.c)
 *     ZwSetSystemPowerState @ 0x1401C40F0 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IoRaiseInformationalHardError @ 0x140298680 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x1402ED9C0 (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1402F3F9C (PopFxPrepareDevicesForShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1402FAF64 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ExDeleteWakeTimerInfo @ 0x14033AFA0 (ExDeleteWakeTimerInfo.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopDiagTracePostSleepNotification @ 0x140595E60 (PopDiagTracePostSleepNotification.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140596040 (PopDiagComputeEarlyHiberStats.c)
 *     PopQpcTimeInMs @ 0x1405960BC (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x1405960F0 (PopCaptureTimeOnProcZero.c)
 *     PopNewWakeInfo @ 0x14059634C (PopNewWakeInfo.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1405969AC (ExUpdateSystemTimeFromCmos.c)
 *     PopSetPowerActionWatchdogState @ 0x140596AA0 (PopSetPowerActionWatchdogState.c)
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 *     PopSetDevicesSystemState @ 0x140596D38 (PopSetDevicesSystemState.c)
 *     PopCheckpointSystemSleep @ 0x1405990B4 (PopCheckpointSystemSleep.c)
 *     IoFreePoDeviceNotifyList @ 0x14059C61C (IoFreePoDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14059C990 (PopFlushVolumes.c)
 *     PopGracefulShutdown @ 0x1405AC850 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1405ADAC8 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x1405ADD28 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x1405ADDB8 (PopDiagTraceMtrrError.c)
 *     ExGetNextWakeTime @ 0x1405AE61C (ExGetNextWakeTime.c)
 *     PopFilterCapabilities @ 0x14066EEE8 (PopFilterCapabilities.c)
 *     PopIsDozeSupported @ 0x14067092C (PopIsDozeSupported.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     PopCheckResiliencyScenarios @ 0x14069EB24 (PopCheckResiliencyScenarios.c)
 *     MmLockPagableSectionByHandle @ 0x1406A14E0 (MmLockPagableSectionByHandle.c)
 *     ExReleaseTimeRefreshLock @ 0x1406A71E0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7200 (ExAcquireTimeRefreshLock.c)
 *     RtlSetSystemBootStatusEx @ 0x1406F16A0 (RtlSetSystemBootStatusEx.c)
 *     PopEsExitSleep @ 0x140726364 (PopEsExitSleep.c)
 *     PopBootLoaderTraceProcess @ 0x140726390 (PopBootLoaderTraceProcess.c)
 *     PpmPerfReApplyStates @ 0x1407263F8 (PpmPerfReApplyStates.c)
 *     PopSetSleepMarker @ 0x14072667C (PopSetSleepMarker.c)
 *     PopExecutePowerAction @ 0x1407274F8 (PopExecutePowerAction.c)
 *     PopTransitionCheckpoint @ 0x140727ABC (PopTransitionCheckpoint.c)
 *     PopNotifyTelemetryOsState @ 0x140727CF4 (PopNotifyTelemetryOsState.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407282EC (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 *     PoClearBroadcast @ 0x140728D88 (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x140728DE4 (PoInitializeBroadcast.c)
 *     PopEsEnterSleepShutdown @ 0x14072A15C (PopEsEnterSleepShutdown.c)
 *     PopInitSystemSleeperThread @ 0x14072A7A8 (PopInitSystemSleeperThread.c)
 *     PopFastS4Check @ 0x14072A904 (PopFastS4Check.c)
 *     PopQueryPowerSettingUlong @ 0x14072A99C (PopQueryPowerSettingUlong.c)
 *     PopEnforceResiliencyScenarios @ 0x14072AA34 (PopEnforceResiliencyScenarios.c)
 *     PopDiagTracePreSleepNotification @ 0x14072AAD4 (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x14072AF14 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopAdvanceSystemPowerState @ 0x14072B050 (PopAdvanceSystemPowerState.c)
 *     ExSwapinWorkerThreads @ 0x14072BB98 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x14072BD9C (CmSetLazyFlushState.c)
 *     PopInitSIdle @ 0x140747214 (PopInitSIdle.c)
 *     PopInitializePowerPolicySimulate @ 0x140748C24 (PopInitializePowerPolicySimulate.c)
 *     PopAcquireTransitionLock @ 0x1407491E0 (PopAcquireTransitionLock.c)
 *     PopCurrentPowerStatePrecise @ 0x140749860 (PopCurrentPowerStatePrecise.c)
 *     PopResetActionDefaults @ 0x140749B24 (PopResetActionDefaults.c)
 *     PopQueueBatteryStatusTimeout @ 0x140749D88 (PopQueueBatteryStatusTimeout.c)
 *     MmZeroPageFileAtShutdown @ 0x140887514 (MmZeroPageFileAtShutdown.c)
 *     PopFindNextSystemPowerState @ 0x1408A1CC4 (PopFindNextSystemPowerState.c)
 *     PopSetShutdownMarker @ 0x1408A2068 (PopSetShutdownMarker.c)
 *     PopZeroHiberFile @ 0x1408A7F2C (PopZeroHiberFile.c)
 *     PopDeferDoze @ 0x1408ABAF0 (PopDeferDoze.c)
 *     PsTerminateServerSilo @ 0x1408C4700 (PsTerminateServerSilo.c)
 */

NTSTATUS __fastcall PopTransitionSystemPowerStateEx(__int64 a1)
{
  int v1; // ebx
  _DWORD *v2; // r13
  _DWORD *v4; // r12
  int v5; // eax
  POWER_ACTION v6; // ecx
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 CurrentServerSilo; // rax
  POWER_ACTION v10; // esi
  int v11; // edx
  int v12; // eax
  bool v13; // cc
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  POWER_ACTION v17; // ecx
  _BYTE *v18; // rsi
  unsigned int v19; // eax
  unsigned int *v20; // r14
  int v21; // eax
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  char NextSystemPowerState; // al
  int HiberContext; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int inited; // eax
  __int64 v37; // r10
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 *v46; // rsi
  int v47; // r8d
  _DWORD *v48; // rdx
  _DWORD *v49; // r14
  __int64 *v50; // rcx
  unsigned __int64 v51; // rcx
  __int64 *v52; // rsi
  __int64 *v53; // r12
  char NextWakeTime; // al
  char v55; // al
  __int64 v56; // rcx
  __int64 v57; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v59; // rcx
  int v60; // ecx
  int v61; // r8d
  int v62; // ecx
  __int64 v63; // rax
  __int64 v64; // rcx
  void *v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  _DWORD *v69; // rax
  __int64 v70; // rdx
  __int64 CheckStamp; // [rsp+30h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v73; // [rsp+50h] [rbp-30h] BYREF
  char *v74; // [rsp+58h] [rbp-28h]
  int v75; // [rsp+60h] [rbp-20h]
  int v76; // [rsp+68h] [rbp-18h]
  unsigned __int64 v77; // [rsp+70h] [rbp-10h]
  int v78; // [rsp+78h] [rbp-8h]
  char v79; // [rsp+C0h] [rbp+40h] BYREF
  int v80; // [rsp+C8h] [rbp+48h]

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
  v80 = 6;
  if ( (unsigned int)(v6 - 1) > 6
    || (*(_DWORD *)(a1 + 8) & 0xCFFFFC0) != 0
    || v6 < PowerActionShutdown && dword_140442FD4 >= 16 )
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
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  v12 = dword_140442FD4;
  v13 = dword_140442FD4 < 16;
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
    PopFilterCapabilities(&PopCapabilities, &unk_140443088);
    if ( byte_140442FC1 )
    {
      if ( byte_140442FC1 != 2 )
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
    *(_QWORD *)&qword_140442FF8 = qword_140442F70;
    PopExecutePowerAction(a1 + 120, 0, a1 + 12, *(_DWORD *)(a1 + 4), 1);
    PopIgnoreBatteryStatusChange();
    PopCheckResiliencyScenarios(v16, v15);
    PopEnforceResiliencyScenarios(a1 + 248);
    PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
    v17 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 6 )
    {
      LODWORD(qword_140442FC4) = 6;
      v17 = *(_DWORD *)a1;
    }
    if ( (unsigned int)(v17 - 4) <= 2 )
    {
      PoPowerDownActionInProgress = 1;
      if ( v17 == PowerActionShutdownReset )
        PoPowerResetActionInProgress = 1;
      if ( *(_QWORD *)&PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
        PopZeroHiberFile(*(HANDLE *)&PopHiberInfo);
    }
    v18 = (_BYTE *)(a1 + 88);
    v19 = *(_DWORD *)a1 - 2;
    *(_BYTE *)(a1 + 88) = 0;
    v20 = (unsigned int *)(a1 + 28);
    *(_DWORD *)(a1 + 28) = 0;
    if ( v19 <= 1 )
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
      if ( !(_DWORD)qword_140442FC4 )
      {
        *(_DWORD *)(a1 + 104) = 0;
        goto LABEL_172;
      }
      *(_BYTE *)(a1 + 144) = PopAction;
      LOBYTE(PopAction) = 0;
      v21 = *(_DWORD *)(a1 + 104);
      if ( v21 == -1073741536 )
      {
        if ( (*(_BYTE *)(a1 + 144) & 2) != 0 && (dword_140442FCC & 0x80000000) == 0 && (dword_140442FCC & 3) != 0 )
        {
          PopGetPolicyWorker(2);
          goto LABEL_172;
        }
        PopActionRetrieveInitialState(
          (_DWORD *)&qword_140442FC4 + 1,
          (_DWORD *)(a1 + 28),
          &dword_140442FE0,
          (_BYTE *)(a1 + 88));
        if ( (unsigned int)(qword_140442FC4 - 4) <= 2 )
        {
          byte_140442FC2 = 1;
          dword_140442FCC = *(_DWORD *)(a1 + 8);
        }
        *(_DWORD *)(a1 + 104) = 0;
        v21 = 0;
      }
      if ( v21 < 0 )
        goto LABEL_172;
      PopReleasePolicyLock();
      *(_BYTE *)(a1 + 64) = 0;
      *(_DWORD *)(a1 + 376) = 1;
      *(_DWORD *)(a1 + 380) = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, a1 + 376, a1 + 380);
      v22 = (_DWORD *)(a1 + 380);
      if ( (dword_140442FCC & 0x40000000) != 0 )
      {
        *(_DWORD *)(a1 + 376) = 0;
        *v22 = 0;
      }
      if ( !byte_1404430A6 && !byte_140443094 && !byte_14044309B )
        *v22 = 0;
      PopInitializePowerPolicySimulate();
      dword_140442FE4 = dword_140442FE0;
      v23 = ((unsigned int)dword_140442FCC >> 27) & 2;
      *(_DWORD *)(a1 + 108) = v23;
      PopAdvanceSystemPowerState(&dword_140442FE4, v23, HIDWORD(qword_140442FC4), *v20);
      if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
        break;
      if ( !(unsigned __int8)PopFastS4Check() )
      {
        dword_140442FE8 = dword_140442FE0;
        *(_DWORD *)(a1 + 44) = dword_140442FE0;
        v25 = dword_140442FE0;
        *(_BYTE *)(a1 + 36) = 0;
        goto LABEL_62;
      }
      *(_DWORD *)(a1 + 44) = dword_140442FE0;
      v26 = 6;
      dword_140442FE8 = 5;
      *(_BYTE *)(a1 + 36) = 1;
LABEL_63:
      *(_DWORD *)(a1 + 68) = v26;
      if ( v26 > 6 || !qword_140443AC8[3 * (int)v26] )
        goto LABEL_76;
      if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
      {
        v27 = 6LL;
      }
      else
      {
        if ( byte_140442FC2 )
        {
          PopSetShutdownMarker();
          goto LABEL_71;
        }
        v27 = (unsigned int)dword_140442FE0;
      }
      PopSetSleepMarker(v27);
LABEL_71:
      PopAcquirePolicyLock();
      if ( (PopAction & 6) != 0 )
      {
        *(_BYTE *)(a1 + 64) = 1;
        goto LABEL_39;
      }
      PopReleasePolicyLock();
      PopCheckpointSystemSleep(10LL);
      byte_140442FDC = 3;
      LOBYTE(v28) = *v18;
      PopDiagTraceKernelQueriesAllowed(v28);
      if ( !*v18
        || (v29 = PopSetDevicesSystemState(),
            v24 = 0x80000000LL,
            *(_DWORD *)(a1 + 104) = v29,
            (int)(v29 + 0x80000000) < 0)
        || v29 == -1073741536 )
      {
        if ( *(int *)(a1 + 104) >= 0 )
        {
          PopCheckpointSystemSleep(13LL);
          HiberContext = PopAllocateHiberContext();
          *(_DWORD *)(a1 + 104) = HiberContext;
          if ( HiberContext >= 0 )
          {
            *(_DWORD *)(a1 + 112) = PopNotifyTelemetryOsState(
                                      qword_140442FC4,
                                      dword_140442FE0,
                                      dword_140442FE8,
                                      *(_DWORD *)(a1 + 8),
                                      1);
            PopTransitionCheckpoint(9LL, 0LL);
            if ( !byte_140442FC2 )
            {
              PopDiagTracePreSleepNotification(
                *(_DWORD *)(a1 + 44),
                dword_140442FE8,
                dword_140442FD4,
                dword_140442FD8,
                *(_DWORD *)(a1 + 112));
              PopCheckpointSystemSleep(16LL);
              PopUmpoSendFlushSleepStudyLoggerNotification();
            }
            PopEsEnterSleepShutdown();
            PopForceCompleteCsSleepStudySession(dword_140442FD4);
            PopThermalSxEntry(v33, v32);
            if ( !*(_BYTE *)(a1 + 24) )
            {
              if ( byte_140442FC2 )
              {
                v79 = 1;
                v73 = 5;
                v75 = 1;
                v74 = &v79;
                v76 = 11;
                v77 = 0xFFFFF780000002C4uLL;
                v78 = 4;
                RtlSetSystemBootStatusEx(&v73, 2LL, 0LL);
              }
              *(_BYTE *)(a1 + 24) = 1;
            }
            v34 = 5LL;
            if ( !*(_BYTE *)(a1 + 36) )
              v34 = (unsigned int)dword_140442FE0;
            PopFlushVolumes(v34);
            if ( dword_140442FE8 < dword_140442FE0 )
              dword_140442FE8 = dword_140442FE0;
            byte_140442FDC = 2;
            if ( byte_140442FC2 )
            {
              PopFxPrepareDevicesForShutdown();
              IoFreePoDeviceNotifyList(*(_QWORD *)&qword_140442FF8 + 48LL);
              if ( dword_140442FD4 == 2 )
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
            v35 = *(unsigned int *)(a1 + 68);
            KeMtrrComparisonFailed = 0;
            inited = PopInitSystemSleeperThread(v35, a1 + 264);
            *(_DWORD *)(a1 + 104) = inited;
            if ( inited >= 0 )
            {
              if ( !byte_140443070 )
              {
                ExWakeTimersPause();
                byte_140443070 = 1;
              }
              *(_QWORD *)(a1 + 192) = MEMORY[0xFFFFF78000000008];
              v37 = MEMORY[0xFFFFF78000000014];
              v38 = PopWakeAlarmTimeOverride;
              *(_QWORD *)(a1 + 200) = MEMORY[0xFFFFF78000000014];
              *(_QWORD *)(a1 + 224) = 0LL;
              if ( v38 )
              {
                *(_QWORD *)(a1 + 216) = v38;
                *(_QWORD *)(a1 + 224) = -3LL;
              }
              else if ( !*((_DWORD *)PopPolicy + 22)
                     || dword_140442FE0 == 5
                     || !(unsigned __int8)PopIsDozeSupported(&PopCapabilities)
                     || (dword_140442FCC & 0x40000000) != 0 )
              {
                if ( byte_140443B94
                  && dword_140442FE0 == 5
                  && !byte_1404433C0
                  && qword_140442F28
                  && ((dword_140442FD4 - 11) & 0xFFFFFFFD) == 0 )
                {
                  v42 = qword_140442F28 - v37;
                  *(_QWORD *)(a1 + 352) = qword_140442F28 - v37;
                  v43 = -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset;
                  *(_QWORD *)(a1 + 224) = -2LL;
                  v44 = v43 + v42;
                  v45 = *(_QWORD *)(a1 + 192);
                  *(_QWORD *)(a1 + 352) = v44;
                  *(_QWORD *)(a1 + 216) = v44 + v45;
                }
              }
              else
              {
                v40 = *(_QWORD *)(a1 + 192);
                *(_QWORD *)(a1 + 216) = v40;
                v41 = *(unsigned int *)(v39 + 88);
                *(_QWORD *)(a1 + 224) = -1LL;
                *(_QWORD *)(a1 + 216) = v40 + 10000000 * v41;
                if ( !qword_140443080 )
                  qword_140443080 = v40;
              }
              v46 = &qword_140443028;
              memset(&qword_140443028, 0, 0x48uLL);
              dword_140443020 = 3;
              if ( *(_QWORD *)(a1 + 224) == -3LL )
              {
                do
                {
                  v46[2] = *(_QWORD *)(a1 + 224);
                  *v46 = *(_QWORD *)(a1 + 216);
                  v46 += 3;
                }
                while ( (__int64)v46 < (__int64)&unk_140443058 );
              }
              else if ( !byte_1404433C0 && dword_140442FD4 != 14 )
              {
                v48 = (_DWORD *)(a1 + 376);
                v49 = (_DWORD *)(a1 + 380);
                if ( dword_140442FE0 == 5 && *v48 != 1 && *v49 != 1 )
                {
                  PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, v2, v4);
                  if ( *v2 || *v4 )
                  {
                    v48 = (_DWORD *)(a1 + 376);
                    *v49 = 0;
                    *(_DWORD *)(a1 + 376) = 0;
                  }
                  else
                  {
                    v48 = (_DWORD *)(a1 + 376);
                  }
                }
                if ( *(_QWORD *)(a1 + 216) )
                {
                  if ( *(_QWORD *)(a1 + 224) == -2LL )
                  {
                    if ( *v48 )
                    {
                      qword_140443028 = *(_QWORD *)(a1 + 216);
                      qword_140443038[0] = *(_QWORD *)(a1 + 224);
                    }
                    if ( *v49 )
                    {
                      qword_140443040 = *(_QWORD *)(a1 + 216);
                      qword_140443050 = *(_QWORD *)(a1 + 224);
                    }
                  }
                  else
                  {
                    do
                    {
                      *v46 = *(_QWORD *)(a1 + 216);
                      v46 += 3;
                    }
                    while ( (__int64)v46 < (__int64)&unk_140443058 );
                    v50 = qword_140443038;
                    do
                    {
                      *v50 = *(_QWORD *)(a1 + 224);
                      v50 += 3;
                    }
                    while ( (__int64)v50 < (__int64)&qword_140443068 );
                  }
                }
                v51 = qword_140443078;
                *(_QWORD *)(a1 + 80) = qword_140443078;
                if ( v51 )
                {
                  if ( v51 < *(_QWORD *)(a1 + 192) + 20000000LL )
                    v51 = *(_QWORD *)(a1 + 192) + 20000000LL;
                  *(_QWORD *)(a1 + 80) = v51;
                }
                if ( *v48 )
                {
                  if ( *v48 != 2 || (LOBYTE(v47) = 1, PopSimulate < 0) )
                    LOBYTE(v47) = 0;
                  *(_BYTE *)(a1 + 209) = v47;
                  v52 = (__int64 *)(a1 + 56);
                  v53 = (__int64 *)(a1 + 240);
                  NextWakeTime = ExGetNextWakeTime(
                                   (unsigned int)*(_QWORD *)(a1 + 80) + 1,
                                   *(_QWORD *)(a1 + 216),
                                   v47,
                                   (int)a1 + 56,
                                   a1 + 240);
                  *(_BYTE *)(a1 + 384) = NextWakeTime;
                  if ( NextWakeTime )
                  {
                    qword_140443028 = *v52;
                    qword_140443038[0] = *v53;
                  }
                }
                else
                {
                  v52 = (__int64 *)(a1 + 56);
                  v53 = (__int64 *)(a1 + 240);
                }
                if ( *v49 )
                {
                  if ( *v49 != 2 || (LOBYTE(v47) = 1, PopSimulate < 0) )
                    LOBYTE(v47) = 0;
                  *(_BYTE *)(a1 + 209) = v47;
                  v55 = ExGetNextWakeTime(
                          (unsigned int)*(_QWORD *)(a1 + 80) + 1,
                          *(_QWORD *)(a1 + 216),
                          v47,
                          (_DWORD)v52,
                          (__int64)v53);
                  *(_BYTE *)(a1 + 384) = v55;
                  if ( v55 )
                  {
                    qword_140443040 = *v52;
                    qword_140443050 = *v53;
                  }
                }
              }
              qword_140443030[0] = qword_140443028;
              if ( qword_140443028
                && qword_140443028 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 388) )
              {
                qword_140443030[0] = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 388);
              }
              qword_140443048 = qword_140443040;
              if ( qword_140443040
                && qword_140443040 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 388) )
              {
                qword_140443048 = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 388);
              }
              v56 = qword_140443038[0];
              if ( (unsigned __int64)(qword_140443038[0] - 1) <= 0xFFFFFFFFFFFFFFFBuLL )
                v56 = *(int *)(qword_140443038[0] + 8);
              *(_QWORD *)(a1 + 360) = v56;
              v57 = qword_140443050;
              if ( (unsigned __int64)(qword_140443050 - 1) <= 0xFFFFFFFFFFFFFFFBuLL )
                v57 = *(int *)(qword_140443050 + 8);
              *(_QWORD *)(a1 + 368) = v57;
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              LOBYTE(v59) = 1;
              qword_140443470 = PerformanceCounter.QuadPart;
              ExAcquireTimeRefreshLock(v59);
              ExUpdateSystemTimeFromCmos(1, 1u);
              ExReleaseTimeRefreshLock();
              ((void (__fastcall *)(__int64, __int64))off_140424300)(qword_140443030[0], qword_140443048);
              PopBootStatCheckpointAvailable = 0;
              PopSetDevicesSystemState();
              PopNewWakeInfo();
              *(_QWORD *)(a1 + 344) = MEMORY[0xFFFFF78000000008];
              *(_DWORD *)(a1 + 148) = dword_140443A2C;
              PpmCheckPausePpmEngineForSx();
              KeSetEvent((PRKEVENT)(a1 + 288), 0, 1u);
              KeWaitForSingleObject((PVOID)(a1 + 312), Executive, 0, 0, 0LL);
              BugCheckParameter4 = 0LL;
              *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 340);
              PopAcquirePolicyLock();
              PopSetPowerActionWatchdogState(2u);
              PopReleasePolicyLock();
              PpmCheckResumePpmEngineFromSx();
              v60 = dword_140442FE0;
              if ( PoResumeFromHibernate )
                v60 = dword_140442FE8;
              dword_140442FEC = v60;
              if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
              {
                *(_DWORD *)(a1 + 44) = 6;
              }
              else
              {
                *(_DWORD *)(a1 + 44) = dword_140442FE0;
                v80 = dword_140442FE0;
              }
              v61 = dword_140442FEC;
              v62 = v80;
              CheckStamp = *(_QWORD *)(a1 + 368);
              v63 = *(_QWORD *)(a1 + 360);
              *(_DWORD *)(a1 + 40) = dword_140442FEC;
              PopDiagTracePostSleepNotification(
                v62,
                dword_140442FE8,
                v61,
                qword_140443030[0],
                qword_140443048,
                v63,
                CheckStamp);
              if ( KeMtrrComparisonFailed )
                PopDiagTraceMtrrError();
              if ( *(int *)(a1 + 104) < 0 && dword_140442FE0 == 5 )
              {
                *(_QWORD *)&DestinationString.Length = 0LL;
                DestinationString.Buffer = 0LL;
                StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
                RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
                IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
                PopDiagTraceHibernateErrorStatus(*(unsigned int *)(a1 + 104));
              }
LABEL_172:
              if ( byte_1404433C0 )
              {
                qword_140443660 = KeQueryPerformanceCounter(0LL).QuadPart;
                dword_1404433A4 = PopQpcTimeInMs(&qword_140443658, &qword_140443660);
              }
              if ( *(int *)(a1 + 104) >= 0 )
              {
                qword_140443010 = *(_QWORD *)(a1 + 344);
                ExUpdateSystemTimeFromCmos(1, 1u);
                LOBYTE(v64) = 1;
                if ( ((unsigned __int8 (__fastcall *)(__int64))off_140424688[0])(v64) )
                  *(_BYTE *)(a1 + 208) = 1;
                qword_140443488 = KeQueryPerformanceCounter(0LL).QuadPart;
                PfPowerActionNotify(2, 0LL, 0);
                qword_140443008 = MEMORY[0xFFFFF78000000008];
                PopDiagComputeEarlyHiberStats();
                if ( *(_DWORD *)(a1 + 40) == 4 )
                  PopDiagTraceFirmwareS3Stats();
              }
              byte_140442FDD = 1;
              PoPowerDownActionInProgress = 0;
              PoPowerResetActionInProgress = 0;
              PpmCheckResumeStatisticsCollection();
              PsIumResumeAfterHibernate();
              if ( *(_QWORD *)&qword_140442FF8 )
              {
                PfPowerActionNotify(3, 0LL, 0);
                PopSetDevicesSystemState();
                PfPowerActionNotify(3, 1LL, 0);
              }
              if ( *(_BYTE *)(a1 + 208) )
                ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
              if ( !PopSleepReliabilityDetailedDiagnosticsReg )
                RtlBootStatusDisableFlushing(1);
              PopBootStatCheckpointAvailable = 1;
              PopCheckpointSystemSleep(56LL);
              v65 = *(void **)(a1 + 240);
              if ( v65 )
              {
                ExDeleteWakeTimerInfo(v65);
                *(_QWORD *)(a1 + 240) = 0LL;
              }
              ((void (__fastcall *)(_QWORD, _QWORD))off_140424300)(0LL, 0LL);
              *(_DWORD *)(a1 + 112) = PopNotifyTelemetryOsState(
                                        qword_140442FC4,
                                        dword_140442FE0,
                                        dword_140442FE8,
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
              *(_QWORD *)&qword_140442FF8 = 0LL;
              PopEsExitSleep();
              PopCurrentPowerStatePrecise(a1 + 156, 0LL);
              *(_DWORD *)(a1 + 152) = dword_140443A2C;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
              ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
              PopThermalSxExit(v67, v66);
              if ( !*(_BYTE *)(a1 + 64) )
              {
                PopAcquirePolicyLock();
                *(_BYTE *)(a1 + 64) = 1;
              }
              if ( *(int *)(a1 + 104) >= 0 )
              {
                PopInitSIdle(1LL);
                LOBYTE(PopAction) = 0;
                if ( (unsigned __int64)dword_140443020 < 3 )
                {
                  qword_140443078 = qword_140443030[3 * dword_140443020];
                  v68 = qword_140443038[3 * dword_140443020];
                  PopFullWake = 0;
                  PopPendingUserPresenceDuringSystemSleep = 0;
                  PopPendingUserPresenceMonitorOnReason = 0;
                  switch ( v68 )
                  {
                    case -1LL:
                      if ( (unsigned __int8)PopDeferDoze(
                                              *(unsigned int *)(a1 + 376),
                                              *(unsigned int *)(a1 + 380),
                                              a1 + 156) )
                        qword_140442FC4 = *(_QWORD *)a1;
                      else
                        qword_140442FC4 = 0x500000002LL;
                      LOBYTE(PopAction) = PopAction | 2;
LABEL_206:
                      *(_BYTE *)(a1 + 256) = 0;
                      break;
                    case -2LL:
                      if ( !qword_140443018 )
                        qword_140443018 = qword_140443008;
                      break;
                    case -3LL:
                      PopWakeAlarmTimeOverride = 0LL;
                      break;
                    default:
                      v69 = (_DWORD *)(a1 + 380);
                      if ( dword_140443A2C == 1 )
                      {
                        if ( !*v69 )
                        {
                          qword_140442FC4 = *(_QWORD *)a1;
                          LOBYTE(PopAction) = 2;
                          goto LABEL_206;
                        }
                      }
                      else if ( !*v69 && *(_DWORD *)(a1 + 148) == *(_DWORD *)(a1 + 152) )
                      {
                        PopCheckPowerSourceAfterRtcWakeSet();
                      }
                      break;
                  }
                }
              }
              if ( byte_140443070 && *(_BYTE *)(a1 + 256) )
              {
                ExWakeTimersResume();
                byte_140443070 = 0;
                qword_140443078 = 0LL;
              }
              if ( PoResumeFromHibernate )
              {
                PopBootLoaderTraceProcess();
                PoResumeFromHibernate = 0;
              }
              byte_1404433C0 = 0;
              PopResetActionDefaults();
              PopSetPowerActionState(2);
              PopReleasePolicyLock();
              if ( PopPendingUserPresenceDuringSystemSleep )
                PoSetUserPresent((unsigned int)PopPendingUserPresenceMonitorOnReason, v70);
              ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
              PopCheckForWork();
              if ( *(int *)(a1 + 104) >= 0 )
                PpmPerfReApplyStates();
              dword_140442FD4 = 16;
              qword_1404435F0 = PopCaptureTimeOnProcZero();
              return *(_DWORD *)(a1 + 104);
            }
          }
        }
      }
      else
      {
LABEL_76:
        LOBYTE(v24) = *(_BYTE *)(a1 + 36);
        NextSystemPowerState = PopFindNextSystemPowerState(*v20, v24, a1 + 88);
        *(_BYTE *)(a1 + 48) = NextSystemPowerState;
        if ( !NextSystemPowerState )
          goto LABEL_172;
        *(_DWORD *)(a1 + 104) = 0;
      }
    }
    byte_1404433C0 = 1;
    *(_BYTE *)(a1 + 36) = 0;
    dword_140442FE8 = 5;
    *(_DWORD *)(a1 + 44) = 6;
    v25 = dword_140442FE0;
LABEL_62:
    v26 = PopPowerStateHandlerLookup[v25];
    goto LABEL_63;
  }
  ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
  return *(_DWORD *)(a1 + 104);
}
