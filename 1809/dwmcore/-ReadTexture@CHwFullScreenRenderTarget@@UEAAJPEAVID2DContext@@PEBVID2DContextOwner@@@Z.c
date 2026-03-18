/*
 * XREFs of ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x180208460
 * Callers:
 *     ?ReadTexture@CHwFullScreenRenderTarget@@WNA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800F11B0 (-ReadTexture@CHwFullScreenRenderTarget@@WNA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x180207410 (-ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x180067F84 (-GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801E16E8 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::ReadTexture(
        CSwapChainBase **this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  struct CD3DSurface *v3; // rbx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  int LogicalFrontBuffer; // eax
  int v9; // eax
  __int64 v10; // rcx
  struct CD3DSurface *v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  if ( a2
    && (v5 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *))(*(_QWORD *)a2 + 48LL))(
               a2,
               a3),
        v7 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x5Cu);
  }
  else
  {
    if ( byte_18030C560 )
    {
      LogicalFrontBuffer = CSwapChainBase::GetLogicalFrontBuffer(this[30], &v12);
      v3 = v12;
      if ( LogicalFrontBuffer >= 0 )
        DebugInspectTexture(*((struct ID3D11Texture2D **)v12 + 16), 0);
    }
    v9 = DebugInspectTexture(*((struct ID3D11Texture2D **)this[25] + 16), 0);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x67u);
    if ( v3 )
      (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return v7;
}
