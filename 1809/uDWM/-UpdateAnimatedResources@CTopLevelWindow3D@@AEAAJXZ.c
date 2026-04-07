/*
 * XREFs of ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180016410
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180014A70 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800189A0 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     cosf_0 @ 0x18004E24E (cosf_0.c)
 *     sinf_0 @ 0x18004E2AE (sinf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::UpdateAnimatedResources(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  float v3; // xmm8_4
  __int64 v4; // rax
  float v5; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm15_4
  __int64 v8; // rax
  float v9; // xmm1_4
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  float v13; // xmm12_4
  __int64 v14; // rax
  float v15; // xmm13_4
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm8_4
  float v22; // xmm11_4
  float v23; // xmm10_4
  float v24; // xmm12_4
  float v25; // xmm9_4
  float v26; // xmm8_4
  float v27; // xmm13_4
  float v28; // xmm12_4
  float v29; // xmm0_4
  float v30; // xmm13_4
  float v31; // xmm12_4
  float v32; // xmm14_4
  float v33; // xmm13_4
  float v34; // xmm1_4
  float v35; // xmm12_4
  float v36; // xmm9_4
  float v37; // xmm7_4
  float v38; // xmm3_4
  float v39; // xmm10_4
  float v40; // xmm6_4
  float v41; // xmm4_4
  float v42; // xmm8_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  _DWORD *v46; // rdx
  float v47; // xmm6_4
  int v48; // eax
  int v49; // r9d
  float v50; // xmm7_4
  float v51; // xmm5_4
  float v52; // xmm5_4
  float v53; // xmm4_4
  float v54; // xmm4_4
  float v55; // xmm15_4
  __int64 v56; // rax
  __int64 result; // rax
  unsigned int v58; // ebx
  __int64 v59; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v60; // [rsp+3Ch] [rbp-CCh]
  __int64 v61; // [rsp+44h] [rbp-C4h]
  float v62; // [rsp+4Ch] [rbp-BCh]
  __int64 v63; // [rsp+50h] [rbp-B8h]
  __int64 v64; // [rsp+58h] [rbp-B0h]
  _BYTE v65[24]; // [rsp+60h] [rbp-A8h]
  float v66; // [rsp+78h] [rbp-90h]
  float v67; // [rsp+7Ch] [rbp-8Ch]
  float v68; // [rsp+80h] [rbp-88h]
  float v69; // [rsp+84h] [rbp-84h]
  float v70; // [rsp+88h] [rbp-80h]
  float v71; // [rsp+98h] [rbp-70h] BYREF
  __int64 v72; // [rsp+9Ch] [rbp-6Ch]
  __int64 v73; // [rsp+A4h] [rbp-64h]
  float v74; // [rsp+ACh] [rbp-5Ch]
  __int64 v75; // [rsp+B0h] [rbp-58h]
  __int64 v76; // [rsp+B8h] [rbp-50h]
  __int64 v77; // [rsp+C0h] [rbp-48h]
  float v78; // [rsp+C8h] [rbp-40h]
  float v79; // [rsp+CCh] [rbp-3Ch]
  int v80; // [rsp+D0h] [rbp-38h]
  int v81; // [rsp+D4h] [rbp-34h]
  double v82[6]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = *((_QWORD *)this + 47);
  v3 = 0.0;
  if ( v1 )
    v69 = *(double *)(v1 + 48);
  else
    v69 = 0.0;
  v4 = *((_QWORD *)this + 48);
  if ( v4 )
    v5 = *(double *)(v4 + 48);
  else
    v5 = 0.0;
  v6 = *((_QWORD *)this + 49);
  v70 = v5;
  if ( v6 )
    v7 = *(double *)(v6 + 48);
  else
    v7 = 0.0;
  v8 = *((_QWORD *)this + 53);
  v9 = FLOAT_1_0;
  if ( v8 )
    v66 = *(double *)(v8 + 48);
  else
    v66 = FLOAT_1_0;
  v10 = *((_QWORD *)this + 54);
  if ( v10 )
    v67 = *(double *)(v10 + 48);
  else
    v67 = FLOAT_1_0;
  v11 = *((_QWORD *)this + 55);
  if ( v11 )
    v68 = *(double *)(v11 + 48);
  else
    v68 = FLOAT_1_0;
  v12 = *((_QWORD *)this + 50);
  if ( v12 )
    v13 = *(double *)(v12 + 48);
  else
    v13 = 0.0;
  v14 = *((_QWORD *)this + 51);
  if ( v14 )
    v15 = *(double *)(v14 + 48);
  else
    v15 = 0.0;
  v16 = *((_QWORD *)this + 52);
  if ( v16 )
    v3 = *(double *)(v16 + 48);
  v17 = *((_QWORD *)this + 56);
  if ( v17 )
    v9 = *(double *)(v17 + 48);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 23) - v9)) & _xmm) > 0.0000011920929 )
  {
    v18 = *(_QWORD *)this;
    *((double *)this + 23) = v9;
    (*(void (__fastcall **)(CTopLevelWindow3D *, __int64))(v18 + 24))(this, 32LL);
  }
  v19 = *((_DWORD *)this + 116) ^ _xmm;
  LODWORD(v78) = *((_DWORD *)this + 114) ^ _xmm;
  LODWORD(v20) = *((_DWORD *)this + 115) ^ _xmm;
  v77 = 1065353216LL;
  v79 = v20;
  v80 = v19;
  v21 = (float)(v3 * 0.017453292) * 0.5;
  v76 = 0LL;
  v75 = 0LL;
  v73 = 0LL;
  v72 = 0LL;
  v81 = 1065353216;
  v74 = 1.0;
  v71 = 1.0;
  v22 = sinf_0(v21);
  v23 = cosf_0(v21);
  v24 = (float)(v13 * 0.017453292) * 0.5;
  v25 = sinf_0(v24);
  v26 = cosf_0(v24);
  v27 = (float)(v15 * 0.017453292) * 0.5;
  v28 = sinf_0(v27);
  v29 = cosf_0(v27);
  v30 = v28 * v26;
  v31 = v28 * v25;
  v32 = (float)((float)(v29 * v25) * v23) + (float)(v30 * v22);
  v33 = (float)(v30 * v23) - (float)((float)(v29 * v25) * v22);
  v34 = (float)((float)(v29 * v26) * v22) - (float)(v31 * v23);
  v35 = (float)(v31 * v22) + (float)((float)(v29 * v26) * v23);
  v36 = (float)(v32 + v32) * v35;
  v37 = (float)(v33 + v33) * v35;
  v38 = (float)(v34 + v34) * v35;
  v39 = (float)(v33 + v33) * v33;
  LODWORD(v61) = 0;
  v40 = (float)(v34 + v34) * v34;
  *(_DWORD *)&v65[4] = 0;
  v41 = (float)(v34 + v34) * v33;
  v42 = (float)(v32 + v32) * v32;
  *((float *)&v60 + 1) = (float)((float)(v34 + v34) * v32) - v37;
  *((float *)&v59 + 1) = (float)(1.0 - v39) - v40;
  *(float *)&v64 = (float)((float)(v34 + v34) * v32) + v37;
  v63 = COERCE_UNSIGNED_INT(v41 + v36);
  *((float *)&v64 + 1) = v41 - v36;
  *(float *)&v60 = (float)((float)(v33 + v33) * v32) + v38;
  *((float *)&v61 + 1) = (float)((float)(v33 + v33) * v32) - v38;
  v62 = (float)(1.0 - v42) - v40;
  *(_OWORD *)&v65[8] = _xmm;
  *(float *)v65 = (float)(1.0 - v42) - v39;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v71,
    (const struct D2DMatrix *)&v71,
    (const struct D2DMatrix *)((char *)&v59 + 4));
  v43 = *((float *)this + 114) - *((float *)this + 117);
  v44 = *((float *)this + 115) - *((float *)this + 118);
  *(_QWORD *)v65 = 1065353216LL;
  v64 = 0LL;
  *(float *)&v65[8] = v43;
  v45 = *((float *)this + 116) - *((float *)this + 119);
  *(float *)&v65[12] = v44;
  v63 = 0LL;
  v61 = 0LL;
  v60 = 0LL;
  *(float *)&v65[16] = v45;
  *(_DWORD *)&v65[20] = 1065353216;
  v62 = 1.0;
  HIDWORD(v59) = 1065353216;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v71,
    (const struct D2DMatrix *)&v71,
    (const struct D2DMatrix *)((char *)&v59 + 4));
  v46 = (_DWORD *)*((_QWORD *)this + 42);
  v47 = (float)(v46[22] + *((_DWORD *)this + 77));
  v48 = 0;
  v49 = v46[20] - v46[23] - v46[22];
  v50 = (float)(v46[24] + *((_DWORD *)this + 78));
  if ( v49 < 0 )
    v49 = 0;
  if ( v46[21] - v46[25] - v46[24] >= 0 )
    v48 = v46[21] - v46[25] - v46[24];
  *(_OWORD *)&v65[4] = 0uLL;
  v64 = 0LL;
  v63 = 0LL;
  v61 = 0LL;
  *((float *)&v59 + 1) = v66 * (float)v49;
  *(float *)v65 = v68;
  v60 = 0LL;
  *(_DWORD *)&v65[20] = 1065353216;
  v62 = (float)v48 * v67;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v71,
    (const struct D2DMatrix *)&v71,
    (const struct D2DMatrix *)((char *)&v59 + 4));
  v52 = v51 * *((float *)this + 117);
  *(_QWORD *)v65 = 1065353216LL;
  v54 = v53 * *((float *)this + 118);
  v64 = 0LL;
  v55 = v7 + *((float *)this + 119);
  v63 = 0LL;
  v61 = 0LL;
  v60 = 0LL;
  *(float *)&v65[16] = v55;
  *(_DWORD *)&v65[20] = 1065353216;
  *(float *)&v65[12] = v54 + (float)(v70 + v50);
  v62 = 1.0;
  HIDWORD(v59) = 1065353216;
  *(float *)&v65[8] = (float)(v47 + v69) + v52;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v71,
    (const struct D2DMatrix *)&v71,
    (const struct D2DMatrix *)((char *)&v59 + 4));
  v56 = *((_QWORD *)this + 43);
  v82[2] = *((float *)&v73 + 1);
  v82[3] = v74;
  v82[4] = v78;
  v82[5] = v79;
  v82[0] = v71;
  v82[1] = *(float *)&v72;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v56 + 16) + 1160LL))(
             *(_QWORD *)(v56 + 16),
             *(unsigned int *)(v56 + 24),
             v82);
  v58 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x31Bu);
    return v58;
  }
  return result;
}
