/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x14013BA20
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14057DA10 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x1406E27D0 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x1406E2810 (PopSetUserShutdownMarkerWorker.c)
 *     PpmPerfTelemetryWorker @ 0x140706360 (PpmPerfTelemetryWorker.c)
 *     PopNetEvaluationWorkerCallback @ 0x14075DA00 (PopNetEvaluationWorkerCallback.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140764380 (PopExternalMonitorUpdatedWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14086E7E0 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x140876ED0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x1408777A0 (PopPreSleepNotifyWorker.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140879C40 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
