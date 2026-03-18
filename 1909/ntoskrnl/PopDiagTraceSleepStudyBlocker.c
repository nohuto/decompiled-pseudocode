/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x1402FE864
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x1402EE4BC (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1408A5750 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B6CC4 (PopPublishAndPurgePowerRequestStats.c)
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x1408B6F14 (PopPublishAndResetPowerRequestsCollectionStats.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
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
