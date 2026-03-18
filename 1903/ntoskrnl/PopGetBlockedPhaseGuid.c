/*
 * XREFs of PopGetBlockedPhaseGuid @ 0x1408B73CC
 * Callers:
 *     PopPublishAndPurgePowerRequestStats @ 0x1408B73F4 (PopPublishAndPurgePowerRequestStats.c)
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x1408B7644 (PopPublishAndResetPowerRequestsCollectionStats.c)
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
