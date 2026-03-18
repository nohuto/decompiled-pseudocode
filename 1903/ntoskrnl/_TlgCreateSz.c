/*
 * XREFs of _TlgCreateSz @ 0x1400ED314
 * Callers:
 *     MiAgeWorkingSet @ 0x1400489B0 (MiAgeWorkingSet.c)
 *     MmNotifyProcessInSwapTrigger @ 0x140091EA4 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogTrimWs @ 0x140129EAC (MiLogTrimWs.c)
 *     MiLogWsEmptyControl @ 0x140143164 (MiLogWsEmptyControl.c)
 *     EtwTelemetryCoverageReport @ 0x14015C790 (EtwTelemetryCoverageReport.c)
 *     PopPlNotifyDeviceDState @ 0x14017B4F0 (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x14017ECF4 (PopPlNotifyDeviceFState.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1402BB37C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402BB570 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402BB660 (MiLogResetPagesCommitRelease.c)
 *     WheaTelemetryLogErrorRecord @ 0x140341D1C (WheaTelemetryLogErrorRecord.c)
 *     WheaTelemetryLogErrorSourceAddRemove @ 0x14034214C (WheaTelemetryLogErrorSourceAddRemove.c)
 *     WheaTelemetryLogInfo @ 0x140342294 (WheaTelemetryLogInfo.c)
 *     WheaTelemetryLogPFAMemoryMonitorRemoved @ 0x14034234C (WheaTelemetryLogPFAMemoryMonitorRemoved.c)
 *     WheaTelemetryLogPFAMemoryOfflined @ 0x14034247C (WheaTelemetryLogPFAMemoryOfflined.c)
 *     MiLogHotPatchRundown @ 0x1405B1004 (MiLogHotPatchRundown.c)
 *     PopLogPowerRequestAction @ 0x14069FE80 (PopLogPowerRequestAction.c)
 *     EtwpCoverageRecord @ 0x1406D6714 (EtwpCoverageRecord.c)
 *     PopBatteryWorker @ 0x140738190 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14073882C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x140738970 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140738A38 (PopBatteryCheckCompositeCapacity.c)
 *     PnpCompareInterruptInformation @ 0x140745CC0 (PnpCompareInterruptInformation.c)
 *     MiLogCreateImageFileMapFailure @ 0x14088A6FC (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14088AC84 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchOperation @ 0x14088F93C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x14088FBF8 (MiLogHotPatchOperationStatus.c)
 *     PopAccountBatteryEnergyChange @ 0x1408A93B4 (PopAccountBatteryEnergyChange.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1408AD438 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B73F4 (PopPublishAndPurgePowerRequestStats.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409F1470 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( psz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  if ( !psz )
    psz = &Src;
  pDesc->Reserved = 0;
  pDesc->Ptr = (ULONGLONG)psz;
  pDesc->Size = v2 + 1;
}
