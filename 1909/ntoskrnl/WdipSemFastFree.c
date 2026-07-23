/*
 * XREFs of WdipSemFastFree @ 0x140718824
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406BCF08 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1407185C8 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x14071864C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x14076EF78 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x14076F608 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1408EDBB4 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1408EDCC0 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_14046B4F0 + a1, a2);
  return result;
}
