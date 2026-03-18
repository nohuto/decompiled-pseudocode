/*
 * XREFs of ?GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x180163B78
 * Callers:
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801664B0 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::GetLogicalFrontBuffer(CSwapChainBase *this, struct CD3DSurface **a2)
{
  struct CD3DSurface *v3; // rcx

  v3 = *(struct CD3DSurface **)(*((_QWORD *)this + 48)
                              + 8LL * (*(unsigned int (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 360LL))(this));
  *a2 = v3;
  (**(void (__fastcall ***)(struct CD3DSurface *))v3)(v3);
  return 0LL;
}
