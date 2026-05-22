/*
 * XREFs of ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x180140164
 * Callers:
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18013FFF0 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084CA4 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 */

void __fastcall MPCClickerProcessor::ProcessPoints(
        MPCClickerProcessor *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm9_4
  float v10; // xmm10_4
  struct BamoMPCConstantManagerClientPrincipal *v11; // r14
  char *v12; // rdi
  int v13; // eax
  float v14; // xmm6_4
  const char *v15; // r9
  struct BamoMPCConstantManagerClientPrincipal *v16; // r14
  float v17; // xmm6_4
  int v18; // eax
  const char *v19; // r9
  float v20; // xmm8_4
  struct BamoMPCConstantManagerClientPrincipal *v21; // r14
  float v22; // xmm12_4
  int v23; // eax
  struct MPCHolographicInputManager *Instance; // rax
  const char *v25; // r9
  struct BamoMPCConstantManagerClientPrincipal *v26; // rsi
  int v27; // eax
  const char *v28; // r9
  float v29; // xmm0_4
  struct BamoMPCConstantManagerClientPrincipal *v30; // rsi
  int v31; // eax
  const char *v32; // r9
  float v33; // xmm0_4
  struct BamoMPCConstantManagerClientPrincipal *v34; // rsi
  int v35; // eax
  const char *v36; // r9
  float v37; // xmm0_4
  float v38; // xmm1_4
  struct MPCHolographicInputManager *v39; // rax
  float *v40; // rax
  struct BamoMPCConstantManagerClientPrincipal *v41; // rsi
  int v42; // eax
  const char *v43; // r9
  __m128 Static; // xmm0
  struct BamoMPCConstantManagerClientPrincipal *v45; // r14
  float *v46; // rsi
  __m128 v47; // xmm2
  __m128 v48; // xmm1
  int v49; // eax
  const char *v50; // r9
  __m128 v51; // xmm0
  struct BamoMPCConstantManagerClientPrincipal *v52; // r14
  __m128 v53; // xmm3
  __m128 v54; // xmm2
  __m128 v55; // xmm0
  int v56; // eax
  __m128 v57; // xmm0
  __m128 v58; // xmm0
  __m128 v59; // xmm2
  __m128 v60; // xmm1
  float v61; // eax
  float *v62; // rax
  struct MPCHolographicInputManager *v63; // rax
  __int64 v64; // xmm0_8
  float *v65; // rax
  __int64 v66; // [rsp+28h] [rbp-E0h] BYREF
  float v67; // [rsp+30h] [rbp-D8h]
  _OWORD v68[4]; // [rsp+38h] [rbp-D0h] BYREF
  float v69[4]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v70[952]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v71; // [rsp+440h] [rbp+338h]
  __int128 v72; // [rsp+450h] [rbp+348h]
  __int128 v73; // [rsp+460h] [rbp+358h]
  __int128 v74; // [rsp+470h] [rbp+368h]
  wil::details::in1diag3 *retaddr; // [rsp+9E0h] [rbp+8D8h]

  v4 = *((_BYTE *)this + 4668) == 0;
  v7 = (float)(*((float *)a2 + 178) + *((float *)this + 1163)) * 0.5;
  v8 = (float)(*((float *)a2 + 177) + *((float *)this + 1162)) * 0.5;
  v9 = 0.0;
  v10 = 0.0;
  *((float *)this + 1162) = v8;
  *((float *)this + 1163) = v7;
  if ( !v4 )
  {
    v9 = v8 - *((float *)this + 1164);
    v10 = v7 - *((float *)this + 1165);
  }
  v11 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v12 = (char *)this + 24;
  v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 48LL))((char *)this + 24);
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 - 0.0)) & _xmm);
  if ( MPCConstantManager::GetStaticConstant<float>((__int64)v11, v13, L"DeadZoneAngle").m128_f32[0] > v14 )
    v9 = 0.0;
  v16 = MPCConstantManager::s_instance;
  v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 1163) - 0.0)) & _xmm);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v15);
    __debugbreak();
  }
  v18 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 48LL))(v12);
  if ( MPCConstantManager::GetStaticConstant<float>((__int64)v16, v18, L"DeadZoneAngle").m128_f32[0] > v17 )
    v10 = 0.0;
  v20 = 0.0;
  if ( *((_BYTE *)a2 + 770) && (*((_BYTE *)a2 + 728) & 0x40) != 0 )
  {
    v21 = MPCConstantManager::s_instance;
    v22 = *((float *)a2 + 187);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v19);
      __debugbreak();
    }
    v23 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 48LL))(v12);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22 - 0.0)) & _xmm) > MPCConstantManager::GetStaticConstant<float>(
                                                                                    (__int64)v21,
                                                                                    v23,
                                                                                    L"ThumbStickDeadZone").m128_f32[0] )
    {
      v20 = (float)(v22 + *((float *)this + 1166)) * 0.5;
      *((float *)this + 1166) = v20;
    }
  }
  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v70, Instance, 0x8F0uLL);
  v4 = *((_BYTE *)a2 + 704) == 1;
  v26 = MPCConstantManager::s_instance;
  v68[0] = v71;
  v68[1] = v72;
  *((_DWORD *)this + 1160) = v4;
  v68[2] = v73;
  v68[3] = v74;
  if ( !v26 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v25);
    __debugbreak();
  }
  v27 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 48LL))(v12);
  v29 = MPCConstantManager::GetStaticConstant<float>((__int64)v26, v27, L"PointScaleFactorXY").m128_f32[0];
  v30 = MPCConstantManager::s_instance;
  *((float *)this + 1174) = (float)(v29 * v9) + *((float *)this + 1174);
  if ( !v30 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v28);
    __debugbreak();
  }
  v31 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 48LL))(v12);
  v33 = MPCConstantManager::GetStaticConstant<float>((__int64)v30, v31, L"PointScaleFactorXY").m128_f32[0];
  v34 = MPCConstantManager::s_instance;
  *((float *)this + 1175) = (float)(v33 * v10) + *((float *)this + 1175);
  if ( !v34 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v32);
    __debugbreak();
  }
  v35 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 48LL))(v12);
  v37 = MPCConstantManager::GetStaticConstant<float>((__int64)v34, v35, L"PointScaleFactorStick").m128_f32[0];
  v4 = *((_DWORD *)this + 1160) == 0;
  v38 = *((float *)this + 1176);
  *((_DWORD *)this + 1164) = *((_DWORD *)this + 1162);
  *((_DWORD *)this + 1165) = *((_DWORD *)this + 1163);
  *((_BYTE *)this + 4668) = 1;
  *((float *)this + 1176) = v38 - (float)(v37 * v20);
  if ( v4 )
  {
    v63 = MPCHolographicInputManager::GetInstance();
    v64 = *((_QWORD *)v63 + 28);
    LODWORD(v63) = *((_DWORD *)v63 + 58);
    v66 = v64;
    v67 = *(float *)&v63;
    v65 = Windows::Foundation::Numerics::transform(v69, (float *)&v66, (float *)v68);
    *(_QWORD *)((char *)this + 4684) = *(_QWORD *)v65;
    *((float *)this + 1173) = v65[2];
  }
  else if ( *((_DWORD *)this + 1161) )
  {
    v41 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v36);
      __debugbreak();
    }
    v42 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 48LL))(v12);
    Static = MPCConstantManager::GetStaticConstant<float>((__int64)v41, v42, L"PointScaleFactorXY");
    v45 = MPCConstantManager::s_instance;
    v46 = (float *)((char *)this + 4684);
    Static.m128_f32[0] = Static.m128_f32[0] * v9;
    v47 = Static;
    v47.m128_f32[0] = Static.m128_f32[0] * 0.0;
    Static.m128_f32[0] = Static.m128_f32[0] + *((float *)this + 1171);
    v48 = v47;
    v48.m128_f32[0] = v47.m128_f32[0] + *((float *)this + 1172);
    v47.m128_f32[0] = v47.m128_f32[0] + *((float *)this + 1173);
    v67 = v47.m128_f32[0];
    *(_QWORD *)((char *)this + 4684) = _mm_unpacklo_ps(Static, v48).m128_u64[0];
    *((_DWORD *)this + 1173) = v47.m128_i32[0];
    if ( !v45 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v43);
      __debugbreak();
    }
    v49 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 48LL))(v12);
    v51 = MPCConstantManager::GetStaticConstant<float>((__int64)v45, v49, L"PointScaleFactorXY");
    v52 = MPCConstantManager::s_instance;
    v53 = v51;
    v53.m128_f32[0] = v51.m128_f32[0] * v10;
    v54 = v53;
    v54.m128_f32[0] = (float)(v51.m128_f32[0] * v10) * 0.0;
    v53.m128_f32[0] = (float)(v51.m128_f32[0] * v10) + *((float *)this + 1172);
    v55 = v54;
    v55.m128_f32[0] = v54.m128_f32[0] + *v46;
    v54.m128_f32[0] = v54.m128_f32[0] + *((float *)this + 1173);
    v67 = v54.m128_f32[0];
    *(_QWORD *)v46 = _mm_unpacklo_ps(v55, v53).m128_u64[0];
    *((_DWORD *)this + 1173) = v54.m128_i32[0];
    if ( !v52 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v50);
      __debugbreak();
    }
    v56 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 48LL))(v12);
    v57 = MPCConstantManager::GetStaticConstant<float>((__int64)v52, v56, L"PointScaleFactorStick");
    v57.m128_f32[0] = v57.m128_f32[0] * v20;
    v58 = _mm_xor_ps(v57, (__m128)_xmm);
    v59 = v58;
    v59.m128_f32[0] = v58.m128_f32[0] * 0.0;
    v60 = v59;
    v67 = v58.m128_f32[0] + *((float *)this + 1173);
    v60.m128_f32[0] = (float)(v58.m128_f32[0] * 0.0) + *v46;
    v59.m128_f32[0] = (float)(v58.m128_f32[0] * 0.0) + *((float *)this + 1172);
    v61 = v67;
    *(_QWORD *)v46 = _mm_unpacklo_ps(v60, v59).m128_u64[0];
    *((float *)this + 1173) = v61;
    v62 = Windows::Foundation::Numerics::transform((float *)&v66, (float *)this + 1171, (float *)v68);
    *((_QWORD *)this + 584) = *(_QWORD *)v62;
    *((float *)this + 1170) = v62[2];
  }
  else
  {
    v39 = MPCHolographicInputManager::GetInstance();
    *(_QWORD *)((char *)this + 4684) = *((_QWORD *)v39 + 28);
    *((_DWORD *)this + 1173) = *((_DWORD *)v39 + 58);
    v40 = Windows::Foundation::Numerics::transform((float *)&v66, (float *)this + 1171, (float *)v68);
    *((_QWORD *)this + 584) = *(_QWORD *)v40;
    *(float *)&v40 = v40[2];
    v67 = 0.0;
    *((_DWORD *)this + 1170) = (_DWORD)v40;
    *(float *)&v40 = v67;
    *((_QWORD *)this + 587) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 1176) = (_DWORD)v40;
    *((_BYTE *)this + 4668) = 0;
  }
  *((_DWORD *)this + 1161) = *((_DWORD *)this + 1160);
}
