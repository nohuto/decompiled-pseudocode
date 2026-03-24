/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x140121484
 * Callers:
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiDeleteSystemPageTable @ 0x14011F050 (MiDeleteSystemPageTable.c)
 *     MiZeroPageWorkMapping @ 0x140121324 (MiZeroPageWorkMapping.c)
 *     MmUnmapIoSpace @ 0x140123220 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x14012337C (MiZeroAndFlushPtes.c)
 *     MiDecommitLargePoolVa @ 0x14015B2E0 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x14016A7B0 (MiFlushValidPteFromTb.c)
 *     MiClearSystemAccessBits @ 0x140184A1C (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184B04 (MiDemoteValidLargePageOneLevel.c)
 *     MiUnmapMdlCommon @ 0x1402A9424 (MiUnmapMdlCommon.c)
 *     MiProtectAweRegion @ 0x1402B15BC (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402B2278 (MiWriteAwePtes.c)
 *     MiReleaseLargePteMappings @ 0x1402C399C (MiReleaseLargePteMappings.c)
 *     MiDeleteLargeUserPde @ 0x1402C74C0 (MiDeleteLargeUserPde.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1400B3AF0 (MiInsertTbFlushEntry.c)
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
