/*
 * XREFs of ?GetPixelFormatInfo@CD2DBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800D9F30
 * Callers:
 *     ?GetPixelFormatInfo@CD2DBitmap@@W7EBA?AUPixelFormatInfo@@XZ @ 0x1800ECD30 (-GetPixelFormatInfo@CD2DBitmap@@W7EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CD2DBitmap::GetPixelFormatInfo(_DWORD *a1, _DWORD *a2)
{
  *a2 = a1[20];
  a2[1] = a1[29];
  a2[2] = a1[36];
  return a2;
}
