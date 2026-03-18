/*
 * XREFs of ?make_float3x2_rotation@Numerics@Foundation@Windows@@YA?AUfloat3x2@123@MAEBUfloat2@123@@Z @ 0x1801C7EDC
 * Callers:
 *     ?CreateParticlesPrimitive@CParticleEmitter@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1801C5390 (-CreateParticlesPrimitive@CParticleEmitter@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 * Callees:
 *     cosf_0 @ 0x1800F0003 (cosf_0.c)
 *     fmodf_0 @ 0x1800F001B (fmodf_0.c)
 *     sinf_0 @ 0x1800F003F (sinf_0.c)
 */

__int64 __fastcall Windows::Foundation::Numerics::make_float3x2_rotation(__int64 a1, float a2, float *a3)
{
  float v5; // xmm0_4
  float v6; // xmm6_4
  float v7; // xmm4_4
  float v8; // xmm7_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  __int64 result; // rax

  v5 = fmodf_0(a2, 6.2831855);
  v6 = v5;
  v7 = 0.0;
  if ( v5 < 0.0 )
    v6 = v5 + 6.2831855;
  if ( v6 < 0.000017453294 || v6 > 6.2831678 )
  {
    v8 = FLOAT_1_0;
  }
  else if ( v6 <= 1.570779 || v6 >= 1.5708138 )
  {
    if ( v6 <= 3.1415753 || v6 >= 3.1416101 )
    {
      if ( v6 <= 4.7123713 || v6 >= 4.7124066 )
      {
        v8 = cosf_0(v6);
        v7 = sinf_0(v6);
      }
      else
      {
        v7 = FLOAT_N1_0;
        v8 = 0.0;
      }
    }
    else
    {
      v8 = FLOAT_N1_0;
    }
  }
  else
  {
    v8 = 0.0;
    v7 = FLOAT_1_0;
  }
  v9 = *a3;
  v10 = a3[1];
  v11 = *a3;
  result = a1;
  *(_DWORD *)(a1 + 8) = LODWORD(v7) ^ _xmm;
  *(float *)a1 = v8;
  *(float *)(a1 + 12) = v8;
  *(float *)(a1 + 4) = v7;
  *(float *)(a1 + 16) = (float)(v11 * (float)(1.0 - v8)) + (float)(v10 * v7);
  *(float *)(a1 + 20) = (float)(v10 * (float)(1.0 - v8)) - (float)(v9 * v7);
  return result;
}
