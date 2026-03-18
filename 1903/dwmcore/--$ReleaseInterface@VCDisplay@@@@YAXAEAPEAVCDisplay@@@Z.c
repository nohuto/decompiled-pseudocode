/*
 * XREFs of ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800090EC (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x180009498 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x180029250 (--1CInteraction@@MEAA@XZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18002B208 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x180046DF0 (--1CLightStack@@QEAA@XZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x180046E28 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x18008086C (--1CExpression@@UEAA@XZ.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180082720 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180082990 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800A7A84 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x1800AF604 (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800B0960 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DCF2C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?PostPresent@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x1801A5D30 (-PostPresent@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801A74CC (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x1801AB9E8 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x1801D8090 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1802464E0 (--1CHolographicInteropTexture@@MEAA@XZ.c)
 *     ?AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180246880 (-AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdr.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802469B4 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z @ 0x180247C2C (-TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z.c)
 *     ?PostPresent@CLocalAppRenderTarget@@UEAAJ_N@Z @ 0x180250760 (-PostPresent@CLocalAppRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CDisplay>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
