/*
 * XREFs of PopDiagInitialize @ 0x1409D0B90
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008CF10 (KiQueryUnbiasedInterruptTime.c)
 *     KiInitializeMutant @ 0x1400DD378 (KiInitializeMutant.c)
 *     EtwRegister @ 0x1406BE540 (EtwRegister.c)
 *     EtwSetInformation @ 0x14070BDB0 (EtwSetInformation.c)
 *     TraceLoggingRegisterEx @ 0x14071DC38 (TraceLoggingRegisterEx.c)
 *     PdcTaskClientRegister @ 0x1407452D0 (PdcTaskClientRegister.c)
 *     PopTransitionTelemetryOsState @ 0x1407454C8 (PopTransitionTelemetryOsState.c)
 *     PopDiagSleepStudyInitialize @ 0x140745570 (PopDiagSleepStudyInitialize.c)
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
  qword_1404166E8 = 0LL;
  qword_1404166F8 = MEMORY[0xFFFFF78000000014];
  qword_140416700 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_14041672C = v1;
  qword_140416708 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  PopForceSleepStudyLock = 0LL;
  qword_140416648 = 0LL;
  PopForceCompleteCsSleepStudySessionWorkItem.Parameter = 0LL;
  LOBYTE(v2) = 1;
  PopForceCompleteCsSleepStudySessionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopForceCompleteCsSleepStudySessionWorker;
  PopForceCompleteCsSleepStudySessionWorkItem.List.Flink = 0LL;
  KiInitializeMutant((__int64)&PopSleepStudySessionLock, 0LL, v2);
  PopSleepStudyTaskClientTimer = 8LL;
  qword_1404167D0 = (__int64)&qword_1404167C8;
  qword_1404167C8 = (__int64)&qword_1404167C8;
  qword_140416818 = (__int64)PopSleepStudyTaskClientTimerCallback;
  PopSleepStudyTaskClientTimerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSleepStudyTaskClientTimerWorker;
  qword_1404167D8 = 0LL;
  qword_1404167F8 = 0LL;
  PopSleepStudyTaskClientTimerDpc = 275;
  qword_140416820 = 0LL;
  qword_140416838 = 0LL;
  qword_140416810 = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.Parameter = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.List.Flink = 0LL;
  PdcTaskClientRegister(68, &PopSleepStudyTaskClientActivator);
  return 0LL;
}
