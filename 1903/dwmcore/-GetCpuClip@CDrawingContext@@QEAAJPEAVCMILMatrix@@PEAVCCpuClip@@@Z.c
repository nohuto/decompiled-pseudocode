/*
 * XREFs of ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x18006EEDC
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180052440 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180070D54 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801B0EB4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801D28CC (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18006E4B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x18006EF7C (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::GetCpuClip(
        const struct CVisualTree **this,
        struct CMILMatrix *a2,
        struct CCpuClip *a3)
{
  CScopedClipStack *v3; // rdi
  CVisual *CurrentVisual; // rax
  __int64 *v7; // rsi
  int TopCpuClipInScope; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  struct CShape *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = (CScopedClipStack *)(this + 126);
  if ( *((_BYTE *)this[126] + 80 * (unsigned int)(*((_DWORD *)this + 258) - 1) + 76) )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 1));
    v7 = CVisual::FindTreeData(CurrentVisual, this[757])[19];
    TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v3, &v12);
    v10 = TopCpuClipInScope;
    if ( TopCpuClipInScope < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, TopCpuClipInScope, 0x33Fu, 0LL);
      return v10;
    }
    CShapePtr::Release((struct CCpuClip *)((char *)a3 + 16));
    *(_QWORD *)a3 = v12;
    *((_BYTE *)a3 + 32) = 0;
    *((_QWORD *)a3 + 1) = v7;
  }
  return 0;
}
