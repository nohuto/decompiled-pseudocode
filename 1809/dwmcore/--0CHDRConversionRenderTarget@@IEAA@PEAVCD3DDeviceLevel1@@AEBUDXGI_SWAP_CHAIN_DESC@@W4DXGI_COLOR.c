/*
 * XREFs of ??0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1802035B4
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x180089E48 (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 * Callees:
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x180089FA8 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::CHDRConversionRenderTarget(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *v6; // rax

  CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(a1, a2, a3);
  *(_DWORD *)(a1 + 584) = a4;
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)a1 = &CHDRConversionRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 160) = &CHDRConversionRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 208) = &CHDRConversionRenderTarget::`vftable';
  *(_QWORD *)(a1 + 600) = a1 + 608;
  *(_DWORD *)(a1 + 608) = 0;
  v6 = *(_DWORD **)(a1 + 600);
  *(_QWORD *)(a1 + 688) = 0LL;
  *(_BYTE *)(a1 + 984) = 0;
  *v6 = 0;
  *(_QWORD *)(a1 + 672) = 0LL;
  *(_QWORD *)(a1 + 680) = 0LL;
  memset_0((void *)(a1 + 696), 0, 0x110uLL);
  *(_QWORD *)(a1 + 968) = 0LL;
  *(_QWORD *)(a1 + 976) = 0LL;
  return a1;
}
