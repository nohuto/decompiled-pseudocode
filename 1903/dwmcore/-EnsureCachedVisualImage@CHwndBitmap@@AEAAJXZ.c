/*
 * XREFs of ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180215F24
 * Callers:
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180216300 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18002B4B0 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18002B5E4 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x1800D79E0 (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1801C9894 (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::EnsureCachedVisualImage(struct CComposition **this)
{
  unsigned int v1; // edi
  CCachedVisualImage *v3; // rax
  __int64 v4; // rcx
  CCachedVisualImage *v5; // rbx
  char v6; // al
  signed int v7; // eax
  __int64 v8; // rcx

  v1 = 0;
  if ( !this[16] )
  {
    v3 = (CCachedVisualImage *)CCachedVisualImage::operator new();
    if ( v3 )
      v5 = CCachedVisualImage::CCachedVisualImage(v3, this[4]);
    else
      v5 = 0LL;
    if ( v5 )
    {
      CMILCOMBase::InternalAddRef((CCachedVisualImage *)((char *)v5 + 16));
      v6 = *((_BYTE *)this + 120);
      *((_DWORD *)v5 + 51) = 0;
      *((_DWORD *)v5 + 52) = 0;
      *((_DWORD *)v5 + 53) = 0;
      *((_BYTE *)v5 + 377) = v6;
      *((_BYTE *)v5 + 379) = 1;
      CCachedVisualImage::ChoosePixelFormat(v5);
      CResource::NotifyOnChanged((__int64)v5 + 16, 0, 0LL);
      v7 = CCachedVisualImage::SetRootVisual((struct CResource **)v5, this[13]);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x56u, 0LL);
        CGdiSpriteBitmap::Release((CCachedVisualImage *)((char *)v5 + 16));
      }
      else
      {
        this[16] = v5;
      }
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x8007000E, 0x4Eu, 0LL);
    }
  }
  return v1;
}
