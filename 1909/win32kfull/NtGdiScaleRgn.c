/*
 * XREFs of NtGdiScaleRgn @ 0x1C02A8A80
 * Callers:
 *     <none>
 * Callees:
 *     GreScaleRgn @ 0x1C0298D24 (GreScaleRgn.c)
 */

__int64 __fastcall NtGdiScaleRgn(HDC a1, HRGN a2)
{
  return GreScaleRgn(a1, a2);
}
