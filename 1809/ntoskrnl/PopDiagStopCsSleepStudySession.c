/*
 * XREFs of PopDiagStopCsSleepStudySession @ 0x14087059C
 * Callers:
 *     PopDisplayBurstSuppressWorker @ 0x140874B30 (PopDisplayBurstSuppressWorker.c)
 *     PopForceCompleteCsSleepStudySessionWorker @ 0x140874CD0 (PopForceCompleteCsSleepStudySessionWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x140874F90 (PopLidClosedSleepStudyWorker.c)
 *     PopPowerAggregatorExecuteDirectedDripsCallback @ 0x140875BB0 (PopPowerAggregatorExecuteDirectedDripsCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x140868BE8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopDiagNextCsSleepStudySession @ 0x140870290 (PopDiagNextCsSleepStudySession.c)
 *     PdcTaskClientRequest @ 0x14089A708 (PdcTaskClientRequest.c)
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
  byte_14043C45C = 1;
  CsSleepStudySession = PopDiagNextCsSleepStudySession(&NullGuid);
  if ( a1 && !CsSleepStudySession && !PopConsoleDisplayState )
  {
    PopPdcLastCsEnterReason = a3;
    v8 = PopEvaluateAggressiveStandbyActions(1);
    if ( qword_14043FFD0 )
      ((void (__fastcall *)(_QWORD))qword_14043FFD0)(v8);
    PopDiagNextCsSleepStudySession(&GUID_SPM_LOW_POWER_CS);
  }
  return KeReleaseMutex(&PopSleepStudySessionLock, 0);
}
