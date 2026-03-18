/*
 * XREFs of MiSplitBitmapPages @ 0x1400E8500
 * Callers:
 *     MiExpandPtes @ 0x1400E5D60 (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x14019A0D0 (MiExtendDynamicBitMap.c)
 *     MiMarkRetpolineBits @ 0x140711694 (MiMarkRetpolineBits.c)
 *     MiSplitMirrorBitMap @ 0x14072B3E8 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x14075122C (MiSplitPfnBitMaps.c)
 *     MiInitializeDriverImages @ 0x1409EE5A4 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x140A17B6C (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1400E8594 (MiMakeZeroedPageTables.c)
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
