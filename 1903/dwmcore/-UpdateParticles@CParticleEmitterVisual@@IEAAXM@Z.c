/*
 * XREFs of ?UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801EEBB8
 * Callers:
 *     ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJPEBUD2D_SIZE_F@@@Z @ 0x1801EEAA4 (-UpdateParticleSystem@CParticleEmitterVisual@@IEAAJPEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     sqrtf_0 @ 0x1800EC51B (sqrtf_0.c)
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x180178BEC (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z.c)
 *     ?EraseIndexList@ParticleCollection@CParticleEmitterVisual@@QEAAXAEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801ECE9C (-EraseIndexList@ParticleCollection@CParticleEmitterVisual@@QEAAXAEBV-$vector@HV-$allocator@H@std.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CParticleEmitterVisual::UpdateParticles(CParticleEmitterVisual *this, double a2)
{
  _BYTE *v2; // rdx
  __int64 v3; // rdi
  _BYTE *v4; // r8
  __m128 v6; // xmm6
  __int64 v7; // rdi
  __int64 v8; // rcx
  float v9; // xmm0_4
  __int64 *v10; // r14
  __int64 v11; // rdi
  __m128 v12; // xmm8
  unsigned int v13; // r12d
  __m128 v14; // xmm9
  float v15; // xmm10_4
  unsigned __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rdx
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  float v22; // xmm0_4
  __m128 v23; // xmm2
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __m128 v31; // xmm2
  __m128 v32; // xmm1
  unsigned int v33; // r14d
  __int64 v34; // rsi
  __int64 v35; // rax
  float v36; // xmm1_4
  float v37; // xmm2_4
  __int64 v38; // rsi
  void *v39; // [rsp+40h] [rbp-31h] BYREF
  _BYTE *v40; // [rsp+48h] [rbp-29h]
  _BYTE *v41; // [rsp+50h] [rbp-21h]
  int v42; // [rsp+E0h] [rbp+6Fh] BYREF

  v2 = 0LL;
  v3 = *((_QWORD *)this + 96) - *((_QWORD *)this + 95);
  v4 = 0LL;
  v39 = 0LL;
  v6 = *(__m128 *)&a2;
  v7 = v3 >> 2;
  v40 = 0LL;
  v41 = 0LL;
  while ( v7 )
  {
    --v7;
    v8 = *((_QWORD *)this + 95);
    v9 = (float)(*(float *)&a2 / *(float *)(*((_QWORD *)this + 98) + 4 * v7)) + *(float *)(v8 + 4 * v7);
    *(float *)(v8 + 4 * v7) = v9;
    if ( v9 >= 1.0 )
    {
      v42 = v7;
      if ( v4 == v2 )
      {
        std::vector<int>::_Emplace_reallocate<int>((__int64)&v39, v2, &v42);
        v4 = v41;
        v2 = v40;
      }
      else
      {
        *(_DWORD *)v2 = v7;
        v2 += 4;
        v40 = v2;
      }
    }
  }
  v10 = (__int64 *)((char *)this + 568);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList((__int64)this + 568, (__int64)&v39);
  v11 = *((_QWORD *)this + 77);
  v12 = *(__m128 *)&a2;
  v12.m128_f32[0] = *(float *)&a2 * *((float *)this + 1555);
  v14 = *(__m128 *)&a2;
  v13 = 0;
  v14.m128_f32[0] = *(float *)&a2 * *((float *)this + 1556);
  v15 = *(float *)&a2 * *((float *)this + 1557);
  v16 = (*((_QWORD *)this + 78) - v11) / 12;
  if ( v16 )
  {
    v17 = 0LL;
    do
    {
      v18 = 3 * v17;
      v19 = v12;
      v19.m128_f32[0] = v12.m128_f32[0] + *(float *)(v11 + 12 * v17);
      v20 = v14;
      v21 = (__m128)(unsigned int)FLOAT_1_0;
      v20.m128_f32[0] = v14.m128_f32[0] + *(float *)(v11 + 12 * v17 + 4);
      v22 = v15 + *(float *)(v11 + 12 * v17 + 8);
      v19.m128_u64[0] = _mm_unpacklo_ps(v19, v20).m128_u64[0];
      v23 = (__m128)(unsigned int)FLOAT_1_0;
      *(_QWORD *)(v11 + 4 * v18) = v19.m128_u64[0];
      *(float *)(v11 + 4 * v18 + 8) = v22;
      v24 = *((_QWORD *)this + 77);
      v21.m128_f32[0] = (float)(1.0 - (float)(v6.m128_f32[0] * *((float *)this + 1558))) * *(float *)(v24 + 12 * v17);
      v23.m128_f32[0] = (float)(1.0 - (float)(v6.m128_f32[0] * *((float *)this + 1559)))
                      * *(float *)(v24 + 12 * v17 + 4);
      v19.m128_f32[0] = (float)(1.0 - (float)(v6.m128_f32[0] * *((float *)this + 1560)))
                      * *(float *)(v24 + 12 * v17 + 8);
      *(_QWORD *)(v24 + 4 * v18) = _mm_unpacklo_ps(v21, v23).m128_u64[0];
      *(_DWORD *)(v24 + 4 * v18 + 8) = v19.m128_i32[0];
      v11 = *((_QWORD *)this + 77);
      ++v13;
      *(float *)(*((_QWORD *)this + 83) + 4 * v17) = sqrtf_0(
                                                       (float)((float)(*(float *)(v11 + 12 * v17)
                                                                     * *(float *)(v11 + 12 * v17))
                                                             + (float)(*(float *)(v11 + 12 * v17 + 4)
                                                                     * *(float *)(v11 + 12 * v17 + 4)))
                                                     + (float)(*(float *)(v11 + 12 * v17 + 8)
                                                             * *(float *)(v11 + 12 * v17 + 8)));
      v17 = v13;
    }
    while ( v13 < v16 );
  }
  v25 = *((_QWORD *)this + 78) - v11;
  v26 = 0LL;
  v27 = (unsigned __int128)(v25 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v28 = v25 / 12;
  if ( v25 / 12 )
  {
    v29 = 0LL;
    do
    {
      v25 = *v10;
      v27 = 3 * v29;
      v30 = *((_QWORD *)this + 77);
      v31 = v6;
      v26 = (unsigned int)(v26 + 1);
      v32 = v6;
      v31.m128_f32[0] = (float)(v6.m128_f32[0] * *(float *)(v30 + 4 * v27)) + *(float *)(*v10 + 4 * v27);
      v32.m128_f32[0] = (float)(v6.m128_f32[0] * *(float *)(v30 + 4 * v27 + 4)) + *(float *)(*v10 + 4 * v27 + 4);
      *(float *)&v30 = (float)(v6.m128_f32[0] * *(float *)(v30 + 4 * v27 + 8)) + *(float *)(*v10 + 4 * v27 + 8);
      *(_QWORD *)(v25 + 4 * v27) = _mm_unpacklo_ps(v31, v32).m128_u64[0];
      *(_DWORD *)(v25 + 4 * v27 + 8) = v30;
      v29 = (unsigned int)v26;
    }
    while ( (unsigned int)v26 < v28 );
  }
  v33 = 0;
  if ( v28 )
  {
    v34 = 0LL;
    do
    {
      v35 = *((_QWORD *)this + 80);
      v36 = (float)(v6.m128_f32[0] * *((float *)this + 1562)) + *(float *)(v35 + 4 * v34);
      *(float *)(v35 + 4 * v34) = v36;
      v37 = (float)(1.0 - (float)(v6.m128_f32[0] * *((float *)this + 1561))) * v36;
      *(float *)(v35 + 4 * v34) = v37;
      v38 = 2 * v34;
      *(float *)(*((_QWORD *)this + 74) + 8 * v38 + 12) = (float)(v37 * v6.m128_f32[0])
                                                        + *(float *)(*((_QWORD *)this + 74) + 8 * v38 + 12);
      ++v33;
      *(float *)(*((_QWORD *)this + 74) + 8 * v38 + 12) = _o_remainderf(v25, v27, v26);
      v34 = v33;
    }
    while ( v33 < v28 );
  }
  if ( v39 )
    std::_Deallocate<16,0>(v39, (v41 - (_BYTE *)v39) & 0xFFFFFFFFFFFFFFFCuLL);
}
