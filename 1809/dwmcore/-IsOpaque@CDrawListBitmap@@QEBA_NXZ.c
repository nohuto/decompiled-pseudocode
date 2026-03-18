/*
 * XREFs of ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18006AAA0
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800AA850 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x180186140 (-EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexShaderKey@@@Z @ 0x18022A4F0 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawListBitmap::IsOpaque(CDrawListBitmap *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 16) || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 104LL))(*(_QWORD *)this) )
    return 1;
  return v1;
}
