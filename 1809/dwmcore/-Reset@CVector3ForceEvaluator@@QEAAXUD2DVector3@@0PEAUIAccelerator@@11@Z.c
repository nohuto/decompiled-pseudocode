/*
 * XREFs of ?Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z @ 0x1801E7E10
 * Callers:
 *     ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z @ 0x1801E7B34 (-Update@CVector3Force@@QEAA-AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x1801E79FC (-Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z.c)
 */

char __fastcall CVector3ForceEvaluator::Reset(
        _BYTE *a1,
        float *a2,
        float *a3,
        struct IAccelerator *a4,
        struct IAccelerator *a5,
        struct IAccelerator *a6)
{
  char v10; // al
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  char v17; // al
  float v18; // xmm7_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  char v22; // al
  float v23; // xmm7_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  char result; // al
  int v27; // [rsp+30h] [rbp-40h] BYREF
  float v28; // [rsp+34h] [rbp-3Ch]
  float v29; // [rsp+38h] [rbp-38h]

  v10 = (*(__int64 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 40LL))(a4);
  v11 = *a2;
  v12 = 0.0;
  if ( v10 )
    v13 = v11 - (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 24LL))(a4);
  else
    v13 = 0.0;
  v14 = *a3;
  v15 = *a3;
  v27 = 2;
  v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v13) & _xmm);
  v28 = v16;
  v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & _xmm);
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)a1, v11, v15, a4, (const struct ForceThreshold *)&v27);
  v17 = (*(__int64 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a5 + 40LL))(a5);
  v18 = a2[1];
  if ( v17 )
    v19 = v18 - (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a5 + 24LL))(a5);
  else
    v19 = 0.0;
  v20 = a3[1];
  v27 = 2;
  v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v19) & _xmm);
  v28 = v21;
  v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20) & _xmm);
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 68), v18, v20, a5, (const struct ForceThreshold *)&v27);
  v22 = (*(__int64 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a6 + 40LL))(a6);
  v23 = a2[2];
  if ( v22 )
    v12 = v23 - (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a6 + 24LL))(a6);
  v24 = a3[2];
  v27 = 2;
  v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
  v28 = v25;
  v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v24) & _xmm);
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 136), v23, v24, a6, (const struct ForceThreshold *)&v27);
  result = -3;
  a1[64] &= ~2u;
  a1[132] &= ~2u;
  a1[200] &= ~2u;
  return result;
}
