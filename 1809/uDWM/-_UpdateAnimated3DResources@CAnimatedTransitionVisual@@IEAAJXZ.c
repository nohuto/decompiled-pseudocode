/*
 * XREFs of ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009CE98
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009C7B0 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800189A0 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x1800B2084 (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x1800B22E4 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800B2428 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateAnimated3DResources(CAnimatedTransitionVisual *this)
{
  int v1; // r8d
  float v3; // xmm2_4
  float v4; // xmm1_4
  char *v5; // rdi
  float v6; // xmm8_4
  unsigned int v7; // eax
  int v8; // edx
  int v9; // ecx
  __m128i v10; // xmm5
  int v11; // eax
  float v12; // xmm10_4
  float v13; // xmm5_4
  float v14; // xmm9_4
  float v15; // xmm10_4
  float v16; // xmm12_4
  float v17; // xmm5_4
  int v18; // ecx
  float v19; // xmm7_4
  float v20; // xmm6_4
  int v21; // ecx
  int v22; // r9d
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  float v28; // xmm7_4
  int v29; // eax
  int v30; // r8d
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm3_4
  const struct D2DMatrix *v34; // rdx
  float v35; // xmm0_4
  int v36; // eax
  unsigned int v37; // edi
  int v38; // eax
  float v40; // [rsp+38h] [rbp-D0h] BYREF
  int v41; // [rsp+3Ch] [rbp-CCh]
  int v42; // [rsp+40h] [rbp-C8h]
  int v43; // [rsp+44h] [rbp-C4h]
  int v44; // [rsp+48h] [rbp-C0h]
  int v45; // [rsp+4Ch] [rbp-BCh]
  int v46; // [rsp+50h] [rbp-B8h]
  int v47; // [rsp+54h] [rbp-B4h]
  int v48; // [rsp+58h] [rbp-B0h]
  int v49; // [rsp+5Ch] [rbp-ACh]
  int v50; // [rsp+60h] [rbp-A8h]
  int v51; // [rsp+64h] [rbp-A4h]
  float v52; // [rsp+68h] [rbp-A0h]
  float v53; // [rsp+6Ch] [rbp-9Ch]
  int v54; // [rsp+70h] [rbp-98h]
  int v55; // [rsp+74h] [rbp-94h]
  int v56; // [rsp+78h] [rbp-90h] BYREF
  float v57; // [rsp+80h] [rbp-88h]
  _DWORD v58[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v59[160]; // [rsp+98h] [rbp-70h] BYREF

  v1 = *((_DWORD *)this + 214);
  v3 = *((float *)this + 194);
  v4 = *((float *)this + 195);
  v5 = (char *)this + 516;
  v6 = 0.0;
  v7 = 0;
  if ( *((_DWORD *)this + 216) - v1 >= 0 )
    v7 = *((_DWORD *)this + 216) - v1;
  v8 = *((_DWORD *)this + 215);
  v9 = *((_DWORD *)this + 217) - v8;
  v10 = _mm_cvtsi32_si128(v7);
  v11 = 0;
  if ( v9 >= 0 )
    v11 = v9;
  v54 = 0;
  v53 = 0.0;
  v52 = 0.0;
  v51 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v57 = 0.0;
  v12 = _mm_cvtepi32_ps(v10).m128_f32[0];
  v13 = v12 * *((float *)this + 191);
  v14 = (float)v11 * *((float *)this + 192);
  v15 = (float)((float)(v12 * v3) + (float)v1) + *((float *)this + 188);
  v40 = v13;
  v45 = LODWORD(v14);
  v16 = (float)((float)((float)v11 * v4) + (float)v8) + *((float *)this + 189);
  *((_DWORD *)v5 + 11) = 0;
  *((_DWORD *)v5 + 9) = 0;
  *((_DWORD *)v5 + 8) = 0;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 6) = 0;
  *((_DWORD *)v5 + 4) = 0;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 2) = 0;
  *((_DWORD *)v5 + 1) = 0;
  *((_DWORD *)v5 + 14) = 0;
  *((_DWORD *)v5 + 15) = 1065353216;
  *((_DWORD *)v5 + 10) = 1065353216;
  *((_DWORD *)v5 + 5) = 1065353216;
  *(_DWORD *)v5 = 1065353216;
  *((_DWORD *)v5 + 12) = LODWORD(v3) ^ _xmm;
  *((_DWORD *)v5 + 13) = LODWORD(v4) ^ _xmm;
  v50 = *((_DWORD *)this + 193);
  v55 = 1065353216;
  D2DMatrixMultiply((struct D2DMatrix *)v5, (const struct D2DMatrix *)v5, (const struct D2DMatrix *)&v40);
  v18 = *((_DWORD *)this + 255);
  v19 = 0.0;
  v20 = 0.0;
  if ( v18 )
  {
    v21 = v18 - 1;
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        v19 = (float)(v14 * *((float *)this + 201)) + (float)((float)(1.0 - v14) * *((float *)this + 195));
        v20 = (float)((float)(1.0 - v17) * *((float *)this + 194)) + (float)(v17 * *((float *)this + 200));
      }
      goto LABEL_16;
    }
    v22 = *((_DWORD *)this + 218);
    v23 = *((_DWORD *)this + 220);
    v24 = *((_DWORD *)this + 219);
    v25 = *((_DWORD *)this + 221);
  }
  else
  {
    v22 = *((_DWORD *)this + 214);
    v23 = *((_DWORD *)this + 216);
    v24 = *((_DWORD *)this + 215);
    v25 = *((_DWORD *)this + 217);
  }
  v26 = v25 - v24;
  v27 = 0;
  if ( v26 >= 0 )
    v27 = v26;
  v28 = (float)v27;
  v29 = 0;
  v30 = v23 - v22;
  if ( v30 >= 0 )
    v29 = v30;
  v19 = (float)((float)(v28 * *((float *)this + 201)) + (float)v24)
      - (float)(v16 - (float)((float)((float)(0.5 - *((float *)this + 195)) * v14) + *((float *)this + 195)));
  v20 = (float)((float)((float)v29 * *((float *)this + 200)) + (float)v22)
      - (float)(v15 - (float)((float)((float)(0.5 - *((float *)this + 194)) * v17) + *((float *)this + 194)));
LABEL_16:
  v31 = *((float *)this + 195);
  v32 = *((float *)this + 194) - v20;
  v51 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v54 = 0;
  v52 = v32;
  v53 = v31 - v19;
  v55 = 1065353216;
  v50 = 1065353216;
  v45 = 1065353216;
  v40 = 1.0;
  D2DMatrixMultiply((struct D2DMatrix *)v5, (const struct D2DMatrix *)v5, (const struct D2DMatrix *)&v40);
  v33 = *((float *)this + 235);
  if ( v33 != 0.0 )
  {
    D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)&v56, 0.0, 0.0, v33 * 0.017453292);
    D2DMatrixRotationQuaternion((struct D2DMatrix *)&v40, (const struct D2DQuaternion *)&v56);
    D2DMatrixMultiply((struct D2DMatrix *)v5, (const struct D2DMatrix *)v5, (const struct D2DMatrix *)&v40);
  }
  D3DXQuaternionRotationYawPitchRoll(
    (struct D2DQuaternion *)&v56,
    *((float *)this + 198) * 0.017453292,
    *((float *)this + 197) * 0.017453292,
    *((float *)this + 199) * 0.017453292);
  D2DMatrixRotationQuaternion((struct D2DMatrix *)v59, (const struct D2DQuaternion *)&v56);
  D2DMatrixMultiply((struct D2DMatrix *)v5, (const struct D2DMatrix *)v5, (const struct D2DMatrix *)v59);
  v51 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v54 = 0;
  v52 = v15 + v20;
  v53 = v19 + v16;
  v55 = 1065353216;
  v50 = 1065353216;
  v45 = 1065353216;
  v40 = 1.0;
  D2DMatrixMultiply((struct D2DMatrix *)v5, v34, (const struct D2DMatrix *)&v40);
  v58[2] = 0;
  v58[0] = 1056964608;
  v58[1] = 1056964608;
  D3DXVec3TransformCoord((struct D2DVector3 *)&v56, (const struct D2DVector3 *)v58, (const struct D2DMatrix *)v5);
  if ( *((_BYTE *)this + 1036) )
    v6 = v57;
  v35 = *((float *)this + 230) + *((float *)this + 190);
  v51 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v52 = 0.0;
  v53 = 0.0;
  v54 = COERCE_UNSIGNED_INT(v35 + v6) ^ _xmm;
  v55 = 1065353216;
  v50 = 1065353216;
  v45 = 1065353216;
  v40 = 1.0;
  D2DMatrixMultiply((struct D2DMatrix *)v5, (const struct D2DMatrix *)v5, (const struct D2DMatrix *)&v40);
  v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 36) + 16LL) + 1112LL))(
          *(_QWORD *)(*((_QWORD *)this + 36) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 36) + 24LL),
          v5);
  v37 = v36;
  if ( v36 >= 0 )
  {
    if ( *((float *)this + 186) != *((float *)this + 187) )
    {
      v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 39)
                                                                                            + 16LL)
                                                                              + 992LL))(
              *(_QWORD *)(*((_QWORD *)this + 39) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 39) + 24LL),
              *(unsigned int *)(*((_QWORD *)this + 38) + 24LL),
              0LL,
              *(_DWORD *)(*((_QWORD *)this + 38) + 24LL));
      v37 = v38;
      if ( v38 >= 0 )
        *((_DWORD *)this + 187) = *((_DWORD *)this + 186);
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x6ECu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x6E3u);
  }
  return v37;
}
