/*
 * XREFs of ?GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x180067F84
 * Callers:
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180067F20 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x180208460 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::GetLogicalFrontBuffer(CSwapChainBase *this, struct CD3DSurface **a2)
{
  struct CD3DSurface *v3; // rcx

  v3 = *(struct CD3DSurface **)(*((_QWORD *)this + 48)
                              + 8LL * (*(unsigned int (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 336LL))(this));
  *a2 = v3;
  (**(void (__fastcall ***)(struct CD3DSurface *))v3)(v3);
  return 0LL;
}
