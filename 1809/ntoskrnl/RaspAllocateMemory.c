/*
 * XREFs of RaspAllocateMemory @ 0x14017C164
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x140179FB8 (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x14017A874 (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x14017AD50 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x14017B5BC (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x14017B690 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x14017B96C (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x14017BD7C (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x14017C0E0 (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x1403290E0 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1403293F8 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 */

__int64 __fastcall RaspAllocateMemory(unsigned __int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 Memory; // rdx

  v3 = *a2;
  v4 = (a2[2] + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *a2 )
  {
    if ( a1 > a2[1] - v4 )
    {
      return 0LL;
    }
    else
    {
      a2[2] = v4 + a1;
      return v3 + v4;
    }
  }
  else
  {
    Memory = BgpFwAllocateMemory(a1);
    if ( Memory )
      a2[2] = v4 + a1;
  }
  return Memory;
}
