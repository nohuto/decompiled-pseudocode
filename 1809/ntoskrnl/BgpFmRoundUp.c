/*
 * XREFs of BgpFmRoundUp @ 0x14016F8C0
 * Callers:
 *     BgpRasGetGlyphTextCellDimensions @ 0x14016F814 (BgpRasGetGlyphTextCellDimensions.c)
 *     BgpRasPrintGlyph @ 0x14017A2D4 (BgpRasPrintGlyph.c)
 *     RaspScanConvert @ 0x14017AD50 (RaspScanConvert.c)
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
