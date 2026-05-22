/*
 * XREFs of ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800966A8
 * Callers:
 *     ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x180096C64 (-OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180021D94 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x180064F08 (-Release@-$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ.c)
 *     ?EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800969D8 (-EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     ?XMScalarACos@DirectX@@YAMM@Z @ 0x180096E7C (-XMScalarACos@DirectX@@YAMM@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x180096F74 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall MPCHeadMovementDetector::AccumulateYawVelocity(__int64 **this)
{
  bool result; // al
  __int64 *v3; // rdi
  __int64 (__fastcall *v4)(__int64 *, LARGE_INTEGER, __int64 *); // rbx
  int v5; // eax
  const char *v6; // r9
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  const char *v10; // r9
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  __m128 v17; // xmm6
  float v18; // xmm0_4
  __m128 v19; // xmm3
  __m128 v20; // xmm1
  __m128 v21; // xmm3
  __m128 v22; // xmm1
  __m128 v23; // xmm3
  __m128 v24; // xmm6
  __int32 v25; // [rsp+38h] [rbp-39h] BYREF
  float v26; // [rsp+3Ch] [rbp-35h]
  float v27; // [rsp+40h] [rbp-31h]
  __int64 v28; // [rsp+48h] [rbp-29h] BYREF
  __int64 v29; // [rsp+50h] [rbp-21h] BYREF
  __int64 v30; // [rsp+58h] [rbp-19h] BYREF
  float v31[4]; // [rsp+60h] [rbp-11h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-1h] BYREF
  __int64 v33; // [rsp+78h] [rbp+7h]
  __int128 v34; // [rsp+80h] [rbp+Fh] BYREF
  __m128 v35; // [rsp+90h] [rbp+1Fh] BYREF
  __int128 v36; // [rsp+A0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v33 = -2LL;
  result = MPCHeadMovementDetector::EnsureFrameOfReference((MPCHeadMovementDetector *)this);
  if ( result )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v29 = 0LL;
    v3 = this[12];
    v4 = *(__int64 (__fastcall **)(__int64 *, LARGE_INTEGER, __int64 *))(*v3 + 56);
    RefPtr<IRemoteTextInputState>::Release(&v29);
    v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v4)(v3, (LARGE_INTEGER)PerformanceCount.QuadPart, &v29);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        196LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    if ( !v29 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        197LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v6);
      __debugbreak();
    }
    v30 = 0LL;
    v7 = this[11];
    v8 = *v7;
    v30 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v8 + 88))(v7, v29, &v30);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        203LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    if ( !v30 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        204LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v10);
      __debugbreak();
    }
    v28 = 0LL;
    v11 = this[10];
    v12 = *v11;
    v28 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v12 + 88))(v11, v29, v30, &v28);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        207LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = v28;
    if ( v28 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v28 + 56LL))(v28, &v36);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          213LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
      v34 = v36;
      v25 = 0;
      v26 = FLOAT_1_0;
      v27 = 0.0;
      Windows::Foundation::Numerics::transform(v31, &v25, &v34);
      v16 = (*(__int64 (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v28 + 80LL))(v28, &v35);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          218LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      v17 = v35;
      v18 = DirectX::XMScalarACos(retaddr, 1.0);
      v19 = _mm_mul_ps(v17, v17);
      v20 = _mm_shuffle_ps(v19, v19, 153);
      v19.m128_f32[0] = (float)(v19.m128_f32[0] + v20.m128_f32[0]) + _mm_shuffle_ps(v20, v20, 85).m128_f32[0];
      v21 = _mm_shuffle_ps(v19, v19, 0);
      v22 = _mm_sqrt_ps(v21);
      v23 = _mm_cmpneq_ps(v21, DirectX::g_XMInfinity);
      v24 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps(v17, v22), _mm_cmpneq_ps(v22, (__m128)0LL)), v23),
              _mm_andnot_ps(v23, DirectX::g_XMQNaN));
      v25 = v24.m128_i32[0];
      v26 = _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
      v27 = _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
      *((float *)this + 26) = (float)((float)((float)((float)(v31[0] * v24.m128_f32[0]) + (float)(v31[1] * v26))
                                            + (float)(v31[2] * v27))
                                    * (float)(v18 + v18))
                            + *((float *)this + 26);
      ++*((_DWORD *)this + 27);
      v14 = v28;
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v29);
    return 1;
  }
  return result;
}
