/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x14013D6DC
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1405AD8B0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBsdUpdateWorker @ 0x1405B18D0 (PopBsdUpdateWorker.c)
 *     PopRecordLidStateWorker @ 0x1405B1A70 (PopRecordLidStateWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140729EE0 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x140729F30 (PopSetUserShutdownMarkerWorker.c)
 *     PpmPerfTelemetryWorker @ 0x14072D2C0 (PpmPerfTelemetryWorker.c)
 *     PopNetEvaluationWorkerCallback @ 0x140784710 (PopNetEvaluationWorkerCallback.c)
 *     PopExternalMonitorUpdatedWorker @ 0x14078ABC0 (PopExternalMonitorUpdatedWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408AB2D0 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1408B41B0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x1408B6660 (PopPreSleepNotifyWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
