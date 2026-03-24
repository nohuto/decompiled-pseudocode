/*
 * XREFs of PopQueueWorkItem @ 0x140138CC8
 * Callers:
 *     PopCheckForIdleness @ 0x140010410 (PopCheckForIdleness.c)
 *     PopResetIdleTime @ 0x140138BA0 (PopResetIdleTime.c)
 *     PopSIdleUpdateNotificationWorker @ 0x14013A880 (PopSIdleUpdateNotificationWorker.c)
 *     PpmPerfTelemetryCallback @ 0x14016A130 (PpmPerfTelemetryCallback.c)
 *     PopThermalTelemetryCallback @ 0x1402DC430 (PopThermalTelemetryCallback.c)
 *     PopDripsWatchdogTimerCallback @ 0x1402DE220 (PopDripsWatchdogTimerCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1402DE7D0 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x1402E46D0 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x1402E4700 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x1402E4730 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x1402E4A4C (PopUpdatePowerButtonHoldState.c)
 *     PopDripsWatchdogTimerCallbackRoutine @ 0x1402E7220 (PopDripsWatchdogTimerCallbackRoutine.c)
 *     PopPolicySystemIdle @ 0x1405B04E0 (PopPolicySystemIdle.c)
 *     PoUserShutdownInitiated @ 0x1406DE4E0 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x1406E2240 (PoUserShutdownCancelled.c)
 *     PopNetSetConnectivityConstraint @ 0x1407298A4 (PopNetSetConnectivityConstraint.c)
 *     PopUpdateExternalDisplayState @ 0x1407624B8 (PopUpdateExternalDisplayState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140867BF8 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PdcPoNetworkResiliency @ 0x14086EC30 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x140876C0C (PopNetClearConnectivityConstraint.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 */

char __fastcall PopQueueWorkItem(__int64 a1, WORK_QUEUE_TYPE a2)
{
  char v2; // r8

  v2 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 32)) == 1 )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, a2);
    return 1;
  }
  return v2;
}
