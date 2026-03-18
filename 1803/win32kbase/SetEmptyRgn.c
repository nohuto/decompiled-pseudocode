/*
 * XREFs of SetEmptyRgn @ 0x1C00647D0
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 * Callees:
 *     GreSetRectRgn @ 0x1C001E320 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return GreSetRectRgn(a1, gZero.LowPart, gZero.HighPart, 0, 0);
}
