/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x140566D74
 * Callers:
 *     NtSetSystemPowerState @ 0x14056DF00 (NtSetSystemPowerState.c)
 * Callees:
 *     PopCheckForWork @ 0x140010620 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400106A8 (PopGetPolicyWorker.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PopExecuteOnTargetProcessors @ 0x1400A5EC8 (PopExecuteOnTargetProcessors.c)
 *     PsIsHostSilo @ 0x1400B8A80 (PsIsHostSilo.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 *     PsGetCurrentProcess @ 0x1400F1330 (PsGetCurrentProcess.c)
 *     KeSuspendThread @ 0x1400F2668 (KeSuspendThread.c)
 *     StringCchPrintfW @ 0x140134B04 (StringCchPrintfW.c)
 *     PopIgnoreBatteryStatusChange @ 0x1401424E8 (PopIgnoreBatteryStatusChange.c)
 *     PopForceCompleteCsSleepStudySession @ 0x140142510 (PopForceCompleteCsSleepStudySession.c)
 *     PopThermalSxEntry @ 0x140142534 (PopThermalSxEntry.c)
 *     ExWakeTimersPause @ 0x1401427E0 (ExWakeTimersPause.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1401428CC (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1401428F8 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x140142920 (PpmCheckResumeStatisticsCollection.c)
 *     PsIumResumeAfterHibernate @ 0x140142958 (PsIumResumeAfterHibernate.c)
 *     PopThermalSxExit @ 0x140142978 (PopThermalSxExit.c)
 *     ExWakeTimersResume @ 0x140142A40 (ExWakeTimersResume.c)
 *     PopSetPowerActionState @ 0x140143424 (PopSetPowerActionState.c)
 *     PopRunMaximumIrpWorkers @ 0x14015877C (PopRunMaximumIrpWorkers.c)
 *     PopActionRetrieveInitialState @ 0x140159604 (PopActionRetrieveInitialState.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14015978C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1401599A4 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PoSetUserPresent @ 0x140177770 (PoSetUserPresent.c)
 *     RtlBootStatusDisableFlushing @ 0x1401785EC (RtlBootStatusDisableFlushing.c)
 *     ZwSetSystemPowerState @ 0x1401BB610 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA70 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     IoRaiseInformationalHardError @ 0x140283500 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x1402D3660 (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1402D8D74 (PopFxPrepareDevicesForShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1402DE77C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ExDeleteWakeTimerInfo @ 0x14031C5A0 (ExDeleteWakeTimerInfo.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopDiagTracePostSleepNotification @ 0x1405661A0 (PopDiagTracePostSleepNotification.c)
 *     PopDiagComputeEarlyHiberStats @ 0x1405663A4 (PopDiagComputeEarlyHiberStats.c)
 *     PopQpcTimeInMs @ 0x140566420 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x140566454 (PopCaptureTimeOnProcZero.c)
 *     PopNewWakeInfo @ 0x140566640 (PopNewWakeInfo.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140566B6C (ExUpdateSystemTimeFromCmos.c)
 *     PfPowerActionNotify @ 0x140567F10 (PfPowerActionNotify.c)
 *     PopSetDevicesSystemState @ 0x140568154 (PopSetDevicesSystemState.c)
 *     PopCheckpointSystemSleep @ 0x140569714 (PopCheckpointSystemSleep.c)
 *     IoFreePoDeviceNotifyList @ 0x14056D534 (IoFreePoDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14056D750 (PopFlushVolumes.c)
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14057DC00 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x14057DE60 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x14057DEF0 (PopDiagTraceMtrrError.c)
 *     ExGetNextWakeTime @ 0x14057E734 (ExGetNextWakeTime.c)
 *     PopCheckResiliencyScenarios @ 0x140589E14 (PopCheckResiliencyScenarios.c)
 *     PopIsDozeSupported @ 0x1405B0814 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1405B0968 (PopFilterCapabilities.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     MmLockPagableSectionByHandle @ 0x14061F240 (MmLockPagableSectionByHandle.c)
 *     ExAcquireTimeRefreshLock @ 0x14066583C (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406BEBF8 (ExReleaseTimeRefreshLock.c)
 *     PopInitSystemSleeperThread @ 0x1406DCE64 (PopInitSystemSleeperThread.c)
 *     PopEsExitSleep @ 0x1406DCF3C (PopEsExitSleep.c)
 *     PopBootLoaderTraceProcess @ 0x1406DCF68 (PopBootLoaderTraceProcess.c)
 *     PpmPerfReApplyStates @ 0x1406DCFD0 (PpmPerfReApplyStates.c)
 *     PopSetSleepMarker @ 0x1406DD1BC (PopSetSleepMarker.c)
 *     PopExecutePowerAction @ 0x1406DE0F0 (PopExecutePowerAction.c)
 *     PopTransitionCheckpoint @ 0x1406DE5E0 (PopTransitionCheckpoint.c)
 *     PopNotifyTelemetryOsState @ 0x1406DE7F8 (PopNotifyTelemetryOsState.c)
 *     PopNotifyCallbacksPreSleep @ 0x1406DEF8C (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x1406DF534 (PopAllocateHiberContext.c)
 *     ExSwapinWorkerThreads @ 0x1406E031C (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x1406E0520 (CmSetLazyFlushState.c)
 *     PoClearBroadcast @ 0x1406E0A48 (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x1406E0AA4 (PoInitializeBroadcast.c)
 *     PopEsEnterSleepShutdown @ 0x1406E196C (PopEsEnterSleepShutdown.c)
 *     PopFastS4Check @ 0x1406E1EE8 (PopFastS4Check.c)
 *     PopQueryPowerSettingUlong @ 0x1406E1FCC (PopQueryPowerSettingUlong.c)
 *     PopEnforceResiliencyScenarios @ 0x1406E2064 (PopEnforceResiliencyScenarios.c)
 *     PopDiagTracePreSleepNotification @ 0x1406E2104 (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x1406E2404 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopAdvanceSystemPowerState @ 0x1406E2540 (PopAdvanceSystemPowerState.c)
 *     PopCurrentPowerStatePrecise @ 0x14071C190 (PopCurrentPowerStatePrecise.c)
 *     PopInitSIdle @ 0x14071C5BC (PopInitSIdle.c)
 *     PopInitializePowerPolicySimulate @ 0x14071E374 (PopInitializePowerPolicySimulate.c)
 *     PopAcquireTransitionLock @ 0x14071E6A8 (PopAcquireTransitionLock.c)
 *     PopResetActionDefaults @ 0x14071EDCC (PopResetActionDefaults.c)
 *     PopQueueBatteryStatusTimeout @ 0x14071F02C (PopQueueBatteryStatusTimeout.c)
 *     MmZeroPageFileAtShutdown @ 0x14084C784 (MmZeroPageFileAtShutdown.c)
 *     PopFindNextSystemPowerState @ 0x140865F2C (PopFindNextSystemPowerState.c)
 *     PopSetShutdownMarker @ 0x140866320 (PopSetShutdownMarker.c)
 *     PopZeroHiberFile @ 0x14086BDD0 (PopZeroHiberFile.c)
 *     PopDeferDoze @ 0x14086F710 (PopDeferDoze.c)
 *     PsTerminateServerSilo @ 0x140886A70 (PsTerminateServerSilo.c)
 *     RtlSetSystemBootStatusEx @ 0x140895F00 (RtlSetSystemBootStatusEx.c)
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
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  char NextSystemPowerState; // al
  int HiberContext; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int inited; // eax
  __int64 v38; // r10
  _DWORD *v39; // r9
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
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
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  void *v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rax
  _DWORD *v74; // rax
  __int64 v75; // [rsp+30h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v77; // [rsp+50h] [rbp-30h] BYREF
  char *v78; // [rsp+58h] [rbp-28h]
  int v79; // [rsp+60h] [rbp-20h]
  int v80; // [rsp+68h] [rbp-18h]
  unsigned __int64 v81; // [rsp+70h] [rbp-10h]
  int v82; // [rsp+78h] [rbp-8h]
  char v83; // [rsp+C0h] [rbp+40h] BYREF
  int v84; // [rsp+C8h] [rbp+48h]

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
  v84 = 6;
  if ( (unsigned int)(v6 - 1) > 6
    || (*(_DWORD *)(a1 + 8) & 0xCFFFFC0) != 0
    || v6 < PowerActionShutdown && dword_140417714 >= 16 )
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
  v12 = dword_140417714;
  v13 = dword_140417714 < 16;
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
    PopFilterCapabilities(&PopCapabilities, &unk_1404177C8);
    if ( byte_140417701 )
    {
      if ( byte_140417701 != 2 )
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
    qword_140417738 = (__int64)qword_1404176B0;
    PopExecutePowerAction(a1 + 120, 0, a1 + 12, *(_DWORD *)(a1 + 4), 1);
    PopIgnoreBatteryStatusChange();
    PopCheckResiliencyScenarios();
    PopEnforceResiliencyScenarios(a1 + 248);
    PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
    v15 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 6 )
    {
      LODWORD(qword_140417704) = 6;
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
      if ( !(_DWORD)qword_140417704 )
      {
        *(_DWORD *)(a1 + 104) = 0;
        goto LABEL_170;
      }
      *(_BYTE *)(a1 + 144) = PopAction;
      PopAction = 0;
      v19 = *(_DWORD *)(a1 + 104);
      if ( v19 == -1073741536 )
      {
        if ( (*(_BYTE *)(a1 + 144) & 2) != 0 && (dword_14041770C & 0x80000000) == 0 && (dword_14041770C & 3) != 0 )
        {
          PopGetPolicyWorker(2);
          goto LABEL_170;
        }
        PopActionRetrieveInitialState(
          (_DWORD *)&qword_140417704 + 1,
          (_DWORD *)(a1 + 28),
          &dword_140417720,
          (_BYTE *)(a1 + 88));
        if ( (unsigned int)(qword_140417704 - 4) <= 2 )
        {
          byte_140417702 = 1;
          dword_14041770C = *(_DWORD *)(a1 + 8);
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
      if ( (dword_14041770C & 0x40000000) != 0 )
      {
        *(_DWORD *)(a1 + 376) = 0;
        *v20 = 0;
      }
      if ( !byte_1404177E6 && !byte_1404177D4 && !byte_1404177DB )
        *v20 = 0;
      PopInitializePowerPolicySimulate();
      dword_140417724 = dword_140417720;
      v21 = ((unsigned int)dword_14041770C >> 27) & 2;
      *(_DWORD *)(a1 + 108) = v21;
      PopAdvanceSystemPowerState(&dword_140417724, v21, HIDWORD(qword_140417704), *v18);
      if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
        break;
      if ( !(unsigned __int8)PopFastS4Check() )
      {
        dword_140417728 = dword_140417720;
        *(_DWORD *)(a1 + 44) = dword_140417720;
        v22 = dword_140417720;
        *(_BYTE *)(a1 + 36) = 0;
        goto LABEL_62;
      }
      *(_DWORD *)(a1 + 44) = dword_140417720;
      v23 = 0x140000000uLL;
      dword_140417728 = 5;
      *(_BYTE *)(a1 + 36) = 1;
      v24 = 6;
LABEL_63:
      *(_DWORD *)(a1 + 68) = v24;
      if ( (unsigned int)v24 > 6 )
        goto LABEL_76;
      v25 = 3LL * v24;
      if ( !qword_140418168[v25] )
        goto LABEL_76;
      if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
      {
        v26 = 6LL;
      }
      else
      {
        if ( byte_140417702 )
        {
          PopSetShutdownMarker(v25, 0x140000000uLL);
          goto LABEL_71;
        }
        v26 = (unsigned int)dword_140417720;
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
      byte_14041771C = 3;
      LOBYTE(v27) = *v16;
      PopDiagTraceKernelQueriesAllowed(v27);
      if ( !*v16
        || (v31 = PopSetDevicesSystemState(v29, v28, v30),
            v23 = 0x80000000LL,
            *(_DWORD *)(a1 + 104) = v31,
            (int)(v31 + 0x80000000) < 0)
        || v31 == -1073741536 )
      {
        if ( *(int *)(a1 + 104) >= 0 )
        {
          PopCheckpointSystemSleep(13LL);
          HiberContext = PopAllocateHiberContext();
          *(_DWORD *)(a1 + 104) = HiberContext;
          if ( HiberContext >= 0 )
          {
            *(_DWORD *)(a1 + 112) = PopNotifyTelemetryOsState(
                                      qword_140417704,
                                      dword_140417720,
                                      dword_140417728,
                                      *(_DWORD *)(a1 + 8),
                                      1);
            PopTransitionCheckpoint(9LL, 0LL);
            if ( !byte_140417702 )
            {
              PopDiagTracePreSleepNotification(
                *(_DWORD *)(a1 + 44),
                dword_140417728,
                dword_140417714,
                dword_140417718,
                *(_DWORD *)(a1 + 112));
              PopCheckpointSystemSleep(16LL);
              PopUmpoSendFlushSleepStudyLoggerNotification();
            }
            PopEsEnterSleepShutdown();
            PopForceCompleteCsSleepStudySession(dword_140417714);
            PopThermalSxEntry(v34);
            if ( !*(_BYTE *)(a1 + 24) )
            {
              if ( byte_140417702 )
              {
                v83 = 1;
                v77 = 5;
                v79 = 1;
                v78 = &v83;
                v80 = 11;
                v81 = 0xFFFFF780000002C4uLL;
                v82 = 4;
                RtlSetSystemBootStatusEx(&v77, 2LL, 0LL);
              }
              *(_BYTE *)(a1 + 24) = 1;
            }
            v35 = 5LL;
            if ( !*(_BYTE *)(a1 + 36) )
              v35 = (unsigned int)dword_140417720;
            PopFlushVolumes(v35);
            if ( dword_140417728 < dword_140417720 )
              dword_140417728 = dword_140417720;
            byte_14041771C = 2;
            if ( byte_140417702 )
            {
              PopFxPrepareDevicesForShutdown();
              IoFreePoDeviceNotifyList(qword_140417738 + 48);
              if ( dword_140417714 == 2 )
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
            v36 = *(unsigned int *)(a1 + 68);
            KeMtrrComparisonFailed = 0;
            inited = PopInitSystemSleeperThread(v36, a1 + 264);
            *(_DWORD *)(a1 + 104) = inited;
            if ( inited >= 0 )
            {
              if ( !byte_1404177B0 )
              {
                ExWakeTimersPause();
                byte_1404177B0 = 1;
              }
              *(_QWORD *)(a1 + 192) = MEMORY[0xFFFFF78000000008];
              v38 = MEMORY[0xFFFFF78000000014];
              v39 = PopPolicy;
              *(_QWORD *)(a1 + 200) = MEMORY[0xFFFFF78000000014];
              *(_QWORD *)(a1 + 224) = 0LL;
              if ( v39[22]
                && dword_140417720 != 5
                && (unsigned __int8)PopIsDozeSupported(&PopCapabilities)
                && (dword_14041770C & 0x40000000) == 0 )
              {
                v41 = *(_QWORD *)(a1 + 192);
                *(_QWORD *)(a1 + 216) = v41;
                v42 = v41 + 10000000LL * *(unsigned int *)(v40 + 88);
                *(_QWORD *)(a1 + 224) = -1LL;
                goto LABEL_106;
              }
              if ( byte_140418234
                && dword_140417720 == 5
                && !byte_140417860
                && qword_140417668
                && ((dword_140417714 - 11) & 0xFFFFFFFD) == 0 )
              {
                v43 = qword_140417668 - v38;
                *(_QWORD *)(a1 + 352) = qword_140417668 - v38;
                v44 = -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset;
                *(_QWORD *)(a1 + 224) = -2LL;
                v45 = v44 + v43;
                v42 = v45 + *(_QWORD *)(a1 + 192);
                *(_QWORD *)(a1 + 352) = v45;
LABEL_106:
                *(_QWORD *)(a1 + 216) = v42;
              }
              if ( *(_QWORD *)(a1 + 224) == -1LL && !qword_1404177C0 )
                qword_1404177C0 = *(_QWORD *)(a1 + 192);
              v46 = &qword_140417768;
              memset(&qword_140417768, 0, 0x48uLL);
              dword_140417760 = 3;
              if ( !byte_140417860 && dword_140417714 != 14 )
              {
                v48 = (_DWORD *)(a1 + 376);
                v49 = (_DWORD *)(a1 + 380);
                if ( dword_140417720 == 5 && *v48 != 1 && *v49 != 1 )
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
                      qword_140417768 = *(_QWORD *)(a1 + 216);
                      qword_140417778[0] = *(_QWORD *)(a1 + 224);
                    }
                    if ( *v49 )
                    {
                      qword_140417780 = *(_QWORD *)(a1 + 216);
                      qword_140417790 = *(_QWORD *)(a1 + 224);
                    }
                  }
                  else
                  {
                    do
                    {
                      *v46 = *(_QWORD *)(a1 + 216);
                      v46 += 3;
                    }
                    while ( (__int64)v46 < (__int64)&unk_140417798 );
                    v50 = qword_140417778;
                    do
                    {
                      *v50 = *(_QWORD *)(a1 + 224);
                      v50 += 3;
                    }
                    while ( (__int64)v50 < (__int64)&qword_1404177A8 );
                  }
                }
                v51 = qword_1404177B8;
                *(_QWORD *)(a1 + 80) = qword_1404177B8;
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
                  *(_BYTE *)(a1 + 208) = v47;
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
                    qword_140417768 = *v52;
                    qword_140417778[0] = *v53;
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
                  *(_BYTE *)(a1 + 208) = v47;
                  v55 = ExGetNextWakeTime(
                          (unsigned int)*(_QWORD *)(a1 + 80) + 1,
                          *(_QWORD *)(a1 + 216),
                          v47,
                          (_DWORD)v52,
                          (__int64)v53);
                  *(_BYTE *)(a1 + 384) = v55;
                  if ( v55 )
                  {
                    qword_140417780 = *v52;
                    qword_140417790 = *v53;
                  }
                }
              }
              qword_140417770[0] = qword_140417768;
              if ( qword_140417768
                && qword_140417768 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 388) )
              {
                qword_140417770[0] = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 388);
              }
              qword_140417788 = qword_140417780;
              if ( qword_140417780
                && qword_140417780 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 388) )
              {
                qword_140417788 = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 388);
              }
              v56 = qword_140417778[0];
              if ( (unsigned __int64)(qword_140417778[0] - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                v56 = *(int *)(qword_140417778[0] + 8);
              *(_QWORD *)(a1 + 360) = v56;
              v57 = qword_140417790;
              if ( (unsigned __int64)(qword_140417790 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                v57 = *(int *)(qword_140417790 + 8);
              *(_QWORD *)(a1 + 368) = v57;
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              LOBYTE(v59) = 1;
              qword_140417B30 = PerformanceCounter.QuadPart;
              ExAcquireTimeRefreshLock(v59);
              ExUpdateSystemTimeFromCmos(1, 1u);
              ExReleaseTimeRefreshLock();
              ((void (__fastcall *)(__int64, __int64))off_1403FE300)(qword_140417770[0], qword_140417788);
              ((void (*)(void))PopSetDevicesSystemState)();
              PopNewWakeInfo();
              *(_QWORD *)(a1 + 344) = MEMORY[0xFFFFF78000000008];
              *(_DWORD *)(a1 + 148) = dword_1404180CC;
              PpmCheckPausePpmEngineForSx();
              KeSetEvent((PRKEVENT)(a1 + 288), 0, 1u);
              KeWaitForSingleObject((PVOID)(a1 + 312), Executive, 0, 0, 0LL);
              qword_1404178F0 = 0LL;
              *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 340);
              PpmCheckResumePpmEngineFromSx();
              v60 = dword_140417720;
              if ( PoResumeFromHibernate )
                v60 = dword_140417728;
              dword_14041772C = v60;
              if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
              {
                *(_DWORD *)(a1 + 44) = 6;
              }
              else
              {
                *(_DWORD *)(a1 + 44) = dword_140417720;
                v84 = dword_140417720;
              }
              v61 = dword_14041772C;
              v62 = v84;
              v75 = *(_QWORD *)(a1 + 368);
              v63 = *(_QWORD *)(a1 + 360);
              *(_DWORD *)(a1 + 40) = dword_14041772C;
              PopDiagTracePostSleepNotification(
                v62,
                dword_140417728,
                v61,
                qword_140417770[0],
                qword_140417788,
                v63,
                v75);
              if ( KeMtrrComparisonFailed )
                PopDiagTraceMtrrError();
              if ( *(int *)(a1 + 104) < 0 && dword_140417720 == 5 )
              {
                StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
                RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
                IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
                PopDiagTraceHibernateErrorStatus(*(unsigned int *)(a1 + 104));
              }
LABEL_170:
              if ( byte_140417860 )
              {
                qword_140417D20 = KeQueryPerformanceCounter(0LL).QuadPart;
                dword_140417844 = PopQpcTimeInMs(&qword_140417D18, &qword_140417D20);
              }
              if ( *(int *)(a1 + 104) >= 0 )
              {
                qword_140417750 = *(_QWORD *)(a1 + 344);
                ExUpdateSystemTimeFromCmos(1, 1u);
                LOBYTE(v64) = 1;
                if ( ((unsigned __int8 (__fastcall *)(__int64))off_1403FE688[0])(v64) )
                  ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0LL);
                qword_140417B48 = KeQueryPerformanceCounter(0LL).QuadPart;
                PfPowerActionNotify(2LL, 0LL, 0LL);
                qword_140417748 = MEMORY[0xFFFFF78000000008];
                PopDiagComputeEarlyHiberStats();
                if ( *(_DWORD *)(a1 + 40) == 4 )
                  PopDiagTraceFirmwareS3Stats(v66, v65, v67);
              }
              byte_14041771D = 1;
              PoPowerDownActionInProgress = 0;
              PoPowerResetActionInProgress = 0;
              RtlBootStatusDisableFlushing(1);
              PpmCheckResumeStatisticsCollection();
              PsIumResumeAfterHibernate();
              if ( qword_140417738 )
              {
                PfPowerActionNotify(3LL, 0LL, 0LL);
                PopSetDevicesSystemState(v69, v68, v70);
                PfPowerActionNotify(3LL, 1LL, 0LL);
              }
              v71 = *(void **)(a1 + 240);
              if ( v71 )
              {
                ExDeleteWakeTimerInfo(v71);
                *(_QWORD *)(a1 + 240) = 0LL;
              }
              ((void (__fastcall *)(_QWORD, _QWORD))off_1403FE300)(0LL, 0LL);
              *(_DWORD *)(a1 + 112) = PopNotifyTelemetryOsState(
                                        qword_140417704,
                                        dword_140417720,
                                        dword_140417728,
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
              qword_140417738 = 0LL;
              PopEsExitSleep();
              PopCurrentPowerStatePrecise(a1 + 156, 0LL);
              *(_DWORD *)(a1 + 152) = dword_1404180CC;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
              ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
              PopThermalSxExit(v72);
              if ( !*(_BYTE *)(a1 + 64) )
              {
                PopAcquirePolicyLock();
                *(_BYTE *)(a1 + 64) = 1;
              }
              if ( *(int *)(a1 + 104) >= 0 )
              {
                PopInitSIdle(1LL);
                PopAction = 0;
                if ( (unsigned __int64)dword_140417760 < 3 )
                {
                  qword_1404177B8 = qword_140417770[3 * dword_140417760];
                  v73 = qword_140417778[3 * dword_140417760];
                  PopFullWake = 0;
                  PopPendingUserPresenceDuringSystemSleep = 0;
                  PopPendingUserPresenceMonitorOnReason = 0;
                  if ( v73 == -1 )
                  {
                    if ( (unsigned __int8)PopDeferDoze(
                                            *(unsigned int *)(a1 + 376),
                                            *(unsigned int *)(a1 + 380),
                                            a1 + 156) )
                      qword_140417704 = *(_QWORD *)a1;
                    else
                      qword_140417704 = 0x500000002LL;
                    PopAction |= 2u;
LABEL_198:
                    *(_BYTE *)(a1 + 256) = 0;
                  }
                  else if ( v73 == -2 )
                  {
                    if ( !qword_140417758 )
                      qword_140417758 = qword_140417748;
                  }
                  else
                  {
                    v74 = (_DWORD *)(a1 + 380);
                    if ( dword_1404180CC == 1 )
                    {
                      if ( !*v74 )
                      {
                        qword_140417704 = *(_QWORD *)a1;
                        PopAction = 2;
                        goto LABEL_198;
                      }
                    }
                    else if ( !*v74 && *(_DWORD *)(a1 + 148) == *(_DWORD *)(a1 + 152) )
                    {
                      PopCheckPowerSourceAfterRtcWakeSet();
                    }
                  }
                }
              }
              if ( byte_1404177B0 && *(_BYTE *)(a1 + 256) )
              {
                ExWakeTimersResume();
                byte_1404177B0 = 0;
                qword_1404177B8 = 0LL;
              }
              if ( PoResumeFromHibernate )
              {
                PopBootLoaderTraceProcess();
                PoResumeFromHibernate = 0;
              }
              byte_140417860 = 0;
              PopResetActionDefaults();
              PopSetPowerActionState(2);
              PopReleasePolicyLock();
              if ( PopPendingUserPresenceDuringSystemSleep )
                PoSetUserPresent((unsigned int)PopPendingUserPresenceMonitorOnReason);
              ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
              PopCheckForWork();
              if ( *(int *)(a1 + 104) >= 0 )
                PpmPerfReApplyStates();
              dword_140417714 = 16;
              qword_140417CB0 = PopCaptureTimeOnProcZero();
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
    byte_140417860 = 1;
    *(_BYTE *)(a1 + 36) = 0;
    dword_140417728 = 5;
    *(_DWORD *)(a1 + 44) = 6;
    v22 = dword_140417720;
LABEL_62:
    v23 = 0x140000000uLL;
    v24 = PopPowerStateHandlerLookup[v22];
    goto LABEL_63;
  }
  ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
  return *(_DWORD *)(a1 + 104);
}
