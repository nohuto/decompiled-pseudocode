/*
 * XREFs of ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180032B60
 * Callers:
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B68C (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18002D180 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800328F4 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18003A040 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x18006C4F0 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x18006CB00 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x18006CB88 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@EEAAJPEAVCDrawingContext@@@Z @ 0x180158DB0 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x180176310 (-InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x18018F258 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180190B84 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

const struct CMILMatrix *__fastcall CTransform3D::GetMatrix(CTransform3D *this, const struct D2D_SIZE_F *a2)
{
  char v3; // al

  v3 = *((_BYTE *)this + 32) & 1;
  if ( a2 )
  {
    if ( !v3 && *((_BYTE *)this + 148) && (*((float *)this + 35) != a2->width || *((float *)this + 36) != a2->height) )
      v3 = 1;
    *(struct D2D_SIZE_F *)((char *)this + 140) = *a2;
  }
  if ( v3 )
  {
    (*(void (__fastcall **)(CTransform3D *, const struct D2D_SIZE_F *, char *))(*(_QWORD *)this + 168LL))(
      this,
      a2,
      (char *)this + 72);
    *((_DWORD *)this + 8) &= ~1u;
  }
  return (CTransform3D *)((char *)this + 72);
}
