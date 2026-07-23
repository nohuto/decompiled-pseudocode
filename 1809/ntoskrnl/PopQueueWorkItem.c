/*
 * XREFs of PopQueueWorkItem @ 0x140138DC8
 * Callers:
 *     PopCheckForIdleness @ 0x140010410 (PopCheckForIdleness.c)
 *     PopResetIdleTime @ 0x140138CA0 (PopResetIdleTime.c)
 *     PopSIdleUpdateNotificationWorker @ 0x14013A980 (PopSIdleUpdateNotificationWorker.c)
 *     PpmPerfTelemetryCallback @ 0x14016A230 (PpmPerfTelemetryCallback.c)
 *     PopThermalTelemetryCallback @ 0x1402DC620 (PopThermalTelemetryCallback.c)
 *     PopDripsWatchdogTimerCallback @ 0x1402DE410 (PopDripsWatchdogTimerCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1402DE9C0 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x1402E48C0 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x1402E48F0 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x1402E4920 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x1402E4C3C (PopUpdatePowerButtonHoldState.c)
 *     PopDripsWatchdogTimerCallbackRoutine @ 0x1402E7410 (PopDripsWatchdogTimerCallbackRoutine.c)
 *     PopPolicySystemIdle @ 0x1405B14E0 (PopPolicySystemIdle.c)
 *     PoUserShutdownInitiated @ 0x1406DF780 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x1406E34E0 (PoUserShutdownCancelled.c)
 *     PopNetSetConnectivityConstraint @ 0x14072AA94 (PopNetSetConnectivityConstraint.c)
 *     PopUpdateExternalDisplayState @ 0x1407636A8 (PopUpdateExternalDisplayState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140868E58 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PdcPoNetworkResiliency @ 0x14086FE90 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x140877E6C (PopNetClearConnectivityConstraint.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
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
