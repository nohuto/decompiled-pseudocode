/*
 * XREFs of PopQueueWorkItem @ 0x140177880
 * Callers:
 *     PopCheckForIdleness @ 0x1400EE110 (PopCheckForIdleness.c)
 *     PpmPerfTelemetryCallback @ 0x140171740 (PpmPerfTelemetryCallback.c)
 *     PopBsdHandleRequest @ 0x1401BEAE4 (PopBsdHandleRequest.c)
 *     PopThermalCsEntry @ 0x1402F7F04 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1402F7F68 (PopThermalCsExit.c)
 *     PopThermalTelemetryCallback @ 0x1402F8030 (PopThermalTelemetryCallback.c)
 *     PopDripsWatchdogTimerCallback @ 0x1402FB030 (PopDripsWatchdogTimerCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1402FB500 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x140301500 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x140301530 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x140301560 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140301890 (PopUpdatePowerButtonHoldState.c)
 *     PoUserShutdownInitiated @ 0x140725AC0 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x140729920 (PoUserShutdownCancelled.c)
 *     PopNetSetConnectivityConstraint @ 0x14075AEE4 (PopNetSetConnectivityConstraint.c)
 *     PopUpdateExternalDisplayState @ 0x140789278 (PopUpdateExternalDisplayState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408A4134 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopLidSwitchChangeCallback @ 0x1408A5390 (PopLidSwitchChangeCallback.c)
 *     PdcPoNetworkResiliency @ 0x1408AB780 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x1408B3EDC (PopNetClearConnectivityConstraint.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
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
