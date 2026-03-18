/*
 * XREFs of ?ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x180207410
 * Callers:
 *     ?ReadTexture@CHwStereoFullScreenRenderTarget@@WNA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800F11C0 (-ReadTexture@CHwStereoFullScreenRenderTarget@@WNA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801E16E8 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x180208460 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::ReadTexture(
        CHwStereoFullScreenRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  int Texture; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx

  Texture = CHwFullScreenRenderTarget::ReadTexture(this, a2, a3);
  v6 = Texture;
  if ( Texture < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, Texture, 0x86u);
  }
  else
  {
    v7 = DebugInspectTexture(
           *(struct ID3D11Texture2D **)(*((_QWORD *)this + 76) + 128LL),
           *(_DWORD *)(*((_QWORD *)this + 76) + 136LL));
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x8Au);
  }
  return v6;
}
