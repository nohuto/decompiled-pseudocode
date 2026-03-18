/*
 * XREFs of ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180165120
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180048B94 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x1800C2160 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::GetFrontBufferSurface(
        _QWORD *a1,
        __int64 a2,
        char a3,
        struct CD3DSurface **a4)
{
  int v5; // ebp
  signed int FrontBufferSurface; // eax
  __int64 v8; // rcx
  struct ID3D11Texture2D **v9; // rdi
  unsigned int v10; // ebx
  signed int ViewOfTexture; // eax
  __int64 v12; // rcx
  struct ID3D11Texture2D **v14; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v14 = 0LL;
  v5 = a2;
  FrontBufferSurface = CHwFullScreenRenderTarget::GetFrontBufferSurface(a1, a2, a3, (struct CD3DSurface **)&v14);
  v9 = v14;
  v10 = FrontBufferSurface;
  if ( FrontBufferSurface < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, FrontBufferSurface, 0x15Fu, 0LL);
  }
  else
  {
    if ( v5 != 2 )
    {
      *a4 = (struct CD3DSurface *)v14;
      return v10;
    }
    ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                      (struct CD3DResourceManager *)(a1[19] + 896LL),
                      v14[16],
                      0LL,
                      1u,
                      a4);
    v10 = ViewOfTexture;
    if ( ViewOfTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ViewOfTexture, 0x16Cu, 0LL);
  }
  if ( v9 )
    ((void (__fastcall *)(struct ID3D11Texture2D **))(*v9)[1].lpVtbl)(v9);
  return v10;
}
