/*
 * XREFs of ?GetPixelFormatInfo@CSectionBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x180256690
 * Callers:
 *     ?GetPixelFormatInfo@CSectionBitmapRealization@@WBBA@EBA?AUPixelFormatInfo@@XZ @ 0x1800ED8D0 (-GetPixelFormatInfo@CSectionBitmapRealization@@WBBA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSectionBitmapRealization::GetPixelFormatInfo(_DWORD *a1, _DWORD *a2)
{
  bool v2; // zf
  int v3; // eax

  v2 = a1[2] == 0;
  *a2 = a1[77];
  v3 = 3;
  if ( !v2 )
    v3 = a1[2];
  a2[1] = v3;
  a2[2] = a1[13];
  return a2;
}
