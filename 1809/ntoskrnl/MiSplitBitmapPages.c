/*
 * XREFs of MiSplitBitmapPages @ 0x1400265A8
 * Callers:
 *     MiExpandPtes @ 0x1400F6494 (MiExpandPtes.c)
 *     MiReadyNonPagedPoolExpansionForUse @ 0x1401641D8 (MiReadyNonPagedPoolExpansionForUse.c)
 *     MiExpandPagedPool @ 0x1401642EC (MiExpandPagedPool.c)
 *     MiExtendDynamicBitMap @ 0x14018FBD0 (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x1406E0E48 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x14072BC10 (MiSplitPfnBitMaps.c)
 *     MiMarkRetpolineBits @ 0x140854FB0 (MiMarkRetpolineBits.c)
 *     MiInitializeDriverImages @ 0x1409B7BDC (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x1409B9D60 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140026644 (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiSplitBitmapPages(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v5; // r8
  int v7; // eax

  v3 = 9;
  if ( a1 != 14 )
    v3 = a1;
  v5 = 288LL;
  if ( ((v3 - 5) & 0xFFFFFFFB) != 0 )
  {
    if ( v3 > 0xF || (v7 = 41216, !_bittest(&v7, v3)) )
    {
      if ( KeGetCurrentIrql() <= 1u )
        v5 = 289LL;
    }
  }
  else
  {
    v5 = 304LL;
  }
  return MiMakeZeroedPageTables(
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + ((unsigned __int64)(a3 - 1) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           v5);
}
