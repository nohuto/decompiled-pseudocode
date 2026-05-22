/*
 * XREFs of ?QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z @ 0x1800D8940
 * Callers:
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAUInputInfo@@@Z @ 0x180093228 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     asinf_0 @ 0x180037813 (asinf_0.c)
 *     atan2f_0 @ 0x18003781F (atan2f_0.c)
 *     ??$IsValidFloat@M@Details@@YA_NM@Z @ 0x1800D6D60 (--$IsValidFloat@M@Details@@YA_NM@Z.c)
 *     ?XMMatrixRotationQuaternion@DirectX@@YQ?AUXMMATRIX@1@T__m128@@@Z @ 0x1800D8CB4 (-XMMatrixRotationQuaternion@DirectX@@YQ-AUXMMATRIX@1@T__m128@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::QuaternionToEulerAngles(
        __m128 *this,
        const struct DirectX::XMFLOAT4 *a2,
        float *a3,
        float *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 result; // rax
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm1
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm4
  __m128 v19; // xmm2
  float v20; // xmm7_4
  float v21; // xmm8_4
  float v22; // xmm0_4
  float v23; // xmm6_4
  __m128 Y; // [rsp+28h] [rbp-39h]
  __m128 v25; // [rsp+38h] [rbp-29h]
  float X; // [rsp+48h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( !a2 )
  {
    v7 = 552LL;
LABEL_3:
    v8 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !a3 )
  {
    v7 = 553LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v7 = 554LL;
    goto LABEL_3;
  }
  *(_DWORD *)a2 = 0;
  *a3 = 0.0;
  *a4 = 0.0;
  v10 = _mm_mul_ps(*this, *this);
  v11 = _mm_shuffle_ps(v10, v10, 238);
  v12 = _mm_add_ps(v10, v11);
  v13 = _mm_shuffle_ps(v12, v12, 64);
  v14 = _mm_add_ps(v13, _mm_shuffle_ps(v11, v13, 240));
  v15 = _mm_shuffle_ps(v14, v14, 170);
  v16 = _mm_sqrt_ps(v15);
  v17 = _mm_cmpneq_ps(DirectX::g_XMInfinity, v15);
  v18 = _mm_div_ps(*this, v16);
  v19 = _mm_cmpneq_ps(v16, (__m128)0LL);
  v11.m128_u64[1] = _mm_or_ps(_mm_and_ps(_mm_and_ps(v18, v19), v17), _mm_andnot_ps(v17, DirectX::g_XMQNaN)).m128_u64[1];
  *(double *)v11.m128_u64 = DirectX::XMMatrixRotationQuaternion();
  v20 = 0.0;
  v21 = 0.0;
  v25 = _mm_shuffle_ps((__m128)0LL, v19, 73);
  Y = _mm_shuffle_ps(v11, _mm_shuffle_ps(v11, (__m128)0LL, 10), 132);
  LODWORD(X) = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  v22 = asinf_0(_mm_shuffle_ps(v25, v25, 85).m128_f32[0] * -1.0);
  v23 = v22;
  if ( v22 >= 1.5707964 )
  {
    v21 = atan2f_0(Y.m128_f32[1] * -1.0, Y.m128_f32[0]);
  }
  else if ( v22 <= -1.5707964 )
  {
    v23 = atan2f_0(Y.m128_f32[1] * -1.0, Y.m128_f32[0]) * -1.0;
  }
  else
  {
    v21 = atan2f_0(Y.m128_f32[2], X);
    v20 = atan2f_0(Y.m128_f32[3], v25.m128_f32[0]);
  }
  if ( !Details::IsValidFloat<float>(v23) )
  {
    v8 = -2147024809;
    v7 = 588LL;
    goto LABEL_4;
  }
  if ( !Details::IsValidFloat<float>(v21) )
  {
    v8 = -2147024809;
    v7 = 589LL;
    goto LABEL_4;
  }
  if ( !Details::IsValidFloat<float>(v20) )
  {
    v8 = -2147024809;
    v7 = 590LL;
    goto LABEL_4;
  }
  *(float *)a2 = v23;
  result = 0LL;
  *a3 = v21;
  *a4 = v20;
  return result;
}
