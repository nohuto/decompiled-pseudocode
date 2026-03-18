/*
 * XREFs of ?IsProtectedContent@CCachedVisualImage@@UEBA_NXZ @ 0x1800D0E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCachedVisualImage::IsProtectedContent(CCachedVisualImage *this)
{
  return *((_BYTE *)this + 373) == 1;
}
