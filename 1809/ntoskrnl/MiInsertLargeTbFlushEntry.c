/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x140121464
 * Callers:
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiDeleteSystemPageTable @ 0x14011F030 (MiDeleteSystemPageTable.c)
 *     MiZeroPageWorkMapping @ 0x140121304 (MiZeroPageWorkMapping.c)
 *     MmUnmapIoSpace @ 0x140123200 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x14012335C (MiZeroAndFlushPtes.c)
 *     MiDecommitLargePoolVa @ 0x14015B2C0 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x14016A790 (MiFlushValidPteFromTb.c)
 *     MiClearSystemAccessBits @ 0x1401849FC (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184AE4 (MiDemoteValidLargePageOneLevel.c)
 *     MiUnmapMdlCommon @ 0x1402A9324 (MiUnmapMdlCommon.c)
 *     MiProtectAweRegion @ 0x1402B14BC (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402B2178 (MiWriteAwePtes.c)
 *     MiReleaseLargePteMappings @ 0x1402C389C (MiReleaseLargePteMappings.c)
 *     MiDeleteLargeUserPde @ 0x1402C73C0 (MiDeleteLargeUserPde.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1400B3AD0 (MiInsertTbFlushEntry.c)
 */

unsigned __int64 __fastcall MiInsertLargeTbFlushEntry(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v6; // esi
  unsigned __int64 result; // rax

  v6 = 0;
  do
  {
    a3 = (__int64)(a3 << 25) >> 16;
    result = MiInsertTbFlushEntry(a1, a3, 1LL, v6++);
  }
  while ( v6 <= a2 );
  return result;
}
