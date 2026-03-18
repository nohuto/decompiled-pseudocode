/*
 * XREFs of WdipSemFastAllocate @ 0x140718850
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x14071864C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemBuildScenarioInstance @ 0x140746BE0 (WdipSemBuildScenarioInstance.c)
 *     WdipSemLoadScenarioTable @ 0x14076EB64 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14076EF78 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x14076F7EC (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddContextEventToScenario @ 0x14076FB88 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x14076FC48 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1408EDE7C (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x1408EDF38 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x14077BE08 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&stru_14046B4F0 + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
