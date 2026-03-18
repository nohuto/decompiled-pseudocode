/*
 * XREFs of ?OneTimeSetupFromTemplate@CParticleEmitter@@IEAAXPEAVCDrawListPrimitive@@@Z @ 0x1801C6648
 * Callers:
 *     ?CreateParticlesPrimitive@CParticleEmitter@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1801C5390 (-CreateParticlesPrimitive@CParticleEmitter@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 * Callees:
 *     std::vector_Windows::Foundation::Numerics::float4_std::allocator_Windows::Foundation::Numerics::float4___::_Resize__lambda_0c2713a16b6fe99d6b55b0d81ace1f5d___ @ 0x1801C4110 (std--vector_Windows--Foundation--Numerics--float4_std--allocator_Windows--Foundation--Numerics--.c)
 *     std::vector_VertexXYW_ColorDW_UV2_std::allocator_VertexXYW_ColorDW_UV2___::_Resize__lambda_505eeb90d9a4969c15c30ab55ac8709d___ @ 0x1801C4230 (std--vector_VertexXYW_ColorDW_UV2_std--allocator_VertexXYW_ColorDW_UV2___--_Resize__lambda_505ee.c)
 *     std::vector_Windows::Foundation::Numerics::float2_std::allocator_Windows::Foundation::Numerics::float2___::_Resize__lambda_2ff4ffb0ae9e0c6fc701fcd0ab995068___ @ 0x1801C4368 (std--vector_Windows--Foundation--Numerics--float2_std--allocator_Windows--Foundation--Numerics--.c)
 *     std::vector_unsigned_short_std::allocator_unsigned_short___::_Resize__lambda_5d91c21a7dab2480088f44d5291e9dfa___ @ 0x1801C447C (std--vector_unsigned_short_std--allocator_unsigned_short___--_Resize__lambda_5d91c21a7dab2480088.c)
 */

void __fastcall CParticleEmitter::OneTimeSetupFromTemplate(CParticleEmitter *this, struct CDrawListPrimitive *a2)
{
  _QWORD *v2; // r14
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // r11d
  int v9; // r9d
  unsigned int v10; // ecx
  unsigned int i; // r10d
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  __int64 v16; // rbp
  unsigned int v17; // r8d
  int v18; // r15d
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // r11d
  int v22; // r10d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned int v28; // r9d
  __int64 v29; // r8
  int v30; // eax
  unsigned int v31; // edx
  __m128 v32; // xmm0
  float v33; // xmm2_4
  float v34; // xmm3_4
  __int64 v35; // rax
  __int64 v36; // rcx
  float v37; // xmm1_4
  float v38; // xmm0_4
  __int64 v39; // rax
  __m128 v40; // [rsp+20h] [rbp-38h]
  float v41[10]; // [rsp+30h] [rbp-28h]

  v2 = (_QWORD *)((char *)this + 424);
  v5 = (unsigned __int16)(*((_WORD *)this + 2790) * *((_WORD *)a2 + 4));
  if ( (__int64)(*((_QWORD *)this + 54) - *((_QWORD *)this + 53)) >> 5 != v5 )
  {
    std::vector_VertexXYW_ColorDW_UV2_std::allocator_VertexXYW_ColorDW_UV2___::_Resize__lambda_505eeb90d9a4969c15c30ab55ac8709d___(
      (__int64)this + 424,
      (unsigned __int16)(*((_WORD *)this + 2790) * *((_WORD *)a2 + 4)));
    std::vector_VertexXYW_ColorDW_UV2_std::allocator_VertexXYW_ColorDW_UV2___::_Resize__lambda_505eeb90d9a4969c15c30ab55ac8709d___(
      (__int64)this + 448,
      (unsigned int)v5);
  }
  std::vector_unsigned_short_std::allocator_unsigned_short___::_Resize__lambda_5d91c21a7dab2480088f44d5291e9dfa___(
    (_QWORD *)this + 59,
    *((_DWORD *)this + 1395) * *((_DWORD *)a2 + 4));
  v6 = *((_DWORD *)this + 1395);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( v6 > 0 )
  {
    v10 = *((_DWORD *)a2 + 4);
    do
    {
      for ( i = 0; i < v10; v10 = *((_DWORD *)a2 + 4) )
      {
        v12 = i++;
        v13 = v8++;
        *(_WORD *)(*((_QWORD *)this + 59) + 2 * v13) = v9 * *((_WORD *)a2 + 4)
                                                     + *(_WORD *)(*((_QWORD *)a2 + 6) + 2 * v12);
      }
      v6 = *((_DWORD *)this + 1395);
      ++v9;
    }
    while ( v9 < v6 );
  }
  v14 = *((_DWORD *)a2 + 2);
  v15 = 0;
  v16 = *((_QWORD *)a2 + 3);
  v17 = v6 * v14;
  v18 = 8 * *((_DWORD *)a2 + 3) + 16;
  if ( v6 * v14 )
  {
    v19 = *((_DWORD *)a2 + 2);
    v20 = v19;
    do
    {
      v21 = 0;
      if ( v19 )
      {
        v22 = 0;
        do
        {
          ++v21;
          v23 = v22;
          v22 += v18;
          v24 = v15++;
          *(_OWORD *)(32 * v24 + *v2 + 16) = *(_OWORD *)(v23 + v16 + 16);
          v20 = *((_DWORD *)a2 + 2);
        }
        while ( v21 < v20 );
      }
      v19 = v20;
    }
    while ( v15 < v17 );
    v25 = 0LL;
    v26 = v17;
    do
    {
      v27 = *((_QWORD *)this + 56);
      v25 += 32LL;
      *(_DWORD *)(v25 + v27 - 24) = 0;
      *(_DWORD *)(v25 + v27 - 20) = 1065353216;
      *(_OWORD *)(v25 + v27 - 16) = *(_OWORD *)(v25 + *v2 - 16);
      --v26;
    }
    while ( v26 );
    v14 = *((_DWORD *)a2 + 2);
  }
  std::vector_Windows::Foundation::Numerics::float4_std::allocator_Windows::Foundation::Numerics::float4___::_Resize__lambda_0c2713a16b6fe99d6b55b0d81ace1f5d___(
    (__int64)this + 496,
    v14);
  v28 = 0;
  if ( (__int64)(*((_QWORD *)this + 63) - *((_QWORD *)this + 62)) >> 4 )
  {
    v29 = 0LL;
    do
    {
      v30 = v28 * (*((_DWORD *)a2 + 3) + 2);
      ++v28;
      v31 = *(_DWORD *)(8 * v30 + *((_QWORD *)a2 + 3) + 12LL);
      v40.m128_f32[0] = (float)(unsigned __int8)v31 / 255.0;
      v40.m128_f32[1] = (float)BYTE1(v31) / 255.0;
      v40.m128_f32[2] = (float)BYTE2(v31) / 255.0;
      v40.m128_f32[3] = (float)HIBYTE(v31) / 255.0;
      v41[0] = v40.m128_f32[0];
      LODWORD(v41[3]) = _mm_shuffle_ps(v40, v40, 255).m128_u32[0];
      LODWORD(v41[1]) = _mm_shuffle_ps(v40, v40, 85).m128_u32[0];
      LODWORD(v41[2]) = _mm_shuffle_ps(v40, v40, 170).m128_u32[0];
      *(_OWORD *)(*((_QWORD *)this + 62) + 16 * v29) = *(_OWORD *)v41;
      v29 = v28;
    }
    while ( v28 < (unsigned __int64)((__int64)(*((_QWORD *)this + 63) - *((_QWORD *)this + 62)) >> 4) );
  }
  std::vector_Windows::Foundation::Numerics::float2_std::allocator_Windows::Foundation::Numerics::float2___::_Resize__lambda_2ff4ffb0ae9e0c6fc701fcd0ab995068___(
    (__int64 *)this + 65,
    *((unsigned int *)a2 + 2));
  v32 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 56));
  v33 = _mm_shuffle_ps(v32, v32, 170).m128_f32[0] - v32.m128_f32[0];
  v34 = _mm_shuffle_ps(v32, v32, 255).m128_f32[0] - _mm_shuffle_ps(v32, v32, 85).m128_f32[0];
  if ( *((_DWORD *)a2 + 2) )
  {
    do
    {
      v35 = *((_QWORD *)a2 + 5);
      v36 = v7++;
      v37 = *(float *)(v35 + 8 * v36);
      v38 = *(float *)(v35 + 8 * v36 + 4);
      v39 = *((_QWORD *)this + 65);
      *(float *)(v39 + 8 * v36) = (float)(v37 - (float)(v33 * 0.5)) / v33;
      *(float *)(v39 + 8 * v36 + 4) = (float)(v38 - (float)(v34 * 0.5)) / v34;
    }
    while ( v7 < *((_DWORD *)a2 + 2) );
  }
}
