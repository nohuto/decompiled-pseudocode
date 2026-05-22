/*
 * XREFs of ?Slerp@MPCMath@@YA?AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z @ 0x18012D888
 * Callers:
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18012CE04 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     acosf_0 @ 0x180037CF7 (acosf_0.c)
 *     cosf_0 @ 0x180037D27 (cosf_0.c)
 *     sinf_0 @ 0x180037D3F (sinf_0.c)
 */

float *__fastcall MPCMath::Slerp(float *a1, float *a2, float *a3, float a4)
{
  float v5; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm2_4
  float v9; // xmm9_4
  float v10; // xmm0_4
  float v11; // xmm10_4
  float v12; // xmm2_4
  float *v13; // rcx
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm10_4
  float v18; // xmm6_4
  float v19; // xmm0_4
  float *result; // rax
  float v21; // xmm8_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  int v24; // [rsp+B8h] [rbp+67h] BYREF
  int v25; // [rsp+C0h] [rbp+6Fh]
  float v26; // [rsp+D0h] [rbp+7Fh] BYREF

  v5 = FLOAT_1_0;
  v7 = *a3;
  v8 = *a3 * *a2;
  v25 = 1065353216;
  v9 = a3[1];
  v10 = v9 * a2[1];
  v24 = -1082130432;
  v11 = a3[2];
  v12 = (float)(v8 + v10) + (float)(v11 * a2[2]);
  v26 = v12;
  if ( v12 <= 1.0 )
  {
    v13 = &v26;
    if ( v12 < -1.0 )
      v13 = (float *)&v24;
    v5 = *v13;
  }
  v14 = acosf_0(v5) * a4;
  v15 = v7 - (float)(*a2 * v5);
  v16 = v9 - (float)(a2[1] * v5);
  v17 = v11 - (float)(a2[2] * v5);
  v18 = sinf_0(v14);
  v19 = cosf_0(v14);
  result = a1;
  v21 = (float)(v15 * v18) + (float)(v19 * *a2);
  v22 = v19 * a2[1];
  v23 = v19 * a2[2];
  *a1 = v21;
  a1[1] = (float)(v16 * v18) + v22;
  a1[2] = (float)(v17 * v18) + v23;
  return result;
}
