/*
 * XREFs of RaspAllocateMemory @ 0x14017C064
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x140179EB8 (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x14017A774 (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x14017AC50 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x14017B4BC (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x14017B590 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x14017B86C (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x14017BC7C (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x14017BFE0 (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x140328EF0 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x140329208 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14016F4D8 (BgpFwAllocateMemory.c)
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
