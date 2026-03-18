/*
 * XREFs of PopQueueWorkItem @ 0x140138CA8
 * Callers:
 *     PopCheckForIdleness @ 0x140010410 (PopCheckForIdleness.c)
 *     PopResetIdleTime @ 0x140138B80 (PopResetIdleTime.c)
 *     PopSIdleUpdateNotificationWorker @ 0x14013A860 (PopSIdleUpdateNotificationWorker.c)
 *     PpmPerfTelemetryCallback @ 0x14016A110 (PpmPerfTelemetryCallback.c)
 *     PopThermalTelemetryCallback @ 0x1402DC330 (PopThermalTelemetryCallback.c)
 *     PopDripsWatchdogTimerCallback @ 0x1402DE120 (PopDripsWatchdogTimerCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1402DE6D0 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x1402E45D0 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x1402E4600 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x1402E4630 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x1402E494C (PopUpdatePowerButtonHoldState.c)
 *     PopDripsWatchdogTimerCallbackRoutine @ 0x1402E7120 (PopDripsWatchdogTimerCallbackRoutine.c)
 *     PopPolicySystemIdle @ 0x1405B04E0 (PopPolicySystemIdle.c)
 *     PoUserShutdownInitiated @ 0x1406DE500 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x1406E2260 (PoUserShutdownCancelled.c)
 *     PopNetSetConnectivityConstraint @ 0x1407298C4 (PopNetSetConnectivityConstraint.c)
 *     PopUpdateExternalDisplayState @ 0x1407624D8 (PopUpdateExternalDisplayState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140867C18 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PdcPoNetworkResiliency @ 0x14086EC50 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x140876C2C (PopNetClearConnectivityConstraint.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
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
