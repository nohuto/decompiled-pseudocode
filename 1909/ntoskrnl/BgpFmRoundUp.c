/*
 * XREFs of BgpFmRoundUp @ 0x1401796B0
 * Callers:
 *     BgpRasGetGlyphTextCellDimensions @ 0x140179604 (BgpRasGetGlyphTextCellDimensions.c)
 *     BgpRasPrintGlyph @ 0x14018355C (BgpRasPrintGlyph.c)
 *     RaspScanConvert @ 0x140183DC0 (RaspScanConvert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpFmRoundUp(int a1)
{
  __int64 result; // rax

  result = (unsigned int)(a1 >> 6);
  if ( a1 < 0 )
    return (unsigned int)result | 0xFC000000;
  if ( (a1 & 0x3F) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
