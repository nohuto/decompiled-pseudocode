/*
 * XREFs of WdipSemFastFree @ 0x140716B50
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406BF5A4 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1407168F4 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140716978 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x1407441C0 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x140744824 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1408B0E24 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1408B0F30 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_14043F970 + a1, a2);
  return result;
}
