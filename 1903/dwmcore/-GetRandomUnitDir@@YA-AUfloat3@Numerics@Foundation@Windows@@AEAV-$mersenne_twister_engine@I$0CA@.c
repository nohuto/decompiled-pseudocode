/*
 * XREFs of ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x1801FF178
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z @ 0x1801EE158 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z.c)
 *     ?GetRandomOrientation@CParticleGenerator@@QEBA?AUfloat4@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x1801FEEAC (-GetRandomOrientation@CParticleGenerator@@QEBA-AUfloat4@Numerics@Foundation@Windows@@AEAV-$merse.c)
 * Callees:
 *     acosf_0 @ 0x1800EC497 (acosf_0.c)
 *     cosf_0 @ 0x1800EC4D3 (cosf_0.c)
 *     sinf_0 @ 0x1800EC50F (sinf_0.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x1801EAC10 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 */

float *__fastcall GetRandomUnitDir(float *a1, __int64 a2, float *a3, float *a4, char a5)
{
  float v9; // xmm6_4
  float v10; // xmm0_4
  float v11; // xmm7_4
  float v12; // xmm0_4
  float v13; // xmm10_4
  float v14; // xmm11_4
  float v15; // xmm12_4
  float v16; // xmm13_4
  float v17; // xmm9_4
  float v18; // xmm8_4
  float v19; // xmm7_4
  __m128 v20; // xmm3
  __m128 v21; // xmm2
  __m128 v22; // xmm1
  __m128 v23; // xmm3
  float v24; // xmm6_4
  float v25; // xmm0_4
  float *result; // rax
  unsigned __int64 v27; // [rsp+28h] [rbp-41h]

  v9 = (float)((float)(*a3 * *a4) + (float)(a4[1] * a3[1])) + (float)(a4[2] * a3[2]);
  v10 = acosf_0(v9);
  v11 = v10;
  if ( !a5 )
    v11 = 12.56 - v10;
  v12 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a2);
  v13 = *a3;
  v14 = a3[1];
  v15 = a3[2];
  v16 = (float)(v12 + 0.0) * v11;
  v17 = *a4 - (float)(*a3 * v9);
  v18 = a4[1] - (float)(v14 * v9);
  v19 = a4[2] - (float)(v15 * v9);
  if ( v17 != 0.0 || v18 != 0.0 || v19 != 0.0 )
  {
    *((float *)&v27 + 1) = a4[1] - (float)(a3[1] * v9);
    *(float *)&v27 = *a4 - (float)(*a3 * v9);
    v20 = _mm_movelh_ps((__m128)v27, (__m128)COERCE_UNSIGNED_INT(a4[2] - (float)(v15 * v9)));
    v21 = _mm_mul_ps(v20, v20);
    v22 = _mm_shuffle_ps(v21, v21, 102);
    v21.m128_f32[0] = (float)(v21.m128_f32[0] + v22.m128_f32[0]) + _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
    v23 = _mm_div_ps(v20, _mm_sqrt_ps(_mm_shuffle_ps(v21, v21, 0)));
    v17 = v23.m128_f32[0];
    LODWORD(v19) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
    LODWORD(v18) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
  }
  v24 = sinf_0(v16);
  v25 = cosf_0(v16);
  result = a1;
  *a1 = (float)(v13 * v25) + (float)(v17 * v24);
  a1[1] = (float)(v14 * v25) + (float)(v18 * v24);
  a1[2] = (float)(v15 * v25) + (float)(v19 * v24);
  return result;
}
