/*
 * XREFs of PopDiagInitialize @ 0x1409D1B90
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KiInitializeMutant @ 0x1400DD3F8 (KiInitializeMutant.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     EtwSetInformation @ 0x14070D050 (EtwSetInformation.c)
 *     TraceLoggingRegisterEx @ 0x14071EED8 (TraceLoggingRegisterEx.c)
 *     PdcTaskClientRegister @ 0x1407464C0 (PdcTaskClientRegister.c)
 *     PopTransitionTelemetryOsState @ 0x1407466B8 (PopTransitionTelemetryOsState.c)
 *     PopDiagSleepStudyInitialize @ 0x140746760 (PopDiagSleepStudyInitialize.c)
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
  qword_1404177E8 = 0LL;
  qword_1404177F8 = MEMORY[0xFFFFF78000000014];
  qword_140417800 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_14041782C = v1;
  qword_140417808 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  PopForceSleepStudyLock = 0LL;
  qword_1404176B8 = 0LL;
  PopForceCompleteCsSleepStudySessionWorkItem.Parameter = 0LL;
  LOBYTE(v2) = 1;
  PopForceCompleteCsSleepStudySessionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopForceCompleteCsSleepStudySessionWorker;
  PopForceCompleteCsSleepStudySessionWorkItem.List.Flink = 0LL;
  KiInitializeMutant((__int64)&PopSleepStudySessionLock, 0LL, v2);
  PopSleepStudyTaskClientTimer = 8LL;
  qword_1404178B0 = (__int64)&qword_1404178A8;
  qword_1404178A8 = (__int64)&qword_1404178A8;
  qword_140417858 = (__int64)PopSleepStudyTaskClientTimerCallback;
  PopSleepStudyTaskClientTimerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSleepStudyTaskClientTimerWorker;
  qword_1404178B8 = 0LL;
  qword_1404178D8 = 0LL;
  PopSleepStudyTaskClientTimerDpc = 275;
  qword_140417860 = 0LL;
  qword_140417878 = 0LL;
  qword_140417850 = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.Parameter = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.List.Flink = 0LL;
  PdcTaskClientRegister(68, &PopSleepStudyTaskClientActivator);
  return 0LL;
}
