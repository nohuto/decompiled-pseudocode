/*
 * XREFs of RaspAllocateMemory @ 0x14017C044
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x140179E98 (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x14017A754 (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x14017AC30 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x14017B49C (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x14017B570 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x14017B84C (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x14017BC5C (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x14017BFC0 (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x140328DF0 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x140329108 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14016F4B8 (BgpFwAllocateMemory.c)
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
