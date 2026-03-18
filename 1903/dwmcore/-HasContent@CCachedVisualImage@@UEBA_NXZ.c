/*
 * XREFs of ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x1800437C0
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18004281C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 * Callees:
 *     <none>
 */

char __fastcall CCachedVisualImage::HasContent(CCachedVisualImage *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 23) || *((_BYTE *)this + 370) )
    return 1;
  return result;
}
