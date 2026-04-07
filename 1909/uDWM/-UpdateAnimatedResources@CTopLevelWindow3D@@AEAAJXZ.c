/*
 * XREFs of ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x18001BCA0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800214B0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001EEF0 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     cosf_0 @ 0x18004FABE (cosf_0.c)
 *     sinf_0 @ 0x18004FB1E (sinf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::UpdateAnimatedResources(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  float v3; // xmm8_4
  __int64 v4; // rax
  float v5; // xmm15_4
  __int64 v6; // rax
  float v7; // xmm0_4
  __int64 v8; // rax
  float v9; // xmm0_4
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
  unsigned int v43; // xmm0_4
  unsigned int v44; // xmm1_4
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
  float v55; // xmm0_4
  __int64 v56; // rax
  __int64 result; // rax
  unsigned int v58; // ebx
  void *v59; // [rsp+30h] [rbp-D8h]
  float v60; // [rsp+38h] [rbp-D0h]
  float v61; // [rsp+3Ch] [rbp-CCh]
  float v62; // [rsp+40h] [rbp-C8h]
  float v63; // [rsp+44h] [rbp-C4h]
  float v64; // [rsp+48h] [rbp-C0h]
  __int64 v65; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v66; // [rsp+5Ch] [rbp-ACh]
  int v67; // [rsp+64h] [rbp-A4h]
  float v68; // [rsp+68h] [rbp-A0h]
  _BYTE v69[12]; // [rsp+6Ch] [rbp-9Ch]
  __int64 v70; // [rsp+78h] [rbp-90h]
  float v71; // [rsp+80h] [rbp-88h]
  int v72; // [rsp+84h] [rbp-84h]
  __int128 v73; // [rsp+88h] [rbp-80h]
  float v74; // [rsp+98h] [rbp-70h] BYREF
  __int64 v75; // [rsp+9Ch] [rbp-6Ch]
  __int64 v76; // [rsp+A4h] [rbp-64h]
  float v77; // [rsp+ACh] [rbp-5Ch]
  __int64 v78; // [rsp+B0h] [rbp-58h]
  __int64 v79; // [rsp+B8h] [rbp-50h]
  __int64 v80; // [rsp+C0h] [rbp-48h]
  float v81; // [rsp+C8h] [rbp-40h]
  float v82; // [rsp+CCh] [rbp-3Ch]
  int v83; // [rsp+D0h] [rbp-38h]
  int v84; // [rsp+D4h] [rbp-34h]
  double v85[6]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = *((_QWORD *)this + 47);
  v3 = 0.0;
  if ( v1 )
    v63 = *(double *)(v1 + 48);
  else
    v63 = 0.0;
  v4 = *((_QWORD *)this + 48);
  if ( v4 )
    v5 = *(double *)(v4 + 48);
  else
    v5 = 0.0;
  v6 = *((_QWORD *)this + 49);
  if ( v6 )
    v7 = *(double *)(v6 + 48);
  else
    v7 = 0.0;
  v8 = *((_QWORD *)this + 53);
  v64 = v7;
  v9 = FLOAT_1_0;
  if ( v8 )
    v60 = *(double *)(v8 + 48);
  else
    v60 = FLOAT_1_0;
  v10 = *((_QWORD *)this + 54);
  if ( v10 )
    v61 = *(double *)(v10 + 48);
  else
    v61 = FLOAT_1_0;
  v11 = *((_QWORD *)this + 55);
  if ( v11 )
    v62 = *(double *)(v11 + 48);
  else
    v62 = FLOAT_1_0;
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
  LODWORD(v81) = *((_DWORD *)this + 114) ^ _xmm;
  LODWORD(v20) = *((_DWORD *)this + 115) ^ _xmm;
  v80 = 1065353216LL;
  v82 = v20;
  v83 = v19;
  v21 = (float)(v3 * 0.017453292) * 0.5;
  v79 = 0LL;
  v78 = 0LL;
  v76 = 0LL;
  v75 = 0LL;
  v84 = 1065353216;
  v77 = 1.0;
  v74 = 1.0;
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
  v67 = 0;
  v40 = (float)(v34 + v34) * v34;
  v72 = 0;
  v41 = (float)(v34 + v34) * v33;
  v42 = (float)(v32 + v32) * v32;
  *((float *)&v66 + 1) = (float)((float)(v34 + v34) * v32) - v37;
  *((float *)&v65 + 1) = (float)(1.0 - v39) - v40;
  *(float *)&v70 = (float)((float)(v34 + v34) * v32) + v37;
  *(_QWORD *)&v69[4] = COERCE_UNSIGNED_INT(v41 + v36);
  *((float *)&v70 + 1) = v41 - v36;
  *(float *)&v66 = (float)((float)(v33 + v33) * v32) + v38;
  v68 = (float)((float)(v33 + v33) * v32) - v38;
  *(float *)v69 = (float)(1.0 - v42) - v40;
  v73 = _xmm;
  v71 = (float)(1.0 - v42) - v39;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v74,
    (const struct D2DMatrix *)&v74,
    (const struct D2DMatrix *)((char *)&v65 + 4));
  *(float *)&v43 = *((float *)this + 114) - *((float *)this + 117);
  *(float *)&v44 = *((float *)this + 115) - *((float *)this + 118);
  v70 = 0LL;
  *(_QWORD *)v69 = 1065353216LL;
  *(_QWORD *)&v73 = __PAIR64__(v44, v43);
  v45 = *((float *)this + 116) - *((float *)this + 119);
  v68 = 0.0;
  v66 = 0LL;
  v71 = 1.0;
  *((float *)&v73 + 2) = v45;
  HIDWORD(v65) = 1065353216;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v74,
    (const struct D2DMatrix *)&v74,
    (const struct D2DMatrix *)((char *)&v65 + 4));
  v46 = (_DWORD *)*((_QWORD *)this + 42);
  v47 = (float)(v46[22] + *((_DWORD *)this + 77));
  v48 = 0;
  v49 = v46[20] - v46[23] - v46[22];
  v50 = (float)(v46[24] + *((_DWORD *)this + 78));
  if ( v49 < 0 )
    v49 = 0;
  if ( v46[21] - v46[25] - v46[24] >= 0 )
    v48 = v46[21] - v46[25] - v46[24];
  *(_QWORD *)((char *)&v73 + 4) = 0LL;
  LODWORD(v73) = 0;
  *((float *)&v65 + 1) = (float)v49 * v60;
  v71 = v62;
  *(float *)v69 = (float)v48 * v61;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v74,
    (const struct D2DMatrix *)&v74,
    (const struct D2DMatrix *)((char *)&v65 + 4));
  v52 = v51 * *((float *)this + 117);
  v71 = 1.0;
  v54 = v53 * *((float *)this + 118);
  *(_DWORD *)v69 = 1065353216;
  v55 = v64 + *((float *)this + 119);
  HIDWORD(v65) = 1065353216;
  *((float *)&v73 + 2) = v55;
  *((float *)&v73 + 1) = (float)(v5 + v50) + v54;
  *(float *)&v73 = (float)(v47 + v63) + v52;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v74,
    (const struct D2DMatrix *)&v74,
    (const struct D2DMatrix *)((char *)&v65 + 4));
  v56 = *((_QWORD *)this + 43);
  v85[2] = *((float *)&v76 + 1);
  v85[3] = v77;
  v85[4] = v81;
  v85[5] = v82;
  v85[0] = v74;
  v85[1] = *(float *)&v75;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(*(_QWORD *)(v56 + 16) + 16LL) + 1072LL))(
             *(_QWORD *)(*(_QWORD *)(v56 + 16) + 16LL),
             *(unsigned int *)(*(_QWORD *)(v56 + 16) + 24LL),
             v85);
  v58 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x316u, v59);
    return v58;
  }
  return result;
}
