/*
 * XREFs of SetEmptyRgn @ 0x1C001D4E0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C001E010 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return GreSetRectRgn(a1, 0);
}
