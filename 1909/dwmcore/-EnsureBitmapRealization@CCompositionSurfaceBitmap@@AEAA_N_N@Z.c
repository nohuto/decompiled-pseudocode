/*
 * XREFs of ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x1800AB8E0
 * Callers:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800125A0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800125F0 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012C80 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1800AB28C (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1800AB630 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800AB870 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?UpdateCachedRealization@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x1800EC8E0 (-UpdateCachedRealization@CCompositionSurfaceBitmap@@UEAAXXZ.c)
 *     ?GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801C6AA0 (-GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801C6D48 (-InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x18002AE94 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCompositionSurfaceBitmap::EnsureBitmapRealization(CCompositionSurfaceBitmap *this, char a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rax
  bool v5; // zf
  __int64 v7; // rcx
  __int64 v8; // rax
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
  if ( *((_BYTE *)this + 156) )
  {
    --*(_DWORD *)(*((_QWORD *)this + 2) + 284LL);
    *((_BYTE *)this + 156) = 0;
  }
  if ( *((_BYTE *)this + 157) )
  {
    --*(_DWORD *)(*((_QWORD *)this + 2) + 280LL);
    *((_BYTE *)this + 157) = 0;
  }
  v7 = *((_QWORD *)this + 11);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
    ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(v2, v8);
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
      ++*(_DWORD *)(*((_QWORD *)this + 2) + 284LL);
      v9 = *v2;
      *((_BYTE *)this + 156) = 1;
    }
    v10 = *(_DWORD *)(v9 + 268);
    v4 = v9;
    if ( (v10 & 2) != 0 || (v10 & 1) != 0 && *(_QWORD *)(v9 + 160) )
    {
      ++*(_DWORD *)(*((_QWORD *)this + 2) + 280LL);
      v4 = *v2;
      *((_BYTE *)this + 157) = 1;
    }
    goto LABEL_3;
  }
  return !v5;
}
