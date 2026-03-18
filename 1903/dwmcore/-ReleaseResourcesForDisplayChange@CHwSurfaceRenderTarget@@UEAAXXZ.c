/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwSurfaceRenderTarget@@UEAAXXZ @ 0x18002405C
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x180023F70 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwTextureRenderTarget@@UEAAXXZ @ 0x180163A50 (-ReleaseResourcesForDisplayChange@CHwTextureRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwCompSwapChainTarget@@UEAAXXZ @ 0x1802403E0 (-ReleaseResourcesForDisplayChange@CHwCompSwapChainTarget@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800240B0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
