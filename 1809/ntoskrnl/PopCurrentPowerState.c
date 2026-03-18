/*
 * XREFs of PopCurrentPowerState @ 0x14058DED4
 * Callers:
 *     PopUpdateAcDcState @ 0x140174A58 (PopUpdateAcDcState.c)
 *     PopCalculateCsSummary @ 0x1402DEA58 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402DEFEC (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceControlCallback @ 0x140587FE0 (PopDiagTraceControlCallback.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PopEsEnterSleepShutdown @ 0x1406E198C (PopEsEnterSleepShutdown.c)
 *     PopCurrentPowerStatePrecise @ 0x14071C1B0 (PopCurrentPowerStatePrecise.c)
 *     PopEsUpdateState @ 0x14071C9D4 (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x14071CA88 (PopEsStartTelemetry.c)
 *     PopTransitionTelemetryOsState @ 0x1407454E8 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1404179E0, 0LL);
  *a1 = xmmword_1404179F0;
  a1[1] = xmmword_140417A00;
  PopReleaseRwLock((ULONG_PTR)&qword_1404179E0);
}
