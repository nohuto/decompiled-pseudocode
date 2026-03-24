/*
 * XREFs of PopCurrentPowerState @ 0x14058DED4
 * Callers:
 *     PopUpdateAcDcState @ 0x140174A78 (PopUpdateAcDcState.c)
 *     PopCalculateCsSummary @ 0x1402DEB58 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402DF0EC (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceControlCallback @ 0x140587FE0 (PopDiagTraceControlCallback.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PopEsEnterSleepShutdown @ 0x1406E196C (PopEsEnterSleepShutdown.c)
 *     PopCurrentPowerStatePrecise @ 0x14071C190 (PopCurrentPowerStatePrecise.c)
 *     PopEsUpdateState @ 0x14071C9B4 (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x14071CA68 (PopEsStartTelemetry.c)
 *     PopTransitionTelemetryOsState @ 0x1407454C8 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140417AC0, 0LL);
  *a1 = xmmword_140417AD0;
  a1[1] = xmmword_140417AE0;
  PopReleaseRwLock((ULONG_PTR)&qword_140417AC0);
}
