/*
 * XREFs of _TlgCreateSz @ 0x140003938
 * Callers:
 *     MiAgeWorkingSet @ 0x14006DE50 (MiAgeWorkingSet.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14010CC08 (MmNotifyProcessInSwapTrigger.c)
 *     EtwTelemetryCoverageReport @ 0x14012A560 (EtwTelemetryCoverageReport.c)
 *     MiLogTrimWs @ 0x140131028 (MiLogTrimWs.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1402A3E9C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402A4090 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402A4180 (MiLogResetPagesCommitRelease.c)
 *     MiLogWsEmptyControl @ 0x1402CB8A0 (MiLogWsEmptyControl.c)
 *     PopLogPowerRequestAction @ 0x140589C44 (PopLogPowerRequestAction.c)
 *     EtwpCoverageRecord @ 0x1406B41FC (EtwpCoverageRecord.c)
 *     PopBatteryWorker @ 0x140719DA0 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14071A168 (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14071A404 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x14071A548 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14071A60C (PopBatteryCheckCompositeCapacity.c)
 *     PnpCompareInterruptInformation @ 0x14071D424 (PnpCompareInterruptInformation.c)
 *     TtmiLogError @ 0x1407616FC (TtmiLogError.c)
 *     MiLogCreateImageFileMapFailure @ 0x14084E644 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14084EBAC (MiLogStrongCodeDriverLoadFailure.c)
 *     PopAccountBatteryEnergyChange @ 0x14086C87C (PopAccountBatteryEnergyChange.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140870764 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14087AE3C (PopPublishAndPurgePowerRequestStats.c)
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
