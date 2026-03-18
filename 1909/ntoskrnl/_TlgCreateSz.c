/*
 * XREFs of _TlgCreateSz @ 0x1400D6128
 * Callers:
 *     MiAgeWorkingSet @ 0x140048A50 (MiAgeWorkingSet.c)
 *     MmNotifyProcessInSwapTrigger @ 0x140109484 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogTrimWs @ 0x14012A8CC (MiLogTrimWs.c)
 *     MiLogWsEmptyControl @ 0x1401436A4 (MiLogWsEmptyControl.c)
 *     EtwTelemetryCoverageReport @ 0x14015CE30 (EtwTelemetryCoverageReport.c)
 *     PopPlNotifyDeviceDState @ 0x14017BBE0 (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x14017F3E4 (PopPlNotifyDeviceFState.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1402BB0DC (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402BB2D0 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402BB3C0 (MiLogResetPagesCommitRelease.c)
 *     WheaTelemetryLogErrorRecord @ 0x14034177C (WheaTelemetryLogErrorRecord.c)
 *     WheaTelemetryLogErrorSourceAddRemove @ 0x140341BAC (WheaTelemetryLogErrorSourceAddRemove.c)
 *     WheaTelemetryLogInfo @ 0x140341CF4 (WheaTelemetryLogInfo.c)
 *     WheaTelemetryLogPFAMemoryMonitorRemoved @ 0x140341DAC (WheaTelemetryLogPFAMemoryMonitorRemoved.c)
 *     WheaTelemetryLogPFAMemoryOfflined @ 0x140341EDC (WheaTelemetryLogPFAMemoryOfflined.c)
 *     MiLogHotPatchRundown @ 0x1405B0E40 (MiLogHotPatchRundown.c)
 *     PopLogPowerRequestAction @ 0x140671F98 (PopLogPowerRequestAction.c)
 *     EtwpCoverageRecord @ 0x1406D6164 (EtwpCoverageRecord.c)
 *     PopBatteryWorker @ 0x14073A3F0 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14073A7DC (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14073AA8C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x14073ABD0 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14073AC98 (PopBatteryCheckCompositeCapacity.c)
 *     PnpCompareInterruptInformation @ 0x140747BC0 (PnpCompareInterruptInformation.c)
 *     MiLogCreateImageFileMapFailure @ 0x140889F1C (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14088A4A4 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchOperation @ 0x14088F15C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x14088F418 (MiLogHotPatchOperationStatus.c)
 *     PopAccountBatteryEnergyChange @ 0x1408A8C14 (PopAccountBatteryEnergyChange.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1408ACC98 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B6CC4 (PopPublishAndPurgePowerRequestStats.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409F1380 (MiFlushStrongCodeDriverLoadFailures.c)
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
