/*
 * XREFs of MiSplitMirrorBitMap @ 0x1406E0E48
 * Callers:
 *     MiActOnMirrorBitmap @ 0x1406E0DAC (MiActOnMirrorBitmap.c)
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400265A8 (MiSplitBitmapPages.c)
 */

__int64 __fastcall MiSplitMirrorBitMap(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rdi

  v3 = a1[1];
  if ( !v3 )
    return 1LL;
  v5 = a2 + a3;
  if ( (unsigned int)MiSplitBitmapPages(9u, v3 + (a2 >> 3), 8 * (((a2 + a3 + 7) >> 3) - (a2 >> 3))) )
  {
    if ( v5 > *a1 )
      *a1 = v5;
    return 1LL;
  }
  return 0LL;
}
