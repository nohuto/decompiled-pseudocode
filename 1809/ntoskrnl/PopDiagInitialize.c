/*
 * XREFs of PopDiagInitialize @ 0x1409D0B90
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008CF10 (KiQueryUnbiasedInterruptTime.c)
 *     KiInitializeMutant @ 0x1400DD358 (KiInitializeMutant.c)
 *     EtwRegister @ 0x1406BE560 (EtwRegister.c)
 *     EtwSetInformation @ 0x14070BDD0 (EtwSetInformation.c)
 *     TraceLoggingRegisterEx @ 0x14071DC58 (TraceLoggingRegisterEx.c)
 *     PdcTaskClientRegister @ 0x1407452F0 (PdcTaskClientRegister.c)
 *     PopTransitionTelemetryOsState @ 0x1407454E8 (PopTransitionTelemetryOsState.c)
 *     PopDiagSleepStudyInitialize @ 0x140745590 (PopDiagSleepStudyInitialize.c)
 */

__int64 PopDiagInitialize()
{
  __int64 UnbiasedInterruptTime; // rax
  char v1; // cl
  __int64 v2; // r8

  if ( EtwRegister(&POP_ETW_PROVIDER, (PETWENABLECALLBACK)PopDiagTraceControlCallback, &PopDiagHandle, &PopDiagHandle) >= 0 )
  {
    PopDiagHandleRegistered = 1;
    EtwSetInformation(
      PopDiagHandle,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  }
  PopDiagDeviceRundownWorkItem.Parameter = 0LL;
  PopDiagDeviceRundownWorkItem.List.Flink = 0LL;
  PopDiagDeviceRundownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDiagDeviceRundownWorker;
  TraceLoggingRegisterEx(&pCallbackContext, (TLG_PENABLECALLBACK)PopDiagTraceControlCallback, &pCallbackContext);
  if ( EtwRegister(&POP_TRIGGER_ETW_PROVIDER, 0LL, 0LL, &PopTriggerDiagHandle) >= 0 )
    PopTriggerDiagHandleRegistered = 1;
  PopDiagSleepStudyInitialize();
  PopTelemetryOsState = 0LL;
  qword_140416728 = 0LL;
  qword_140416738 = MEMORY[0xFFFFF78000000014];
  qword_140416740 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_14041676C = v1;
  qword_140416748 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  PopForceSleepStudyLock = 0LL;
  qword_140416548 = 0LL;
  PopForceCompleteCsSleepStudySessionWorkItem.Parameter = 0LL;
  LOBYTE(v2) = 1;
  PopForceCompleteCsSleepStudySessionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopForceCompleteCsSleepStudySessionWorker;
  PopForceCompleteCsSleepStudySessionWorkItem.List.Flink = 0LL;
  KiInitializeMutant((__int64)&PopSleepStudySessionLock, 0LL, v2);
  PopSleepStudyTaskClientTimer = 8LL;
  qword_140416790 = (__int64)&qword_140416788;
  qword_140416788 = (__int64)&qword_140416788;
  qword_1404167D8 = (__int64)PopSleepStudyTaskClientTimerCallback;
  PopSleepStudyTaskClientTimerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSleepStudyTaskClientTimerWorker;
  qword_140416798 = 0LL;
  qword_1404167B8 = 0LL;
  PopSleepStudyTaskClientTimerDpc = 275;
  qword_1404167E0 = 0LL;
  qword_1404167F8 = 0LL;
  qword_1404167D0 = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.Parameter = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.List.Flink = 0LL;
  PdcTaskClientRegister(68, &PopSleepStudyTaskClientActivator);
  return 0LL;
}
