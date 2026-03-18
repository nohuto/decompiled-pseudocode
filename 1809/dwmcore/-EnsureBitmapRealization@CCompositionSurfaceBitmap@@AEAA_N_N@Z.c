/*
 * XREFs of ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x1800A0F80
 * Callers:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012940 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180012A50 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013230 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1800A08C0 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1800A0C60 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800A0F10 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180192060 (-GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180192304 (-InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x1800A1028 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 */

bool __fastcall CCompositionSurfaceBitmap::EnsureBitmapRealization(CCompositionSurfaceBitmap *this, char a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rax
  bool v5; // zf
  CCompositionSurfaceInfo *v7; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v9; // rcx
  int v10; // edx

  v2 = (__int64 *)((char *)this + 96);
  v4 = *((_QWORD *)this + 12);
  if ( v4 && !a2 )
  {
LABEL_3:
    v5 = v4 == 0;
    return !v5;
  }
  if ( *((_BYTE *)this + 144) )
  {
    --*(_DWORD *)(*((_QWORD *)this + 2) + 268LL);
    *((_BYTE *)this + 144) = 0;
  }
  if ( *((_BYTE *)this + 145) )
  {
    --*(_DWORD *)(*((_QWORD *)this + 2) + 264LL);
    *((_BYTE *)this + 145) = 0;
  }
  v7 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 11);
  if ( v7 )
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v7);
    ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(v2, RenderingRealizationNoRef);
  }
  else
  {
    ReleaseInterface<IBitmapLock>(v2);
  }
  v5 = *v2 == 0;
  if ( *v2 )
  {
    v9 = *v2;
    if ( *(_DWORD *)(*v2 + 272) == 3 )
    {
      ++*(_DWORD *)(*((_QWORD *)this + 2) + 268LL);
      v9 = *v2;
      *((_BYTE *)this + 144) = 1;
    }
    v10 = *(_DWORD *)(v9 + 268);
    v4 = v9;
    if ( (v10 & 2) != 0 || (v10 & 1) != 0 && *(_QWORD *)(v9 + 160) )
    {
      ++*(_DWORD *)(*((_QWORD *)this + 2) + 264LL);
      v4 = *v2;
      *((_BYTE *)this + 145) = 1;
    }
    goto LABEL_3;
  }
  return !v5;
}
