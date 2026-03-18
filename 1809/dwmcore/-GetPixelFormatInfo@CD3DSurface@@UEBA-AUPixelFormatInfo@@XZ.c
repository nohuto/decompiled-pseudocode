/*
 * XREFs of ?GetPixelFormatInfo@CD3DSurface@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800E7680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CD3DSurface::GetPixelFormatInfo(_DWORD *a1, _DWORD *a2)
{
  *a2 = a1[9];
  a2[1] = a1[16];
  a2[2] = a1[17];
  return a2;
}
