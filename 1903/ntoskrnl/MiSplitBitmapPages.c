/*
 * XREFs of MiSplitBitmapPages @ 0x1400ACFF0
 * Callers:
 *     MiExpandPtes @ 0x1400AA84C (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x140199A70 (MiExtendDynamicBitMap.c)
 *     MiMarkRetpolineBits @ 0x14070F8B4 (MiMarkRetpolineBits.c)
 *     MiSplitMirrorBitMap @ 0x1407279B0 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x14075079C (MiSplitPfnBitMaps.c)
 *     MiInitializeDriverImages @ 0x1409EE68C (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x140A176AC (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1400AD084 (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiSplitBitmapPages(int a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v5; // r8

  v3 = 9;
  if ( a1 != 13 )
    v3 = a1;
  v5 = 544LL;
  if ( ((v3 - 5) & 0xFFFFFFFB) != 0 )
  {
    if ( v3 != 14 && v3 != 8 && KeGetCurrentIrql() <= 1u )
      v5 = 545LL;
  }
  else
  {
    v5 = 560LL;
  }
  return MiMakeZeroedPageTables(
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + ((unsigned __int64)(a3 - 1) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           v5);
}
