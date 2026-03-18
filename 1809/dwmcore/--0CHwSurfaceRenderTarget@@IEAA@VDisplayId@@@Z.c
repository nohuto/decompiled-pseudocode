/*
 * XREFs of ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800DB204
 * Callers:
 *     ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18008A044 (--0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MOD.c)
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800DB180 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     ??0CHwCompSwapChainTarget@@IEAA@XZ @ 0x1802002B4 (--0CHwCompSwapChainTarget@@IEAA@XZ.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DB270 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??0CBaseRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800DC998 (--0CBaseRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::CHwSurfaceRenderTarget(__int64 a1)
{
  float v2; // xmm2_4
  float v3; // xmm1_4

  CBaseRenderTarget::CBaseRenderTarget();
  v2 = g_DesktopDpiY;
  v3 = g_DesktopDpiX;
  *(_QWORD *)(a1 + 160) = &CMILCOMBase::`vftable';
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 196) = 1065353216;
  *(_BYTE *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0LL;
  CMILMatrix::Scale((CMILMatrix *)(a1 + 16), v3, v2, 1.0);
  return a1;
}
