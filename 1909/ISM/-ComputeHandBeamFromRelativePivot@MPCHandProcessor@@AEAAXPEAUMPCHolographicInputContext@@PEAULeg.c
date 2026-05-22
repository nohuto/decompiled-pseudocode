/*
 * XREFs of ?ComputeHandBeamFromRelativePivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801346BC
 * Callers:
 *     ?PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180135E30 (-PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     atan2f_0 @ 0x18003781F (atan2f_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084A64 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x180096F74 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x18012BB6C (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x18012DDCC (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 */

void __fastcall MPCHandProcessor::ComputeHandBeamFromRelativePivot(
        MPCHandProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3,
        const char *a4)
{
  struct BamoMPCConstantManagerClientPrincipal *v4; // rsi
  unsigned __int64 v8; // rbx
  int v9; // eax
  char Static; // al
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned __int64 v14; // xmm0_8
  unsigned __int32 v15; // eax
  float *v16; // rax
  unsigned __int64 v17; // xmm0_8
  int v18; // eax
  float v19; // xmm0_4
  float v20; // xmm6_4
  int v21; // eax
  float v22; // xmm6_4
  int v23; // eax
  float v24; // xmm7_4
  __int64 (__fastcall *v25)(unsigned __int64); // rax
  int v26; // eax
  unsigned __int32 v27; // xmm0_4
  __int64 v28; // rax
  float v29; // xmm6_4
  int v30; // eax
  float v31; // xmm0_4
  unsigned int *v32; // rcx
  unsigned int v33; // xmm10_4
  int v34; // eax
  float v35; // xmm7_4
  int v36; // eax
  float v37; // xmm9_4
  int v38; // eax
  unsigned __int32 v39; // xmm0_4
  __int64 v40; // rax
  float v41; // xmm6_4
  int v42; // eax
  unsigned __int32 v43; // xmm0_4
  bool v44; // zf
  float v45; // xmm2_4
  float v46; // xmm1_4
  float v47; // xmm0_4
  unsigned int *v48; // rcx
  unsigned int v49; // xmm6_4
  int v50; // eax
  unsigned __int32 v51; // xmm0_4
  unsigned __int32 v52; // eax
  float v53; // xmm0_4
  float *quaternion_from_axis_angle; // rax
  __m128 v55; // xmm7
  float v56; // xmm2_4
  __m128 v57; // xmm6
  float v58; // xmm5_4
  float v59; // xmm0_4
  float v60; // xmm1_4
  __m128 v61; // xmm4
  __m128 v62; // xmm2
  __m128 v63; // xmm1
  __m128 v64; // xmm4
  __m128 v65; // xmm2
  float v66; // eax
  unsigned __int32 v67; // eax
  unsigned __int64 v68; // [rsp+28h] [rbp-99h] BYREF
  unsigned __int32 v69; // [rsp+30h] [rbp-91h]
  float v70; // [rsp+38h] [rbp-89h] BYREF
  float v71; // [rsp+3Ch] [rbp-85h] BYREF
  float v72; // [rsp+40h] [rbp-81h] BYREF
  float v73; // [rsp+44h] [rbp-7Dh]
  float v74; // [rsp+48h] [rbp-79h]
  unsigned __int64 v75; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int32 v76; // [rsp+58h] [rbp-69h]
  float v77[2]; // [rsp+60h] [rbp-61h] BYREF
  float v78; // [rsp+68h] [rbp-59h]
  _OWORD v79[9]; // [rsp+70h] [rbp-51h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]
  unsigned __int32 v81; // [rsp+140h] [rbp+7Fh] BYREF

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
  v8 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(v8);
  Static = MPCConstantManager::GetStaticConstant<bool>((__int64)v4, v9, L"HandTargetRayStartInPalm");
  v11 = *(_OWORD *)((char *)a3 + 1976);
  v79[0] = *(_OWORD *)((char *)a3 + 1960);
  v12 = *(_OWORD *)((char *)a3 + 1992);
  v79[1] = v11;
  v13 = *(_OWORD *)((char *)a3 + 2008);
  v79[2] = v12;
  v79[3] = v13;
  if ( Static )
  {
    v14 = *((_QWORD *)a3 + 90);
    v15 = *((_DWORD *)a3 + 182);
  }
  else
  {
    v14 = *((_QWORD *)a3 + 152);
    v15 = *((_DWORD *)a3 + 306);
  }
  v75 = v14;
  v76 = v15;
  v16 = Windows::Foundation::Numerics::transform(&v72, (float *)&v75, (float *)v79);
  v17 = *(_QWORD *)v16;
  v69 = *((_DWORD *)v16 + 2);
  v68 = v17;
  Windows::Foundation::Numerics::transform(v77, (float *)&v68, (float *)a2);
  v18 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(v8);
  v19 = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v18, L"DynamicPivotMultiplierY").m128_f32[0];
  v20 = 0.0;
  if ( (float)(v19 * *((float *)&v68 + 1)) < 0.0 )
  {
    v21 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(v8);
    v22 = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v21, L"DynamicPivotMultiplierY").m128_f32[0];
    v20 = v22 * *((float *)&v68 + 1);
  }
  v23 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(v8);
  v24 = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v23, L"DynamicPivotBaseY").m128_f32[0] + v20;
  v25 = *(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL);
  v70 = v24;
  v26 = v25(v8);
  v27 = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v26, L"DynamicPivotMaxY").m128_u32[0];
  v28 = *(_QWORD *)v8;
  v29 = *(float *)&v27;
  v81 = v27;
  v30 = (*(__int64 (__fastcall **)(unsigned __int64))(v28 + 48))(v8);
  LODWORD(v31) = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v30, L"DynamicPivotMinY").m128_u32[0];
  v71 = v31;
  if ( v24 <= v29 )
  {
    v32 = (unsigned int *)&v70;
    if ( v31 > v24 )
      v32 = (unsigned int *)&v71;
  }
  else
  {
    v32 = &v81;
  }
  v33 = *v32;
  v34 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(v8);
  LODWORD(v35) = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v34, L"DynamicPivotBaseX").m128_u32[0];
  v36 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(v8);
  LODWORD(v37) = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v36, L"DynamicPivotMultiplierX").m128_u32[0];
  v38 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(v8);
  v39 = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v38, L"DynamicPivotMinX").m128_u32[0];
  v40 = *(_QWORD *)v8;
  v41 = *(float *)&v39;
  v70 = *(float *)&v39;
  v42 = (*(__int64 (__fastcall **)(unsigned __int64))(v40 + 48))(v8);
  v43 = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v42, L"DynamicPivotMaxX").m128_u32[0];
  v44 = *((_DWORD *)a3 + 241) == 1;
  v45 = *(float *)&v43;
  v81 = v43;
  if ( v44 )
  {
    LODWORD(v35) ^= _xmm;
    LODWORD(v46) = LODWORD(v41) ^ _xmm;
    LODWORD(v41) = v43 ^ _xmm;
    v81 = LODWORD(v46);
    LODWORD(v70) = v43 ^ _xmm;
    v45 = v46;
  }
  v47 = (float)(*(float *)&v68 * v37) + v35;
  v71 = v47;
  if ( v47 <= v45 )
  {
    v48 = (unsigned int *)&v71;
    if ( v41 > v47 )
      v48 = (unsigned int *)&v70;
  }
  else
  {
    v48 = &v81;
  }
  v49 = *v48;
  v50 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(v8);
  v75 = __PAIR64__(v33, v49);
  v51 = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v50, L"HeadToPivotOffsetZ").m128_u32[0];
  v52 = *((_DWORD *)a2 + 43);
  v72 = 0.0;
  v74 = 0.0;
  v76 = v51;
  v68 = *(_QWORD *)((char *)a2 + 164);
  v73 = FLOAT_1_0;
  v69 = v52;
  v53 = atan2f_0(COERCE_FLOAT(v68 ^ _xmm), COERCE_FLOAT(v52 ^ _xmm));
  quaternion_from_axis_angle = Windows::Foundation::Numerics::make_quaternion_from_axis_angle((float *)&v68, &v72, v53);
  Windows::Foundation::Numerics::transform(&v72, (float *)&v75, quaternion_from_axis_angle);
  v55 = (__m128)LODWORD(v77[0]);
  v56 = v73 + *((float *)a2 + 39);
  v57 = (__m128)LODWORD(v77[1]);
  v58 = v78;
  v59 = v77[0] - (float)(v72 + *((float *)a2 + 38));
  v60 = v74 + *((float *)a2 + 40);
  *((float *)a3 + 31) = v77[0];
  *((_DWORD *)a3 + 32) = v57.m128_i32[0];
  *(float *)&v68 = v59;
  *((float *)a3 + 33) = v58;
  *((float *)&v68 + 1) = v57.m128_f32[0] - v56;
  v61 = _mm_movelh_ps((__m128)v68, (__m128)COERCE_UNSIGNED_INT(v58 - v60));
  v62 = _mm_mul_ps(v61, v61);
  v63 = _mm_shuffle_ps(v62, v62, 102);
  v62.m128_f32[0] = (float)(v62.m128_f32[0] + v63.m128_f32[0]) + _mm_shuffle_ps(v63, v63, 85).m128_f32[0];
  v64 = _mm_div_ps(v61, _mm_sqrt_ps(_mm_shuffle_ps(v62, v62, 0)));
  v65 = _mm_shuffle_ps(v64, v64, 85);
  v69 = _mm_shuffle_ps(v64, v64, 170).m128_u32[0];
  *((_DWORD *)a3 + 34) = v64.m128_i32[0];
  *((_DWORD *)a3 + 36) = v69;
  *((_DWORD *)a3 + 35) = v65.m128_i32[0];
  v66 = v78;
  *(_QWORD *)((char *)this + 8932) = _mm_unpacklo_ps(v55, v57).m128_u64[0];
  *((float *)this + 2235) = v66;
  v67 = v69;
  *((_QWORD *)this + 1118) = _mm_unpacklo_ps(v64, v65).m128_u64[0];
  *((_DWORD *)this + 2238) = v67;
  *((_BYTE *)this + 8928) = 1;
}
