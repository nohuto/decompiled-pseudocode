/*
 * XREFs of PopBsdHandleRequest @ 0x1401BEAE4
 * Callers:
 *     PopRecordLidStateWorker @ 0x1405B1A70 (PopRecordLidStateWorker.c)
 *     PopSetSleepMarker @ 0x1407247DC (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x140725440 (NtInitiatePowerAction.c)
 *     PopRecordSleepCheckpoint @ 0x14072649C (PopRecordSleepCheckpoint.c)
 *     PopClearSystemShutdownMarker @ 0x14072750C (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x14072758C (PopClearSleepMarker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140729EE0 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x140729F30 (PopSetUserShutdownMarkerWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 *     PopRecordDisplayState @ 0x14073A99C (PopRecordDisplayState.c)
 *     PopClearConnectedStandbyMarker @ 0x1408A241C (PopClearConnectedStandbyMarker.c)
 *     PopRecordAcDcState @ 0x1408A24E0 (PopRecordAcDcState.c)
 *     PopRecordPhysicalPowerButton @ 0x1408A252C (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x1408A2698 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x1408A2778 (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408A27B0 (PopSetConnectedStandbyMarker.c)
 *     PdcPoRecordButton @ 0x1408AB910 (PdcPoRecordButton.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140177880 (PopQueueWorkItem.c)
 *     RtlSetSystemBootStatus @ 0x140769FE0 (RtlSetSystemBootStatus.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1408A283C (PopUpdateBsdPowerTransitionReferenceTime.c)
 */

char __fastcall PopBsdHandleRequest(int a1)
{
  if ( (a1 & 8) != 0 )
  {
    PopUpdateBsdPowerTransitionReferenceTime();
    return RtlSetSystemBootStatus(RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
  }
  else
  {
    PopBsdUpdateRequests |= a1;
    return PopQueueWorkItem((__int64)&PopBsdUpdateWorkItem, DelayedWorkQueue);
  }
}
