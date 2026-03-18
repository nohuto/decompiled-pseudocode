/*
 * XREFs of ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18000790C (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x180007CB8 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x180025500 (--1CLightStack@@QEAA@XZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x180025568 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800268E4 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18002ABC0 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x18002BC70 (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 *     ??1CExpression@@UEAA@XZ @ 0x1800A48B8 (--1CExpression@@UEAA@XZ.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x1800A4BB8 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800A4DB4 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800AA044 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x1800ABE50 (--1CInteraction@@MEAA@XZ.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DDB9C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?PostPresent@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x1801A4470 (-PostPresent@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801A5C0C (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x1801AA128 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x1801D6980 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x180244DD0 (--1CHolographicInteropTexture@@MEAA@XZ.c)
 *     ?AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180245170 (-AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdr.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802452A4 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z @ 0x18024651C (-TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z.c)
 *     ?PostPresent@CLocalAppRenderTarget@@UEAAJ_N@Z @ 0x18024EFF0 (-PostPresent@CLocalAppRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
