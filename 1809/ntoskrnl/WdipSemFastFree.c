/*
 * XREFs of WdipSemFastFree @ 0x140717DD0
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406C0824 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140717B74 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140717BF8 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x140745390 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x1407459F4 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1408B2064 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1408B2170 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_140440A30 + a1, a2);
  return result;
}
