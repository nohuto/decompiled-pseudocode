/*
 * XREFs of ?CreateParticlesPrimitive@CParticleEmitter@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1801C5390
 * Callers:
 *     ?GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C5CD0 (-GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180187518 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 *     ?OneTimeSetupFromTemplate@CParticleEmitter@@IEAAXPEAVCDrawListPrimitive@@@Z @ 0x1801C6648 (-OneTimeSetupFromTemplate@CParticleEmitter@@IEAAXPEAVCDrawListPrimitive@@@Z.c)
 *     ?make_float3x2_rotation@Numerics@Foundation@Windows@@YA?AUfloat3x2@123@MAEBUfloat2@123@@Z @ 0x1801C7EDC (-make_float3x2_rotation@Numerics@Foundation@Windows@@YA-AUfloat3x2@123@MAEBUfloat2@123@@Z.c)
 */

__int64 __fastcall CParticleEmitter::CreateParticlesPrimitive(
        CParticleEmitter *this,
        struct CDrawListPrimitive *a2,
        struct CDrawListPrimitive **a3)
{
  int v3; // eax
  struct CDrawListPrimitive *v4; // r15
  __int64 v6; // rdi
  unsigned int v7; // r13d
  unsigned int v8; // esi
  _DWORD *v9; // r10
  __int64 v10; // r9
  _DWORD *i; // r8
  __int64 v12; // r11
  __int64 v13; // rax
  int v14; // xmm1_4
  __int64 v15; // rdx
  unsigned int v16; // r12d
  __int64 v17; // r14
  unsigned int v18; // r10d
  __int64 v19; // r11
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  __m128 *v29; // r9
  unsigned int v30; // r14d
  __m128 *j; // r8
  __int64 v32; // r10
  __int64 v33; // r11
  __int64 v34; // rax
  __m128 v35; // xmm0
  __m128 v36; // xmm3
  __int64 v37; // rcx
  __m128 v38; // xmm3
  __int32 v39; // edx
  unsigned int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  unsigned int v46; // ebx
  float v48; // [rsp+40h] [rbp-39h]
  __int64 v49; // [rsp+48h] [rbp-31h] BYREF
  float v50; // [rsp+50h] [rbp-29h]
  float v51; // [rsp+54h] [rbp-25h]
  __m128 v52; // [rsp+58h] [rbp-21h] BYREF
  __int128 v53; // [rsp+70h] [rbp-9h] BYREF
  float v54; // [rsp+80h] [rbp+7h]
  float v55; // [rsp+84h] [rbp+Bh]
  unsigned int v56; // [rsp+E0h] [rbp+67h]
  unsigned int v57; // [rsp+E8h] [rbp+6Fh]
  __int32 v59; // [rsp+F8h] [rbp+7Fh] BYREF
  int v60; // [rsp+FCh] [rbp+83h]

  v3 = *((_DWORD *)this + 62);
  v4 = a2;
  v6 = *((unsigned int *)a2 + 2);
  v7 = v3 * *((_DWORD *)a2 + 4);
  v8 = v3 * *((_DWORD *)a2 + 2);
  v57 = v7;
  if ( !*((_BYTE *)this + 5776) )
  {
    CParticleEmitter::OneTimeSetupFromTemplate(this, a2);
    *((_BYTE *)this + 5776) = 1;
  }
  v9 = (_DWORD *)*((_QWORD *)this + 8);
  v10 = 0LL;
  for ( i = (_DWORD *)*((_QWORD *)this + 7); i != v9; i += 4 )
  {
    if ( (_DWORD)v6 )
    {
      v12 = v6;
      do
      {
        v13 = *((_QWORD *)this + 53);
        v14 = i[1];
        v15 = (unsigned int)v10;
        v10 = (unsigned int)(v10 + 1);
        a2 = (struct CDrawListPrimitive *)(32 * v15);
        *(_DWORD *)((char *)a2 + v13) = *i;
        *(_DWORD *)((char *)a2 + v13 + 4) = v14;
        *(_DWORD *)((char *)a2 + *((_QWORD *)this + 53) + 8) = i[3];
        --v12;
      }
      while ( v12 );
    }
  }
  v16 = 0;
  v56 = 0;
  if ( (__int64)(*((_QWORD *)this + 20) - *((_QWORD *)this + 19)) >> 3 )
  {
    v59 = 0;
    v60 = 0;
    v17 = 0LL;
    do
    {
      Windows::Foundation::Numerics::make_float3x2_rotation(&v53, a2, &v59, v10);
      v18 = v56;
      if ( (_DWORD)v6 )
      {
        v19 = 0LL;
        v20 = v6;
        do
        {
          v21 = *((_QWORD *)this + 65);
          v22 = *((_QWORD *)this + 19);
          v23 = *((_QWORD *)this + 22);
          a2 = (struct CDrawListPrimitive *)*((_QWORD *)this + 53);
          v24 = v18++;
          v10 = 32 * v24;
          v25 = *((float *)&v53 + 1) * *(float *)(v19 + v21);
          v26 = (float)(*(float *)&v53 * *(float *)(v19 + v21))
              + (float)(*((float *)&v53 + 2) * *(float *)(v19 + v21 + 4));
          v27 = *((float *)&v53 + 3) * *(float *)(v19 + v21 + 4);
          v19 += 8LL;
          v28 = (float)((float)((float)((float)(v25 + v27) + v55) * *(float *)(v22 + 8 * v17 + 4))
                      * *(float *)(v23 + 8 * v17 + 4))
              + *(float *)((char *)a2 + v10 + 4);
          *(float *)((char *)a2 + v10) = (float)((float)((float)(v26 + v54) * *(float *)(v22 + 8 * v17))
                                               * *(float *)(v23 + 8 * v17))
                                       + *(float *)((char *)a2 + v10);
          *(float *)((char *)a2 + v10 + 4) = v28;
          *(_DWORD *)(v10 + *((_QWORD *)this + 53) + 8) = 1065353216;
          --v20;
        }
        while ( v20 );
        v56 = v18;
      }
      v17 = ++v16;
    }
    while ( v16 < (unsigned __int64)((__int64)(*((_QWORD *)this + 20) - *((_QWORD *)this + 19)) >> 3) );
    v7 = v57;
  }
  v29 = (__m128 *)*((_QWORD *)this + 17);
  v30 = 0;
  for ( j = (__m128 *)*((_QWORD *)this + 16); j != v29; ++j )
  {
    if ( (_DWORD)v6 )
    {
      v32 = 0LL;
      v33 = v6;
      do
      {
        v34 = *((_QWORD *)this + 62);
        v35 = *j;
        v53 = 0uLL;
        v36 = *(__m128 *)(v32 + v34);
        v37 = v30;
        v52.m128_u64[0] = 0x3F8000003F800000LL;
        ++v30;
        v32 += 16LL;
        v52.m128_u64[1] = 0x3F8000003F800000LL;
        v38 = _mm_max_ps(_mm_min_ps(_mm_mul_ps(v36, v35), v52), (__m128)0LL);
        LODWORD(v49) = v38.m128_i32[0];
        v51 = _mm_shuffle_ps(v38, v38, 255).m128_f32[0];
        v50 = _mm_shuffle_ps(v38, v38, 170).m128_f32[0];
        *((float *)&v49 + 1) = _mm_shuffle_ps(v38, v38, 85).m128_f32[0];
        v35.m128_f32[0] = (float)(v51 * 255.0) + 6291456.25;
        v39 = v35.m128_i32[0];
        v35.m128_f32[0] = (float)(v50 * 255.0) + 6291456.25;
        v40 = (v35.m128_i32[0] << 15) | (v39 << 23) & 0xFF00FFFF;
        v35.m128_f32[0] = (float)(*((float *)&v49 + 1) * 255.0) + 6291456.25;
        v59 = v35.m128_i32[0];
        v48 = (float)(v38.m128_f32[0] * 255.0) + 6291456.25;
        *(_DWORD *)(32 * v37 + *((_QWORD *)this + 53) + 12) = ((int)(LODWORD(v48) << 10) >> 11) | (v35.m128_i32[0] << 10 >> 3) & 0xFFFFFF00 | v40 & 0xFFFF0000;
        --v33;
      }
      while ( v33 );
    }
  }
  if ( v8 )
  {
    v41 = 0LL;
    v42 = v8;
    do
    {
      *(_QWORD *)(v41 + *((_QWORD *)this + 56)) = *(_QWORD *)(*((_QWORD *)this + 53) + v41);
      v41 += 32LL;
      --v42;
    }
    while ( v42 );
  }
  v43 = *((_QWORD *)this + 59);
  *(_QWORD *)&v53 = v7;
  *((_QWORD *)&v53 + 1) = v43;
  if ( !v43 && v7 )
  {
    gsl::details::terminate((gsl::details *)v7);
    __debugbreak();
  }
  v49 = *((_QWORD *)this + 56);
  v52.m128_u64[0] = *((_QWORD *)this + 53);
  LODWORD(v50) = 32;
  v51 = *(float *)&v8;
  v52.m128_i32[2] = 32;
  v52.m128_i32[3] = v8;
  v44 = CDrawListPrimitive::Create(0, (__int64)&v52, (__int64)&v49, 2u, (__int64)&v53, (__int64)v4 + 88, 0, a3);
  v46 = v44;
  if ( v44 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0xFEu);
  return v46;
}
