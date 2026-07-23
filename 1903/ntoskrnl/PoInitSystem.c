/*
 * XREFs of PoInitSystem @ 0x140A06340
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FE82C (Phase1InitializationIoReady.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     KeInitializeTimer @ 0x140083180 (KeInitializeTimer.c)
 *     KeInitializeGuardedMutex @ 0x14009ADD0 (KeInitializeGuardedMutex.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400EDAE4 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     ExInitializeNPagedLookasideList @ 0x140175360 (ExInitializeNPagedLookasideList.c)
 *     HvlIsPartitionCpuManager @ 0x140181B50 (HvlIsPartitionCpuManager.c)
 *     PopBatteryRefreshStatus @ 0x140182090 (PopBatteryRefreshStatus.c)
 *     PopRwLockInitialize @ 0x14018B980 (PopRwLockInitialize.c)
 *     PopInitilizeAcDcSettings @ 0x14018BADC (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x14018BB98 (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x1401972F4 (PpmInitIllegalThrottleLogging.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x140199BE8 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x14019CA48 (PpmHeteroInitializeHgsSupport.c)
 *     PopCheckForAbnormalReset @ 0x14019E244 (PopCheckForAbnormalReset.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     HvlIsAnyHypervisorPresent @ 0x140284BE0 (HvlIsAnyHypervisorPresent.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopLogSleepDisabled @ 0x140736600 (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x14073A74C (PopUpdateConsoleDisplayState.c)
 *     PopInitializePowerPolicySimulate @ 0x140746D24 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x140747C24 (PopResetActionDefaults.c)
 *     PopResetCurrentPolicies @ 0x140749ADC (PopResetCurrentPolicies.c)
 *     PpmIdleRegisterDefaultStates @ 0x14075A818 (PpmIdleRegisterDefaultStates.c)
 *     PopInitializeWorkItem @ 0x14075ADE0 (PopInitializeWorkItem.c)
 *     TtmInit @ 0x14075B2D0 (TtmInit.c)
 *     PopThermalHandlePreviousShutdown @ 0x14075B3AC (PopThermalHandlePreviousShutdown.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14076AB10 (PopIdleInitAoAcDozeS4Timer.c)
 *     PpmCheckInitProcessors @ 0x140772AD8 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x140773BB8 (PopInitializeHeteroProcessors.c)
 *     PpmEnableWmiInterface @ 0x14077E190 (PpmEnableWmiInterface.c)
 *     KeRegisterProcessorChangeCallback @ 0x14077FB60 (KeRegisterProcessorChangeCallback.c)
 *     PopDefaultPolicy @ 0x140788B3C (PopDefaultPolicy.c)
 *     PopSetupMixedRealitytNotification @ 0x140789D6C (PopSetupMixedRealitytNotification.c)
 *     PopInitializePreSleepNotifications @ 0x140789EE0 (PopInitializePreSleepNotifications.c)
 *     PopSetupHighPerfPowerRequest @ 0x14078A450 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupBluetoothChargingNotification @ 0x14078A648 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x14078A684 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x14078A6C0 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x14078A6FC (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x14078A738 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x14078A774 (PopSetupAudioEventNotification.c)
 *     PopCheckSkipTick @ 0x14078A95C (PopCheckSkipTick.c)
 *     PopDiagTraceSkipTick @ 0x1408B0A94 (PopDiagTraceSkipTick.c)
 *     PpmInitPolicyConfiguration @ 0x1409ED550 (PpmInitPolicyConfiguration.c)
 *     PopDiagInitialize @ 0x140A06004 (PopDiagInitialize.c)
 *     PopNetInitialize @ 0x140A061C0 (PopNetInitialize.c)
 *     PopEsInit @ 0x140A06D78 (PopEsInit.c)
 *     PopInitializeDirectedDrips @ 0x140A06DD0 (PopInitializeDirectedDrips.c)
 *     PopInitializePowerButtonHold @ 0x140A06E0C (PopInitializePowerButtonHold.c)
 *     PopDeepSleepInitialize @ 0x140A06FC0 (PopDeepSleepInitialize.c)
 *     PopReadErrataDisablePrimaryDeviceFastResume @ 0x140A090B4 (PopReadErrataDisablePrimaryDeviceFastResume.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140A090F4 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140A09160 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopSetupKsrCallbacks @ 0x140A091BC (PopSetupKsrCallbacks.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140A091FC (PopEvaluateInputSuppressionRequired.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140A09228 (PopReadErrataForIncorrectLidNotification.c)
 *     PopCheckpointDetermineEfiRuntimeRedirection @ 0x140A09244 (PopCheckpointDetermineEfiRuntimeRedirection.c)
 *     PopProcessBootstat @ 0x140A14E04 (PopProcessBootstat.c)
 *     PopCoalescingInitialize @ 0x140A15358 (PopCoalescingInitialize.c)
 *     PopInitializePowerSettingCallbacks @ 0x140A19BFC (PopInitializePowerSettingCallbacks.c)
 *     PpmInitHeteroPolicy @ 0x140A1A2F4 (PpmInitHeteroPolicy.c)
 *     PopThermalInit @ 0x140A1B434 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140A1B4C0 (PpmPerfInitialize.c)
 *     PpmInitIdlePolicy @ 0x140A1B618 (PpmInitIdlePolicy.c)
 *     PopFanReportBootStartDevices @ 0x140A1B784 (PopFanReportBootStartDevices.c)
 *     PoFxInitPowerManagement @ 0x140A1B7E8 (PoFxInitPowerManagement.c)
 *     PopEtInit @ 0x140A1BC38 (PopEtInit.c)
 *     PopRecorderInit @ 0x140A1C234 (PopRecorderInit.c)
 *     PopInitDripsWakeAccounting @ 0x140A1D0D0 (PopInitDripsWakeAccounting.c)
 *     PopPowerRequestInit @ 0x140A1E584 (PopPowerRequestInit.c)
 *     PopUmpoInitializeChannel @ 0x140A1E820 (PopUmpoInitializeChannel.c)
 *     PopBatteryInit @ 0x140A1EE08 (PopBatteryInit.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A1F680 (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeIrpWorkers @ 0x140A1F810 (PopInitializeIrpWorkers.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A1FDD4 (PopCreateTimebrokerServiceSid.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A20014 (PopInitializeHighPerfPowerRequest.c)
 *     PopInitializePowerSettings @ 0x140A20E5C (PopInitializePowerSettings.c)
 *     PopInitializeAdpm @ 0x140A21200 (PopInitializeAdpm.c)
 *     PopCheckForUpgradeInProgress @ 0x140A21254 (PopCheckForUpgradeInProgress.c)
 *     PpmInitCoreParkingPolicy @ 0x140A2169C (PpmInitCoreParkingPolicy.c)
 *     PpmInitHeteroEngine @ 0x140A21998 (PpmInitHeteroEngine.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A21A58 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopPowerAggregatorInitialize @ 0x140A21B00 (PopPowerAggregatorInitialize.c)
 *     PopInitializeSystemIdleDetection @ 0x140A21C3C (PopInitializeSystemIdleDetection.c)
 *     PopWatchdogInit @ 0x140A21D08 (PopWatchdogInit.c)
 *     PpmCheckInit @ 0x140A21E3C (PpmCheckInit.c)
 *     PopWakeSourceInit @ 0x140A22020 (PopWakeSourceInit.c)
 *     PopInitVideoWnfState @ 0x140A220C0 (PopInitVideoWnfState.c)
 *     PopBatteryInitPhaseTwo @ 0x140A22264 (PopBatteryInitPhaseTwo.c)
 *     PopInitShutdownList @ 0x140A224E8 (PopInitShutdownList.c)
 *     PoFxRegisterDebugger @ 0x140A22614 (PoFxRegisterDebugger.c)
 *     PopCoolingInit @ 0x140A229B4 (PopCoolingInit.c)
 *     PopTransitionCheckpointInit @ 0x140A229E0 (PopTransitionCheckpointInit.c)
 *     PpmWmiInit @ 0x140A22A0C (PpmWmiInit.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A22A74 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PpmEventInitialize @ 0x140A22D04 (PpmEventInitialize.c)
 *     PopDripsWatchdogInitialize @ 0x140A22D68 (PopDripsWatchdogInitialize.c)
 *     PopRecordFirmwareResetReason @ 0x140A22E50 (PopRecordFirmwareResetReason.c)
 *     PopInitModernSleepEnabledActions @ 0x140A22E9C (PopInitModernSleepEnabledActions.c)
 *     PopCoolingInitializeWnfEvents @ 0x140A3D868 (PopCoolingInitializeWnfEvents.c)
 *     PoInitializePdc @ 0x140A3DA30 (PoInitializePdc.c)
 *     PopPolicyDeviceInit @ 0x140A3DD14 (PopPolicyDeviceInit.c)
 *     PopFanInit @ 0x140A3DD2C (PopFanInit.c)
 *     PopEmRegister @ 0x140A3DD44 (PopEmRegister.c)
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
    qword_140443778 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_140443788 = (__int64)&PopInrushIrpList;
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
    qword_140467FC8 = 0LL;
    KeInitializeEvent(&stru_1404437E8, SynchronizationEvent, 1u);
    PopWorkerLock = 0LL;
    qword_1404437C8 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_1404437D8 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    KeInitializeEvent(&PopTransitionLock, SynchronizationEvent, 1u);
    PopDisableSleepMutex.Count = 1;
    qword_140443808 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_140444AA8 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    PopDisableSleepMutex.Owner = 0LL;
    PopDisableSleepMutex.Contention = 0;
    LOWORD(PopDisableSleepMutex.Event.Header.Lock) = 1;
    PopDisableSleepMutex.Event.Header.Size = 6;
    PopDisableSleepMutex.Event.Header.SignalState = 0;
    PopInitShutdownList();
    v8 = PopIdleScanInterval;
    qword_140443828 = (__int64)&PopIdleDetectList;
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
    qword_140443908 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_140443978 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    qword_140443988 = (__int64)&PopThermal;
    PopThermal = &PopThermal;
    IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
    qword_140443968 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_1404439E4;
    PopDefaultPolicy(dword_1404439E4);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_1404439B0 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_140467FC0 = -1;
    dword_140467FC4 = 2;
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
    dword_140443BA0 = 4;
    qword_140443BA8 = (__int64)PopShutdownHandler;
    byte_140443BA4 = 0;
    PopWakeSourceInit();
    PpmWmiInit();
    PopUserPresentSetStatus = 0;
    KeInitializeTimer(&PopAwayModeUserPresenceTimer);
    KeInitializeEvent(&PopUserPresentCompletedEvent, SynchronizationEvent, 0);
    KeInitializeEvent(&stru_140444908, SynchronizationEvent, 1u);
    PoFxInitPowerManagement();
    dword_140443AEC = 0;
    qword_140443AF0 = 100LL;
    qword_140443AF8 = 100LL;
    dword_140443B00 = 100;
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
            PopProcessBootstat(a2);
            PopCheckForAbnormalReset();
            PopAcquirePolicyLock();
            PopCheckForUpgradeInProgress();
            if ( InitIsWinPEMode )
              PopLogSleepDisabled(16, 15, 0LL, 0LL);
            if ( byte_140443C14 )
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
              byte_140443C1E = 1;
              *(_QWORD *)&xmmword_140443C20 = 0x19000000064LL;
              *((_QWORD *)&xmmword_140443C20 + 1) = 0xFFFF0000000ALL;
              LODWORD(qword_140443C40) = 4;
              dword_140443C48 = 2;
            }
            if ( (PopSimulate & 2) != 0 )
            {
              LODWORD(PopCapabilities) = 16843009;
              WORD2(PopCapabilities) = 257;
              BYTE6(PopCapabilities) = 1;
              unk_140443C11 = 257;
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
