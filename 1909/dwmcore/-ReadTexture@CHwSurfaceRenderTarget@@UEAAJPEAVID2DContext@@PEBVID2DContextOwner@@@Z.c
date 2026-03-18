/*
 * XREFs of ?ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x180166E00
 * Callers:
 *     ?ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x180162330 (-ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18021A79C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::ReadTexture(
        CHwSurfaceRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  if ( !(*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(*(_QWORD *)this + 144LL))(this) )
  {
    if ( a2
      && (v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *))(*(_QWORD *)a2 + 48LL))(
                 a2,
                 a3),
          v7 = v8,
          v8 < 0) )
    {
      v11 = 233;
    }
    else
    {
      v8 = DebugInspectTexture(*(struct ID3D11Texture2D **)(*((_QWORD *)this + 17) + 128LL), 0);
      v7 = v8;
      if ( v8 >= 0 )
        return v7;
      v11 = 236;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v11, 0LL);
    return v7;
  }
  v7 = -2147024891;
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x80070005, 0xE2u, 0LL);
  return v7;
}
