/*
 * XREFs of ?Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z @ 0x18021FFD8
 * Callers:
 *     ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z @ 0x18021FCFC (-Update@CVector3Force@@QEAA-AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x18021FBC4 (-Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z.c)
 */

char __fastcall CVector3ForceEvaluator::Reset(
        _BYTE *a1,
        float *a2,
        float *a3,
        struct IAccelerator *a4,
        struct IAccelerator *a5,
        struct IAccelerator *a6)
{
  float v10; // xmm6_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  double v14; // xmm0_8
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  double v18; // xmm0_8
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  char result; // al
  int v24; // [rsp+30h] [rbp-30h] BYREF
  float v25; // [rsp+34h] [rbp-2Ch]
  float v26; // [rsp+38h] [rbp-28h]

  v10 = 0.0;
  if ( (*(unsigned __int8 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 40LL))(a4) )
    v11 = *a2 - (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 24LL))(a4);
  else
    v11 = 0.0;
  v12 = *a3;
  v13 = *a3;
  v14 = v11;
  v24 = 2;
  v15 = *a2;
  *(float *)&v14 = COERCE_DOUBLE(*(_QWORD *)&v14 & _xmm);
  v25 = *(float *)&v14;
  v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)a1, v15, v13, a4, (const struct ForceThreshold *)&v24);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a5 + 40LL))(a5) )
    v16 = a2[1] - (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a5 + 24LL))(a5);
  else
    v16 = 0.0;
  v17 = a3[1];
  v18 = v16;
  v24 = 2;
  v19 = a2[1];
  *(float *)&v18 = COERCE_DOUBLE(*(_QWORD *)&v18 & _xmm);
  v25 = *(float *)&v18;
  v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v17) & _xmm);
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 68), v19, v17, a5, (const struct ForceThreshold *)&v24);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a6 + 40LL))(a6) )
    v10 = a2[2] - (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a6 + 24LL))(a6);
  v20 = a3[2];
  v21 = a2[2];
  v24 = 2;
  v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm);
  v25 = v22;
  v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20) & _xmm);
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 136), v21, v20, a6, (const struct ForceThreshold *)&v24);
  result = -3;
  a1[64] &= ~2u;
  a1[132] &= ~2u;
  a1[200] &= ~2u;
  return result;
}
