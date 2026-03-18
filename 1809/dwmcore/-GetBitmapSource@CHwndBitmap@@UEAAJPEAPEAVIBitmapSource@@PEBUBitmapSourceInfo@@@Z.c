/*
 * XREFs of ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18019A830
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x18008F888 (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x18019A494 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 */

__int64 __fastcall CHwndBitmap::GetBitmapSource(
        CHwndBitmap *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  struct CComposition **v3; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v3 = (struct CComposition **)((char *)this - 8);
  v4 = 0;
  *a2 = 0LL;
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)((char *)this - 8)) )
  {
    v5 = CHwndBitmap::EnsureCachedVisualImage(v3);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xC2u);
    }
    else
    {
      v4 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147467263, 0xC4u);
    }
  }
  return v4;
}
