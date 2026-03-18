/*
 * XREFs of ?UpdateParticles@CParticleEmitter@@IEAAXM@Z @ 0x1801C7A78
 * Callers:
 *     ?Update@CParticleEmitter@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801C7770 (-Update@CParticleEmitter@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x180149254 (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z.c)
 *     ?EraseIndexList@Particles@CParticleEmitter@@QEAAXAEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801C5C3C (-EraseIndexList@Particles@CParticleEmitter@@QEAAXAEBV-$vector@HV-$allocator@H@std@@@std@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CParticleEmitter::UpdateParticles(CParticleEmitter *this, double a2)
{
  _BYTE *v2; // rdx
  __int64 v3; // rbx
  _BYTE *v4; // r8
  __int64 v6; // rbx
  __m128 v7; // xmm7
  __int64 v8; // rcx
  float v9; // xmm1_4
  __int64 v10; // rcx
  unsigned int v11; // r14d
  unsigned __int64 v12; // rbx
  __int64 v13; // r15
  __m128 v14; // xmm6
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // r8d
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __m128 v20; // xmm2
  __m128 v21; // [rsp+20h] [rbp-50h]
  void *v22; // [rsp+30h] [rbp-40h] BYREF
  _BYTE *v23; // [rsp+38h] [rbp-38h]
  _BYTE *v24; // [rsp+40h] [rbp-30h]
  int v25; // [rsp+90h] [rbp+20h] BYREF

  v2 = 0LL;
  v3 = *((_QWORD *)this + 26) - *((_QWORD *)this + 25);
  v4 = 0LL;
  v22 = 0LL;
  v6 = v3 >> 2;
  v7 = *(__m128 *)&a2;
  v23 = 0LL;
  v24 = 0LL;
  while ( v6 )
  {
    --v6;
    v8 = *((_QWORD *)this + 25);
    v9 = *(float *)(v8 + 4 * v6) - (float)(v7.m128_f32[0] / *(float *)(*((_QWORD *)this + 28) + 4 * v6));
    *(float *)(v8 + 4 * v6) = v9;
    if ( v9 <= 0.0 )
    {
      v25 = v6;
      if ( v4 == v2 )
      {
        std::vector<int>::_Emplace_reallocate<int>((const void **)&v22, v2, &v25);
        v4 = v24;
        v2 = v23;
      }
      else
      {
        *(_DWORD *)v2 = v6;
        v2 += 4;
        v23 = v2;
      }
    }
  }
  CParticleEmitter::Particles::EraseIndexList((__int64)this + 56, (__int64)&v22);
  v10 = *((_QWORD *)this + 11);
  v11 = 0;
  v12 = (v10 - *((_QWORD *)this + 10)) >> 4;
  if ( v12 )
  {
    v13 = 0LL;
    v14 = _mm_shuffle_ps(v7, v7, 0);
    do
    {
      v15 = 2 * v13;
      *(__m128 *)(*((_QWORD *)this + 10) + 8 * v15) = _mm_add_ps(
                                                        *(__m128 *)(*((_QWORD *)this + 10) + 16 * v13),
                                                        _mm_mul_ps(*(__m128 *)((char *)this + 392), v14));
      v21.m128_u64[0] = 0x3F8000003F800000LL;
      v21.m128_u64[1] = 0x3F8000003F800000LL;
      *(__m128 *)(*((_QWORD *)this + 10) + 8 * v15) = _mm_mul_ps(
                                                        *(__m128 *)(*((_QWORD *)this + 10) + 16 * v13),
                                                        _mm_sub_ps(
                                                          v21,
                                                          _mm_mul_ps(*(__m128 *)((char *)this + 408), v14)));
      v16 = *((_QWORD *)this + 10);
      ++v11;
      *(float *)(*((_QWORD *)this + 13) + 4 * v13) = sqrtf_0(
                                                       (float)((float)(*(float *)(v16 + 16 * v13 + 4)
                                                                     * *(float *)(v16 + 16 * v13 + 4))
                                                             + (float)(*(float *)(v16 + 16 * v13)
                                                                     * *(float *)(v16 + 16 * v13)))
                                                     + (float)(*(float *)(v16 + 16 * v13 + 8)
                                                             * *(float *)(v16 + 16 * v13 + 8)));
      v13 = v11;
    }
    while ( v11 < v12 );
    v10 = *((_QWORD *)this + 11);
  }
  v17 = 0;
  v18 = (v10 - *((_QWORD *)this + 10)) >> 4;
  if ( v18 )
  {
    v19 = 0LL;
    v20 = _mm_shuffle_ps(v7, v7, 0);
    do
    {
      ++v17;
      *(__m128 *)(*((_QWORD *)this + 7) + 16 * v19) = _mm_add_ps(
                                                        *(__m128 *)(*((_QWORD *)this + 7) + 16 * v19),
                                                        _mm_mul_ps(*(__m128 *)(*((_QWORD *)this + 10) + 16 * v19), v20));
      v19 = v17;
    }
    while ( v17 < v18 );
  }
  if ( v22 )
    std::_Deallocate<16,0>(v22, (v24 - (_BYTE *)v22) & 0xFFFFFFFFFFFFFFFCuLL);
}
