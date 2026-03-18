/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwSurfaceRenderTarget@@UEAAXXZ @ 0x1800E9068
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x1800E8F00 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwCompSwapChainTarget@@UEAAXXZ @ 0x1802010C0 (-ReleaseResourcesForDisplayChange@CHwCompSwapChainTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwTextureRenderTarget@@UEAAXXZ @ 0x1802033F0 (-ReleaseResourcesForDisplayChange@CHwTextureRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800E90C0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwSurfaceRenderTarget::ReleaseResourcesForDisplayChange(CHwSurfaceRenderTarget *this)
{
  __int64 v1; // rax
  CD3DDeviceLevel1 *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v3 = 0LL;
  (*(void (__fastcall **)(CHwSurfaceRenderTarget *, CD3DDeviceLevel1 **))(v1 + 248))(this, &v3);
  ReleaseInterface<CD3DSurface>((__int64 *)this + 25);
  if ( v3 )
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(v3);
}
