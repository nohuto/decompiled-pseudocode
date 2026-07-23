/*
 * XREFs of _TlgCreateSz @ 0x140003938
 * Callers:
 *     MiAgeWorkingSet @ 0x14006DE40 (MiAgeWorkingSet.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14010CCA8 (MmNotifyProcessInSwapTrigger.c)
 *     EtwTelemetryCoverageReport @ 0x14012A650 (EtwTelemetryCoverageReport.c)
 *     MiLogTrimWs @ 0x140131118 (MiLogTrimWs.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1402A418C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402A4380 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402A4470 (MiLogResetPagesCommitRelease.c)
 *     MiLogWsEmptyControl @ 0x1402CBB90 (MiLogWsEmptyControl.c)
 *     PopLogPowerRequestAction @ 0x14058AC44 (PopLogPowerRequestAction.c)
 *     EtwpCoverageRecord @ 0x1406B547C (EtwpCoverageRecord.c)
 *     PopBatteryWorker @ 0x14071B020 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14071B684 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x14071B7C8 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14071B88C (PopBatteryCheckCompositeCapacity.c)
 *     PnpCompareInterruptInformation @ 0x14071E6A4 (PnpCompareInterruptInformation.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     MiLogCreateImageFileMapFailure @ 0x14084F884 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14084FDEC (MiLogStrongCodeDriverLoadFailure.c)
 *     PopAccountBatteryEnergyChange @ 0x14086DABC (PopAccountBatteryEnergyChange.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1408719A4 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14087C07C (PopPublishAndPurgePowerRequestStats.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409BDCD4 (MiFlushStrongCodeDriverLoadFailures.c)
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
