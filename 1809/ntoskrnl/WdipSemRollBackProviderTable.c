/*
 * XREFs of WdipSemRollBackProviderTable @ 0x1408B2064
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140744FA8 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x140717DD0 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_14040DFA0; ++i )
  {
    result = WdipSemFastFree(2, (_SLIST_ENTRY *)WdipSemProviderTable[i]);
    WdipSemProviderTable[i] = 0LL;
  }
  dword_14040DFA0 = a1;
  return result;
}
