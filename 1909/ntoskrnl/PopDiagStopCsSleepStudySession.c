/*
 * XREFs of PopDiagStopCsSleepStudySession @ 0x1408ACAB4
 * Callers:
 *     PopDisplayBurstSuppressWorker @ 0x1408B10E0 (PopDisplayBurstSuppressWorker.c)
 *     PopForceCompleteCsSleepStudySessionWorker @ 0x1408B12A0 (PopForceCompleteCsSleepStudySessionWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x1408B1560 (PopLidClosedSleepStudyWorker.c)
 *     PopPowerAggregatorExecuteDirectedDripsCallback @ 0x1408B2270 (PopPowerAggregatorExecuteDirectedDripsCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x1408A4938 (PopEvaluateAggressiveStandbyActions.c)
 *     PopDiagNextCsSleepStudySession @ 0x1408AC770 (PopDiagNextCsSleepStudySession.c)
 *     PdcTaskClientRequest @ 0x1408D8B74 (PdcTaskClientRequest.c)
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
  byte_140467C5C = 1;
  CsSleepStudySession = PopDiagNextCsSleepStudySession(&NullGuid);
  if ( a1 && !CsSleepStudySession && !PopConsoleDisplayState )
  {
    PopPdcLastCsEnterReason = a3;
    v8 = PopEvaluateAggressiveStandbyActions(1);
    if ( qword_14046BB20 )
      ((void (__fastcall *)(_QWORD))qword_14046BB20)(v8);
    PopDiagNextCsSleepStudySession(&GUID_SPM_LOW_POWER_CS);
  }
  return KeReleaseMutex(&PopSleepStudySessionLock, 0);
}
