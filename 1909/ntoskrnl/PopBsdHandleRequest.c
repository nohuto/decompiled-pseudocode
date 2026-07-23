/*
 * XREFs of PopBsdHandleRequest @ 0x1401BF5D4
 * Callers:
 *     PopRecordLidStateWorker @ 0x1405B18B0 (PopRecordLidStateWorker.c)
 *     PopSetSleepMarker @ 0x14072667C (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x1407272E0 (NtInitiatePowerAction.c)
 *     PopRecordSleepCheckpoint @ 0x14072833C (PopRecordSleepCheckpoint.c)
 *     PopClearUserShutdownMarkerWorker @ 0x14072B250 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x14072B2A0 (PopSetUserShutdownMarkerWorker.c)
 *     PopClearSystemShutdownMarker @ 0x14072BA6C (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x14072BAEC (PopClearSleepMarker.c)
 *     PopRecordDisplayState @ 0x140730724 (PopRecordDisplayState.c)
 *     PopBatteryApplyCompositeState @ 0x14073A7DC (PopBatteryApplyCompositeState.c)
 *     PopClearConnectedStandbyMarker @ 0x1408A1C5C (PopClearConnectedStandbyMarker.c)
 *     PopRecordAcDcState @ 0x1408A1D20 (PopRecordAcDcState.c)
 *     PopRecordPhysicalPowerButton @ 0x1408A1D6C (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x1408A1ED8 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x1408A1FB8 (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408A1FF0 (PopSetConnectedStandbyMarker.c)
 *     PdcPoRecordButton @ 0x1408AB170 (PdcPoRecordButton.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140177F70 (PopQueueWorkItem.c)
 *     RtlSetSystemBootStatus @ 0x1407599B0 (RtlSetSystemBootStatus.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1408A207C (PopUpdateBsdPowerTransitionReferenceTime.c)
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
