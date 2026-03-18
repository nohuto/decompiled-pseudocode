/*
 * XREFs of ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x18002AB40
 * Callers:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18002AA90 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800AFBB0 (-EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x1800B00C0 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1800B0B70 (-UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801ABAB0 (-EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@AEBV?$shared_ptr@VCRegion@@@std@@@Z @ 0x180262FD0 (-SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTarget.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(__int64 *a1, __int64 a2)
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
