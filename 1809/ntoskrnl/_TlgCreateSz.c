/*
 * XREFs of _TlgCreateSz @ 0x140003938
 * Callers:
 *     MiAgeWorkingSet @ 0x14006DE50 (MiAgeWorkingSet.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14010CC28 (MmNotifyProcessInSwapTrigger.c)
 *     EtwTelemetryCoverageReport @ 0x14012A580 (EtwTelemetryCoverageReport.c)
 *     MiLogTrimWs @ 0x140131048 (MiLogTrimWs.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1402A3F9C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402A4190 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402A4280 (MiLogResetPagesCommitRelease.c)
 *     MiLogWsEmptyControl @ 0x1402CB9A0 (MiLogWsEmptyControl.c)
 *     PopLogPowerRequestAction @ 0x140589C44 (PopLogPowerRequestAction.c)
 *     EtwpCoverageRecord @ 0x1406B41DC (EtwpCoverageRecord.c)
 *     PopBatteryWorker @ 0x140719D80 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14071A148 (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14071A3E4 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x14071A528 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14071A5EC (PopBatteryCheckCompositeCapacity.c)
 *     PnpCompareInterruptInformation @ 0x14071D404 (PnpCompareInterruptInformation.c)
 *     TtmiLogError @ 0x1407616DC (TtmiLogError.c)
 *     MiLogCreateImageFileMapFailure @ 0x14084E624 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14084EB8C (MiLogStrongCodeDriverLoadFailure.c)
 *     PopAccountBatteryEnergyChange @ 0x14086C85C (PopAccountBatteryEnergyChange.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140870744 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14087AE1C (PopPublishAndPurgePowerRequestStats.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409BCCD4 (MiFlushStrongCodeDriverLoadFailures.c)
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
    psz = &File;
  pDesc->Reserved = 0;
  pDesc->Ptr = (ULONGLONG)psz;
  pDesc->Size = v2 + 1;
}
