/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x180060500
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContentAsPrimitiveGroupNoRef@CVisual@@QEBA_NPEAPEAVCPrimitiveGroup@@@Z @ 0x180060580 (-GetContentAsPrimitiveGroupNoRef@CVisual@@QEBA_NPEAPEAVCPrimitiveGroup@@@Z.c)
 *     ?GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@QEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1800605E0 (-GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@QEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?GetContentAsRenderDataNoRef@CVisual@@QEBA_NPEAPEAVCRenderData@@@Z @ 0x180060640 (-GetContentAsRenderDataNoRef@CVisual@@QEBA_NPEAPEAVCRenderData@@@Z.c)
 *     ?GetContentAsYCbCrSurfaceNoRef@CVisual@@QEBA_NPEAPEAVCYCbCrSurface@@@Z @ 0x18006069C (-GetContentAsYCbCrSurfaceNoRef@CVisual@@QEBA_NPEAPEAVCYCbCrSurface@@@Z.c)
 */

char __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CVisual *this)
{
  char v1; // bl
  struct CPrimitiveGroup *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 32) )
  {
    if ( CVisual::GetContentAsPrimitiveGroupNoRef(this, &v4)
      || CVisual::GetContentAsCompositionSurfaceBitmapNoRef(this, &v4)
      || CVisual::GetContentAsYCbCrSurfaceNoRef(this, &v4) )
    {
      return 1;
    }
    else if ( CVisual::GetContentAsRenderDataNoRef(this, &v4) )
    {
      return *((_BYTE *)v4 + 136);
    }
  }
  return v1;
}
