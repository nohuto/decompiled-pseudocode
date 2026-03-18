/*
 * XREFs of ?IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z @ 0x180167A6C
 * Callers:
 *     ?CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ @ 0x180166F54 (-CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ.c)
 *     ?CheckMultiplaneOverlaySupport@CHDRConversionRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x180167140 (-CheckMultiplaneOverlaySupport@CHDRConversionRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLA.c)
 *     ?SetMultiplaneOverlayPresentInfo@CHDRConversionRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAVCBitmapRealization@@@Z @ 0x180168790 (-SetMultiplaneOverlayPresentInfo@CHDRConversionRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PE.c)
 * Callees:
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180048C3C (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C2D48 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHDRConversionRenderTarget::IsDesktopDXGIResource(CSwapChainBase **this, struct IDXGIResource *a2)
{
  bool v2; // bl
  int LogicalBackBuffer; // eax
  struct CD3DSurface *v5; // rdi
  struct IDXGIResource *v6; // rcx
  struct IDXGIResource *v8; // [rsp+38h] [rbp+10h] BYREF
  struct CD3DSurface *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v2 = 0;
  v8 = 0LL;
  if ( !a2 )
    return 1;
  LogicalBackBuffer = CSwapChainBase::GetLogicalBackBuffer(this[22], &v9);
  v5 = v9;
  if ( LogicalBackBuffer < 0 || (int)CD3DSurface::GetDXGIResource(v9, &v8) < 0 )
  {
    v6 = v8;
  }
  else
  {
    v6 = v8;
    v2 = a2 == v8;
  }
  if ( v6 )
    ((void (__fastcall *)(struct IDXGIResource *))v6->lpVtbl->Release)(v6);
  if ( v5 )
    (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v5 + 8LL))(v5);
  return v2;
}
