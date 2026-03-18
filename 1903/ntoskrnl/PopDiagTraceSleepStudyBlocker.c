/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x1402FEDB4
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x1402EE75C (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1408A5EF0 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B73F4 (PopPublishAndPurgePowerRequestStats.c)
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x1408B7644 (PopPublishAndResetPowerRequestsCollectionStats.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 */

void __fastcall PopDiagTraceSleepStudyBlocker(__int64 a1, struct _EVENT_DATA_DESCRIPTOR *a2)
{
  REGHANDLE v3; // rbx

  if ( PopDiagSleepStudyHandleRegistered )
  {
    v3 = PopDiagSleepStudyHandle;
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER) )
      EtwWriteEx(v3, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 0LL, 0, 0LL, 0LL, 6u, a2);
  }
}
