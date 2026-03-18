/*
 * XREFs of PopCurrentPowerState @ 0x14067E620
 * Callers:
 *     PopUpdateAcDcState @ 0x14017648C (PopUpdateAcDcState.c)
 *     PopCalculateCsSummary @ 0x1402FBA70 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402FC0EC (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopDiagTraceControlCallback @ 0x14069D910 (PopDiagTraceControlCallback.c)
 *     PopEsEnterSleepShutdown @ 0x140728DEC (PopEsEnterSleepShutdown.c)
 *     PopEsUpdateState @ 0x14073A688 (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x1407478D0 (PopEsStartTelemetry.c)
 *     PopCurrentPowerStatePrecise @ 0x140747960 (PopCurrentPowerStatePrecise.c)
 *     PopTransitionTelemetryOsState @ 0x14075B0D8 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1404433B8, 0LL);
  *a1 = xmmword_1404433C8;
  a1[1] = xmmword_1404433D8;
  PopReleaseRwLock((ULONG_PTR)&qword_1404433B8);
}
