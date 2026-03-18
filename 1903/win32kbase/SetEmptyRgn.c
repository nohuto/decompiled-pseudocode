/*
 * XREFs of SetEmptyRgn @ 0x1C0053AC0
 * Callers:
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 * Callees:
 *     GreSetRectRgn @ 0x1C0053B00 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return GreSetRectRgn(a1, 0);
}
