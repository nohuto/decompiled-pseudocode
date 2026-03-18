/*
 * XREFs of ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x18002AD78
 * Callers:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18002AC80 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180059680 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?GetAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z @ 0x180166200 (-GetAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z.c)
 *     ?SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBUtagRECT@@@Z @ 0x1801665F0 (-SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYP.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801932A4 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801FDCAC (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReplaceInterface<IDXGIResource,IDXGIResource>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return result;
}
