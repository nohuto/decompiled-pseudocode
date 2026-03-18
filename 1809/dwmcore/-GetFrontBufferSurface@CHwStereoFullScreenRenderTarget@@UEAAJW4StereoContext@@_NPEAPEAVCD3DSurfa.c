/*
 * XREFs of ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180207150
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180067F20 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180093E68 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::GetFrontBufferSurface(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CD3DSurface **a4)
{
  int v5; // ebp
  int FrontBufferSurface; // eax
  __int64 v8; // rcx
  struct ID3D11Texture2D **v9; // rdi
  unsigned int v10; // ebx
  int ViewOfTexture; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, FrontBufferSurface, 0x161u);
  }
  else
  {
    if ( v5 != 2 )
    {
      *a4 = (struct CD3DSurface *)v14;
      return v10;
    }
    ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                      (struct CD3DResourceManager *)(*(_QWORD *)(a1 + 216) + 864LL),
                      v14[16],
                      0LL,
                      1u,
                      a4);
    v10 = ViewOfTexture;
    if ( ViewOfTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ViewOfTexture, 0x16Eu);
  }
  if ( v9 )
    ((void (__fastcall *)(struct ID3D11Texture2D **))(*v9)[1].lpVtbl)(v9);
  return v10;
}
