/*
 * XREFs of PoInitSystem @ 0x1409B2C10
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x1409C4788 (Phase1InitializationIoReady.c)
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x140005DA8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     PpmReleaseLock @ 0x14008BC30 (PpmReleaseLock.c)
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x1400CC4D0 (ExInitializeResourceLite.c)
 *     KiInitializeMutant @ 0x1400DD358 (KiInitializeMutant.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14015F980 (ExInitializeNPagedLookasideListInternal.c)
 *     ExRegisterCallback @ 0x14016C660 (ExRegisterCallback.c)
 *     PopBatteryQueueWork @ 0x1401762AC (PopBatteryQueueWork.c)
 *     HviIsAnyHypervisorPresent @ 0x140176B90 (HviIsAnyHypervisorPresent.c)
 *     PopInitilizeAcDcSettings @ 0x14017DD9C (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x14017DE58 (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x14018D7D0 (PpmInitIllegalThrottleLogging.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x14018FA0C (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x140191CCC (IoAddTriageDumpDataBlock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x140192A60 (PpmHeteroInitializeHgsSupport.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1401B8250 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwOpenFile @ 0x1401B87D0 (ZwOpenFile.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     PopDiagTraceAbnormalReset @ 0x1402DF4FC (PopDiagTraceAbnormalReset.c)
 *     PopTraceBootError @ 0x1402E2230 (PopTraceBootError.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x1405653B0 (EmClientQueryRuleState.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopUpdateUpgradeInProgress @ 0x140582490 (PopUpdateUpgradeInProgress.c)
 *     PoRegisterPowerSettingCallback @ 0x140589EE0 (PoRegisterPowerSettingCallback.c)
 *     RtlIsMultiSessionSku @ 0x1406AD9E0 (RtlIsMultiSessionSku.c)
 *     EtwRegister @ 0x1406BE560 (EtwRegister.c)
 *     ExCreateCallback @ 0x1406CA3A0 (ExCreateCallback.c)
 *     PopLogSleepDisabled @ 0x14070AA54 (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x14071C278 (PopUpdateConsoleDisplayState.c)
 *     PopInitializePowerPolicySimulate @ 0x14071E394 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x14071EDEC (PopResetActionDefaults.c)
 *     PpmIdleRegisterDefaultStates @ 0x140729734 (PpmIdleRegisterDefaultStates.c)
 *     PopInitializeWorkItem @ 0x140729864 (PopInitializeWorkItem.c)
 *     EmpProviderRegister @ 0x14072CB10 (EmpProviderRegister.c)
 *     PopResetCurrentPolicies @ 0x14074760C (PopResetCurrentPolicies.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x140748738 (PopIdleInitAoAcDozeS4Timer.c)
 *     PpmCheckInitProcessors @ 0x14074EE58 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x14074F454 (PopInitializeHeteroProcessors.c)
 *     PpmEnableWmiInterface @ 0x140758650 (PpmEnableWmiInterface.c)
 *     KeRegisterProcessorChangeCallback @ 0x140759CD0 (KeRegisterProcessorChangeCallback.c)
 *     PopThermalHandlePreviousShutdown @ 0x140760834 (PopThermalHandlePreviousShutdown.c)
 *     PopDefaultPolicy @ 0x140761BBC (PopDefaultPolicy.c)
 *     TtmInit @ 0x1407623C0 (TtmInit.c)
 *     RtlGetSystemBootStatus @ 0x1407630A0 (RtlGetSystemBootStatus.c)
 *     PopSetupMixedRealitytNotification @ 0x1407631A0 (PopSetupMixedRealitytNotification.c)
 *     PopInitializePreSleepNotifications @ 0x140763500 (PopInitializePreSleepNotifications.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407638F8 (PopUpdateBackgroundCoolingStatus.c)
 *     PopSetupHighPerfPowerRequest @ 0x140763A70 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupBluetoothChargingNotification @ 0x140763CB8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x140763CF4 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140763D30 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140763D6C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140763DA8 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x140763DE4 (PopSetupAudioEventNotification.c)
 *     PopCheckSkipTick @ 0x140763F78 (PopCheckSkipTick.c)
 *     PopPdcCsDeviceNotification @ 0x14086F030 (PopPdcCsDeviceNotification.c)
 *     PopDiagTraceSkipTick @ 0x1408740D8 (PopDiagTraceSkipTick.c)
 *     PopNetIsDisconnectStandbyActive @ 0x140876DFC (PopNetIsDisconnectStandbyActive.c)
 *     RtlSetSystemBootStatus @ 0x140895EF0 (RtlSetSystemBootStatus.c)
 *     PopReadErrataDisablePrimaryDeviceFastResume @ 0x1409AB034 (PopReadErrataDisablePrimaryDeviceFastResume.c)
 *     PopNetInitialize @ 0x1409B2AB4 (PopNetInitialize.c)
 *     PopInitializePowerButtonHold @ 0x1409B3CBC (PopInitializePowerButtonHold.c)
 *     PopDeepSleepInitialize @ 0x1409B3DC8 (PopDeepSleepInitialize.c)
 *     PopDiagInitialize @ 0x1409D0B90 (PopDiagInitialize.c)
 *     PopCoalescingInitialize @ 0x1409D1E34 (PopCoalescingInitialize.c)
 *     PopInitializePowerSettingCallbacks @ 0x1409D6B5C (PopInitializePowerSettingCallbacks.c)
 *     PpmInitPolicyConfiguration @ 0x1409D7234 (PpmInitPolicyConfiguration.c)
 *     PpmInitHeteroPolicy @ 0x1409D731C (PpmInitHeteroPolicy.c)
 *     PopThermalInit @ 0x1409D8110 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x1409D81A0 (PpmPerfInitialize.c)
 *     PpmInitIdlePolicy @ 0x1409D82DC (PpmInitIdlePolicy.c)
 *     PopFanReportBootStartDevices @ 0x1409D85B0 (PopFanReportBootStartDevices.c)
 *     PoFxInitPowerManagement @ 0x1409D8614 (PoFxInitPowerManagement.c)
 *     PopEtInit @ 0x1409D8A28 (PopEtInit.c)
 *     PopRecorderInit @ 0x1409DA6BC (PopRecorderInit.c)
 *     PopBatteryInitPhaseTwo @ 0x1409DAE54 (PopBatteryInitPhaseTwo.c)
 *     PopBatteryInit @ 0x1409DB334 (PopBatteryInit.c)
 *     PopPowerRequestInit @ 0x1409DB558 (PopPowerRequestInit.c)
 *     PopUmpoInitializeChannel @ 0x1409DBCC0 (PopUmpoInitializeChannel.c)
 *     PopInitializeIrpWorkers @ 0x1409DC56C (PopInitializeIrpWorkers.c)
 *     PopInitializeDirectedDrips @ 0x1409DC6E0 (PopInitializeDirectedDrips.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1409DC8CC (PopUmpoInitializeMonitorChannel.c)
 *     PopCreateTimebrokerServiceSid @ 0x1409DCBB4 (PopCreateTimebrokerServiceSid.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1409DCC6C (PopInitializeHighPerfPowerRequest.c)
 *     PopCheckShutdownMarker @ 0x1409DD374 (PopCheckShutdownMarker.c)
 *     PopInitializePowerSettings @ 0x1409DDBD4 (PopInitializePowerSettings.c)
 *     PopInitializeAdpm @ 0x1409DDD80 (PopInitializeAdpm.c)
 *     PpmInitCoreParkingPolicy @ 0x1409DE034 (PpmInitCoreParkingPolicy.c)
 *     PpmInitHeteroEngine @ 0x1409DE220 (PpmInitHeteroEngine.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x1409DE38C (PopTriggerDiagTraceAoAcCapability.c)
 *     PopInitVideoWnfState @ 0x1409DE784 (PopInitVideoWnfState.c)
 *     PopWakeSourceInit @ 0x1409DE818 (PopWakeSourceInit.c)
 *     PopInitializeDripsWatchdog @ 0x1409DEB00 (PopInitializeDripsWatchdog.c)
 *     PopInitShutdownList @ 0x1409DEBBC (PopInitShutdownList.c)
 *     PopEsInit @ 0x1409DECD8 (PopEsInit.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x1409DEF6C (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PoFxRegisterDebugger @ 0x1409DF33C (PoFxRegisterDebugger.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x1409DF3CC (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  int TimebrokerServiceSid; // eax
  unsigned int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed __int64 v10; // rdx
  int v11; // ebx
  unsigned __int8 v12; // di
  unsigned __int8 v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+5Ch] [rbp-A4h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *Buffer; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp-88h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v42[8]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES v45; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v46[20]; // [rsp+118h] [rbp+18h] BYREF
  int v47; // [rsp+12Ch] [rbp+2Ch]
  _DWORD InputBuffer[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v49; // [rsp+140h] [rbp+40h] BYREF
  __int64 v50; // [rsp+148h] [rbp+48h]
  int v51; // [rsp+150h] [rbp+50h]
  __int64 OutputBuffer; // [rsp+158h] [rbp+58h] BYREF
  int v53; // [rsp+160h] [rbp+60h]

  PopOsInitPhase = a1;
  if ( !a1 )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    PopQpcFrequency = PerformanceFrequency.QuadPart;
    PopComputeCounterShifts(
      PerformanceFrequency.QuadPart,
      &PpmPerformanceDistributionShift,
      &PpmPerformanceCounterShift);
    PopComputeCounterShifts(0x989680uLL, &PpmHvPerformanceDistributionShift, &PpmHvPerformanceCounterShift);
    PopPowerAggregatorWork = 0LL;
    dword_140410988 = 0;
    PopPowerAggregatorWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorWorker;
    qword_140410858 = 0LL;
    qword_140418738 = 0LL;
    qword_140417DB8 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_140417DC8 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    qword_140410958 = 0LL;
    PopPowerAggregatorLock = 0LL;
    PopPowerAggregatorWorkItem.Parameter = 0LL;
    PopPowerAggregatorWorkItem.List.Flink = 0LL;
    PopPowerEventLock = 0LL;
    PopCsResiliencyStatsLock = 0LL;
    PopCoalRegistrationListLock = 0LL;
    PopDeepSleepDisengageReasonLock = 0LL;
    PopIrpLock = 0LL;
    ExInitializeNPagedLookasideListInternal((__int64)&PopIrpDataLookaside, 0LL, 0LL, 512, 248, 1917415248, 0, 0);
    BootStatFileHandle = 0LL;
    qword_140419558 = 0LL;
    BootStatFileHandleAcquired = 0;
    BootStatKeepHandleOpen = 0;
    BootStatDataCache = 0LL;
    BootStatDisableFlush = 0;
    PopBsdSkipLogging = 0;
    PopBsdUpdateLock = 0LL;
    PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
    PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v4);
    LOBYTE(v5) = 1;
    KiInitializeMutant((__int64)&PopWdiTimerMutex, 0LL, v5);
    PopWdiTimer = 8LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    qword_140416890 = (__int64)&qword_140416888;
    qword_140416888 = (__int64)&qword_140416888;
    qword_140416918 = (__int64)PopWdiTimerCallback;
    PopWdiCurrentScenarioInstanceId = 0;
    PopWdiCurrentScenarioInstanceIdV2 = 0LL;
    qword_140416898 = 0LL;
    qword_1404168B8 = 0LL;
    PopWdiTimerTimeoutValue = -50000000LL;
    PopWdiTimerDpc = 275;
    qword_140416920 = 0LL;
    qword_140416938 = 0LL;
    qword_140416910 = 0LL;
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
    PopInputSuppressionLock = 0LL;
    qword_140419498 = 0LL;
    qword_140416F98 = 0LL;
    qword_140419478 = (__int64)&PopTransitionCheckpoints;
    PopTransitionCheckpoints = &PopTransitionCheckpoints;
    PopTransitionCheckpointLock = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmHeteroInitializeHgsSupport();
    PpmCheckCurrentPipelineId = 6;
    qword_1404109F8 = (__int64)PpmCheckRun;
    qword_1404109B8 = (__int64)PpmCheckPeriodicStart;
    LODWORD(PpmCheckDpc) = 787;
    qword_140410A00 = 0LL;
    qword_140410A18 = 0LL;
    qword_1404109F0 = 0LL;
    LODWORD(PpmCheckStartDpc) = 787;
    qword_1404109C0 = 0LL;
    qword_1404109D8 = 0LL;
    qword_1404109B0 = 0LL;
    TimebrokerServiceSid = PopInitializeIrpWorkers();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopIrpSerialLock = 0LL;
    qword_140417DF8 = 0LL;
    qword_140417E38 = (__int64)&qword_140417E30;
    qword_140417E30 = (__int64)&qword_140417E30;
    qword_140417E08 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_140417E18 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_140417E48 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_1404190A8 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_14043C4C8 = 0LL;
    word_140417E28 = 1;
    byte_140417E2A = 6;
    dword_140417E2C = 1;
    PopWorkerLock = 0LL;
    LOWORD(PopTransitionLock.Header.Lock) = 1;
    PopTransitionLock.Header.Size = 6;
    PopTransitionLock.Header.SignalState = 1;
    PopDisableSleepMutex.Count = 1;
    PopDisableSleepMutex.Owner = 0LL;
    PopDisableSleepMutex.Contention = 0;
    LOWORD(PopDisableSleepMutex.Event.Header.Lock) = 1;
    PopDisableSleepMutex.Event.Header.Size = 6;
    PopDisableSleepMutex.Event.Header.SignalState = 0;
    PopInitShutdownList();
    v7 = PopIdleScanInterval;
    qword_140417E68 = (__int64)&PopIdleDetectList;
    PopIdleDetectList = (__int64)&PopIdleDetectList;
    PopDopeGlobalLock = 0LL;
    if ( PopIdleScanInterval )
    {
      if ( PopIdleScanInterval == -1 )
      {
        v7 = a1 + 30;
        PopIdleScanInterval = a1 + 30;
      }
      else if ( (unsigned int)PopIdleScanInterval > 0x12C )
      {
        v7 = 300;
        PopIdleScanInterval = 300;
      }
      PopIdleBackgroundIgnoreCount = (v7 + 59) / v7;
      PopBackgroundTaskIgnoreCount = (v7 + 179) / v7;
    }
    PopWorkerSpinLock = 0LL;
    PopPolicyWorker.WorkerRoutine = (void (__fastcall *)(void *))PopPolicyWorkerThread;
    PopPolicyWorker.Parameter = (void *)0x80000000LL;
    PopPolicyWorker.List.Flink = 0LL;
    PopWorkerStatus = -1;
    ExInitializeResourceLite(&PopPolicyLock);
    PopAwaymodeLock = 0LL;
    PopVolumeLock.Event.Header.WaitListHead.Blink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Event.Header.WaitListHead.Flink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Count = 1;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Blink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Flink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    qword_140417F38 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_140417F48 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_140417FB8 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    PopVolumeLock.Owner = 0LL;
    PopVolumeLock.Contention = 0;
    LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
    PopVolumeLock.Event.Header.Size = 6;
    PopVolumeLock.Event.Header.SignalState = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_140417FC8 = (__int64)&PopThermal;
    PopThermal = &PopThermal;
    IoAddTriageDumpDataBlock((int)&PopThermal, 16);
    qword_140417FA8 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_140418024;
    PopDefaultPolicy(dword_140418024);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_140417FF0 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_14043C4C0 = -1;
    dword_14043C4C4 = 2;
    PpmInitPolicyConfiguration();
    PpmInitIdlePolicy();
    PpmPerfInitialize();
    PpmInitCoreParkingPolicy();
    PpmInitHeteroPolicy();
    PpmIdleRegisterDefaultStates();
    PopDeepSleepInitialize(0LL);
    PopInitializePowerSettings();
    PopInitilizeAcDcSettings();
    PopPolicyDeviceLock = 0LL;
    qword_140417268 = 0LL;
    PopBatteryInit();
    PopFanLock = 0LL;
    qword_140417298 = 0LL;
    PopThermalInit();
    PopCoolingExtensionLock = 0LL;
    qword_140417528 = 0LL;
    qword_140417538 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    dword_1404181E0 = 4;
    byte_1404181E4 = 0;
    qword_1404181E8 = (__int64)PopShutdownHandler;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_1404103B8 = (__int64)PpmWmiIdleAccountingProcedure;
    qword_1404DBF00 = (__int64)&qword_1404DBEF8;
    qword_1404DBEF8 = (__int64)&qword_1404DBEF8;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopAwayModeUserPresenceTimer = 8LL;
    qword_140418F38 = (__int64)&qword_140418F30;
    qword_140418F30 = (__int64)&qword_140418F30;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Processor = 0LL;
    PpmWmiIdleAccountingDpc = 275;
    qword_1404103C0 = 0LL;
    qword_1404103D8 = 0LL;
    qword_1404103B0 = 0LL;
    PopUserPresentSetStatus = 0;
    qword_1404DBF08 = 0LL;
    qword_1404DBF28 = 0LL;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_140418F28 = 1;
    byte_140418F2A = 6;
    dword_140418F2C = 1;
    PoFxInitPowerManagement();
    dword_14041812C = 0;
    qword_140418130 = 100LL;
    qword_140418138 = 100LL;
    dword_140418140 = 100;
    PopNetInitialize(0);
    PopInitializePowerButtonHold(0LL);
    PopRecorderInit();
    v8 = *(_QWORD *)(a2 + 240);
    LOBYTE(PopFirmwareResetReason) = *(_BYTE *)(v8 + 3368);
    if ( *(_BYTE *)(v8 + 3368) )
    {
      *((_QWORD *)&PopFirmwareResetReason + 1) = *(_QWORD *)(v8 + 3376);
      xmmword_14043FF30 = *(_OWORD *)(v8 + 3384);
      xmmword_14043FF40 = *(_OWORD *)(v8 + 3400);
    }
    TimebrokerServiceSid = PopCreateTimebrokerServiceSid();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopSIdleLastUpdateNotificationState = 0;
    PopInitializeWorkItem((__int64)&PopSIdleUpdateNotificationWorkItem, (__int64)PopSIdleUpdateNotificationWorker, 0LL);
  }
  if ( a1 == 1 )
  {
    if ( HviIsAnyHypervisorPresent() )
    {
      PpmExitLatencyCheckEnabled = 0;
      PpmExitLatencySamplingPercentage = 0;
    }
    if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 0x10 )
      PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
    PopUmpoInitializeChannel();
    PopUmpoInitializeMonitorChannel();
    PopPdcDeviceListLock = 0LL;
    PopEsInit();
    PopInitializePowerSettingCallbacks();
    TimebrokerServiceSid = PopEtInit();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    TimebrokerServiceSid = PopPowerRequestInit();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    TimebrokerServiceSid = PopInitializeHighPerfPowerRequest();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopCheckPowerSourceAfterRtcWakeInitialize();
    PopWatchdogLock = 0LL;
    qword_14040FE78 = (__int64)&PopWatchdogList;
    PopWatchdogList = (__int64)&PopWatchdogList;
    PopInitializePowerButtonHold(1LL);
    TimebrokerServiceSid = PpmInitHeteroEngine();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    TimebrokerServiceSid = EmpProviderRegister(0LL, (__int64)&PopEmEntry, 1u, (__int64)&PopEmCallback, 2u, &v41);
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopReadErrataDisablePrimaryDeviceFastResume();
  }
  if ( a1 == 2 )
  {
    PoFxRegisterDebugger();
    HalReportResourceUsage(1LL);
    PopBatteryInitPhaseTwo();
    TimebrokerServiceSid = EtwRegister(
                             &PPM_ETW_PROVIDER,
                             (PETWENABLECALLBACK)PpmEventTraceControlCallback,
                             0LL,
                             &PpmEtwHandle);
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PpmEtwRegistered = 1;
    KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    LOBYTE(v9) = 1;
    PopInitializeHeteroProcessors(v9, v10);
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( PpmPerfArtificialDomainSetting != -1 )
      PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
    PpmIdleRegisterDefaultStates();
    PpmCheckInitProcessors(0);
    PpmAcquireLock(&PopFxSystemLatencyLock);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
    if ( PopPlatformAoAc )
    {
      Buffer = IoArcBootDeviceName.Buffer;
      FileHandle = 0LL;
      ObjectAttributes.ObjectName = &IoArcBootDeviceName;
      v37 = 0x100000000LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) >= 0 )
      {
        IoStatusBlock.Pointer = 0LL;
        IoStatusBlock.Information = 0LL;
        *(_QWORD *)&InputBuffer[1] = 0LL;
        OutputBuffer = 0LL;
        v53 = 0;
        InputBuffer[0] = 7;
        if ( ZwDeviceIoControlFile(
               FileHandle,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               0x2D1400u,
               InputBuffer,
               0xCu,
               &OutputBuffer,
               0xCu) >= 0 )
        {
          if ( (_BYTE)v53 )
            PopBsdSkipLogging = 1;
          else
            BYTE5(v37) = 1;
        }
      }
      PopPdcCsDeviceNotification((__int64)&Buffer);
      if ( FileHandle )
        ZwClose(FileHandle);
      PopAcquirePolicyLock();
      PopNetIsDisconnectStandbyActive(&v33);
      byte_140418257 = (unsigned int)(v33 - 3) > 1;
      PopReleasePolicyLock();
    }
    PopUpdateBackgroundCoolingStatus(0);
    PopInitVideoWnfState();
  }
  if ( a1 != 3 )
  {
LABEL_86:
    TimebrokerServiceSid = 0;
    return TimebrokerServiceSid >= 0;
  }
  TimebrokerServiceSid = PopDiagInitialize();
  if ( TimebrokerServiceSid >= 0 )
  {
    PopTriggerDiagTraceAoAcCapability();
    PopFanReportBootStartDevices();
    v11 = 2;
    v12 = 1;
    if ( PopSkipTickPolicy )
    {
      if ( PopSkipTickPolicy == 1 )
      {
        v12 = 0;
        if ( (int)HalGetInterruptTargetInformation(2LL, 0LL, v46) >= 0 )
        {
          PopApicMode = v47;
          if ( PopCheckSkipTick() )
          {
            PoSkipTickMode = 0;
            goto LABEL_51;
          }
          v11 = 1;
        }
      }
      else
      {
        v11 = 0;
      }
    }
    PoSkipTickMode = v11;
    v13 = v11 == 2;
    if ( v11 != 2 )
    {
      if ( !v12 )
        goto LABEL_51;
      v13 = v11 == 2;
    }
    PopDiagTraceSkipTick(v13, v12);
LABEL_51:
    PpmInitIllegalThrottleLogging();
    PopCheckShutdownMarker(a2);
    if ( (int)RtlGetSystemBootStatus(13, (__int64)&v49, 20, 0LL) >= 0 && HIDWORD(v50) )
    {
      PopTraceBootError();
      v49 = 0LL;
      v50 = 0LL;
      v51 = 0;
      RtlSetSystemBootStatus(13, (__int64)&v49, 20, 0LL);
    }
    if ( (unsigned __int8)off_1403FE610[0]()
      || (unsigned int)(PoOffCrashConfigTable - 1) <= 1 && DWORD1(PoOffCrashConfigTable) )
    {
      PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
    }
    PopAcquirePolicyLock();
    PopUpdateUpgradeInProgress(0LL);
    if ( InitIsWinPEMode )
      PopLogSleepDisabled(16, 15, 0LL, 0LL);
    if ( byte_140418254 )
      PopLogSleepDisabled(17, 7, 0LL, 0LL);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2576LL) & 8) != 0 )
    {
      PopSecureLaunched = 1;
      PopLogSleepDisabled(21, 4, 0LL, 0LL);
    }
    PopDeepSleepInitialize(3LL);
    PopInitializePowerPolicySimulate();
    if ( (PopSimulate & 1) != 0 )
    {
      byte_14041825E = 1;
      *(_QWORD *)&xmmword_140418260 = 0x19000000064LL;
      *((_QWORD *)&xmmword_140418260 + 1) = 0xFFFF0000000ALL;
      LODWORD(qword_140418280) = 4;
      dword_140418288 = 2;
    }
    if ( (PopSimulate & 2) != 0 )
    {
      LODWORD(PopCapabilities) = 16843009;
      WORD2(PopCapabilities) = 257;
      BYTE6(PopCapabilities) = 1;
      unk_140418251 = 257;
    }
    PopResetCurrentPolicies();
    PopInitializeAdpm();
    if ( RtlIsMultiSessionSku() && PopPlatformAoAc )
    {
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_ACDC_POWER_SOURCE,
        (PPOWER_SETTING_CALLBACK)PopBackgroundActivityPolicyCallback,
        0LL,
        0LL);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_LOW_POWER_EPOCH,
        (PPOWER_SETTING_CALLBACK)PopBackgroundActivityPolicyCallback,
        0LL,
        0LL);
    }
    PopInitilizeAcDcSettings();
    v34 = 1;
    PopUpdateConsoleDisplayState(1);
    ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)&v34, 4LL);
    PopNetInitialize(3);
    PopReleasePolicyLock();
    *(_QWORD *)&PopIdleScanTimer.Header.Lock = 8LL;
    PopIdleScanDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopCheckForIdleness;
    PopIdleScanTimer.Header.WaitListHead.Blink = &PopIdleScanTimer.Header.WaitListHead;
    PopIdleScanTimer.Header.WaitListHead.Flink = &PopIdleScanTimer.Header.WaitListHead;
    PopIdleScanDpc.TargetInfoAsUlong = 275;
    PopIdleScanDpc.DeferredContext = 0LL;
    PopIdleScanDpc.DpcData = 0LL;
    PopIdleScanDpc.ProcessorHistory = 0LL;
    PopIdleScanTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PopIdleScanTimer.Processor = 0LL;
    PopIdleInitAoAcDozeS4Timer();
    if ( PopIdleScanInterval )
      KeSetCoalescableTimer(
        &PopIdleScanTimer,
        (LARGE_INTEGER)(-10000000LL * (unsigned int)PopIdleScanInterval),
        1000 * PopIdleScanInterval,
        0x3E8u,
        &PopIdleScanDpc);
    PopInitializePreSleepNotifications();
    v14 = *(_QWORD *)(a2 + 240);
    PopHiberLoaderScratchPages = *(_DWORD *)(v14 + 232);
    PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(v14 + 116) & 0x10000000) != 0;
    PopSetupHighPerfPowerRequest();
    PpmEnableWmiInterface();
    PopAcquirePolicyLock();
    PopCoalescingInitialize(v16, v15, v17);
    PopReleasePolicyLock();
    PopInitializeDirectedDrips(v19, v18, v20);
    PopInitializeDripsWatchdog(v22, v21, v23);
    PopSetupAudioEventNotification();
    PopSetupMixedRealitytNotification();
    PopSetupFullScrenVideoNotification();
    PopSetupUserPresencePredictionNotification();
    PopSetupSprActiveSessionChangeNotification();
    PopSetupAirplaneModeNotification();
    PopSetupBluetoothChargingNotification();
    PopThermalHandlePreviousShutdown();
    PopCheckpointEfiRuntimeRedirected = (*(_DWORD *)(a2 + 264) & 2) != 0;
    TtmInit();
    if ( PopPlatformAoAc )
    {
      v31 = 1;
      EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v31);
      if ( v31 == 2 )
        PopErrataReportingIncorrectLidState = 1;
      if ( PopPlatformAoAc )
      {
        if ( PopLidStateForInputSuppressionOverride != -1 )
          PopIgnoreLidStateForInputSuppression = PopLidStateForInputSuppressionOverride != 0;
        if ( PopEnableInputSuppressionOverride == -1 )
        {
          v32 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_INPUT_SUPPRESSION_NOTIFICATION, &v32);
          PopEnableInputSuppression = v32 == 2;
        }
        else
        {
          PopEnableInputSuppression = PopEnableInputSuppressionOverride != 0;
        }
      }
    }
    PopBatteryQueueWork(1u);
    if ( (int)KsrGetFirmwareInformation(v42) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
      v45.Length = 48;
      v45.ObjectName = &DestinationString;
      v45.RootDirectory = 0LL;
      v45.Attributes = 80;
      *(_OWORD *)&v45.SecurityDescriptor = 0LL;
      if ( ExCreateCallback(&CallbackObject, &v45, 0, 1u) >= 0 )
        ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopKsrCallback, 0LL);
    }
    PopHiberEvaluateSkippingMemoryMapValidation(v25, v24, v26);
    PopReadErrataSkipMemoryOverwriteRequestControlLockAction(v28, v27, v29);
    goto LABEL_86;
  }
  return TimebrokerServiceSid >= 0;
}
