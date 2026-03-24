/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x14013BA40
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14057DA10 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x1406E27B0 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x1406E27F0 (PopSetUserShutdownMarkerWorker.c)
 *     PpmPerfTelemetryWorker @ 0x140706340 (PpmPerfTelemetryWorker.c)
 *     PopNetEvaluationWorkerCallback @ 0x14075D9E0 (PopNetEvaluationWorkerCallback.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140764360 (PopExternalMonitorUpdatedWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14086E7C0 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x140876EB0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x140877780 (PopPreSleepNotifyWorker.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140879C20 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
