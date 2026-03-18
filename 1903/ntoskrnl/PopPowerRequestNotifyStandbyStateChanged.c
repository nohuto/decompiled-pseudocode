/*
 * XREFs of PopPowerRequestNotifyStandbyStateChanged @ 0x1408A2AA8
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FB070 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A0544 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14071E2A4 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopSetExecutionRequiredTimer @ 0x1407897C8 (PopSetExecutionRequiredTimer.c)
 */

void __fastcall PopPowerRequestNotifyStandbyStateChanged(char a1)
{
  unsigned __int64 v2; // rcx

  PopAcquirePowerRequestPushLock(1);
  if ( a1 )
  {
    qword_140444EE8 = MEMORY[0xFFFFF78000000008];
    HIDWORD(PopExecutionRequiredContext) = PopPdcLastCsEnterReason;
    PopSetExecutionRequiredTimer();
  }
  else
  {
    qword_140444EE8 = 0LL;
    HIDWORD(PopExecutionRequiredContext) = 46;
    KeCancelTimer(&PopExecutionRequiredTimer);
  }
  PopHandleExecutionRequiredEnablementUpdate(v2);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
