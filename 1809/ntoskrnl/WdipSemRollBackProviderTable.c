/*
 * XREFs of WdipSemRollBackProviderTable @ 0x1408B0E24
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140743DD8 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x140716B50 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_14040CF00; ++i )
  {
    result = WdipSemFastFree(2, (struct _SLIST_ENTRY *)WdipSemProviderTable[i]);
    WdipSemProviderTable[i] = 0LL;
  }
  dword_14040CF00 = a1;
  return result;
}
