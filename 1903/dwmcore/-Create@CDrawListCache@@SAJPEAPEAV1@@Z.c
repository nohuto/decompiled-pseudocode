/*
 * XREFs of ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18004EBCC
 * Callers:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18004D300 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18007B26C (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18009A820 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801B0EB4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1802062AC (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180253C38 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListCache@@@Z @ 0x18004EC64 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListCache@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawListCache::Create(struct CDrawListCache **a1)
{
  unsigned int v2; // ebx
  struct CObjectCache *ObjectCache; // rax
  unsigned int v4; // ecx
  void *v5; // rdx
  int v6; // r9d

  v2 = 0;
  ObjectCache = CThreadContext::GetObjectCache((struct CDrawListCache *)a1);
  v5 = 0LL;
  v6 = *((_DWORD *)ObjectCache + 1);
  if ( v6 )
  {
    v5 = (void *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v5;
    *((_DWORD *)ObjectCache + 1) = v6 - 1;
  }
  if ( v5 || (v5 = DefaultHeap::Alloc(0x68uLL)) != 0LL )
  {
    *((_DWORD *)v5 + 4) = 0;
    *((_QWORD *)v5 + 3) = 0LL;
    *(_QWORD *)v5 = &CDrawListCache::`vftable';
    *((_DWORD *)v5 + 2) = 0;
    *((_QWORD *)v5 + 4) = 2LL;
    *((_DWORD *)v5 + 22) = 0;
    *((_DWORD *)v5 + 23) = 0;
    *((_BYTE *)v5 + 100) = 0;
  }
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    *a1 = (struct CDrawListCache *)v5;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0x23u, 0LL);
  }
  return v2;
}
