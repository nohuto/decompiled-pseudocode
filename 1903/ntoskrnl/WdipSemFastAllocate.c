/*
 * XREFs of WdipSemFastAllocate @ 0x140716A60
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x14071685C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemBuildScenarioInstance @ 0x140744CE0 (WdipSemBuildScenarioInstance.c)
 *     WdipSemLoadScenarioTable @ 0x14076BD10 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14076C124 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x14076C998 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddContextEventToScenario @ 0x14076CD34 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x14076CDF4 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1408EE56C (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x1408EE628 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x140778828 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&stru_14046B7B0 + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
