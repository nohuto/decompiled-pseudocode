/*
 * XREFs of RaspAllocateMemory @ 0x140184C04
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x140182C8C (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x14018331C (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x140183810 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x14018407C (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x140184150 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x140184430 (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x140184834 (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x140184B80 (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x14034A778 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14034AA90 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140178CE0 (BgpFwAllocateMemory.c)
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
