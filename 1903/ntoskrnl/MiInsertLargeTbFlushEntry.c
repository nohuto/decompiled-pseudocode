/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x140119668
 * Callers:
 *     MiZeroPage @ 0x140029010 (MiZeroPage.c)
 *     MiRevertValidPte @ 0x14004F8F0 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     MiMakePteClean @ 0x14005C050 (MiMakePteClean.c)
 *     MmUnmapIoSpace @ 0x140117010 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x140117198 (MiZeroAndFlushPtes.c)
 *     MiZeroPageWorkMapping @ 0x140119504 (MiZeroPageWorkMapping.c)
 *     MiDeleteSystemPageTable @ 0x140122490 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x140131404 (MiMakeVaRangeNoAccess.c)
 *     MiDecommitLargePoolVa @ 0x1401464F0 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x140173EF4 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x140186434 (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x140186864 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186948 (MiDemoteValidLargePageOneLevel.c)
 *     MiUnmapMdlCommon @ 0x1402C0C64 (MiUnmapMdlCommon.c)
 *     MiDecommitLargePte @ 0x1402C9A24 (MiDecommitLargePte.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 *     MiReleaseLargePteMappings @ 0x1402DDC3C (MiReleaseLargePteMappings.c)
 *     MiDeleteLargeUserPde @ 0x1402E164C (MiDeleteLargeUserPde.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
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
