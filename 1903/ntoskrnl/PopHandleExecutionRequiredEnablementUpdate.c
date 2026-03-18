/*
 * XREFs of PopHandleExecutionRequiredEnablementUpdate @ 0x14071E2A4
 * Callers:
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14015C974 (PopPowerRequestNotifyAudioStateChanged.c)
 *     PopExecutionRequiredSettingCallback @ 0x140789730 (PopExecutionRequiredSettingCallback.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408A2940 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408A2AA8 (PopPowerRequestNotifyStandbyStateChanged.c)
 * Callees:
 *     PopIsUserInitiatedMonitorRequestReason @ 0x1402F19A8 (PopIsUserInitiatedMonitorRequestReason.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x140789DE8 (PopEnableExecutionRequiredPowerRequests.c)
 */

void __fastcall PopHandleExecutionRequiredEnablementUpdate(unsigned __int64 a1)
{
  int v1; // r8d
  char v2; // al

  LOBYTE(v1) = 0;
  if ( !PopExecutionRequiredTimeout )
    goto LABEL_4;
  if ( !qword_140444EE8 )
    goto LABEL_3;
  if ( !PopIsUserInitiatedMonitorRequestReason(HIDWORD(PopExecutionRequiredContext)) )
  {
    if ( PopPowerRequestActiveAudioEnablesExecutionRequired != v1 && BYTE1(PopExecutionRequiredContext) != (_BYTE)v1 )
    {
LABEL_3:
      LOBYTE(v1) = 1;
      goto LABEL_4;
    }
    a1 = 10000000LL * (unsigned int)PopExecutionRequiredTimeout;
    v2 = v1;
    if ( MEMORY[0xFFFFF78000000008] - qword_140444EE8 < a1 )
      v2 = 1;
    LOBYTE(v1) = v2;
  }
LABEL_4:
  if ( (_BYTE)PopExecutionRequiredContext != (_BYTE)v1 )
  {
    LOBYTE(a1) = v1;
    LOBYTE(PopExecutionRequiredContext) = v1;
    PopEnableExecutionRequiredPowerRequests(a1);
  }
}
