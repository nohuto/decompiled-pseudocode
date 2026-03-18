/*
 * XREFs of ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180071D5C
 * Callers:
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180057AD0 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005ECA0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180063A50 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071C38 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18007A5A0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800BB0A0 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x1801CF7E0 (-GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x1801D2DC4 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180219F60 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Translate(CMILMatrix *this, float a2, float a3, float a4)
{
  float v5; // xmm3_4
  float v8; // xmm10_4
  float v9; // xmm4_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm10_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm3_4

  v5 = *((float *)this + 7);
  v8 = *((float *)this + 3);
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 - 0.0)) & _xmm);
  if ( v9 >= 0.000081380211
    || (v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v5 - 0.0)) & _xmm), v10 >= 0.000081380211)
    || (v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 11) - 0.0)) & _xmm), v11 >= 0.000081380211)
    || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 15) - 1.0)) & _xmm), v12 >= 0.000081380211) )
  {
    v15 = *((float *)this + 11);
    v16 = (float)(v8 * a2) + *(float *)this;
    v17 = (float)(v8 * a3) + *((float *)this + 1);
    v18 = (float)(v8 * a4) + *((float *)this + 2);
    *(float *)this = v16;
    *((float *)this + 1) = v17;
    v19 = (float)(v5 * a2) + *((float *)this + 4);
    v20 = (float)(v5 * a3) + *((float *)this + 5);
    *((float *)this + 2) = v18;
    v21 = (float)(v5 * a4) + *((float *)this + 6);
    *((float *)this + 4) = v19;
    *((float *)this + 5) = v20;
    v22 = (float)(v15 * a2) + *((float *)this + 8);
    *((float *)this + 6) = v21;
    v23 = (float)(v15 * a3) + *((float *)this + 9);
    v24 = *((float *)this + 15);
    *((float *)this + 8) = v22;
    *((float *)this + 9) = v23;
    v25 = (float)(v24 * a2) + *((float *)this + 12);
    v26 = (float)(v24 * a3) + *((float *)this + 13);
    *((float *)this + 10) = (float)(v15 * a4) + *((float *)this + 10);
    v27 = (float)(v24 * a4) + *((float *)this + 14);
    *((float *)this + 12) = v25;
    *((float *)this + 13) = v26;
    *((float *)this + 14) = v27;
  }
  else
  {
    v13 = a3 + *((float *)this + 13);
    v14 = a4 + *((float *)this + 14);
    *((float *)this + 12) = a2 + *((float *)this + 12);
    *((float *)this + 13) = v13;
    *((float *)this + 14) = v14;
  }
  *((_BYTE *)this + 64) &= 0xFCu;
  *((_BYTE *)this + 65) &= 0x3Fu;
}
