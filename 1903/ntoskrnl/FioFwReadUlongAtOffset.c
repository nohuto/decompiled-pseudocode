/*
 * XREFs of FioFwReadUlongAtOffset @ 0x140182C5C
 * Callers:
 *     RaspMapGlyphIndexToLocation @ 0x14018435C (RaspMapGlyphIndexToLocation.c)
 *     BgpFoInitialize @ 0x140A404F8 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140A405F4 (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140184800 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUlongAtOffset(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 4LL, a3);
  if ( (int)result >= 0 )
  {
    *a3 = _byteswap_ulong(*a3);
    return 0LL;
  }
  return result;
}
