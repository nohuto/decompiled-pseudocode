/*
 * XREFs of ttfdOpenFontContext @ 0x1C02231EC
 * Callers:
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C021DF80 (ttfdQueryQuadTrueTypeOutline.c)
 *     bQueryAdvanceWidths @ 0x1C021EA18 (bQueryAdvanceWidths.c)
 *     ttfdQueryFontData @ 0x1C02205F4 (ttfdQueryFontData.c)
 *     ttfdQueryGlyphAttrs @ 0x1C0220B14 (ttfdQueryGlyphAttrs.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0217898 (vMarkFontGone.c)
 *     ttfdOpenFontContextInternal @ 0x1C0223254 (ttfdOpenFontContextInternal.c)
 */

__int64 ttfdOpenFontContext()
{
  return ttfdOpenFontContextInternal();
}
