/*
 * XREFs of ?IsHDRContent@CCachedVisualImage@@UEBA_NXZ @ 0x18018D2E0
 * Callers:
 *     ?IsHDRContent@CHwndBitmap@@UEBA_NXZ @ 0x18019AA40 (-IsHDRContent@CHwndBitmap@@UEBA_NXZ.c)
 * Callees:
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x18008C6F4 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?IsHDRContent@CRenderTargetBitmap@@QEBA_NXZ @ 0x180180E84 (-IsHDRContent@CRenderTargetBitmap@@QEBA_NXZ.c)
 */

char __fastcall CCachedVisualImage::IsHDRContent(CCachedVisualImage *this)
{
  char v1; // bl
  unsigned int v3; // edi
  __int64 v4; // rsi

  v1 = 0;
  v3 = 0;
  if ( *((_DWORD *)this + 64) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)this + 29) + 48LL * v3;
      if ( CCachedVisualImage::RenderTargetBitmapInfo::IsValid((CCachedVisualImage::RenderTargetBitmapInfo *)v4)
        && !*(_BYTE *)(v4 + 44)
        && CRenderTargetBitmap::IsHDRContent(*(CRenderTargetBitmap **)(v4 + 8)) )
      {
        break;
      }
      if ( ++v3 >= *((_DWORD *)this + 64) )
        return v1;
    }
    return 1;
  }
  return v1;
}
