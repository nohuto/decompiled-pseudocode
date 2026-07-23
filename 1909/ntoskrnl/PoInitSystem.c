/*
 * XREFs of PoInitSystem @ 0x140A0685C
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     KeInitializeTimer @ 0x140083580 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     KeInitializeGuardedMutex @ 0x1400EEA20 (KeInitializeGuardedMutex.c)
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400F09A4 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     ExInitializeNPagedLookasideList @ 0x140175A90 (ExInitializeNPagedLookasideList.c)
 *     HvlIsPartitionCpuManager @ 0x140182240 (HvlIsPartitionCpuManager.c)
 *     PopBatteryRefreshStatus @ 0x140182780 (PopBatteryRefreshStatus.c)
 *     PopRwLockInitialize @ 0x14018C310 (PopRwLockInitialize.c)
 *     PopInitilizeAcDcSettings @ 0x14018C46C (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x14018C528 (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x14019795C (PpmInitIllegalThrottleLogging.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x14019A248 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x14019BF38 (IoAddTriageDumpDataBlock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x14019D1C8 (PpmHeteroInitializeHgsSupport.c)
 *     PopCheckForAbnormalReset @ 0x14019E964 (PopCheckForAbnormalReset.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     HvlIsAnyHypervisorPresent @ 0x140284940 (HvlIsAnyHypervisorPresent.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopUpdateUpgradeInProgress @ 0x1405B1930 (PopUpdateUpgradeInProgress.c)
 *     PopUpdateConsoleDisplayState @ 0x1407304D4 (PopUpdateConsoleDisplayState.c)
 *     PopLogSleepDisabled @ 0x140738860 (PopLogSleepDisabled.c)
 *     PopInitializePowerPolicySimulate @ 0x140748C24 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x140749B24 (PopResetActionDefaults.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x140759340 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopResetCurrentPolicies @ 0x14075B17C (PopResetCurrentPolicies.c)
 *     PpmIdleRegisterDefaultStates @ 0x14075F0A8 (PpmIdleRegisterDefaultStates.c)
 *     PopInitializeWorkItem @ 0x14075F670 (PopInitializeWorkItem.c)
 *     TtmInit @ 0x14075FB60 (TtmInit.c)
 *     PpmCheckInitProcessors @ 0x1407760B8 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x140777198 (PopInitializeHeteroProcessors.c)
 *     PpmEnableWmiInterface @ 0x140780BB0 (PpmEnableWmiInterface.c)
 *     KeRegisterProcessorChangeCallback @ 0x140782580 (KeRegisterProcessorChangeCallback.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407898F8 (PopThermalHandlePreviousShutdown.c)
 *     PopDefaultPolicy @ 0x14078AF9C (PopDefaultPolicy.c)
 *     PopSetupMixedRealitytNotification @ 0x14078C1CC (PopSetupMixedRealitytNotification.c)
 *     PopInitializePreSleepNotifications @ 0x14078C340 (PopInitializePreSleepNotifications.c)
 *     PopSetupHighPerfPowerRequest @ 0x14078C8B0 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupBluetoothChargingNotification @ 0x14078CAE8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x14078CB24 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x14078CB60 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x14078CB9C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x14078CBD8 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x14078CC14 (PopSetupAudioEventNotification.c)
 *     PopCheckSkipTick @ 0x14078CE3C (PopCheckSkipTick.c)
 *     PopDiagTraceSkipTick @ 0x1408B02F4 (PopDiagTraceSkipTick.c)
 *     PopCoalescingInitialize @ 0x1409FBB04 (PopCoalescingInitialize.c)
 *     PopProcessBootstat @ 0x1409FBBBC (PopProcessBootstat.c)
 *     PopDiagInitialize @ 0x140A06520 (PopDiagInitialize.c)
 *     PopNetInitialize @ 0x140A066DC (PopNetInitialize.c)
 *     PopEsInit @ 0x140A07294 (PopEsInit.c)
 *     PopInitializeDirectedDrips @ 0x140A072EC (PopInitializeDirectedDrips.c)
 *     PopInitializePowerButtonHold @ 0x140A07328 (PopInitializePowerButtonHold.c)
 *     PopDeepSleepInitialize @ 0x140A074DC (PopDeepSleepInitialize.c)
 *     PopReadErrataDisablePrimaryDeviceFastResume @ 0x140A095E0 (PopReadErrataDisablePrimaryDeviceFastResume.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140A09620 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140A0968C (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopSetupKsrCallbacks @ 0x140A096E8 (PopSetupKsrCallbacks.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140A09728 (PopEvaluateInputSuppressionRequired.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140A09754 (PopReadErrataForIncorrectLidNotification.c)
 *     PopCheckpointDetermineEfiRuntimeRedirection @ 0x140A09770 (PopCheckpointDetermineEfiRuntimeRedirection.c)
 *     PopInitializePowerSettingCallbacks @ 0x140A19D8C (PopInitializePowerSettingCallbacks.c)
 *     PpmInitPolicyConfiguration @ 0x140A1A484 (PpmInitPolicyConfiguration.c)
 *     PpmInitHeteroPolicy @ 0x140A1A56C (PpmInitHeteroPolicy.c)
 *     PopThermalInit @ 0x140A1B6AC (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140A1B738 (PpmPerfInitialize.c)
 *     PpmInitIdlePolicy @ 0x140A1B890 (PpmInitIdlePolicy.c)
 *     PopFanReportBootStartDevices @ 0x140A1B9FC (PopFanReportBootStartDevices.c)
 *     PopEtInit @ 0x140A1BBB4 (PopEtInit.c)
 *     PoFxInitPowerManagement @ 0x140A1BDF0 (PoFxInitPowerManagement.c)
 *     PopRecorderInit @ 0x140A1C410 (PopRecorderInit.c)
 *     PopInitDripsWakeAccounting @ 0x140A1D2AC (PopInitDripsWakeAccounting.c)
 *     PopPowerRequestInit @ 0x140A1E760 (PopPowerRequestInit.c)
 *     PopUmpoInitializeChannel @ 0x140A1EA00 (PopUmpoInitializeChannel.c)
 *     PopBatteryInit @ 0x140A1EFE8 (PopBatteryInit.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A1F860 (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeIrpWorkers @ 0x140A1F9F0 (PopInitializeIrpWorkers.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A1FFB4 (PopCreateTimebrokerServiceSid.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A201F4 (PopInitializeHighPerfPowerRequest.c)
 *     PopInitializePowerSettings @ 0x140A2103C (PopInitializePowerSettings.c)
 *     PopInitializeAdpm @ 0x140A213E0 (PopInitializeAdpm.c)
 *     PpmInitCoreParkingPolicy @ 0x140A21780 (PpmInitCoreParkingPolicy.c)
 *     PpmInitHeteroEngine @ 0x140A21A78 (PpmInitHeteroEngine.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A21B38 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopPowerAggregatorInitialize @ 0x140A21BE0 (PopPowerAggregatorInitialize.c)
 *     PopInitializeSystemIdleDetection @ 0x140A21D1C (PopInitializeSystemIdleDetection.c)
 *     PopWatchdogInit @ 0x140A21DE8 (PopWatchdogInit.c)
 *     PpmCheckInit @ 0x140A21F1C (PpmCheckInit.c)
 *     PopWakeSourceInit @ 0x140A22100 (PopWakeSourceInit.c)
 *     PopInitVideoWnfState @ 0x140A221A0 (PopInitVideoWnfState.c)
 *     PopBatteryInitPhaseTwo @ 0x140A22344 (PopBatteryInitPhaseTwo.c)
 *     PopInitShutdownList @ 0x140A225C8 (PopInitShutdownList.c)
 *     PoFxRegisterDebugger @ 0x140A226F4 (PoFxRegisterDebugger.c)
 *     PopCoolingInit @ 0x140A22A94 (PopCoolingInit.c)
 *     PopTransitionCheckpointInit @ 0x140A22AC0 (PopTransitionCheckpointInit.c)
 *     PpmWmiInit @ 0x140A22AEC (PpmWmiInit.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A22B54 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PpmEventInitialize @ 0x140A22DE4 (PpmEventInitialize.c)
 *     PopDripsWatchdogInitialize @ 0x140A22E48 (PopDripsWatchdogInitialize.c)
 *     PopRecordFirmwareResetReason @ 0x140A22F30 (PopRecordFirmwareResetReason.c)
 *     PopInitModernSleepEnabledActions @ 0x140A22F7C (PopInitModernSleepEnabledActions.c)
 *     PopCoolingInitializeWnfEvents @ 0x140A3D638 (PopCoolingInitializeWnfEvents.c)
 *     PoInitializePdc @ 0x140A3D800 (PoInitializePdc.c)
 *     PopPolicyDeviceInit @ 0x140A3DAE4 (PopPolicyDeviceInit.c)
 *     PopFanInit @ 0x140A3DAFC (PopFanInit.c)
 *     PopEmRegister @ 0x140A3DB14 (PopEmRegister.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  int TimebrokerServiceSid; // eax
  unsigned int v8; // ecx
  signed __int64 v9; // rdx
  int v10; // ebx
  unsigned __int8 v11; // di
  unsigned __int8 v12; // zf
  int v13; // edx
  __int64 v14; // rdx
  _QWORD v16[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]
  int Buffer; // [rsp+90h] [rbp+8h] BYREF
  LARGE_INTEGER v19; // [rsp+A0h] [rbp+18h] BYREF

  PopOsInitPhase = a1;
  v19.QuadPart = 0LL;
  v16[0] = 0LL;
  v16[1] = 0LL;
  v17 = 0LL;
  if ( !a1 )
  {
    KeQueryPerformanceCounter(&v19);
    PopQpcFrequency = v19.QuadPart;
    PopComputeCounterShifts(v19.QuadPart, &PpmPerformanceDistributionShift, &PpmPerformanceCounterShift);
    PopComputeCounterShifts(0x989680uLL, &PpmHvPerformanceDistributionShift, &PpmHvPerformanceCounterShift);
    PopPowerAggregatorInitialize();
    PopRwLockInitialize(PopPowerEventLock);
    PopCsResiliencyStatsLock = 0LL;
    PopRwLockInitialize(PopSystemIdleLock);
    PopRwLockInitialize(PopCoalRegistrationListLock);
    qword_1404436F8 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_140443708 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    PopDeepSleepDisengageReasonLock = 0LL;
    PopIrpLock = 0LL;
    ExInitializeNPagedLookasideList(&PopIrpDataLookaside, 0LL, 0LL, 0x200u, 0x100uLL, 0x72496F50u, 0);
    BootStatFileHandle = 0LL;
    BootStatFileHandleAcquired = 0;
    BootStatKeepHandleOpen = 0;
    BootStatDataCache = 0LL;
    BootStatDisableFlush = 0;
    PopBsdSkipLogging = 0;
    PopRwLockInitialize(PopBsdUpdateLock);
    PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
    PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v4);
    PopInitializeWorkItem((__int64)&PopBsdUpdateWorkItem, (__int64)PopBsdUpdateWorker, v5);
    PopRwLockInitialize(PopWdiTimerLock);
    PopWdiCurrentScenarioInstanceId = 0;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    PopWdiCurrentScenarioInstanceIdV2 = 0LL;
    KeInitializeTimer(&PopWdiTimer);
    PopWdiTimerTimeoutValue = -50000000LL;
    KeInitializeDpc(&PopWdiTimerDpc, (PKDEFERRED_ROUTINE)PopWdiTimerCallback, 0LL);
    PopWdiTimerWorker.Parameter = 0LL;
    PopWdiTimerWorker.WorkerRoutine = (void (__fastcall *)(void *))PopWdiTimerWorkerThread;
    PopWdiTimerWorker.List.Flink = 0LL;
    PopDisplayBurstSuppressWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDisplayBurstSuppressWorker;
    PopDisplayBurstSuppressWorkItem.Parameter = 0LL;
    PopLidClosedSleepStudyWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopLidClosedSleepStudyWorker;
    PopDisplayBurstSuppressWorkItem.List.Flink = 0LL;
    PopLidClosedSleepStudyWorkItem.Parameter = 0LL;
    PopLidClosedSleepStudyWorkItem.List.Flink = 0LL;
    PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, 0LL);
    PopInitializeWorkItem((__int64)&PopRecordLidStateWorkItem, (__int64)PopRecordLidStateWorker, v6);
    PopRwLockInitialize(PopInputSuppressionLock);
    PopTransitionCheckpointInit();
    PopMonitorOffDueToSleep = 0;
    PpmHeteroInitializeHgsSupport();
    PpmCheckInit();
    TimebrokerServiceSid = PopInitializeIrpWorkers();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopIrpSerialLock = 0LL;
    PopRwLockInitialize(PpmIdlePolicyLock);
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_140467D08 = 0LL;
    KeInitializeEvent(&stru_140443768, SynchronizationEvent, 1u);
    PopWorkerLock = 0LL;
    qword_140443788 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_140443748 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    KeInitializeEvent(&PopTransitionLock, SynchronizationEvent, 1u);
    PopDisableSleepMutex.Count = 1;
    qword_1404437A8 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_140444788 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    PopDisableSleepMutex.Owner = 0LL;
    PopDisableSleepMutex.Contention = 0;
    LOWORD(PopDisableSleepMutex.Event.Header.Lock) = 1;
    PopDisableSleepMutex.Event.Header.Size = 6;
    PopDisableSleepMutex.Event.Header.SignalState = 0;
    PopInitShutdownList();
    v8 = PopIdleScanInterval;
    qword_1404437B8 = (__int64)&PopIdleDetectList;
    PopIdleDetectList = (__int64)&PopIdleDetectList;
    PopDopeGlobalLock = 0LL;
    if ( PopIdleScanInterval )
    {
      if ( PopIdleScanInterval == -1 )
      {
        v8 = a1 + 30;
        PopIdleScanInterval = a1 + 30;
      }
      else if ( (unsigned int)PopIdleScanInterval > 0x12C )
      {
        v8 = 300;
        PopIdleScanInterval = 300;
      }
      PopIdleBackgroundIgnoreCount = (v8 + 59) / v8;
      PopBackgroundTaskIgnoreCount = (v8 + 179) / v8;
    }
    PopWorkerSpinLock = 0LL;
    PopPolicyWorker.WorkerRoutine = (void (__fastcall *)(void *))PopPolicyWorkerThread;
    PopPolicyWorker.List.Flink = 0LL;
    PopPolicyWorker.Parameter = (void *)0x80000000LL;
    PopWorkerStatus = -1;
    ExInitializeResourceLite(&PopPolicyLock);
    PopAwaymodeLock = 0LL;
    KeInitializeGuardedMutex(&PopVolumeLock);
    KeInitializeEvent(&PopPowerSettingCallbackReturned, NotificationEvent, 0);
    qword_1404438F8 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_1404438D8 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_1404438E8 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    qword_140443918 = (__int64)&PopThermal;
    PopThermal = &PopThermal;
    IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
    qword_140443928 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_140443944;
    PopDefaultPolicy(dword_140443944);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_140443AB0 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_140467D00 = -1;
    dword_140467D04 = 2;
    PpmInitPolicyConfiguration();
    PpmInitIdlePolicy();
    PpmPerfInitialize();
    PpmInitCoreParkingPolicy();
    PpmInitHeteroPolicy();
    PpmIdleRegisterDefaultStates();
    PopDeepSleepInitialize(0LL);
    PopInitializePowerSettings();
    PopInitilizeAcDcSettings();
    PopPolicyDeviceInit();
    PopBatteryInit();
    PopFanInit();
    PopThermalInit();
    PopCoolingInit();
    dword_140443B20 = 4;
    qword_140443B28 = (__int64)PopShutdownHandler;
    byte_140443B24 = 0;
    PopWakeSourceInit();
    PpmWmiInit();
    PopUserPresentSetStatus = 0;
    KeInitializeTimer(&PopAwayModeUserPresenceTimer);
    KeInitializeEvent(&PopUserPresentCompletedEvent, SynchronizationEvent, 0);
    KeInitializeEvent(&stru_1404445C8, SynchronizationEvent, 1u);
    PoFxInitPowerManagement();
    dword_140443A4C = 0;
    qword_140443A50 = 100LL;
    qword_140443A58 = 100LL;
    dword_140443A60 = 100;
    PopNetInitialize(0);
    PopInitializePowerButtonHold(0LL);
    PopRecorderInit();
    PopRecordFirmwareResetReason(a2);
    TimebrokerServiceSid = PopCreateTimebrokerServiceSid();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopInitializeDirectedDrips(0LL);
  }
  if ( a1 != 1 )
    goto LABEL_20;
  if ( HvlIsAnyHypervisorPresent() )
  {
    PpmExitLatencyCheckEnabled = 0;
    PpmExitLatencySamplingPercentage = 0;
  }
  PopInitModernSleepEnabledActions();
  PopUmpoInitializeChannel();
  PopUmpoInitializeMonitorChannel();
  PoInitializePdc();
  PopEsInit(1LL);
  PopInitializePowerSettingCallbacks();
  TimebrokerServiceSid = PopEtInit();
  if ( TimebrokerServiceSid >= 0 )
  {
    TimebrokerServiceSid = PopPowerRequestInit();
    if ( TimebrokerServiceSid >= 0 )
    {
      TimebrokerServiceSid = PopInitializeHighPerfPowerRequest();
      if ( TimebrokerServiceSid >= 0 )
      {
        PopCheckPowerSourceAfterRtcWakeInitialize();
        PopWatchdogInit();
        PopInitializePowerButtonHold(1LL);
        TimebrokerServiceSid = PpmInitHeteroEngine();
        if ( TimebrokerServiceSid >= 0 )
        {
          PopInitDripsWakeAccounting();
          TimebrokerServiceSid = PopEmRegister();
          if ( TimebrokerServiceSid >= 0 )
          {
            PopReadErrataDisablePrimaryDeviceFastResume();
LABEL_20:
            if ( a1 == 2 )
            {
              PoFxRegisterDebugger();
              HalReportResourceUsage(1LL);
              PopBatteryInitPhaseTwo();
              TimebrokerServiceSid = PpmEventInitialize();
              if ( TimebrokerServiceSid >= 0 )
              {
                KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
                PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
                PopInitializeHeteroProcessors(1, v9);
                PpmReleaseLock(&PpmPerfPolicyLock);
                if ( PpmPerfArtificialDomainSetting != -1 )
                  PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
                PpmIdleRegisterDefaultStates();
                PpmCheckInitProcessors(0);
                PpmAcquireLock(&PopFxSystemLatencyLock);
                PoFxSendSystemLatencyUpdate();
                PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
                PopPdcCsCheckSystemVolumeDevice();
                PopCoolingInitializeWnfEvents();
              }
              return TimebrokerServiceSid >= 0;
            }
            if ( a1 != 3 )
            {
LABEL_54:
              TimebrokerServiceSid = 0;
              return TimebrokerServiceSid >= 0;
            }
            TimebrokerServiceSid = PopDiagInitialize();
            if ( TimebrokerServiceSid < 0 )
              return TimebrokerServiceSid >= 0;
            PopTriggerDiagTraceAoAcCapability();
            PopFanReportBootStartDevices();
            v10 = 2;
            v11 = 1;
            if ( PopSkipTickPolicy )
            {
              if ( PopSkipTickPolicy == 1 )
              {
                v11 = 0;
                if ( (int)HalGetInterruptTargetInformation(2LL, 0LL, v16) >= 0 )
                {
                  PopApicMode = HIDWORD(v17);
                  if ( PopCheckSkipTick() )
                  {
                    PoSkipTickMode = 0;
                    goto LABEL_38;
                  }
                  v10 = 1;
                }
              }
              else
              {
                v10 = 0;
              }
            }
            PoSkipTickMode = v10;
            v12 = v10 == 2;
            if ( v10 == 2 )
            {
LABEL_37:
              PopDiagTraceSkipTick(v12, v11);
              goto LABEL_38;
            }
            if ( v11 )
            {
              v12 = v10 == 2;
              goto LABEL_37;
            }
LABEL_38:
            PpmInitIllegalThrottleLogging();
            PopProcessBootstat();
            PopCheckForAbnormalReset();
            PopAcquirePolicyLock();
            PopUpdateUpgradeInProgress(0LL);
            if ( InitIsWinPEMode )
              PopLogSleepDisabled(16, 15, 0LL, 0LL);
            if ( byte_140443B94 )
              PopLogSleepDisabled(17, 7, 0LL, 0LL);
            if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2600LL) & 8) != 0 )
              PopSecureLaunched = 1;
            if ( !(unsigned int)HvlIsPartitionCpuManager() && VslVsmEnabled )
              v13 = 31;
            if ( v13 )
              PopLogSleepDisabled(21, v13, 0LL, 0LL);
            PopDeepSleepInitialize(3LL);
            PopInitializePowerPolicySimulate();
            if ( (PopSimulate & 1) != 0 )
            {
              byte_140443B9E = 1;
              *(_QWORD *)&xmmword_140443BA0 = 0x19000000064LL;
              *((_QWORD *)&xmmword_140443BA0 + 1) = 0xFFFF0000000ALL;
              LODWORD(qword_140443BC0) = 4;
              dword_140443BC8 = 2;
            }
            if ( (PopSimulate & 2) != 0 )
            {
              LODWORD(PopCapabilities) = 16843009;
              WORD2(PopCapabilities) = 257;
              BYTE6(PopCapabilities) = 1;
              unk_140443B91 = 257;
            }
            PopResetCurrentPolicies();
            PopInitializeAdpm();
            PopEsInit(3LL);
            PopInitilizeAcDcSettings();
            Buffer = 1;
            PopUpdateConsoleDisplayState(1u);
            ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &Buffer, 4u, 0LL, 0LL, 0, 0);
            PopNetInitialize(3);
            PopReleasePolicyLock();
            PopIdleInitAoAcDozeS4Timer();
            PopInitializeSystemIdleDetection();
            PopInitializePreSleepNotifications();
            v14 = *(_QWORD *)(a2 + 240);
            PopHiberLoaderScratchPages = *(_DWORD *)(v14 + 256);
            PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(v14 + 116) & 0x10000000) != 0;
            PopSetupHighPerfPowerRequest();
            PpmEnableWmiInterface();
            PopAcquirePolicyLock();
            PopCoalescingInitialize();
            PopReleasePolicyLock();
            PopInitializeDirectedDrips(3LL);
            PopDripsWatchdogInitialize();
            PopSetupAudioEventNotification();
            PopSetupMixedRealitytNotification();
            PopSetupFullScrenVideoNotification();
            PopSetupUserPresencePredictionNotification();
            PopSetupSprActiveSessionChangeNotification();
            PopSetupAirplaneModeNotification();
            PopSetupBluetoothChargingNotification();
            PopThermalHandlePreviousShutdown();
            PopCheckpointDetermineEfiRuntimeRedirection(a2);
            TtmInit();
            PopReadErrataForIncorrectLidNotification();
            PopEvaluateInputSuppressionRequired();
            PopBatteryRefreshStatus();
            PopSetupKsrCallbacks();
            PopHiberEvaluateSkippingMemoryMapValidation();
            PopReadErrataSkipMemoryOverwriteRequestControlLockAction();
            goto LABEL_54;
          }
        }
      }
    }
  }
  return TimebrokerServiceSid >= 0;
}
