/*
 * XREFs of PopCurrentPowerState @ 0x14058EED4
 * Callers:
 *     PopUpdateAcDcState @ 0x140174B78 (PopUpdateAcDcState.c)
 *     PopCalculateCsSummary @ 0x1402DED48 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceControlCallback @ 0x140588FE0 (PopDiagTraceControlCallback.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopEsEnterSleepShutdown @ 0x1406E2C0C (PopEsEnterSleepShutdown.c)
 *     PopCurrentPowerStatePrecise @ 0x14071D430 (PopCurrentPowerStatePrecise.c)
 *     PopEsUpdateState @ 0x14071DC54 (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x14071DD08 (PopEsStartTelemetry.c)
 *     PopTransitionTelemetryOsState @ 0x1407466B8 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140418B60, 0LL);
  *a1 = xmmword_140418B70;
  a1[1] = xmmword_140418B80;
  PopReleaseRwLock((ULONG_PTR)&qword_140418B60);
}
