/*
 * XREFs of ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1800DD764
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800DD8CC (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ??0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18015F828 (--0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR.c)
 *     ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18015F8F4 (--0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_.c)
 * Callees:
 *     ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1800DD7FC (--0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MOD.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  CHwDisplayRenderTarget::CHwDisplayRenderTarget(a1, a2, a3);
  *(_QWORD *)a1 = &CHwFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 96) = &CHwFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 144) = &CHwFullScreenRenderTarget::`vftable';
  *(_QWORD *)(a1 + 344) = a1 + 352;
  *(_DWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 416) = a1 + 424;
  *(_DWORD *)(a1 + 424) = 0;
  result = a1;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_BYTE *)(a1 + 496) = 0;
  *(_DWORD *)(a1 + 499) = 0;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  return result;
}
