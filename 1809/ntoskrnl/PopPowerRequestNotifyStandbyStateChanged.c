/*
 * XREFs of PopPowerRequestNotifyStandbyStateChanged @ 0x1408677E8
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE450 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x1406DC924 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopSetExecutionRequiredTimer @ 0x140763E08 (PopSetExecutionRequiredTimer.c)
 */

void __fastcall PopPowerRequestNotifyStandbyStateChanged(char a1)
{
  unsigned __int64 v2; // rcx

  PopAcquirePowerRequestPushLock(1);
  if ( a1 )
  {
    qword_14041A318 = MEMORY[0xFFFFF78000000008];
    HIDWORD(PopExecutionRequiredContext) = PopPdcLastCsEnterReason;
    PopSetExecutionRequiredTimer();
  }
  else
  {
    qword_14041A318 = 0LL;
    HIDWORD(PopExecutionRequiredContext) = 46;
    KeCancelTimer(&PopExecutionRequiredTimer);
  }
  PopHandleExecutionRequiredEnablementUpdate(v2);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
