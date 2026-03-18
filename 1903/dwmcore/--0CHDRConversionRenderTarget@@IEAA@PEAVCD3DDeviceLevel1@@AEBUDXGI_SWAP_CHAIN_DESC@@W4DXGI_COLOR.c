/*
 * XREFs of ??0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18015F828
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800DD8CC (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 * Callees:
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1800DD764 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::CHDRConversionRenderTarget(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *v6; // rax

  CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(a1, a2, a3);
  *(_DWORD *)(a1 + 520) = a4;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)a1 = &CHDRConversionRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 96) = &CHDRConversionRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 144) = &CHDRConversionRenderTarget::`vftable';
  *(_QWORD *)(a1 + 536) = a1 + 544;
  *(_DWORD *)(a1 + 544) = 0;
  v6 = *(_DWORD **)(a1 + 536);
  *(_QWORD *)(a1 + 624) = 0LL;
  *(_BYTE *)(a1 + 920) = 0;
  *v6 = 0;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 616) = 0LL;
  memset_0((void *)(a1 + 632), 0, 0x110uLL);
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = 0LL;
  return a1;
}
