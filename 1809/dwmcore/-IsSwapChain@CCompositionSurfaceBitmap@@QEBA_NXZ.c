/*
 * XREFs of ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18001320C
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180012620 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?RecordCompositionMode@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N@Z @ 0x180012990 (-RecordCompositionMode@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@.c)
 *     ?RecordOutputColorSpace@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180013080 (-RecordOutputColorSpace@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4DXGI_COLOR_SPACE_TYPE@.c)
 *     ?RecordTransform@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z @ 0x1800130D0 (-RecordTransform@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@AEBVCMILMatrix@@@Z.c)
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800131C0 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::IsSwapChain(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 11);
  if ( !v1 )
    return 0;
  result = 1;
  if ( *(_DWORD *)(v1 + 104) <= 1u && *(_DWORD *)(v1 + 64) != 3 )
    return 0;
  return result;
}
