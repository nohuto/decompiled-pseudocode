/*
 * XREFs of NtGdiScaleRgn @ 0x1C0280220
 * Callers:
 *     <none>
 * Callees:
 *     GreScaleRgn @ 0x1C026E60C (GreScaleRgn.c)
 */

__int64 __fastcall NtGdiScaleRgn(HDC a1, HRGN a2)
{
  return GreScaleRgn(a1, a2);
}
