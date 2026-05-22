/*
 * XREFs of ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013C00C
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013A510 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084A64 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180138718 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 */

void __fastcall MPCMouseProcessor::ProcessPoints(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  const char *v5; // r9
  struct BamoMPCConstantManagerClientPrincipal *v6; // rsi
  float v7; // xmm6_4
  unsigned __int64 v8; // rbx
  int v9; // eax
  const char *v10; // r9
  __m128 Static; // xmm0
  struct BamoMPCConstantManagerClientPrincipal *v12; // rsi
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  float v15; // eax
  float v16; // xmm6_4
  int v17; // eax
  const char *v18; // r9
  __m128 v19; // xmm0
  struct BamoMPCConstantManagerClientPrincipal *v20; // rsi
  __m128 v21; // xmm0
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  float v24; // eax
  float v25; // xmm7_4
  int v26; // eax
  const char *v27; // r9
  __m128 v28; // xmm0
  struct BamoMPCConstantManagerClientPrincipal *v29; // rsi
  __m128 v30; // xmm0
  __m128 v31; // xmm2
  __m128 v32; // xmm1
  float v33; // eax
  float v34; // xmm6_4
  int v35; // eax
  const char *v36; // r9
  float v37; // xmm0_4
  struct BamoMPCConstantManagerClientPrincipal *v38; // rsi
  float v39; // xmm0_4
  float v40; // xmm6_4
  int v41; // eax
  const char *v42; // r9
  float v43; // xmm0_4
  struct BamoMPCConstantManagerClientPrincipal *v44; // rsi
  float v45; // xmm0_4
  float v46; // xmm6_4
  int v47; // eax
  struct MPCHolographicInputManager *v48; // rax
  struct MPCHolographicInputManager *v49; // rax
  float *v50; // rax
  int v51; // [rsp+28h] [rbp-E0h] BYREF
  float v52; // [rsp+30h] [rbp-D8h]
  float v53[16]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v54[952]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v55; // [rsp+430h] [rbp+328h]
  __int128 v56; // [rsp+440h] [rbp+338h]
  __int128 v57; // [rsp+450h] [rbp+348h]
  __int128 v58; // [rsp+460h] [rbp+358h]
  __int128 v59; // [rsp+968h] [rbp+860h] BYREF
  __int128 v60; // [rsp+978h] [rbp+870h]
  __int128 v61; // [rsp+988h] [rbp+880h]
  __int128 v62; // [rsp+998h] [rbp+890h]
  wil::details::in1diag3 *retaddr; // [rsp+9E0h] [rbp+8D8h]

  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v54, Instance, 0x8F0uLL);
  v59 = v55;
  v60 = v56;
  v61 = v57;
  v62 = v58;
  MPCMath::OrientToGravity((__int64)v53, (__int64)&v59, 0.89999998);
  v6 = MPCConstantManager::s_instance;
  v7 = (float)*((int *)this + 1567);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v5);
    __debugbreak();
  }
  v8 = ((unsigned __int64)this + 40) & -(__int64)(this != 0LL);
  v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(v8);
  Static = MPCConstantManager::GetStaticConstant<float>((__int64)v6, v9, L"MouseParams_PointScaleFactorXY");
  v12 = MPCConstantManager::s_instance;
  Static.m128_f32[0] = Static.m128_f32[0] * v7;
  v13 = Static;
  v14 = Static;
  v13.m128_f32[0] = (float)(Static.m128_f32[0] * v53[0]) + *((float *)this + 1576);
  v14.m128_f32[0] = (float)(Static.m128_f32[0] * v53[1]) + *((float *)this + 1577);
  v52 = (float)(Static.m128_f32[0] * v53[2]) + *((float *)this + 1578);
  v15 = v52;
  *((_QWORD *)this + 788) = _mm_unpacklo_ps(v13, v14).m128_u64[0];
  *((float *)this + 1578) = v15;
  v16 = (float)*((int *)this + 1568);
  if ( !v12 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v10);
    __debugbreak();
  }
  v17 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(((unsigned __int64)this + 40) & -(__int64)(this != 0LL));
  v19 = MPCConstantManager::GetStaticConstant<float>((__int64)v12, v17, L"MouseParams_PointScaleFactorXY");
  v20 = MPCConstantManager::s_instance;
  v19.m128_f32[0] = v19.m128_f32[0] * v16;
  v21 = _mm_xor_ps(v19, (__m128)(unsigned int)_xmm);
  v22 = v21;
  v23 = v21;
  v22.m128_f32[0] = (float)(v21.m128_f32[0] * v53[4]) + *((float *)this + 1576);
  v23.m128_f32[0] = (float)(v21.m128_f32[0] * v53[5]) + *((float *)this + 1577);
  v52 = (float)(v21.m128_f32[0] * v53[6]) + *((float *)this + 1578);
  v24 = v52;
  *((_QWORD *)this + 788) = _mm_unpacklo_ps(v22, v23).m128_u64[0];
  *((float *)this + 1578) = v24;
  v25 = (float)*((int *)this + 1570);
  if ( !v20 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v18);
    __debugbreak();
  }
  v26 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(((unsigned __int64)this + 40) & -(__int64)(this != 0LL));
  v28 = MPCConstantManager::GetStaticConstant<float>((__int64)v20, v26, L"MouseParams_PointScaleFactorWheel");
  v29 = MPCConstantManager::s_instance;
  v28.m128_f32[0] = v28.m128_f32[0] * v25;
  v30 = _mm_xor_ps(v28, (__m128)(unsigned int)_xmm);
  v31 = v30;
  v32 = v30;
  v31.m128_f32[0] = (float)(v30.m128_f32[0] * v53[8]) + *((float *)this + 1576);
  v32.m128_f32[0] = (float)(v30.m128_f32[0] * v53[9]) + *((float *)this + 1577);
  v52 = (float)(v30.m128_f32[0] * v53[10]) + *((float *)this + 1578);
  v33 = v52;
  *((_QWORD *)this + 788) = _mm_unpacklo_ps(v31, v32).m128_u64[0];
  *((float *)this + 1578) = v33;
  v34 = (float)*((int *)this + 1567);
  if ( !v29 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v27);
    __debugbreak();
  }
  v35 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(((unsigned __int64)this + 40) & -(__int64)(this != 0LL));
  v37 = MPCConstantManager::GetStaticConstant<float>((__int64)v29, v35, L"MouseParams_PointScaleFactorXY").m128_f32[0];
  v38 = MPCConstantManager::s_instance;
  v39 = v37 * v34;
  v40 = (float)*((int *)this + 1568);
  *((float *)this + 1579) = v39 + *((float *)this + 1579);
  if ( !v38 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v36);
    __debugbreak();
  }
  v41 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(((unsigned __int64)this + 40) & -(__int64)(this != 0LL));
  v43 = MPCConstantManager::GetStaticConstant<float>((__int64)v38, v41, L"MouseParams_PointScaleFactorXY").m128_f32[0];
  v44 = MPCConstantManager::s_instance;
  v45 = v43 * v40;
  v46 = (float)*((int *)this + 1570);
  *((float *)this + 1580) = *((float *)this + 1580) - v45;
  if ( !v44 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v42);
    __debugbreak();
  }
  v47 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(((unsigned __int64)this + 40) & -(__int64)(this != 0LL));
  *((float *)this + 1581) = (float)(MPCConstantManager::GetStaticConstant<float>(
                                      (__int64)v44,
                                      v47,
                                      L"MouseParams_PointScaleFactorWheel").m128_f32[0]
                                  * v46)
                          + *((float *)this + 1581);
  if ( (*((_BYTE *)this + 6288) & 0x70) != 0 && !*((_QWORD *)this + 576) )
  {
    v48 = MPCHolographicInputManager::GetInstance();
    *(_QWORD *)((char *)this + 6292) = *((_QWORD *)v48 + 28);
    *((_DWORD *)this + 1575) = *((_DWORD *)v48 + 58);
    v49 = MPCHolographicInputManager::GetInstance();
    memcpy_0(v54, v49, 0x8F0uLL);
    v59 = v55;
    v60 = v56;
    v61 = v57;
    v62 = v58;
    v50 = Windows::Foundation::Numerics::transform((float *)&v51, (float *)this + 1573, (float *)&v59);
    *((_QWORD *)this + 788) = *(_QWORD *)v50;
    *(float *)&v50 = v50[2];
    v52 = 0.0;
    *((_DWORD *)this + 1578) = (_DWORD)v50;
    *(float *)&v50 = v52;
    *(_QWORD *)((char *)this + 6316) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 1581) = (_DWORD)v50;
  }
}
