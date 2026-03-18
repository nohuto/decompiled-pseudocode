/*
 * XREFs of PopCurrentPowerState @ 0x14069B760
 * Callers:
 *     PopUpdateAcDcState @ 0x140176BBC (PopUpdateAcDcState.c)
 *     PopCalculateCsSummary @ 0x1402FB520 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopDiagTraceControlCallback @ 0x1406EFCB0 (PopDiagTraceControlCallback.c)
 *     PopEsEnterSleepShutdown @ 0x14072A15C (PopEsEnterSleepShutdown.c)
 *     PopEsUpdateState @ 0x14073C918 (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x1407497D0 (PopEsStartTelemetry.c)
 *     PopCurrentPowerStatePrecise @ 0x140749860 (PopCurrentPowerStatePrecise.c)
 *     PopTransitionTelemetryOsState @ 0x14075F968 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140443338, 0LL);
  *a1 = xmmword_140443348;
  a1[1] = xmmword_140443358;
  PopReleaseRwLock((ULONG_PTR)&qword_140443338);
}
