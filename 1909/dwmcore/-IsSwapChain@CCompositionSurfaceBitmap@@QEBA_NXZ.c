/*
 * XREFs of ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x180012C44
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180012240 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?RecordCompositionMode@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N@Z @ 0x180012990 (-RecordCompositionMode@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@.c)
 *     ?RecordOutputColorSpace@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180012AC0 (-RecordOutputColorSpace@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4DXGI_COLOR_SPACE_TYPE@.c)
 *     ?RecordTransform@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z @ 0x180012B20 (-RecordTransform@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z.c)
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012BE8 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsSwapChain(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 208LL))(v1) != 0;
  return v2;
}
