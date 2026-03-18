/*
 * XREFs of FioFwReadUshortAtOffset @ 0x1401849AC
 * Callers:
 *     RaspLoadBearings @ 0x1401847B8 (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x14018490C (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x1401849E0 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x1401852B8 (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14034A1D8 (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x14034A878 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140184DB0 (FioFwReadBytesAtOffset.c)
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
