/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x18000BF94
 * Callers:
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180009ABC (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ?TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801BD560 (-TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV-$StridedSpan@U-$Verte.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1801BEDA0 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1801C7158 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x1801D2DC4 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct MilPoint4F *a2, struct MilPoint4F *a3, int a4)
{
  float *v5; // r9
  __int64 v6; // r8
  float *v7; // rax
  float v8; // xmm4_4
  float v9; // xmm7_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm1_4

  v5 = (float *)((char *)a3 + 8);
  v6 = a3 - a2;
  v7 = (float *)((char *)a2 + 8);
  do
  {
    v8 = *(v7 - 2);
    v9 = *(v7 - 1);
    v10 = *v7;
    v11 = v7[1];
    v12 = *v7;
    *(float *)((char *)v7 + v6 - 8) = (float)((float)((float)(v9 * *((float *)this + 4)) + (float)(v8 * *(float *)this))
                                            + (float)(*v7 * *((float *)this + 8)))
                                    + (float)(v11 * *((float *)this + 12));
    v7 += 4;
    *(v5 - 1) = (float)((float)((float)(v9 * *((float *)this + 5)) + (float)(v8 * *((float *)this + 1)))
                      + (float)(v12 * *((float *)this + 9)))
              + (float)(v11 * *((float *)this + 13));
    *v5 = (float)((float)((float)(v9 * *((float *)this + 6)) + (float)(v8 * *((float *)this + 2)))
                + (float)(v10 * *((float *)this + 10)))
        + (float)(v11 * *((float *)this + 14));
    v5[1] = (float)((float)((float)(v9 * *((float *)this + 7)) + (float)(v8 * *((float *)this + 3)))
                  + (float)(v10 * *((float *)this + 11)))
          + (float)(v11 * *((float *)this + 15));
    v5 += 4;
    --a4;
  }
  while ( a4 );
}
