/*
 * XREFs of PopDiagInitialize @ 0x140A06004
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTime @ 0x1400E5020 (KeQueryUnbiasedInterruptTime.c)
 *     KeInitializeMutex @ 0x140108C10 (KeInitializeMutex.c)
 *     EnableManifestedProviderForMicrosoftTelemetry @ 0x14028C4C8 (EnableManifestedProviderForMicrosoftTelemetry.c)
 *     EtwRegister @ 0x140718540 (EtwRegister.c)
 *     TraceLoggingRegisterEx @ 0x140745F64 (TraceLoggingRegisterEx.c)
 *     PdcTaskClientRegister @ 0x14075B038 (PdcTaskClientRegister.c)
 *     PopTransitionTelemetryOsState @ 0x14075B0D8 (PopTransitionTelemetryOsState.c)
 *     PopDiagSleepStudyInitialize @ 0x14075B190 (PopDiagSleepStudyInitialize.c)
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
  qword_1404420A8 = 0LL;
  PopTelemetryOsState = 0LL;
  qword_1404420B8 = MEMORY[0xFFFFF78000000014];
  qword_1404420C0 = MEMORY[0xFFFFF78000000008];
  qword_1404420C8 = KeQueryUnbiasedInterruptTime();
  byte_1404420EC = 1;
  PopTransitionTelemetryOsState(1, 1);
  qword_140441F78 = 0LL;
  PopForceCompleteCsSleepStudySessionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopForceCompleteCsSleepStudySessionWorker;
  PopForceSleepStudyLock = 0LL;
  PopForceCompleteCsSleepStudySessionWorkItem.Parameter = 0LL;
  PopForceCompleteCsSleepStudySessionWorkItem.List.Flink = 0LL;
  KeInitializeMutex(&PopSleepStudySessionLock, 0);
  PopSleepStudyTaskClientTimer = 8LL;
  qword_140442170 = (__int64)&qword_140442168;
  qword_140442168 = (__int64)&qword_140442168;
  qword_140442118 = (__int64)PopSleepStudyTaskClientTimerCallback;
  PopSleepStudyTaskClientTimerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSleepStudyTaskClientTimerWorker;
  qword_140442178 = 0LL;
  qword_140442198 = 0LL;
  PopSleepStudyTaskClientTimerDpc = 275;
  qword_140442120 = 0LL;
  qword_140442138 = 0LL;
  qword_140442110 = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.Parameter = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.List.Flink = 0LL;
  PdcTaskClientRegister(68, &PopSleepStudyTaskClientActivator);
  return 0LL;
}
