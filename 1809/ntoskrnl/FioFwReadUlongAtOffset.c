/*
 * XREFs of FioFwReadUlongAtOffset @ 0x140179E68
 * Callers:
 *     RaspMapGlyphIndexToLocation @ 0x14017B778 (RaspMapGlyphIndexToLocation.c)
 *     BgpFoInitialize @ 0x1409FA888 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x1409FA984 (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14017BC28 (FioFwReadBytesAtOffset.c)
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
