/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x14013BB40
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14057EA10 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x1406E3A50 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x1406E3A90 (PopSetUserShutdownMarkerWorker.c)
 *     PpmPerfTelemetryWorker @ 0x1407075E0 (PpmPerfTelemetryWorker.c)
 *     PopNetEvaluationWorkerCallback @ 0x14075EBD0 (PopNetEvaluationWorkerCallback.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140765550 (PopExternalMonitorUpdatedWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14086FA20 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x140878110 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x1408789E0 (PopPreSleepNotifyWorker.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14087AE80 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
