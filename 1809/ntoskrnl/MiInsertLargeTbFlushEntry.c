/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x140121554
 * Callers:
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiDeleteSystemPageTable @ 0x14011F0C0 (MiDeleteSystemPageTable.c)
 *     MiZeroPageWorkMapping @ 0x1401213F4 (MiZeroPageWorkMapping.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x14012344C (MiZeroAndFlushPtes.c)
 *     MiDecommitLargePoolVa @ 0x14015B3E0 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x14016A8B0 (MiFlushValidPteFromTb.c)
 *     MiClearSystemAccessBits @ 0x140184B5C (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184C44 (MiDemoteValidLargePageOneLevel.c)
 *     MiUnmapMdlCommon @ 0x1402A9614 (MiUnmapMdlCommon.c)
 *     MiProtectAweRegion @ 0x1402B17AC (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiReleaseLargePteMappings @ 0x1402C3B8C (MiReleaseLargePteMappings.c)
 *     MiDeleteLargeUserPde @ 0x1402C76B0 (MiDeleteLargeUserPde.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
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
