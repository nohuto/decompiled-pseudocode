/*
 * XREFs of ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A13A8
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0D38 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001EEF0 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x18003B23C (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1800B6400 (-Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x1800B8028 (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x1800B8288 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800B83CC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateAnimated3DResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // r8d
  char *v3; // rdi
  float v4; // xmm8_4
  float v5; // xmm10_4
  int v6; // xmm2_4
  unsigned int v7; // eax
  __m128i v8; // xmm0
  int v9; // edx
  float v10; // xmm11_4
  int v11; // xmm1_4
  int v12; // ecx
  __m128i v13; // xmm5
  int v14; // eax
  float v15; // xmm5_4
  float v16; // xmm9_4
  float v17; // xmm10_4
  float v18; // xmm11_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  int v21; // ecx
  int v22; // ecx
  float v23; // xmm6_4
  float v24; // xmm7_4
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  float v28; // xmm0_4
  int v29; // edx
  int v30; // edx
  float v31; // xmm6_4
  int v32; // ecx
  int v33; // eax
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm3_4
  const struct D2DMatrix *v37; // rdx
  float v38; // xmm0_4
  const struct _D3DMATRIX *v39; // rdx
  int v40; // eax
  __int64 v41; // r8
  unsigned int v42; // edi
  float v43; // xmm0_4
  int v44; // eax
  float v46; // [rsp+38h] [rbp-D0h] BYREF
  int v47; // [rsp+3Ch] [rbp-CCh]
  int v48; // [rsp+40h] [rbp-C8h]
  int v49; // [rsp+44h] [rbp-C4h]
  int v50; // [rsp+48h] [rbp-C0h]
  int v51; // [rsp+4Ch] [rbp-BCh]
  int v52; // [rsp+50h] [rbp-B8h]
  int v53; // [rsp+54h] [rbp-B4h]
  int v54; // [rsp+58h] [rbp-B0h]
  int v55; // [rsp+5Ch] [rbp-ACh]
  int v56; // [rsp+60h] [rbp-A8h]
  int v57; // [rsp+64h] [rbp-A4h]
  float v58; // [rsp+68h] [rbp-A0h]
  float v59; // [rsp+6Ch] [rbp-9Ch]
  int v60; // [rsp+70h] [rbp-98h]
  int v61; // [rsp+74h] [rbp-94h]
  int v62; // [rsp+78h] [rbp-90h] BYREF
  float v63; // [rsp+80h] [rbp-88h]
  _DWORD v64[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v65[160]; // [rsp+98h] [rbp-70h] BYREF

  v1 = *((_DWORD *)this + 214);
  v3 = (char *)this + 516;
  v4 = 0.0;
  v5 = *((float *)this + 194);
  v6 = LODWORD(v5) ^ _xmm;
  v7 = 0;
  if ( (int)(*((_DWORD *)this + 216) - v1) >= 0 )
    v7 = *((_DWORD *)this + 216) - v1;
  v8 = _mm_cvtsi32_si128(v1);
  v9 = *((_DWORD *)this + 215);
  v10 = *((float *)this + 195);
  v11 = LODWORD(v10) ^ _xmm;
  v12 = *((_DWORD *)this + 217) - v9;
  v13 = _mm_cvtsi32_si128(v7);
  v14 = 0;
  if ( v12 >= 0 )
    v14 = v12;
  v60 = 0;
  v59 = 0.0;
  v58 = 0.0;
  v57 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v15 = _mm_cvtepi32_ps(v13).m128_f32[0];
  v63 = 0.0;
  v16 = (float)v14 * *((float *)this + 192);
  v17 = (float)((float)(v5 * v15) + _mm_cvtepi32_ps(v8).m128_f32[0]) + *((float *)this + 188);
  v46 = v15 * *((float *)this + 191);
  v51 = LODWORD(v16);
  v18 = (float)((float)(v10 * (float)v14) + (float)v9) + *((float *)this + 189);
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *(_QWORD *)(v3 + 4) = 0LL;
  *((_DWORD *)v3 + 15) = 1065353216;
  *((_DWORD *)v3 + 5) = 1065353216;
  *(_DWORD *)v3 = 1065353216;
  *((_DWORD *)v3 + 12) = v6;
  *((_DWORD *)v3 + 13) = v11;
  *((_QWORD *)v3 + 5) = 1065353216LL;
  *((_DWORD *)v3 + 14) = 0;
  v56 = *((_DWORD *)this + 193);
  v61 = 1065353216;
  D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)&v46);
  v21 = *((_DWORD *)this + 255);
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        v23 = (float)((float)(v19 - v20) * *((float *)this + 194)) + (float)(v20 * *((float *)this + 200));
        v24 = (float)(v16 * *((float *)this + 201)) + (float)((float)(v19 - v16) * *((float *)this + 195));
      }
      else
      {
        v24 = 0.0;
        v23 = 0.0;
      }
      goto LABEL_19;
    }
    v25 = *((_DWORD *)this + 218);
    v26 = 0;
    if ( *((_DWORD *)this + 220) - v25 >= 0 )
      v26 = *((_DWORD *)this + 220) - v25;
    v27 = *((_DWORD *)this + 221);
    v28 = (float)v25;
    v29 = *((_DWORD *)this + 219);
  }
  else
  {
    v30 = *((_DWORD *)this + 214);
    v26 = 0;
    if ( *((_DWORD *)this + 216) - v30 >= 0 )
      v26 = *((_DWORD *)this + 216) - v30;
    v27 = *((_DWORD *)this + 217);
    v28 = (float)v30;
    v29 = *((_DWORD *)this + 215);
  }
  v31 = (float)v26;
  v32 = v27 - v29;
  v33 = 0;
  if ( v32 >= 0 )
    v33 = v32;
  v23 = (float)((float)(v31 * *((float *)this + 200)) + v28)
      - (float)(v17 - (float)((float)((float)(0.5 - *((float *)this + 194)) * v20) + *((float *)this + 194)));
  v24 = (float)((float)((float)v33 * *((float *)this + 201)) + (float)v29)
      - (float)(v18 - (float)((float)((float)(0.5 - *((float *)this + 195)) * v16) + *((float *)this + 195)));
LABEL_19:
  v34 = *((float *)this + 194) - v23;
  v35 = *((float *)this + 195) - v24;
  v56 = 1065353216;
  v51 = 1065353216;
  v46 = 1.0;
  v58 = v34;
  v59 = v35;
  D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)&v46);
  v36 = *((float *)this + 235);
  if ( v36 != 0.0 )
  {
    D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)&v62, 0.0, 0.0, v36 * 0.017453292);
    D2DMatrixRotationQuaternion((struct D2DMatrix *)&v46, (const struct D2DQuaternion *)&v62);
    D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)&v46);
  }
  D3DXQuaternionRotationYawPitchRoll(
    (struct D2DQuaternion *)&v62,
    *((float *)this + 198) * 0.017453292,
    *((float *)this + 197) * 0.017453292,
    *((float *)this + 199) * 0.017453292);
  D2DMatrixRotationQuaternion((struct D2DMatrix *)v65, (const struct D2DQuaternion *)&v62);
  D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)v65);
  v57 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v60 = 0;
  v58 = v23 + v17;
  v59 = v24 + v18;
  v61 = 1065353216;
  v56 = 1065353216;
  v51 = 1065353216;
  v46 = 1.0;
  D2DMatrixMultiply((struct D2DMatrix *)v3, v37, (const struct D2DMatrix *)&v46);
  v64[2] = 0;
  v64[0] = 1056964608;
  v64[1] = 1056964608;
  D3DXVec3TransformCoord((struct D2DVector3 *)&v62, (const struct D2DVector3 *)v64, (const struct D2DMatrix *)v3);
  if ( *((_BYTE *)this + 1036) )
    v4 = v63;
  v38 = *((float *)this + 230) + *((float *)this + 190);
  v58 = 0.0;
  v59 = 0.0;
  v60 = COERCE_UNSIGNED_INT(v38 + v4) ^ _xmm;
  D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)&v46);
  v40 = CMatrixTransform3dProxy::Update(*((CMatrixTransform3dProxy **)this + 36), v39);
  v42 = v40;
  if ( v40 >= 0 )
  {
    v43 = *((float *)this + 186);
    if ( v43 != *((float *)this + 187) )
    {
      v44 = CEffectGroupProxy::Update(
              *((CEffectGroupProxy **)this + 39),
              v43,
              v41,
              *((const struct CTransform3dGroupProxy **)this + 38));
      v42 = v44;
      if ( v44 >= 0 )
        *((_DWORD *)this + 187) = *((_DWORD *)this + 186);
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x6D0u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x6CBu);
  }
  return v42;
}
