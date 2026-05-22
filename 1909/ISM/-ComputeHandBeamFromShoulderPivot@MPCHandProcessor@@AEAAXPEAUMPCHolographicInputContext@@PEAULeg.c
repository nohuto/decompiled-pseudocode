/*
 * XREFs of ?ComputeHandBeamFromShoulderPivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x180134BE4
 * Callers:
 *     ?PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180135E30 (-PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084A64 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x18012BB6C (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 *     _lambda_539e367ef9d8a6ad3cf0aac2c4d05e65_::operator() @ 0x180133FC0 (_lambda_539e367ef9d8a6ad3cf0aac2c4d05e65_--operator().c)
 */

void __fastcall MPCHandProcessor::ComputeHandBeamFromShoulderPivot(
        MPCHandProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3,
        const char *a4)
{
  struct BamoMPCConstantManagerClientPrincipal *v4; // rsi
  char *v8; // rbx
  unsigned __int64 v9; // rdi
  int v10; // eax
  char Static; // al
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned __int64 v15; // xmm0_8
  float v16; // eax
  float *v17; // rax
  unsigned __int64 v18; // xmm0_8
  int v19; // eax
  bool v20; // zf
  __int64 (__fastcall *v21)(unsigned __int64); // rax
  int v22; // eax
  unsigned __int32 v23; // xmm8_4
  int v24; // eax
  __m128 v25; // xmm7
  int v26; // eax
  __m128 v27; // xmm6
  int v28; // eax
  wchar_t *v29; // r8
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rax
  unsigned __int64 v34; // xmm1_8
  __m128 v35; // xmm6
  __m128 v36; // xmm7
  float v37; // xmm5_4
  float v38; // eax
  unsigned int v39; // xmm0_4
  __m128 v40; // xmm4
  __m128 v41; // xmm4
  __m128 v42; // xmm2
  __m128 v43; // xmm1
  __m128 v44; // xmm4
  __m128 v45; // xmm2
  int v46; // eax
  unsigned __int64 v47; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v48; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v49; // [rsp+38h] [rbp-D0h] BYREF
  float v50; // [rsp+40h] [rbp-C8h]
  float v51; // [rsp+48h] [rbp-C0h] BYREF
  float v52; // [rsp+4Ch] [rbp-BCh]
  float v53; // [rsp+50h] [rbp-B8h]
  _BYTE v54[4]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v55[4]; // [rsp+64h] [rbp-A4h] BYREF
  _BYTE v56[1376]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+620h] [rbp+518h]

  v4 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v8 = (char *)a3 + 704;
  v9 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v10 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
  Static = MPCConstantManager::GetStaticConstant<bool>((__int64)v4, v10, L"HandTargetRayStartInPalm");
  v12 = *(_OWORD *)(v8 + 1272);
  v55[0] = *(_OWORD *)(v8 + 1256);
  v13 = *(_OWORD *)(v8 + 1288);
  v55[1] = v12;
  v14 = *(_OWORD *)(v8 + 1304);
  v55[2] = v13;
  v55[3] = v14;
  if ( Static )
  {
    v15 = *((_QWORD *)v8 + 2);
    v16 = *((float *)v8 + 6);
  }
  else
  {
    v15 = *((_QWORD *)v8 + 64);
    v16 = *((float *)v8 + 130);
  }
  v49 = v15;
  v50 = v16;
  v17 = Windows::Foundation::Numerics::transform(&v51, (float *)&v49, (float *)v55);
  v18 = *(_QWORD *)v17;
  *(float *)&v48 = v17[2];
  v47 = v18;
  Windows::Foundation::Numerics::transform(&v51, (float *)&v47, (float *)a2);
  memcpy_0(v56, v8, 0x528uLL);
  v19 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
  v20 = MPCConstantManager::GetStaticConstant<bool>((__int64)v4, v19, L"IsDeviceProto") == 0;
  v21 = *(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL);
  if ( v20 )
  {
    v30 = v21(v9);
    v23 = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v30, L"EyeToHeadOffsetX_EV").m128_u32[0];
    v31 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
    v25 = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v31, L"HeadToPivotOffsetX_EV");
    v32 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
    v27 = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v32, L"HeadToPivotOffsetY_EV");
    v28 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
    v29 = L"HeadToPivotOffsetZ_EV";
  }
  else
  {
    v22 = v21(v9);
    v23 = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v22, L"EyeToHeadOffsetX_P").m128_u32[0];
    v24 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
    v25 = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v24, L"HeadToPivotOffsetX_P");
    v26 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
    v27 = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v26, L"HeadToPivotOffsetY_P");
    v28 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
    v29 = L"HeadToPivotOffsetZ_P";
  }
  LODWORD(v48) = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v28, v29).m128_u32[0];
  v50 = *(float *)&v48;
  v49 = _mm_unpacklo_ps(v25, v27).m128_u64[0];
  v33 = lambda_539e367ef9d8a6ad3cf0aac2c4d05e65_::operator()((__int64)v56, (__int64)v54, (__int64)&v49, *(float *)&v23);
  v34 = *(_QWORD *)v33;
  LODWORD(v48) = *(_DWORD *)(v33 + 8);
  v47 = v34;
  Windows::Foundation::Numerics::transform((float *)&v49, (float *)&v47, (float *)a2);
  v35 = (__m128)LODWORD(v52);
  v36 = (__m128)LODWORD(v51);
  v37 = v53;
  v38 = v53;
  *(float *)&v47 = v51 - *(float *)&v49;
  *(float *)&v39 = v53 - v50;
  *((float *)&v47 + 1) = v52 - *((float *)&v49 + 1);
  v40 = (__m128)v47;
  *((float *)a3 + 32) = v52;
  *((_DWORD *)a3 + 31) = v36.m128_i32[0];
  v41 = _mm_movelh_ps(v40, (__m128)v39);
  *((float *)a3 + 33) = v37;
  v42 = _mm_mul_ps(v41, v41);
  v43 = _mm_shuffle_ps(v42, v42, 102);
  v42.m128_f32[0] = (float)(v42.m128_f32[0] + v43.m128_f32[0]) + _mm_shuffle_ps(v43, v43, 85).m128_f32[0];
  v44 = _mm_div_ps(v41, _mm_sqrt_ps(_mm_shuffle_ps(v42, v42, 0)));
  *((_DWORD *)a3 + 34) = v44.m128_i32[0];
  v45 = _mm_shuffle_ps(v44, v44, 85);
  *((_DWORD *)a3 + 35) = v45.m128_i32[0];
  LODWORD(v48) = _mm_shuffle_ps(v44, v44, 170).m128_u32[0];
  *((_DWORD *)a3 + 36) = v48;
  *(_QWORD *)((char *)this + 8932) = _mm_unpacklo_ps(v36, v35).m128_u64[0];
  *((float *)this + 2235) = v38;
  v46 = v48;
  *((_QWORD *)this + 1118) = _mm_unpacklo_ps(v44, v45).m128_u64[0];
  *((_DWORD *)this + 2238) = v46;
  *((_BYTE *)this + 8928) = 1;
}
