/*
 * XREFs of ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800EB664
 * Callers:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180010434 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVMILMatrix3x2@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800957C0 (-FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVM.c)
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x18016D960 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::GetD2DInterpolationMode(CDrawingContext *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 62);
  result = 0LL;
  if ( v1 == 1 )
    return 1LL;
  if ( v1 <= 1 )
    return result;
  if ( v1 <= 3 )
    return 2LL;
  if ( v1 == 4 )
    return 3LL;
  if ( v1 != 5 )
  {
    if ( v1 != 6 )
      return result;
    return 3LL;
  }
  return 4LL;
}
