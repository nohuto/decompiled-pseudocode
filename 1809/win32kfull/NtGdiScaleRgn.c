/*
 * XREFs of NtGdiScaleRgn @ 0x1C02933E0
 * Callers:
 *     <none>
 * Callees:
 *     GreScaleRgn @ 0x1C0282620 (GreScaleRgn.c)
 */

__int64 __fastcall NtGdiScaleRgn(HDC a1, HRGN a2)
{
  return GreScaleRgn(a1, a2);
}
