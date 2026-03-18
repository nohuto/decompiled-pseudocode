/*
 * XREFs of ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x180089FA8
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x180089E48 (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ??0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1802035B4 (--0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR.c)
 *     ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x180203684 (--0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_.c)
 * Callees:
 *     ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18008A044 (--0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MOD.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  CHwDisplayRenderTarget::CHwDisplayRenderTarget(a1, a2, a3);
  *(_QWORD *)a1 = &CHwFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 160) = &CHwFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 208) = &CHwFullScreenRenderTarget::`vftable';
  *(_QWORD *)(a1 + 408) = a1 + 416;
  *(_DWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 480) = a1 + 488;
  *(_DWORD *)(a1 + 488) = 0;
  result = a1;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_BYTE *)(a1 + 560) = 0;
  *(_BYTE *)(a1 + 563) = 0;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  return result;
}
