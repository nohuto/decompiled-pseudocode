/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x1402E1DC8
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x1402D3F78 (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x140869A80 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14087AE3C (PopPublishAndPurgePowerRequestStats.c)
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x14087B07C (PopPublishAndResetPowerRequestsCollectionStats.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAD40 (EtwWriteEx.c)
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
