/*
 * XREFs of PopDiagInitialize @ 0x140A06520
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTime @ 0x1400E9FC0 (KeQueryUnbiasedInterruptTime.c)
 *     KeInitializeMutex @ 0x1400FD030 (KeInitializeMutex.c)
 *     EnableManifestedProviderForMicrosoftTelemetry @ 0x14028C228 (EnableManifestedProviderForMicrosoftTelemetry.c)
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 *     TraceLoggingRegisterEx @ 0x140747E64 (TraceLoggingRegisterEx.c)
 *     PdcTaskClientRegister @ 0x14075F8C8 (PdcTaskClientRegister.c)
 *     PopTransitionTelemetryOsState @ 0x14075F968 (PopTransitionTelemetryOsState.c)
 *     PopDiagSleepStudyInitialize @ 0x14075FA20 (PopDiagSleepStudyInitialize.c)
 */

__int64 PopDiagInitialize()
{
  if ( EtwRegister(&POP_ETW_PROVIDER, (PETWENABLECALLBACK)PopDiagTraceControlCallback, &PopDiagHandle, &PopDiagHandle) >= 0 )
  {
    PopDiagHandleRegistered = 1;
    EnableManifestedProviderForMicrosoftTelemetry(PopDiagHandle);
  }
  PopDiagDeviceRundownWorkItem.Parameter = 0LL;
  PopDiagDeviceRundownWorkItem.List.Flink = 0LL;
  PopDiagDeviceRundownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDiagDeviceRundownWorker;
  TraceLoggingRegisterEx(&pCallbackContext, (TLG_PENABLECALLBACK)PopDiagTraceControlCallback, &pCallbackContext);
  if ( EtwRegister(&POP_TRIGGER_ETW_PROVIDER, 0LL, 0LL, &PopTriggerDiagHandle) >= 0 )
    PopTriggerDiagHandleRegistered = 1;
  PopDiagSleepStudyInitialize();
  qword_140442028 = 0LL;
  PopTelemetryOsState = 0LL;
  qword_140442038 = MEMORY[0xFFFFF78000000014];
  qword_140442040 = MEMORY[0xFFFFF78000000008];
  qword_140442048 = KeQueryUnbiasedInterruptTime();
  byte_14044206C = 1;
  PopTransitionTelemetryOsState(1, 1);
  qword_140441EF8 = 0LL;
  PopForceCompleteCsSleepStudySessionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopForceCompleteCsSleepStudySessionWorker;
  PopForceSleepStudyLock = 0LL;
  PopForceCompleteCsSleepStudySessionWorkItem.Parameter = 0LL;
  PopForceCompleteCsSleepStudySessionWorkItem.List.Flink = 0LL;
  KeInitializeMutex(&PopSleepStudySessionLock, 0);
  PopSleepStudyTaskClientTimer = 8LL;
  qword_1404420F0 = (__int64)&qword_1404420E8;
  qword_1404420E8 = (__int64)&qword_1404420E8;
  qword_140442098 = (__int64)PopSleepStudyTaskClientTimerCallback;
  PopSleepStudyTaskClientTimerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSleepStudyTaskClientTimerWorker;
  qword_1404420F8 = 0LL;
  qword_140442118 = 0LL;
  PopSleepStudyTaskClientTimerDpc = 275;
  qword_1404420A0 = 0LL;
  qword_1404420B8 = 0LL;
  qword_140442090 = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.Parameter = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.List.Flink = 0LL;
  PdcTaskClientRegister(68, &PopSleepStudyTaskClientActivator);
  return 0LL;
}
