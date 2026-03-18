/*
 * XREFs of ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x18004A87C
 * Callers:
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x18004A7FC (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1800E450C (--0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MOD.c)
 *     ??0CHwCompSwapChainTarget@@IEAA@XZ @ 0x18023DF10 (--0CHwCompSwapChainTarget@@IEAA@XZ.c)
 * Callees:
 *     ??0CBaseRenderTarget@@IEAA@VDisplayId@@@Z @ 0x18004A8C0 (--0CBaseRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::CHwSurfaceRenderTarget(__int64 a1)
{
  __int64 result; // rax

  CBaseRenderTarget::CBaseRenderTarget();
  *(_QWORD *)(a1 + 96) = &CMILCOMBase::`vftable';
  *(_DWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 132) = 1065353216;
  return result;
}
