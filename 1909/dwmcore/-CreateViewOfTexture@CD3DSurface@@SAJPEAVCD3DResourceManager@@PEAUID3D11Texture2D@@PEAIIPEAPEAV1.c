/*
 * XREFs of ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180048B94
 * Callers:
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x1800238B4 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180049A70 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x1800C2160 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?SetupBackBuffers@CSwapChainBase@@IEAAJPEAVCD3DResourceManager@@@Z @ 0x1800E49E0 (-SetupBackBuffers@CSwapChainBase@@IEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180165120 (-GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurfa.c)
 *     ?Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801652C0 (-Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInit.c)
 * Callees:
 *     ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x180047A3C (--0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180047AF0 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::CreateViewOfTexture(
        struct CD3DResourceManager *a1,
        struct ID3D11Texture2D *a2,
        char *a3,
        unsigned int a4,
        struct CD3DSurface **a5)
{
  CD3DSurface *v9; // rax
  unsigned int v10; // ecx
  CD3DSurface *v11; // rbx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi

  *a5 = 0LL;
  v9 = (CD3DSurface *)operator new(0xF0uLL);
  if ( v9 )
    v11 = CD3DSurface::CD3DSurface(v9, a2);
  else
    v11 = 0LL;
  if ( v11 )
  {
    (**(void (__fastcall ***)(CD3DSurface *))v11)(v11);
    v12 = CD3DSurface::Init(v11, a1, a3, a4);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x8Bu, 0LL);
      (*(void (__fastcall **)(CD3DSurface *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    else
    {
      *a5 = v11;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x85u, 0LL);
  }
  return v14;
}
