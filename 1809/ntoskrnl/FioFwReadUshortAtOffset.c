/*
 * XREFs of FioFwReadUshortAtOffset @ 0x14017B838
 * Callers:
 *     RaspLoadBearings @ 0x14017B648 (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x14017B798 (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x14017B86C (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x14017C168 (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x140328EF0 (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x140329590 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14017BC48 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUshortAtOffset(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 2LL, a3);
  if ( (int)result >= 0 )
  {
    *a3 = __ROR2__(*a3, 8);
    return 0LL;
  }
  return result;
}
