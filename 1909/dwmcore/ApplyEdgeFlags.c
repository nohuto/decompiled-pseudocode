/*
 * XREFs of ApplyEdgeFlags @ 0x1801B91D8
 * Callers:
 *     ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1801B93A0 (-EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z.c)
 * Callees:
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000F7A8 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18000F984 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ApplyEdgeFlagsWorker_3_1_2_ @ 0x1801B8DE8 (ApplyEdgeFlagsWorker_3_1_2_.c)
 *     ApplyEdgeFlagsWorker_768_256_512_ @ 0x1801B8E38 (ApplyEdgeFlagsWorker_768_256_512_.c)
 *     ApplyEdgeFlagsWorker_196608_65536_131072_ @ 0x1801B8E90 (ApplyEdgeFlagsWorker_196608_65536_131072_.c)
 *     ApplyEdgeFlagsWorker_50331648_16777216_33554432_ @ 0x1801B8EE8 (ApplyEdgeFlagsWorker_50331648_16777216_33554432_.c)
 */

void __fastcall ApplyEdgeFlags(
        D2DMatrixHelper *this,
        D2DMatrixHelper *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        float *a4)
{
  int v7; // esi
  struct D2D_RECT_F *v8; // r9
  float v9; // xmm0_4
  float m12; // xmm1_4
  float v11; // xmm0_4
  float m21; // xmm1_4
  float v13; // xmm0_4
  float m22; // xmm1_4
  struct D2D_MATRIX_3X2_F v15; // [rsp+20h] [rbp-18h] BYREF

  v7 = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving((D2DMatrixHelper *)(unsigned int)a2, (__int64)a3, a3);
  D2DMatrixHelper::TransformRect_AxisAlignedPreserving(this, (const struct D2D_RECT_F *)a3, &v15, v8);
  v9 = ApplyEdgeFlagsWorker_50331648_16777216_33554432_(v7, v15.m11, -0.5);
  m12 = v15.m12;
  *a4 = v9;
  v11 = ApplyEdgeFlagsWorker_3_1_2_(v7, m12, -0.5);
  m21 = v15.m21;
  a4[1] = v11;
  v13 = ApplyEdgeFlagsWorker_768_256_512_(v7, m21, 0.5);
  m22 = v15.m22;
  a4[2] = v13;
  a4[3] = ApplyEdgeFlagsWorker_196608_65536_131072_(v7, m22, 0.5);
}
