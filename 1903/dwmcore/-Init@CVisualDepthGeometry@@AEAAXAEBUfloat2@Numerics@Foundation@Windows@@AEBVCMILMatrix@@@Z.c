/*
 * XREFs of ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180009ABC
 * Callers:
 *     ??0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180008B60 (--0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x180008BB8 (--0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18000BD64 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x18000BF94 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

void __fastcall CVisualDepthGeometry::Init(
        CVisualDepthGeometry *this,
        const struct Windows::Foundation::Numerics::float2 *a2,
        const struct CMILMatrix *a3)
{
  float v3; // xmm3_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float *v8; // rdi
  __int64 v9; // r8
  _QWORD *v10; // rdx
  FLOAT *p_y; // rcx
  __m128 v12; // xmm2
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  int v15; // r9d
  __int64 v16; // r11
  float *v17; // r8
  _OWORD *v18; // r10
  float v19; // xmm2_4
  int v20; // edx
  float v21; // xmm1_4
  const __m128i *v22; // rax
  float *v23; // rcx
  __int64 v24; // rdx
  __m128 v25; // xmm2
  __m128 v26; // xmm3
  __m128 v27; // xmm2
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  float v30; // xmm0_4
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  float v33; // xmm0_4
  float v34[6]; // [rsp+20h] [rbp-69h] BYREF
  float v35; // [rsp+38h] [rbp-51h]
  __int128 v36; // [rsp+40h] [rbp-49h] BYREF
  float v37; // [rsp+50h] [rbp-39h]
  int v38; // [rsp+54h] [rbp-35h]
  int v39; // [rsp+58h] [rbp-31h]
  int v40; // [rsp+5Ch] [rbp-2Dh]
  float v41; // [rsp+60h] [rbp-29h]
  float v42; // [rsp+64h] [rbp-25h]
  int v43; // [rsp+68h] [rbp-21h]
  int v44; // [rsp+6Ch] [rbp-1Dh]
  int v45; // [rsp+70h] [rbp-19h]
  float v46; // [rsp+74h] [rbp-15h]
  int v47; // [rsp+78h] [rbp-11h]
  int v48; // [rsp+7Ch] [rbp-Dh]
  struct D2D_VECTOR_4F v49; // [rsp+80h] [rbp-9h] BYREF
  struct D2D_VECTOR_4F v50; // [rsp+90h] [rbp+7h] BYREF
  struct D2D_VECTOR_4F v51; // [rsp+A0h] [rbp+17h] BYREF

  v3 = *(float *)a2;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)a2) & _xmm);
  if ( v5 < 0.0000011920929 )
    v3 = *(float *)&FLOAT_1_0;
  v6 = *((float *)a2 + 1);
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( v7 < 0.0000011920929 )
    v6 = *(float *)&FLOAT_1_0;
  v38 = 0;
  v39 = 0;
  v43 = 0;
  v45 = 0;
  v47 = 0;
  v37 = v3;
  v41 = v3;
  v42 = v6;
  v46 = v6;
  v36 = _xmm;
  v40 = 1065353216;
  v44 = 1065353216;
  v48 = 1065353216;
  CMILMatrix::Transform(a3, (const struct MilPoint4F *)&v36, (struct MilPoint4F *)&v49, 4u);
  v8 = (float *)((char *)this + 36);
  v9 = 4LL;
  v10 = (_QWORD *)((char *)this + 36);
  p_y = &v49.y;
  do
  {
    v12 = (__m128)(unsigned int)FLOAT_1_0;
    v12.m128_f32[0] = 1.0 / p_y[2];
    v13 = v12;
    v14 = v12;
    v13.m128_f32[0] = v12.m128_f32[0] * *(p_y - 1);
    v14.m128_f32[0] = v12.m128_f32[0] * *p_y;
    v12.m128_f32[0] = v12.m128_f32[0] * p_y[1];
    p_y += 4;
    *v10 = _mm_unpacklo_ps(v13, v14).m128_u64[0];
    v10 = (_QWORD *)((char *)v10 + 12);
    v35 = v12.m128_f32[0];
    *((_DWORD *)v10 - 1) = v12.m128_i32[0];
    --v9;
  }
  while ( v9 );
  v15 = 1;
  v16 = 4LL;
  v17 = (float *)((char *)this + 40);
  v18 = (_OWORD *)((char *)this + 84);
  do
  {
    v19 = *v17;
    v20 = v15 % 4;
    v34[0] = *(v17 - 1);
    ++v15;
    v17 += 3;
    v34[1] = v19;
    v21 = *((float *)this + 3 * v20 + 10) - v19;
    v34[2] = *((float *)this + 3 * v20 + 9) - v34[0];
    v34[3] = v21;
    *v18++ = *(_OWORD *)v34;
    --v16;
  }
  while ( v16 );
  v22 = (const __m128i *)D2DVectorHelper::CalculatePlane(
                           (D2DVectorHelper *)v34,
                           &v49,
                           &v50,
                           &v51,
                           *(const struct D2D_VECTOR_4F **)v34);
  v23 = (float *)((char *)this + 56);
  v24 = 3LL;
  v25 = (__m128)_mm_loadu_si128(v22);
  v34[0] = v25.m128_f32[0];
  LODWORD(v34[1]) = _mm_shuffle_ps(v25, v25, 85).m128_u32[0];
  LODWORD(v34[3]) = _mm_shuffle_ps(v25, v25, 255).m128_u32[0];
  LODWORD(v34[2]) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
  *((_OWORD *)this + 10) = *(_OWORD *)v34;
  v26 = (__m128)*((unsigned int *)this + 12);
  v27 = (__m128)*((unsigned int *)this + 13);
  v27.m128_f32[0] = (float)((float)(v27.m128_f32[0] + *((float *)this + 10)) + *((float *)this + 16))
                  + *((float *)this + 19);
  v26.m128_f32[0] = (float)((float)((float)(v26.m128_f32[0] + *v8) + *((float *)this + 15)) + *((float *)this + 18))
                  * 0.25;
  v35 = (float)((float)((float)(*((float *)this + 14) + *((float *)this + 11)) + *((float *)this + 17))
              + *((float *)this + 20))
      * 0.25;
  *(float *)&v22 = v35;
  v27.m128_f32[0] = v27.m128_f32[0] * 0.25;
  *(_QWORD *)((char *)this + 148) = _mm_unpacklo_ps(v26, v27).m128_u64[0];
  *((_DWORD *)this + 39) = (_DWORD)v22;
  *((_QWORD *)this + 1) = *(_QWORD *)v8;
  *((_DWORD *)this + 4) = *((_DWORD *)this + 11);
  *(_QWORD *)((char *)this + 20) = *(_QWORD *)v8;
  *((_DWORD *)this + 7) = *((_DWORD *)this + 11);
  do
  {
    v28 = (__m128)*((unsigned int *)this + 2);
    v29 = (__m128)*((unsigned int *)this + 3);
    v28.m128_f32[0] = fminf(v28.m128_f32[0], *(v23 - 2));
    v29.m128_f32[0] = fminf(v29.m128_f32[0], *(v23 - 1));
    v30 = fminf(*((float *)this + 4), *v23);
    *((_QWORD *)this + 1) = _mm_unpacklo_ps(v28, v29).m128_u64[0];
    v35 = v30;
    *((float *)this + 4) = v30;
    v31 = (__m128)*((unsigned int *)this + 5);
    v32 = (__m128)*((unsigned int *)this + 6);
    v31.m128_f32[0] = fmaxf(v31.m128_f32[0], *(v23 - 2));
    v32.m128_f32[0] = fmaxf(v32.m128_f32[0], *(v23 - 1));
    v33 = fmaxf(*((float *)this + 7), *v23);
    v23 += 3;
    v34[2] = v33;
    *(_QWORD *)((char *)this + 20) = _mm_unpacklo_ps(v31, v32).m128_u64[0];
    *((float *)this + 7) = v33;
    --v24;
  }
  while ( v24 );
  *((_DWORD *)this + 8) = -1;
}
