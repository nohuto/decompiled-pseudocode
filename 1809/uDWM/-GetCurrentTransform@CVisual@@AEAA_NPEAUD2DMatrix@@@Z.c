/*
 * XREFs of ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180037234
 * Callers:
 *     ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180004638 (-TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x18004D974 (-GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x1800886C4 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800189A0 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800B21DC (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 */

char __fastcall CVisual::GetCurrentTransform(CVisual *this, struct D2DMatrix *a2)
{
  char v4; // al
  char v5; // r14
  char v6; // r12
  float v7; // xmm0_4
  float v8; // xmm2_4
  char v9; // r15
  float v10; // xmm1_4
  bool v11; // r9
  double v13; // xmm5_8
  double *v14; // rsi
  float v15; // xmm1_4
  float v16; // xmm1_4
  double v17; // xmm1_8
  float v18; // xmm0_4
  float v19; // xmm0_4
  char v20; // r10
  double v21; // xmm0_8
  double v22; // xmm1_8
  double v23; // xmm0_8
  double v24; // xmm1_8
  float v25; // [rsp+20h] [rbp-40h] BYREF
  int v26; // [rsp+24h] [rbp-3Ch]
  int v27; // [rsp+28h] [rbp-38h]
  int v28; // [rsp+2Ch] [rbp-34h]
  int v29; // [rsp+30h] [rbp-30h]
  float v30; // [rsp+34h] [rbp-2Ch]
  int v31; // [rsp+38h] [rbp-28h]
  int v32; // [rsp+3Ch] [rbp-24h]
  int v33; // [rsp+40h] [rbp-20h]
  int v34; // [rsp+44h] [rbp-1Ch]
  int v35; // [rsp+48h] [rbp-18h]
  int v36; // [rsp+4Ch] [rbp-14h]
  float v37; // [rsp+50h] [rbp-10h]
  float v38; // [rsp+54h] [rbp-Ch]
  int v39; // [rsp+58h] [rbp-8h]
  int v40; // [rsp+5Ch] [rbp-4h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( (*((_BYTE *)this + 84) & 1) != 0 )
  {
    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this + 168LL))(this);
    v4 = 1;
  }
  else
  {
    *(_QWORD *)((char *)a2 + 52) = 0LL;
    *((_DWORD *)a2 + 15) = 1065353216;
    *((_DWORD *)a2 + 10) = 1065353216;
    *((_DWORD *)a2 + 5) = 1065353216;
    *(_DWORD *)a2 = 1065353216;
    *(_QWORD *)((char *)a2 + 44) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    *((_QWORD *)a2 + 3) = 0LL;
    *(_QWORD *)((char *)a2 + 12) = 0LL;
    *(_QWORD *)((char *)a2 + 4) = 0LL;
  }
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 21) - 1.0)) & _xmm);
  if ( v7 > 0.0000011920929
    || (v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 22) - 1.0)) & _xmm),
        v8 > 0.0000011920929) )
  {
    v5 = 1;
    v4 = 1;
  }
  v9 = v4;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 20) - 0.0)) & _xmm);
  v11 = v10 <= 0.0000011920929;
  if ( v10 > 0.0000011920929 )
    v9 = 1;
  if ( v5 || v10 > 0.0000011920929 )
  {
    v13 = *((double *)this + 18);
    v14 = (double *)((char *)this + 152);
    v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v13 - 0.0)) & _xmm);
    if ( v15 > 0.0000011920929
      || (v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*v14 - 0.0)) & _xmm), v16 > 0.0000011920929) )
    {
      *(_QWORD *)&v17 = *(_QWORD *)v14 ^ _xmm;
      v36 = 0;
      v34 = 0;
      v33 = 0;
      v32 = 0;
      v31 = 0;
      v29 = 0;
      v28 = 0;
      v27 = 0;
      v26 = 0;
      v18 = COERCE_DOUBLE(*(_QWORD *)&v13 ^ _xmm);
      v40 = 1065353216;
      v35 = 1065353216;
      v30 = 1.0;
      v25 = 1.0;
      v39 = 1065353216;
      v37 = v18;
      v19 = v17;
      v38 = v19;
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v25);
      v6 = v20;
    }
    if ( v5 )
    {
      v21 = *((double *)this + 21);
      v22 = *((double *)this + 22);
      v39 = 0;
      v38 = 0.0;
      v37 = 0.0;
      v36 = 0;
      v34 = 0;
      v33 = 0;
      v32 = 0;
      v31 = 0;
      v29 = 0;
      v28 = 0;
      v27 = 0;
      v26 = 0;
      v35 = 1065353216;
      v40 = 1065353216;
      v25 = v21;
      v30 = v22;
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v25);
    }
    if ( !v11 )
    {
      D2DMatrixRotationZ((struct D2DMatrix *)&v25, *((double *)this + 20) * 0.01745329238474369);
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v25);
    }
    if ( v6 )
    {
      v23 = *((double *)this + 18);
      v24 = *v14;
      v36 = 0;
      v34 = 0;
      v33 = 0;
      v32 = 0;
      v31 = 0;
      v29 = 0;
      v28 = 0;
      v27 = 0;
      v26 = 0;
      v40 = 1065353216;
      v35 = 1065353216;
      v30 = 1.0;
      v25 = 1.0;
      v39 = 1065353216;
      v37 = v23;
      v38 = v24;
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v25);
    }
  }
  return v9;
}
