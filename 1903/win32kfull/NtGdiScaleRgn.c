/*
 * XREFs of NtGdiScaleRgn @ 0x1C02A8F30
 * Callers:
 *     <none>
 * Callees:
 *     GreScaleRgn @ 0x1C02992D4 (GreScaleRgn.c)
 */

__int64 __fastcall NtGdiScaleRgn(HDC a1, HRGN a2)
{
  return GreScaleRgn(a1, a2);
}
