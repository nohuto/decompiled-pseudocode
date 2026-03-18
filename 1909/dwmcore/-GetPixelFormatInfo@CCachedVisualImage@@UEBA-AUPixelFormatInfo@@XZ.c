/*
 * XREFs of ?GetPixelFormatInfo@CCachedVisualImage@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800BF5C0
 * Callers:
 *     ?GetPixelFormatInfo@CCachedVisualImage@@WII@EBA?AUPixelFormatInfo@@XZ @ 0x1800F1190 (-GetPixelFormatInfo@CCachedVisualImage@@WII@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CCachedVisualImage::GetPixelFormatInfo(_DWORD *a1, _DWORD *a2)
{
  bool v2; // zf
  BOOL v3; // eax
  int v4; // eax

  *a2 = a1[51];
  v2 = a1[53] == 2;
  a2[1] = 3;
  v3 = v2;
  v2 = a1[52] == 0;
  a2[2] = v3;
  v4 = a2[1];
  if ( !v2 )
    v4 = 1;
  a2[1] = v4;
  return a2;
}
