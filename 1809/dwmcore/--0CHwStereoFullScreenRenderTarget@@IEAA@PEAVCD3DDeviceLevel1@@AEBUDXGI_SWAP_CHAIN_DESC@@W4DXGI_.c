/*
 * XREFs of ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x180203684
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x180089E48 (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 * Callees:
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x180089FA8 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CHwStereoFullScreenRenderTarget(__int64 a1, __int64 a2, __int64 a3)
{
  CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(a1, a2, a3);
  *(_QWORD *)a1 = &CHwStereoFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 160) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 208) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CHwFullScreenRenderTarget'};
  *(_QWORD *)(a1 + 584) = &CHwStereoFullScreenRenderTarget::`vftable'{for `IRenderTargetStereo'};
  *(_DWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_WORD *)(a1 + 616) = 0;
  return a1;
}
