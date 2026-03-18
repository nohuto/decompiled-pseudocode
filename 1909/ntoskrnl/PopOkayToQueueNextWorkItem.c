/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x14013DC1C
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1405AD890 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBsdUpdateWorker @ 0x1405B1710 (PopBsdUpdateWorker.c)
 *     PopRecordLidStateWorker @ 0x1405B18B0 (PopRecordLidStateWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x14072B250 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x14072B2A0 (PopSetUserShutdownMarkerWorker.c)
 *     PpmPerfTelemetryWorker @ 0x14072F190 (PpmPerfTelemetryWorker.c)
 *     PopNetEvaluationWorkerCallback @ 0x140786A70 (PopNetEvaluationWorkerCallback.c)
 *     PopExternalMonitorUpdatedWorker @ 0x14078D0A0 (PopExternalMonitorUpdatedWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408AAB30 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1408B3A80 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x1408B5F30 (PopPreSleepNotifyWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
