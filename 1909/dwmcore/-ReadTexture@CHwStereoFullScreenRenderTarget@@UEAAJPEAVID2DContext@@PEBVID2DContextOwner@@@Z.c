/*
 * XREFs of ?ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801653F0
 * Callers:
 *     ?ReadTexture@CHwStereoFullScreenRenderTarget@@WJA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800F0610 (-ReadTexture@CHwStereoFullScreenRenderTarget@@WJA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801664B0 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18021A79C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::ReadTexture(
        CHwStereoFullScreenRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  signed int Texture; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx

  Texture = CHwFullScreenRenderTarget::ReadTexture(this, a2, a3);
  v6 = Texture;
  if ( Texture < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, Texture, 0x84u, 0LL);
  }
  else
  {
    v7 = DebugInspectTexture(
           *(struct ID3D11Texture2D **)(*((_QWORD *)this + 68) + 128LL),
           *(_DWORD *)(*((_QWORD *)this + 68) + 136LL));
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x88u, 0LL);
  }
  return v6;
}
