/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x1400F86C0
 * Callers:
 *     MiZeroPage @ 0x140029400 (MiZeroPage.c)
 *     MiRevertValidPte @ 0x14004F990 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiMakePteClean @ 0x14005C0F0 (MiMakePteClean.c)
 *     MmUnmapIoSpace @ 0x1400F5130 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1400F52B8 (MiZeroAndFlushPtes.c)
 *     MiZeroPageWorkMapping @ 0x1400F855C (MiZeroPageWorkMapping.c)
 *     MiDeleteSystemPageTable @ 0x1401235A0 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x140131C14 (MiMakeVaRangeNoAccess.c)
 *     MiDecommitLargePoolVa @ 0x140146B90 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x140174624 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x1401869E4 (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x140186E14 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186EF8 (MiDemoteValidLargePageOneLevel.c)
 *     MiUnmapMdlCommon @ 0x1402C09C4 (MiUnmapMdlCommon.c)
 *     MiDecommitLargePte @ 0x1402C9784 (MiDecommitLargePte.c)
 *     MiProtectAweRegion @ 0x1402D6EE4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402D7B68 (MiWriteAwePtes.c)
 *     MiReleaseLargePteMappings @ 0x1402DD99C (MiReleaseLargePteMappings.c)
 *     MiDeleteLargeUserPde @ 0x1402E13AC (MiDeleteLargeUserPde.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
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
