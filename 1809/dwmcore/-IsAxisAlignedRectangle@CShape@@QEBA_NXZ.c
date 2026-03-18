/*
 * XREFs of ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800307F0
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012E74 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180016534 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18001A2B0 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18002E55C (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003082C (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180047930 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180165870 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1801B99C4 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CShape::IsAxisAlignedRectangle(CShape *this)
{
  char v1; // bl
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CShape *, int *))(*(_QWORD *)this + 40LL))(this, &v3) )
    return v3 == 1;
  return v1;
}
