/*
 * XREFs of ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18002AC5C
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180028760 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18002ABC0 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1800C2A20 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1800C6C48 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ @ 0x180168700 (-ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ.c)
 *     ?SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z @ 0x180168730 (-SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018AFBC (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180199050 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802460D8 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x180260AFC (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x1802611F8 (-ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<IRenderTargetBitmap>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
