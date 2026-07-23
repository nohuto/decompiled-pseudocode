/*
 * XREFs of PopDiagStopCsSleepStudySession @ 0x1408717DC
 * Callers:
 *     PopDisplayBurstSuppressWorker @ 0x140875D70 (PopDisplayBurstSuppressWorker.c)
 *     PopForceCompleteCsSleepStudySessionWorker @ 0x140875F10 (PopForceCompleteCsSleepStudySessionWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x1408761D0 (PopLidClosedSleepStudyWorker.c)
 *     PopPowerAggregatorExecuteDirectedDripsCallback @ 0x140876DF0 (PopPowerAggregatorExecuteDirectedDripsCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x140869E28 (PopEvaluateAggressiveStandbyActions.c)
 *     PopDiagNextCsSleepStudySession @ 0x1408714D0 (PopDiagNextCsSleepStudySession.c)
 *     PdcTaskClientRequest @ 0x14089B948 (PdcTaskClientRequest.c)
 */

LONG __fastcall PopDiagStopCsSleepStudySession(char a1, int a2, int a3)
{
  __int64 v6; // rdx
  char CsSleepStudySession; // al
  unsigned int v8; // eax

  KeWaitForSingleObject(&PopSleepStudySessionLock, Executive, 0, 0, 0LL);
  if ( !PopSleepStudyTaskClientReferenceTaken )
  {
    LOBYTE(v6) = 1;
    PdcTaskClientRequest(PopSleepStudyTaskClientActivator, v6);
    PopSleepStudyTaskClientReferenceTaken = 1;
    KiSetTimerEx((__int64)&PopSleepStudyTaskClientTimer, -50000000LL, 0, 0, (__int64)&PopSleepStudyTaskClientTimerDpc);
  }
  PopPdcLastCsExitReason = a2;
  PopEvaluateAggressiveStandbyActions(0);
  byte_14043D51C = 1;
  CsSleepStudySession = PopDiagNextCsSleepStudySession(&NullGuid);
  if ( a1 && !CsSleepStudySession && !PopConsoleDisplayState )
  {
    PopPdcLastCsEnterReason = a3;
    v8 = PopEvaluateAggressiveStandbyActions(1);
    if ( qword_140441090 )
      ((void (__fastcall *)(_QWORD))qword_140441090)(v8);
    PopDiagNextCsSleepStudySession(&GUID_SPM_LOW_POWER_CS);
  }
  return KeReleaseMutex(&PopSleepStudySessionLock, 0);
}
