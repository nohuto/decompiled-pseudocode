/*
 * XREFs of ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180064380
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000A0B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180017770 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18005B8B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x18006DFA0 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180071500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180170A38 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 * Callees:
 *     ??$IsEqual@$00$0A@@CMILMatrix@@CA_NMMM@Z @ 0x1800171A8 (--$IsEqual@$00$0A@@CMILMatrix@@CA_NMMM@Z.c)
 */

__int64 __fastcall CMILMatrix::Is2DAffine<0>(float *a1)
{
  __int64 v1; // xmm4_8
  float v2; // xmm5_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  unsigned __int8 v10; // dl
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  float v15; // xmm5_4
  float v16; // xmm2_4
  __int64 v17; // rcx
  float v18; // xmm3_4
  __int64 v19; // rcx
  float v20; // xmm5_4
  float v21; // xmm2_4
  __int64 v22; // rcx

  v1 = _xmm;
  v2 = FLOAT_0_000081380211;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[2] - 0.0)) & _xmm);
  if ( v3 < 0.000081380211
    && (v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[6] - 0.0)) & _xmm), v4 < 0.000081380211)
    && (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[14] - 0.0)) & _xmm), v5 < 0.000081380211)
    || CMILMatrix::IsEqual<1,0>(a1[2], 0.0, 0.000081380211)
    && CMILMatrix::IsEqual<1,0>(*(float *)(v12 + 24), 0.0, 0.000081380211)
    && CMILMatrix::IsEqual<1,0>(*(float *)(v13 + 32), 0.0, 0.000081380211)
    && (v16 = v15, CMILMatrix::IsEqual<1,0>(*(float *)(v14 + 36), 0.0, v15))
    && ((v18 = *(float *)(v17 + 40), CMILMatrix::IsEqual<1,0>(v18, 0.0, v16)) || CMILMatrix::IsEqual<1,0>(v18, 1.0, v16))
    && (v21 = v20, CMILMatrix::IsEqual<1,0>(*(float *)(v19 + 44), 0.0, v20))
    && CMILMatrix::IsEqual<1,0>(*(float *)(v22 + 56), 0.0, v21) )
  {
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[3]) & v1);
    v7 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[7]) & v1) * 61440.0) + (float)(v6 * 61440.0);
    v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[15]) & v1);
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v7 + v8) - 1.0)) & v1);
    return v2 > v9;
  }
  return v10;
}
