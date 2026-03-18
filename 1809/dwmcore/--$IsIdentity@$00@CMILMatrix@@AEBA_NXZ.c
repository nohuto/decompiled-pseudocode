/*
 * XREFs of ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180041420
 * Callers:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180037760 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18003A040 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003E5E0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180043690 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsIdentity<1>(__int64 a1)
{
  char v1; // dl
  char v2; // al
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  char v15; // r9
  char v16; // r8
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm2_4

  v1 = *(_BYTE *)(a1 + 64);
  v2 = (char)(v1 << 6) >> 6;
  if ( v2 )
    return v2 == 1;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)a1 - 1.0)) & _xmm) >= 0.000081380211 )
    goto LABEL_15;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 4) - 0.0)) & _xmm);
  if ( v3 >= 0.000081380211 )
    goto LABEL_15;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 8) - 0.0)) & _xmm);
  if ( v4 >= 0.000081380211 )
    goto LABEL_15;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 12) - 0.0)) & _xmm);
  if ( v5 >= 0.000081380211 )
    goto LABEL_15;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 16) - 0.0)) & _xmm);
  if ( v6 >= 0.000081380211 )
    goto LABEL_15;
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 20) - 1.0)) & _xmm);
  if ( v7 >= 0.000081380211 )
    goto LABEL_15;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 24) - 0.0)) & _xmm);
  if ( v8 >= 0.000081380211 )
    goto LABEL_15;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 28) - 0.0)) & _xmm);
  if ( v9 >= 0.000081380211 )
    goto LABEL_15;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 32) - 0.0)) & _xmm);
  if ( v10 >= 0.000081380211
    || (v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 36) - 0.0)) & _xmm), v11 >= 0.000081380211)
    || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 40) - 1.0)) & _xmm), v12 >= 0.000081380211)
    || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 44) - 0.0)) & _xmm), v13 >= 0.000081380211)
    || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 48) - 0.0)) & _xmm), v14 >= 0.000081380211)
    || (v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 52) - 0.0)) & _xmm), v18 >= 0.000081380211)
    || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 56) - 0.0)) & _xmm), v19 >= 0.000081380211)
    || (v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm), v20 >= 0.000081380211) )
  {
LABEL_15:
    v15 = 0;
  }
  else
  {
    v15 = 1;
  }
  v16 = v1 ^ (v1 ^ (-1 - 2 * v15)) & 3;
  *(_BYTE *)(a1 + 64) = v16;
  if ( v15 )
  {
    *(_BYTE *)(a1 + 65) = 125;
    *(_BYTE *)(a1 + 64) = v16 & 3 | 0x54;
  }
  return v15;
}
