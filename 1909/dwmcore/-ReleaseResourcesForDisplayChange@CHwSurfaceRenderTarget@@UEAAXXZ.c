/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwSurfaceRenderTarget@@UEAAXXZ @ 0x18002BF20
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x18002BEA0 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwTextureRenderTarget@@UEAAXXZ @ 0x180162360 (-ReleaseResourcesForDisplayChange@CHwTextureRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwCompSwapChainTarget@@UEAAXXZ @ 0x18023ECD0 (-ReleaseResourcesForDisplayChange@CHwCompSwapChainTarget@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x18002BF70 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwSurfaceRenderTarget::ReleaseResourcesForDisplayChange(CHwSurfaceRenderTarget *this)
{
  __int64 v1; // rax
  CD3DDeviceLevel1 *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v3 = 0LL;
  (*(void (__fastcall **)(CHwSurfaceRenderTarget *, CD3DDeviceLevel1 **))(v1 + 248))(this, &v3);
  ReleaseInterface<CD3DSurface>((__int64 *)this + 17);
  if ( v3 )
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(v3);
}
