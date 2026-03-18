/*
 * XREFs of PopPowerRequestNotifyStandbyStateChanged @ 0x1408A22E8
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FAB20 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406719F8 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x140720134 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopSetExecutionRequiredTimer @ 0x14078BC28 (PopSetExecutionRequiredTimer.c)
 */

void __fastcall PopPowerRequestNotifyStandbyStateChanged(char a1)
{
  unsigned __int64 v2; // rcx

  PopAcquirePowerRequestPushLock(1);
  if ( a1 )
  {
    qword_140444BD8 = MEMORY[0xFFFFF78000000008];
    HIDWORD(PopExecutionRequiredContext) = PopPdcLastCsEnterReason;
    PopSetExecutionRequiredTimer();
  }
  else
  {
    qword_140444BD8 = 0LL;
    HIDWORD(PopExecutionRequiredContext) = 46;
    KeCancelTimer(&PopExecutionRequiredTimer);
  }
  PopHandleExecutionRequiredEnablementUpdate(v2);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
