/*
 * XREFs of ?GetDisplayPixelFormatInfo@CHDRConversionRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800E7960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CHDRConversionRenderTarget::GetDisplayPixelFormatInfo(_DWORD *a1, _DWORD *a2)
{
  *a2 = a1[14];
  a2[1] = a1[28];
  a2[2] = a1[94];
  return a2;
}
