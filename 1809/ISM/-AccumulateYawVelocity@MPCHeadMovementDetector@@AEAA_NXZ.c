/*
 * XREFs of ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x18005A4C0
 * Callers:
 *     _lambda_aa0eaa0d8a3377c6799a200e781869ec_::_lambda_invoker_cdecl_ @ 0x18005A1C0 (_lambda_aa0eaa0d8a3377c6799a200e781869ec_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x180059D84 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 *     ?EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ @ 0x18005A2F8 (-EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x18012DB2F (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall MPCHeadMovementDetector::AccumulateYawVelocity(MPCHeadMovementDetector *this)
{
  char result; // al
  __int64 v3; // rcx
  int v4; // eax
  const char *v5; // r9
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  const char *v9; // r9
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  __m128 v17; // xmm8
  float v18; // xmm1_4
  float v19; // xmm6_4
  float v20; // xmm4_4
  __m128 v21; // xmm3
  __m128 v22; // xmm0
  __m128 v23; // xmm3
  __m128 v24; // xmm1
  __m128 v25; // xmm3
  __m128 v26; // xmm8
  __int32 v27; // [rsp+38h] [rbp-69h] BYREF
  float v28; // [rsp+3Ch] [rbp-65h]
  float v29; // [rsp+40h] [rbp-61h]
  __int64 v30; // [rsp+48h] [rbp-59h] BYREF
  __int64 v31; // [rsp+50h] [rbp-51h] BYREF
  __int64 v32; // [rsp+58h] [rbp-49h] BYREF
  float v33[4]; // [rsp+60h] [rbp-41h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-31h] BYREF
  __int64 v35; // [rsp+78h] [rbp-29h]
  __int128 v36; // [rsp+80h] [rbp-21h] BYREF
  __m128 v37; // [rsp+90h] [rbp-11h] BYREF
  __int128 v38; // [rsp+A0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v35 = -2LL;
  result = MPCHeadMovementDetector::EnsureFrameOfReference(this);
  if ( !result )
    return result;
  QueryPerformanceCounter(&PerformanceCount);
  v3 = *((_QWORD *)this + 9);
  v31 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, LARGE_INTEGER, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, PerformanceCount, &v31);
  v6 = retaddr;
  if ( v4 < 0 )
    goto LABEL_22;
  if ( !v31 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      v5);
LABEL_24:
    wil::details::in1diag3::FailFast_Hr(
      v10,
      (void *)0xA9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v7 = *((_QWORD *)this + 8);
  v32 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, v31, &v32);
  v10 = retaddr;
  if ( v8 < 0 )
    goto LABEL_24;
  if ( !v32 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      v9);
LABEL_26:
    wil::details::in1diag3::FailFast_Hr(
      v13,
      (void *)0xAD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v11 = *((_QWORD *)this + 7);
  v30 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v11 + 88LL))(v11, v31, v32, &v30);
  v13 = retaddr;
  if ( v12 < 0 )
    goto LABEL_26;
  v14 = v30;
  if ( v30 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v30 + 56LL))(v30, &v38);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v15);
      JUMPOUT(0x18005A895LL);
    }
    v36 = v38;
    v27 = 0;
    v28 = 1.0;
    v29 = 0.0;
    Windows::Foundation::Numerics::transform(v33, (float *)&v27, (float *)&v36);
    v16 = (*(__int64 (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v30 + 80LL))(v30, &v37);
    if ( v16 >= 0 )
    {
      v17 = v37;
      v18 = _mm_shuffle_ps(v37, v37, 255).m128_f32[0];
      v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v18) & _xmm);
      v20 = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(0.0066700899 - (float)(v19 * 0.0012624911)) * v19)
                                                                                                  - 0.017088126)
                                                                                          * v19)
                                                                                  + 0.03089188)
                                                                          * v19)
                                                                  - 0.050174303)
                                                          * v19)
                                                  + 0.088978991)
                                          * v19)
                                  - 0.2145988)
                          * v19)
                  + 1.5707963)
          * sqrtf_0(fmaxf(0.0, 1.0 - v19));
      if ( v18 < 0.0 )
        v20 = 3.1415927 - v20;
      v21 = _mm_mul_ps(v17, v17);
      v22 = _mm_shuffle_ps(v21, v21, 153);
      v21.m128_f32[0] = (float)(v21.m128_f32[0] + v22.m128_f32[0]) + _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
      v23 = _mm_shuffle_ps(v21, v21, 0);
      v24 = _mm_sqrt_ps(v23);
      v25 = _mm_cmpneq_ps(v23, DirectX::g_XMInfinity);
      v26 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps(v17, v24), _mm_cmpneq_ps(v24, (__m128)0LL)), v25),
              _mm_andnot_ps(v25, DirectX::g_XMQNaN));
      v27 = v26.m128_i32[0];
      v28 = _mm_shuffle_ps(v26, v26, 85).m128_f32[0];
      v29 = _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
      *((float *)this + 20) = (float)((float)((float)((float)(v33[0] * v26.m128_f32[0]) + (float)(v33[1] * v28))
                                            + (float)(v33[2] * v29))
                                    * (float)(v20 + v20))
                            + *((float *)this + 20);
      ++*((_DWORD *)this + 21);
      v14 = v30;
      goto LABEL_13;
    }
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      (const char *)(unsigned int)v16);
LABEL_22:
    wil::details::in1diag3::FailFast_Hr(
      v6,
      (void *)0xA2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
LABEL_13:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  return 1;
}
