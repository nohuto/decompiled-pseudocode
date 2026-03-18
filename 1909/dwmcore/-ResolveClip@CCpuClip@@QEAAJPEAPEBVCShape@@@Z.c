/*
 * XREFs of ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180017538
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800901F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180097BC0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801ADD18 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801AF5F4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x180017584 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCpuClip::ResolveClip(CCpuClip *this, const struct CShape **a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  unsigned int v6; // ecx

  v2 = 0;
  if ( *((_QWORD *)this + 2) || (v5 = CCpuClip::ConvertContextDependentClipToLocal(this), v2 = v5, v5 >= 0) )
    *a2 = (const struct CShape *)*((_QWORD *)this + 2);
  else
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x69u, 0LL);
  return v2;
}
