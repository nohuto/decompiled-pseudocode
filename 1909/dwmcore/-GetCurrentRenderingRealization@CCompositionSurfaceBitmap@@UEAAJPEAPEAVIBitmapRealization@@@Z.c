/*
 * XREFs of ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800AB870
 * Callers:
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18003F3E4 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801CE8E4 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801D0544 (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x1800AB8E0 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
        CCompositionSurfaceBitmap *this,
        struct IBitmapRealization **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  v4 = 0;
  *a2 = 0LL;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 64), 0) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4));
    *a2 = (struct IBitmapRealization *)((*((_QWORD *)this + 4) + 144LL) & -(__int64)(*((_QWORD *)this + 4) != 0LL));
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x88982F04, 0xBDu, 0LL);
  }
  return v4;
}
