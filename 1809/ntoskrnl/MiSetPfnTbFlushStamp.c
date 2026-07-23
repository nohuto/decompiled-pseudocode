/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x1400296A4
 * Callers:
 *     MiGetPageTablePages @ 0x140026E90 (MiGetPageTablePages.c)
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MiMapPageFileHash @ 0x14014FDD8 (MiMapPageFileHash.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402B6810 (MiPurgeBadFileOnlyPages.c)
 *     MiPerformFinalZeroing @ 0x1402BFEEC (MiPerformFinalZeroing.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1200 (MiSwapNumaStandbyPage.c)
 *     MiAllocateSlabEntry @ 0x1402C1E8C (MiAllocateSlabEntry.c)
 *     MiAllocateDummyPage @ 0x1409BA930 (MiAllocateDummyPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnTbFlushStamp(__int64 a1, char a2, int a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax
  signed __int64 v6; // rdx
  bool i; // zf
  unsigned __int64 v8; // rcx

  v4 = (unsigned __int64)(a2 & 0xF) << 56;
  if ( a3 == 1 )
  {
    result = v4 | *(_QWORD *)(a1 + 24) & 0xF0FFFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v4 | v6 & 0xF0FFFFFFFFFFFFFFuLL, v6);
    for ( i = v6 == result; !i; i = v8 == result )
    {
      v8 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 24),
                 v4 | result & 0xF0FFFFFFFFFFFFFFuLL,
                 result);
    }
  }
  return result;
}
