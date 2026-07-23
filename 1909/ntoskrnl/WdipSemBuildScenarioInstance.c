/*
 * XREFs of WdipSemBuildScenarioInstance @ 0x140746BE0
 * Callers:
 *     WdipSemReserveInstanceTableEntry @ 0x140746B0C (WdipSemReserveInstanceTableEntry.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     WdipSemFastAllocate @ 0x140718850 (WdipSemFastAllocate.c)
 */

PSLIST_ENTRY __fastcall WdipSemBuildScenarioInstance(_SLIST_ENTRY *a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY v2; // rbx
  PSLIST_ENTRY v5; // rax
  _SLIST_ENTRY v6; // xmm0

  v2 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v5 = WdipSemFastAllocate(3, 0x220u);
      v2 = v5;
      if ( v5 )
      {
        memset(v5, 0, 0x220uLL);
        v6 = *a2;
        v2[2].Next = a1;
        *((_DWORD *)&v2[2].Next + 3) = 1;
        v2[1] = v6;
      }
    }
  }
  return v2;
}
