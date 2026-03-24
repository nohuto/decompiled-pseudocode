/*
 * XREFs of WdipSemFastFree @ 0x140716B30
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406BF584 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1407168D4 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140716958 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x1407441A0 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x140744804 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1408B0E04 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1408B0F10 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C5410 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_14043F970 + a1, a2);
  return result;
}
