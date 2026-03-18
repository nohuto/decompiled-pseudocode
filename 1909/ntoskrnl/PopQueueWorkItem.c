/*
 * XREFs of PopQueueWorkItem @ 0x140177F70
 * Callers:
 *     PopCheckForIdleness @ 0x1400D5820 (PopCheckForIdleness.c)
 *     PpmPerfTelemetryCallback @ 0x140171E30 (PpmPerfTelemetryCallback.c)
 *     PopBsdHandleRequest @ 0x1401BF5D4 (PopBsdHandleRequest.c)
 *     PopThermalCsEntry @ 0x1402F79B4 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1402F7A18 (PopThermalCsExit.c)
 *     PopThermalTelemetryCallback @ 0x1402F7AE0 (PopThermalTelemetryCallback.c)
 *     PopDripsWatchdogTimerCallback @ 0x1402FAAE0 (PopDripsWatchdogTimerCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1402FAFB0 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x140300FB0 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x140300FE0 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x140301010 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140301340 (PopUpdatePowerButtonHoldState.c)
 *     PoUserShutdownInitiated @ 0x140727960 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x14072AC90 (PoUserShutdownCancelled.c)
 *     PopNetSetConnectivityConstraint @ 0x14075F774 (PopNetSetConnectivityConstraint.c)
 *     PopUpdateExternalDisplayState @ 0x14078B6D8 (PopUpdateExternalDisplayState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408A3974 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopLidSwitchChangeCallback @ 0x1408A4BD0 (PopLidSwitchChangeCallback.c)
 *     PdcPoNetworkResiliency @ 0x1408AAFE0 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x1408B37AC (PopNetClearConnectivityConstraint.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
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
