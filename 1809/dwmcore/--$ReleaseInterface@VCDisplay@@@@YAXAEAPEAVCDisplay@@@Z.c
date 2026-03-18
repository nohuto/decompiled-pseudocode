/*
 * XREFs of ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18006E0A0
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180009CEC (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x18000A0D8 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18006B5B4 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180080124 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x18009EDE8 (--1CInteraction@@MEAA@XZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18009FBD0 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800C2DE8 (--1CLightStack@@QEAA@XZ.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800D8614 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800EA37C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x1800EA97C (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180159404 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ?PostPresent@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x18015FAA0 (-PostPresent@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180176470 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x18019D1D0 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x18020D0D0 (--1CHolographicInteropTexture@@MEAA@XZ.c)
 *     ?AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18020D520 (-AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdr.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x18020D65C (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z @ 0x18020E99C (-TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
