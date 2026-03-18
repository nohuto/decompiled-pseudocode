/*
 * XREFs of PopDiagStopCsSleepStudySession @ 0x1408AD254
 * Callers:
 *     PopDisplayBurstSuppressWorker @ 0x1408B1880 (PopDisplayBurstSuppressWorker.c)
 *     PopForceCompleteCsSleepStudySessionWorker @ 0x1408B1A40 (PopForceCompleteCsSleepStudySessionWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x1408B1D00 (PopLidClosedSleepStudyWorker.c)
 *     PopPowerAggregatorExecuteDirectedDripsCallback @ 0x1408B2A10 (PopPowerAggregatorExecuteDirectedDripsCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x1408A50F8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopDiagNextCsSleepStudySession @ 0x1408ACF10 (PopDiagNextCsSleepStudySession.c)
 *     PdcTaskClientRequest @ 0x1408D9274 (PdcTaskClientRequest.c)
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
  byte_140467F1C = 1;
  CsSleepStudySession = PopDiagNextCsSleepStudySession(&NullGuid);
  if ( a1 && !CsSleepStudySession && !PopConsoleDisplayState )
  {
    PopPdcLastCsEnterReason = a3;
    v8 = PopEvaluateAggressiveStandbyActions(1);
    if ( qword_14046BDE0 )
      ((void (__fastcall *)(_QWORD))qword_14046BDE0)(v8);
    PopDiagNextCsSleepStudySession(&GUID_SPM_LOW_POWER_CS);
  }
  return KeReleaseMutex(&PopSleepStudySessionLock, 0);
}
