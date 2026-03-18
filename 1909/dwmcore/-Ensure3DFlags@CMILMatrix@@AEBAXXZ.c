/*
 * XREFs of ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18008C180
 * Callers:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083B20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088CE0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x18008B720 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x18008D2C0 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Ensure3DFlags(CMILMatrix *this)
{
  char v1; // al
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  char v14; // al
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  char v19; // al
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  char v23; // al
  float v24; // xmm1_4
  char v25; // al
  float v26; // xmm0_4
  char v27; // dl
  float v28; // xmm1_4
  float v29; // xmm1_4
  char v30; // al
  char v31; // dl

  v1 = *((_BYTE *)this + 64);
  if ( (v1 & 3) != 0 && (v1 & 0xC) != 0 && (v1 & 0xC0) != 0 && (*((_BYTE *)this + 65) & 0xC) != 0 )
    return;
  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 2) - 0.0)) & _xmm);
  if ( v2 >= 0.000081380211
    || (v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 6) - 0.0)) & _xmm), v3 >= 0.000081380211)
    || (v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 3) - 0.0)) & _xmm), v4 >= 0.000081380211)
    || (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 7) - 0.0)) & _xmm), v5 >= 0.000081380211)
    || (v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 8) - 0.0)) & _xmm), v6 >= 0.000081380211)
    || (v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 9) - 0.0)) & _xmm), v7 >= 0.000081380211)
    || (v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 11) - 0.0)) & _xmm), v8 >= 0.000081380211)
    || (v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 15) - 1.0)) & _xmm), v9 >= 0.000081380211) )
  {
    v23 = v1 | 0xCF;
    *((_BYTE *)this + 65) |= 0xCu;
    goto LABEL_23;
  }
  v10 = *(float *)this;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)this - 0.0)) & _xmm);
  if ( v11 >= 0.000081380211
    || (v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 5) - 0.0)) & _xmm), v24 >= 0.000081380211) )
  {
    v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 1) - 0.0)) & _xmm);
    if ( v12 >= 0.000081380211 )
      return;
    v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 4) - 0.0)) & _xmm);
    if ( v13 >= 0.000081380211 )
      return;
    *((_BYTE *)this + 65) = 125;
    v14 = v1 & 0x3F | 0x40;
    v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v10 - 1.0)) & _xmm);
    if ( v15 >= 0.000081380211
      || (v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 5) - 1.0)) & _xmm), v16 >= 0.000081380211)
      || (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 10) - 1.0)) & _xmm), v17 >= 0.000081380211) )
    {
      *((_BYTE *)this + 64) = v14 | 0x3F;
      return;
    }
    v18 = *((float *)this + 12);
    v19 = v14 & 0xC3 | 0x14;
    *((_BYTE *)this + 64) = v19;
    v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v18 - 0.0)) & _xmm);
    if ( v20 >= 0.000081380211
      || (v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 13) - 0.0)) & _xmm), v21 >= 0.000081380211)
      || (v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 14) - 0.0)) & _xmm), v22 >= 0.000081380211) )
    {
      *((_BYTE *)this + 64) = v19 | 3;
      return;
    }
    v23 = v19 & 0xFC | 1;
LABEL_23:
    *((_BYTE *)this + 64) = v23;
    return;
  }
  *((_BYTE *)this + 65) &= 3u;
  v25 = v1 | 0x3F;
  v26 = *((float *)this + 1);
  *((_BYTE *)this + 65) |= 0x54u;
  v27 = *((_BYTE *)this + 65);
  *((_BYTE *)this + 64) = v25;
  v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v26 - 0.0)) & _xmm);
  if ( v28 >= 0.000081380211
    || (v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 4) - 0.0)) & _xmm), v29 >= 0.000081380211) )
  {
    v31 = v27 | 3;
    v30 = v25 | 0xC0;
  }
  else
  {
    v30 = 127;
    v31 = v27 & 0xFC | 1;
  }
  *((_BYTE *)this + 64) = v30;
  *((_BYTE *)this + 65) = v31;
}
