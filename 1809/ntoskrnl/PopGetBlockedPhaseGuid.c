/*
 * XREFs of PopGetBlockedPhaseGuid @ 0x14087ADF4
 * Callers:
 *     PopPublishAndPurgePowerRequestStats @ 0x14087AE1C (PopPublishAndPurgePowerRequestStats.c)
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x14087B05C (PopPublishAndResetPowerRequestsCollectionStats.c)
 * Callees:
 *     <none>
 */

GUID *__fastcall PopGetBlockedPhaseGuid(GUID *a1, int a2)
{
  int v2; // edx

  *(_QWORD *)&a1->Data1 = 0LL;
  *(_QWORD *)a1->Data4 = 0LL;
  v2 = a2 - 1;
  if ( !v2 || v2 == 2 )
    *a1 = GUID_SLEEPSTUDY_BLOCKER_DAM_PHASE;
  return a1;
}
