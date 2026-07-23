/*
 * XREFs of PoInitSystem @ 0x1409B3C10
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x1409C5788 (Phase1InitializationIoReady.c)
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x140005DA8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     KiInitializeMutant @ 0x1400DD3F8 (KiInitializeMutant.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14015FAA0 (ExInitializeNPagedLookasideListInternal.c)
 *     ExRegisterCallback @ 0x14016C780 (ExRegisterCallback.c)
 *     PopBatteryQueueWork @ 0x1401763CC (PopBatteryQueueWork.c)
 *     HviIsAnyHypervisorPresent @ 0x140176CB0 (HviIsAnyHypervisorPresent.c)
 *     PopInitilizeAcDcSettings @ 0x14017DEFC (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x14017DFB8 (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x14018D930 (PpmInitIllegalThrottleLogging.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x14018FB6C (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x140192BC0 (PpmHeteroInitializeHgsSupport.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1401B83D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopDiagTraceAbnormalReset @ 0x1402DF7EC (PopDiagTraceAbnormalReset.c)
 *     PopTraceBootError @ 0x1402E2520 (PopTraceBootError.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x1405663B0 (EmClientQueryRuleState.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopUpdateUpgradeInProgress @ 0x140583490 (PopUpdateUpgradeInProgress.c)
 *     PoRegisterPowerSettingCallback @ 0x14058AEE0 (PoRegisterPowerSettingCallback.c)
 *     RtlIsMultiSessionSku @ 0x1406AEC60 (RtlIsMultiSessionSku.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     ExCreateCallback @ 0x1406CB620 (ExCreateCallback.c)
 *     PopLogSleepDisabled @ 0x14070BCD4 (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x14071D4F8 (PopUpdateConsoleDisplayState.c)
 *     PopInitializePowerPolicySimulate @ 0x14071F614 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x14072006C (PopResetActionDefaults.c)
 *     PpmIdleRegisterDefaultStates @ 0x14072A904 (PpmIdleRegisterDefaultStates.c)
 *     PopInitializeWorkItem @ 0x14072AA34 (PopInitializeWorkItem.c)
 *     EmpProviderRegister @ 0x14072DCE0 (EmpProviderRegister.c)
 *     PopResetCurrentPolicies @ 0x1407487DC (PopResetCurrentPolicies.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x140749908 (PopIdleInitAoAcDozeS4Timer.c)
 *     PpmCheckInitProcessors @ 0x140750028 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x140750624 (PopInitializeHeteroProcessors.c)
 *     PpmEnableWmiInterface @ 0x140759820 (PpmEnableWmiInterface.c)
 *     KeRegisterProcessorChangeCallback @ 0x14075AEA0 (KeRegisterProcessorChangeCallback.c)
 *     PopThermalHandlePreviousShutdown @ 0x140761A04 (PopThermalHandlePreviousShutdown.c)
 *     PopDefaultPolicy @ 0x140762D8C (PopDefaultPolicy.c)
 *     TtmInit @ 0x140763590 (TtmInit.c)
 *     RtlGetSystemBootStatus @ 0x140764270 (RtlGetSystemBootStatus.c)
 *     PopSetupMixedRealitytNotification @ 0x140764370 (PopSetupMixedRealitytNotification.c)
 *     PopInitializePreSleepNotifications @ 0x1407646D0 (PopInitializePreSleepNotifications.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140764AC8 (PopUpdateBackgroundCoolingStatus.c)
 *     PopSetupHighPerfPowerRequest @ 0x140764C40 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupBluetoothChargingNotification @ 0x140764E88 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x140764EC4 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140764F00 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140764F3C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140764F78 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x140764FB4 (PopSetupAudioEventNotification.c)
 *     PopCheckSkipTick @ 0x140765148 (PopCheckSkipTick.c)
 *     PopPdcCsDeviceNotification @ 0x140870270 (PopPdcCsDeviceNotification.c)
 *     PopDiagTraceSkipTick @ 0x140875318 (PopDiagTraceSkipTick.c)
 *     PopNetIsDisconnectStandbyActive @ 0x14087803C (PopNetIsDisconnectStandbyActive.c)
 *     RtlSetSystemBootStatus @ 0x140897130 (RtlSetSystemBootStatus.c)
 *     PopReadErrataDisablePrimaryDeviceFastResume @ 0x1409AC034 (PopReadErrataDisablePrimaryDeviceFastResume.c)
 *     PopNetInitialize @ 0x1409B3AB4 (PopNetInitialize.c)
 *     PopInitializePowerButtonHold @ 0x1409B4CBC (PopInitializePowerButtonHold.c)
 *     PopDeepSleepInitialize @ 0x1409B4DC8 (PopDeepSleepInitialize.c)
 *     PopDiagInitialize @ 0x1409D1B90 (PopDiagInitialize.c)
 *     PopCoalescingInitialize @ 0x1409D2E34 (PopCoalescingInitialize.c)
 *     PopInitializePowerSettingCallbacks @ 0x1409D7B5C (PopInitializePowerSettingCallbacks.c)
 *     PpmInitPolicyConfiguration @ 0x1409D8234 (PpmInitPolicyConfiguration.c)
 *     PpmInitHeteroPolicy @ 0x1409D831C (PpmInitHeteroPolicy.c)
 *     PopThermalInit @ 0x1409D9110 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x1409D91A0 (PpmPerfInitialize.c)
 *     PpmInitIdlePolicy @ 0x1409D92DC (PpmInitIdlePolicy.c)
 *     PopFanReportBootStartDevices @ 0x1409D95B0 (PopFanReportBootStartDevices.c)
 *     PoFxInitPowerManagement @ 0x1409D9614 (PoFxInitPowerManagement.c)
 *     PopEtInit @ 0x1409D9A28 (PopEtInit.c)
 *     PopRecorderInit @ 0x1409DB6BC (PopRecorderInit.c)
 *     PopBatteryInitPhaseTwo @ 0x1409DBE54 (PopBatteryInitPhaseTwo.c)
 *     PopBatteryInit @ 0x1409DC334 (PopBatteryInit.c)
 *     PopPowerRequestInit @ 0x1409DC558 (PopPowerRequestInit.c)
 *     PopUmpoInitializeChannel @ 0x1409DCCC0 (PopUmpoInitializeChannel.c)
 *     PopInitializeIrpWorkers @ 0x1409DD56C (PopInitializeIrpWorkers.c)
 *     PopInitializeDirectedDrips @ 0x1409DD6E0 (PopInitializeDirectedDrips.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1409DD8CC (PopUmpoInitializeMonitorChannel.c)
 *     PopCreateTimebrokerServiceSid @ 0x1409DDBB4 (PopCreateTimebrokerServiceSid.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1409DDC6C (PopInitializeHighPerfPowerRequest.c)
 *     PopCheckShutdownMarker @ 0x1409DE374 (PopCheckShutdownMarker.c)
 *     PopInitializePowerSettings @ 0x1409DEBD4 (PopInitializePowerSettings.c)
 *     PopInitializeAdpm @ 0x1409DED80 (PopInitializeAdpm.c)
 *     PpmInitCoreParkingPolicy @ 0x1409DF034 (PpmInitCoreParkingPolicy.c)
 *     PpmInitHeteroEngine @ 0x1409DF220 (PpmInitHeteroEngine.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x1409DF38C (PopTriggerDiagTraceAoAcCapability.c)
 *     PopInitVideoWnfState @ 0x1409DF784 (PopInitVideoWnfState.c)
 *     PopWakeSourceInit @ 0x1409DF818 (PopWakeSourceInit.c)
 *     PopInitializeDripsWatchdog @ 0x1409DFB00 (PopInitializeDripsWatchdog.c)
 *     PopInitShutdownList @ 0x1409DFBBC (PopInitShutdownList.c)
 *     PopEsInit @ 0x1409DFCD8 (PopEsInit.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x1409DFF6C (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PoFxRegisterDebugger @ 0x1409E033C (PoFxRegisterDebugger.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x1409E03CC (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
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
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  int v18; // [rsp+58h] [rbp-A8h] BYREF
  int Buffer; // [rsp+5Ch] [rbp-A4h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp-88h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v27[8]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES v30; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v31[20]; // [rsp+118h] [rbp+18h] BYREF
  int v32; // [rsp+12Ch] [rbp+2Ch]
  _DWORD InputBuffer[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 DataBuffer; // [rsp+140h] [rbp+40h] BYREF
  __int64 v35; // [rsp+148h] [rbp+48h]
  int v36; // [rsp+150h] [rbp+50h]
  __int64 OutputBuffer; // [rsp+158h] [rbp+58h] BYREF
  int v38; // [rsp+160h] [rbp+60h]

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
    dword_1404119E8 = 0;
    PopPowerAggregatorWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorWorker;
    qword_1404118D8 = 0LL;
    qword_1404197B8 = 0LL;
    qword_140418E58 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_140418E68 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    qword_1404119D8 = 0LL;
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
    qword_14041A5C8 = 0LL;
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
    qword_140417970 = (__int64)&qword_140417968;
    qword_140417968 = (__int64)&qword_140417968;
    qword_1404179D8 = (__int64)PopWdiTimerCallback;
    PopWdiCurrentScenarioInstanceId = 0;
    PopWdiCurrentScenarioInstanceIdV2 = 0LL;
    qword_140417978 = 0LL;
    qword_140417998 = 0LL;
    PopWdiTimerTimeoutValue = -50000000LL;
    PopWdiTimerDpc = 275;
    qword_1404179E0 = 0LL;
    qword_1404179F8 = 0LL;
    qword_1404179D0 = 0LL;
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
    qword_14041A548 = 0LL;
    qword_140418098 = 0LL;
    qword_14041A528 = (__int64)&PopTransitionCheckpoints;
    PopTransitionCheckpoints = &PopTransitionCheckpoints;
    PopTransitionCheckpointLock = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmHeteroInitializeHgsSupport();
    PpmCheckCurrentPipelineId = 6;
    qword_140411A58 = (__int64)PpmCheckRun;
    qword_140411AB8 = (__int64)PpmCheckPeriodicStart;
    LODWORD(PpmCheckDpc) = 787;
    qword_140411A60 = 0LL;
    qword_140411A78 = 0LL;
    qword_140411A50 = 0LL;
    LODWORD(PpmCheckStartDpc) = 787;
    qword_140411AC0 = 0LL;
    qword_140411AD8 = 0LL;
    qword_140411AB0 = 0LL;
    TimebrokerServiceSid = PopInitializeIrpWorkers();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopIrpSerialLock = 0LL;
    qword_140418E88 = 0LL;
    qword_140418ED8 = (__int64)&qword_140418ED0;
    qword_140418ED0 = (__int64)&qword_140418ED0;
    qword_140418EE8 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_140418EA8 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_140418F08 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_14041A168 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_14043D588 = 0LL;
    word_140418EC8 = 1;
    byte_140418ECA = 6;
    dword_140418ECC = 1;
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
    qword_140418F18 = (__int64)&PopIdleDetectList;
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
    qword_140419058 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_140419038 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_140419048 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    PopVolumeLock.Owner = 0LL;
    PopVolumeLock.Contention = 0;
    LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
    PopVolumeLock.Event.Header.Size = 6;
    PopVolumeLock.Event.Header.SignalState = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_140419078 = (__int64)&PopThermal;
    PopThermal = &PopThermal;
    IoAddTriageDumpDataBlock((int)&PopThermal, 16);
    qword_140419088 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_1404190A4;
    PopDefaultPolicy(dword_1404190A4);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_140419210 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_14043D580 = -1;
    dword_14043D584 = 2;
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
    qword_140418308 = 0LL;
    PopBatteryInit();
    PopFanLock = 0LL;
    qword_140418318 = 0LL;
    PopThermalInit();
    PopCoolingExtensionLock = 0LL;
    qword_1404185C8 = 0LL;
    qword_1404185D8 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    dword_140419280 = 4;
    byte_140419284 = 0;
    qword_140419288 = (__int64)PopShutdownHandler;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_140411498 = (__int64)PpmWmiIdleAccountingProcedure;
    qword_1404DCFC0 = (__int64)&qword_1404DCFB8;
    qword_1404DCFB8 = (__int64)&qword_1404DCFB8;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopAwayModeUserPresenceTimer = 8LL;
    qword_14041A018 = (__int64)&qword_14041A010;
    qword_14041A010 = (__int64)&qword_14041A010;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Processor = 0LL;
    PpmWmiIdleAccountingDpc = 275;
    qword_1404114A0 = 0LL;
    qword_1404114B8 = 0LL;
    qword_140411490 = 0LL;
    PopUserPresentSetStatus = 0;
    qword_1404DCFC8 = 0LL;
    qword_1404DCFE8 = 0LL;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_14041A008 = 1;
    byte_14041A00A = 6;
    dword_14041A00C = 1;
    PoFxInitPowerManagement();
    dword_1404191AC = 0;
    qword_1404191B0 = 100LL;
    qword_1404191B8 = 100LL;
    dword_1404191C0 = 100;
    PopNetInitialize(0);
    PopInitializePowerButtonHold(0LL);
    PopRecorderInit();
    v8 = *(_QWORD *)(a2 + 240);
    LOBYTE(PopFirmwareResetReason) = *(_BYTE *)(v8 + 3368);
    if ( *(_BYTE *)(v8 + 3368) )
    {
      *((_QWORD *)&PopFirmwareResetReason + 1) = *(_QWORD *)(v8 + 3376);
      xmmword_140440FF0 = *(_OWORD *)(v8 + 3384);
      xmmword_140441000 = *(_OWORD *)(v8 + 3400);
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
    qword_140410EF8 = (__int64)&PopWatchdogList;
    PopWatchdogList = (__int64)&PopWatchdogList;
    PopInitializePowerButtonHold(1LL);
    TimebrokerServiceSid = PpmInitHeteroEngine();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    TimebrokerServiceSid = EmpProviderRegister(0LL, (__int64)&PopEmEntry, 1u, (__int64)&PopEmCallback, 2u, &v26);
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
      v21 = IoArcBootDeviceName.Buffer;
      FileHandle = 0LL;
      ObjectAttributes.ObjectName = &IoArcBootDeviceName;
      v22 = 0x100000000LL;
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
        v38 = 0;
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
          if ( (_BYTE)v38 )
            PopBsdSkipLogging = 1;
          else
            BYTE5(v22) = 1;
        }
      }
      PopPdcCsDeviceNotification((__int64)&v21);
      if ( FileHandle )
        ZwClose(FileHandle);
      PopAcquirePolicyLock();
      PopNetIsDisconnectStandbyActive(&v18);
      byte_1404192F7 = (unsigned int)(v18 - 3) > 1;
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
        if ( (int)HalGetInterruptTargetInformation(2LL, 0LL, v31) >= 0 )
        {
          PopApicMode = v32;
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
    if ( RtlGetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL) >= 0 && HIDWORD(v35) )
    {
      PopTraceBootError();
      DataBuffer = 0LL;
      v35 = 0LL;
      v36 = 0;
      RtlSetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
    }
    if ( (unsigned __int8)off_1403FF610[0]()
      || (unsigned int)(PoOffCrashConfigTable - 1) <= 1 && DWORD1(PoOffCrashConfigTable) )
    {
      PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
    }
    PopAcquirePolicyLock();
    PopUpdateUpgradeInProgress(0LL);
    if ( InitIsWinPEMode )
      PopLogSleepDisabled(16, 15, 0LL, 0LL);
    if ( byte_1404192F4 )
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
      byte_1404192FE = 1;
      *(_QWORD *)&xmmword_140419300 = 0x19000000064LL;
      *((_QWORD *)&xmmword_140419300 + 1) = 0xFFFF0000000ALL;
      LODWORD(qword_140419320) = 4;
      dword_140419328 = 2;
    }
    if ( (PopSimulate & 2) != 0 )
    {
      LODWORD(PopCapabilities) = 16843009;
      WORD2(PopCapabilities) = 257;
      BYTE6(PopCapabilities) = 1;
      unk_1404192F1 = 257;
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
    Buffer = 1;
    PopUpdateConsoleDisplayState(1);
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &Buffer, 4u, 0LL, 0LL, 0, 0);
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
    PopCoalescingInitialize();
    PopReleasePolicyLock();
    PopInitializeDirectedDrips();
    PopInitializeDripsWatchdog();
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
      v16 = 1;
      EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v16);
      if ( v16 == 2 )
        PopErrataReportingIncorrectLidState = 1;
      if ( PopPlatformAoAc )
      {
        if ( PopLidStateForInputSuppressionOverride != -1 )
          PopIgnoreLidStateForInputSuppression = PopLidStateForInputSuppressionOverride != 0;
        if ( PopEnableInputSuppressionOverride == -1 )
        {
          v17 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_INPUT_SUPPRESSION_NOTIFICATION, &v17);
          PopEnableInputSuppression = v17 == 2;
        }
        else
        {
          PopEnableInputSuppression = PopEnableInputSuppressionOverride != 0;
        }
      }
    }
    PopBatteryQueueWork(1u);
    if ( (int)KsrGetFirmwareInformation(v27) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
      v30.Length = 48;
      v30.ObjectName = &DestinationString;
      v30.RootDirectory = 0LL;
      v30.Attributes = 80;
      *(_OWORD *)&v30.SecurityDescriptor = 0LL;
      if ( ExCreateCallback(&CallbackObject, &v30, 0, 1u) >= 0 )
        ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopKsrCallback, 0LL);
    }
    PopHiberEvaluateSkippingMemoryMapValidation();
    PopReadErrataSkipMemoryOverwriteRequestControlLockAction();
    goto LABEL_86;
  }
  return TimebrokerServiceSid >= 0;
}
