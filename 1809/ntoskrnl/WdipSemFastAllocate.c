/*
 * XREFs of WdipSemFastAllocate @ 0x140716B7C
 * Callers:
 *     WdipSemBuildScenarioInstance @ 0x14071687C (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140716978 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadScenarioTable @ 0x140743DD8 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1407441C0 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x140744A08 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddContextEventToScenario @ 0x140744D58 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x140744E18 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1408B10EC (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x1408B11A8 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401C53B0 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x140751C9C (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&stru_14043F970 + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
