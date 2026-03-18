/*
 * XREFs of ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x18019A494
 * Callers:
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18019A830 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x180079E1C (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18009E250 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z @ 0x18018D6AC (-SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18018D8A4 (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::EnsureCachedVisualImage(struct CComposition **this)
{
  unsigned int v1; // ebx
  CCachedVisualImage *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  CCachedVisualImage *v7; // rdi
  int v8; // eax
  __int64 v9; // rcx

  v1 = 0;
  if ( !this[16] )
  {
    v3 = (CCachedVisualImage *)CCachedVisualImage::operator new();
    if ( v3 )
      v7 = CCachedVisualImage::CCachedVisualImage(v3, this[4], v5, v6);
    else
      v7 = 0LL;
    if ( v7 )
    {
      CMILCOMBase::InternalAddRef((CCachedVisualImage *)((char *)v7 + 16));
      *((_BYTE *)v7 + 377) = *((_BYTE *)this + 120);
      CCachedVisualImage::SetForHwndBitmap(v7, 1);
      v8 = CCachedVisualImage::SetRootVisual((struct CResource **)v7, this[13]);
      v1 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x51u);
        CGdiSpriteBitmap::Release((CCachedVisualImage *)((char *)v7 + 16));
      }
      else
      {
        this[16] = v7;
      }
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0x49u);
    }
  }
  return v1;
}
