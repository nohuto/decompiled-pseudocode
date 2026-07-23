/*
 * XREFs of WdipSemFastFree @ 0x140716A34
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406BD778 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1407167D8 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x14071685C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x14076C124 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x14076C7B4 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1408EE2A4 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1408EE3B0 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_14046B7B0 + a1, a2);
  return result;
}
