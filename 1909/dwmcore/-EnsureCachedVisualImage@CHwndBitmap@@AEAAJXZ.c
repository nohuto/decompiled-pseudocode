/*
 * XREFs of ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180214834
 * Callers:
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180214C10 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AB6F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x1800AD130 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x1800AD264 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x1800D7F50 (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1801C80F4 (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::EnsureCachedVisualImage(struct CComposition **this)
{
  unsigned int v1; // edi
  CCachedVisualImage *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  CCachedVisualImage *v7; // rbx
  char v8; // al
  signed int v9; // eax
  __int64 v10; // rcx

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
      v8 = *((_BYTE *)this + 120);
      *((_DWORD *)v7 + 51) = 0;
      *((_DWORD *)v7 + 52) = 0;
      *((_DWORD *)v7 + 53) = 0;
      *((_BYTE *)v7 + 377) = v8;
      *((_BYTE *)v7 + 379) = 1;
      CCachedVisualImage::ChoosePixelFormat(v7);
      CResource::NotifyOnChanged((__int64)v7 + 16, 0, 0LL);
      v9 = CCachedVisualImage::SetRootVisual((struct CResource **)v7, this[13]);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x56u, 0LL);
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
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x8007000E, 0x4Eu, 0LL);
    }
  }
  return v1;
}
