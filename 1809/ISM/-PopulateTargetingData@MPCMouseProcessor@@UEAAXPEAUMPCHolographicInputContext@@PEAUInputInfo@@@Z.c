/*
 * XREFs of ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800FC980
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002F774 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?OnMouseSnappedToGaze@MPCManager@@QEAAXAEBUDeviceInfo@@@Z @ 0x18003D150 (-OnMouseSnappedToGaze@MPCManager@@QEAAXAEBUDeviceInfo@@@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1800FA994 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1800FD598 (-GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800FDCD8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@w.c)
 *     ?MPCMouseProcessor_PopulateTargetingDataForMouseDelta_@ISMTracing@@QEAAXIJJHJJMM@Z @ 0x1800FE794 (-MPCMouseProcessor_PopulateTargetingDataForMouseDelta_@ISMTracing@@QEAAXIJJHJJMM@Z.c)
 *     ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x1800FEA98 (-make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUquaternion@123.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1801030B4 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     asinf_0 @ 0x18012DAF3 (asinf_0.c)
 *     cosf_0 @ 0x18012DB17 (cosf_0.c)
 *     sinf_0 @ 0x18012DB23 (sinf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCMouseProcessor::PopulateTargetingData(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  int v6; // eax
  float v7; // xmm2_4
  unsigned int v8; // xmm1_4
  int v9; // xmm0_4
  __m128 v10; // xmm3
  __m128 v11; // xmm2
  __m128 v12; // xmm0
  __m128 v13; // xmm3
  unsigned int v14; // xmm1_4
  unsigned __int32 v15; // xmm0_4
  float v16; // xmm12_4
  __int32 v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm11_4
  float v20; // xmm10_4
  double YawAngleBetweenTwoVectors; // xmm0_8
  float v22; // xmm7_4
  __m128 v23; // xmm3
  __m128 v24; // xmm2
  __m128 v25; // xmm0
  __m128 v26; // xmm3
  __m128 v27; // xmm3
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  __m128 v30; // xmm3
  float v31; // xmm6_4
  double v32; // xmm1_8
  float v33; // xmm7_4
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  const char *v37; // r9
  unsigned int **Instance; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  const char *v42; // r9
  unsigned int **v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  const char *v47; // r9
  float v48; // xmm12_4
  unsigned int **v49; // rax
  float v50; // xmm12_4
  float v51; // xmm13_4
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  const char *v55; // r9
  unsigned int **v56; // rax
  float v57; // xmm13_4
  float v58; // xmm7_4
  float v59; // xmm0_4
  float v60; // xmm7_4
  float v61; // xmm0_4
  __m128 v62; // xmm4
  __m128 v63; // xmm1
  __m128 v64; // xmm4
  float v65; // xmm4_4
  float v66; // xmm3_4
  _DWORD *v67; // rcx
  ISMTracing *v68; // rcx
  __int64 v69; // rcx
  int v70; // eax
  wil::details::in1diag3 *v71; // rcx
  __int64 v72; // rdi
  __int64 v73; // rcx
  int v74; // eax
  wil::details::in1diag3 *v75; // rcx
  unsigned __int64 v76; // rdx
  __int64 v77; // rcx
  int v78; // eax
  wil::details::in1diag3 *v79; // rcx
  int v80; // eax
  int v81; // eax
  int v82[2]; // [rsp+50h] [rbp-B0h] BYREF
  float v83; // [rsp+58h] [rbp-A8h]
  unsigned __int64 X; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int32 v85; // [rsp+68h] [rbp-98h]
  __m128 v86; // [rsp+70h] [rbp-90h] BYREF
  int v87; // [rsp+80h] [rbp-80h] BYREF
  __int16 v88; // [rsp+84h] [rbp-7Ch]
  __int64 v89; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v90[4]; // [rsp+90h] [rbp-70h] BYREF
  float v91; // [rsp+A0h] [rbp-60h] BYREF
  float v92; // [rsp+A4h] [rbp-5Ch]
  float v93; // [rsp+A8h] [rbp-58h]
  float v94; // [rsp+B0h] [rbp-50h]
  float v95; // [rsp+B4h] [rbp-4Ch]
  float v96; // [rsp+B8h] [rbp-48h]
  float v97; // [rsp+C0h] [rbp-40h]
  float v98; // [rsp+C4h] [rbp-3Ch]
  float v99; // [rsp+C8h] [rbp-38h]
  __int64 v100; // [rsp+E0h] [rbp-20h]
  __m128 v101; // [rsp+E8h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v100 = -2LL;
  v86.m128_u64[0] = *(_QWORD *)((char *)a2 + 164);
  v86.m128_i32[2] = *((_DWORD *)a2 + 43);
  v89 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(this + 3744) + 40LL))(
         *(_QWORD *)(this + 3744),
         &v89);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x220,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v6);
  v7 = *((float *)a2 + 47);
  if ( v7 == *((float *)a2 + 38)
    && *((float *)a2 + 48) == *((float *)a2 + 39)
    && *((float *)a2 + 49) == *((float *)a2 + 40) )
  {
    goto LABEL_23;
  }
  *(_QWORD *)v82 = *((_QWORD *)a2 + 19);
  v83 = *((float *)a2 + 40);
  *(float *)&v8 = *((float *)a2 + 49) - v83;
  *(float *)&v9 = *((float *)a2 + 48) - *(float *)&v82[1];
  *(float *)v82 = v7 - *(float *)v82;
  v82[1] = v9;
  v10 = _mm_movelh_ps((__m128)*(unsigned __int64 *)v82, (__m128)v8);
  v11 = _mm_mul_ps(v10, v10);
  v12 = _mm_shuffle_ps(v11, v11, 102);
  v11.m128_f32[0] = (float)(v11.m128_f32[0] + v12.m128_f32[0]) + _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  v13 = _mm_div_ps(v10, _mm_sqrt_ps(_mm_shuffle_ps(v11, v11, 0)));
  v14 = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
  v15 = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  v82[0] = v13.m128_i32[0];
  v82[1] = v14;
  v83 = *(float *)&v15;
  v16 = *(float *)&v15;
  v17 = v13.m128_i32[0];
  if ( *(_DWORD *)(this + 4860) )
  {
    v20 = v86.m128_f32[2];
    v19 = v86.m128_f32[1];
    v18 = v86.m128_f32[0];
  }
  else
  {
    v18 = v13.m128_f32[0];
    v19 = *(float *)&v14;
    v20 = *(float *)&v15;
  }
  if ( !*(_DWORD *)(this + 4884) && !*(_DWORD *)(this + 4888) )
    goto LABEL_24;
  X = _mm_unpacklo_ps((__m128)v13.m128_u32[0], (__m128)v14).m128_u64[0];
  v85 = LODWORD(v83);
  *(_QWORD *)v82 = *(_QWORD *)((char *)a2 + 164);
  v83 = *((float *)a2 + 43);
  YawAngleBetweenTwoVectors = MPCMouseProcessor::GetYawAngleBetweenTwoVectors(v82, &X);
  v22 = *(float *)&YawAngleBetweenTwoVectors;
  *(_QWORD *)v82 = __PAIR64__(v14, v13.m128_u32[0]);
  v83 = v16;
  X = *(_QWORD *)((char *)a2 + 164);
  v85 = *((_DWORD *)a2 + 43);
  v23 = _mm_movelh_ps((__m128)X, (__m128)v85);
  v24 = _mm_mul_ps(v23, v23);
  v25 = _mm_shuffle_ps(v24, v24, 102);
  v24.m128_f32[0] = (float)(v24.m128_f32[0] + v25.m128_f32[0]) + _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
  v26 = _mm_div_ps(v23, _mm_sqrt_ps(_mm_shuffle_ps(v24, v24, 0)));
  LODWORD(X) = v26.m128_i32[0];
  HIDWORD(X) = _mm_shuffle_ps(v26, v26, 85).m128_u32[0];
  v85 = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
  v27 = _mm_movelh_ps((__m128)__PAIR64__(v14, v17), (__m128)LODWORD(v16));
  v28 = _mm_mul_ps(v27, v27);
  v29 = _mm_shuffle_ps(v28, v28, 102);
  v28.m128_f32[0] = (float)(v28.m128_f32[0] + v29.m128_f32[0]) + _mm_shuffle_ps(v29, v29, 85).m128_f32[0];
  v30 = _mm_div_ps(v27, _mm_sqrt_ps(_mm_shuffle_ps(v28, v28, 0)));
  v82[0] = v30.m128_i32[0];
  v82[1] = _mm_shuffle_ps(v30, v30, 85).m128_u32[0];
  LODWORD(v83) = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
  v31 = asinf_0(*((float *)&X + 1));
  v32 = v22;
  v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(asinf_0(*(float *)&v82[1]) - v31)) & _xmm);
  Instance = (unsigned int **)MPCConstantManager::GetInstance(v35, v34, v36, v37);
  if ( (float)COERCE_DOUBLE(*(_QWORD *)&v32 & _xmm) > MPCConstantManager::GetConstant<float>(
                                                        Instance,
                                                        (struct IMPCInputProviderBase *)(this & -(__int64)(this != 40)),
                                                        L"MouseParams_ResetHorizontalAngleRadians").m128_f32[0]
    || (v43 = (unsigned int **)MPCConstantManager::GetInstance(v40, v39, v41, v42),
        v33 > MPCConstantManager::GetConstant<float>(
                v43,
                (struct IMPCInputProviderBase *)(this & -(__int64)(this != 40)),
                L"MouseParams_ResetVerticalAngleRadians").m128_f32[0]) )
  {
    MPCManager::OnMouseSnappedToGaze(MPCManager::s_instance, *(const struct DeviceInfo **)(this + 24));
    v86.m128_u64[0] = *(_QWORD *)((char *)a2 + 164);
    v86.m128_i32[2] = *((_DWORD *)a2 + 43);
    RayStabilizer::Reset((RayStabilizer *)(this + 352));
LABEL_23:
    v18 = v86.m128_f32[0];
    v19 = v86.m128_f32[1];
    v20 = v86.m128_f32[2];
    goto LABEL_24;
  }
  if ( !*(_BYTE *)(this + 4840) || !v89 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v89 + 80LL))(v89) )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetCachedFeatureEnabledState();
    LODWORD(X) = 0;
    BYTE4(X) = 3;
    v87 = 0;
    v88 = WORD2(X);
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetFeaturePropertyCache'::`2'::data,
      0xA019AFu,
      (const struct FEATURE_LOGGED_TRAITS *)&v87,
      1,
      3);
    if ( !*((_BYTE *)a2 + 1800) )
    {
      v48 = (float)*(int *)(this + 4884);
      v49 = (unsigned int **)MPCConstantManager::GetInstance(v45, v44, v46, v47);
      v50 = (float)(v48
                  / MPCConstantManager::GetConstant<float>(
                      v49,
                      (struct IMPCInputProviderBase *)(this & -(__int64)(this != 40)),
                      L"MouseParams_DeltaToRadiansRatio").m128_f32[0])
          * -1.0;
      v51 = (float)*(int *)(this + 4888);
      v56 = (unsigned int **)MPCConstantManager::GetInstance(v53, v52, v54, v55);
      v57 = (float)(v51
                  / MPCConstantManager::GetConstant<float>(
                      v56,
                      (struct IMPCInputProviderBase *)(this & -(__int64)(this != 40)),
                      L"MouseParams_DeltaToRadiansRatio").m128_f32[0])
          * -1.0;
      MPCMath::OrientToGravity((__int64)&v91, (__int64)a2, 0.89999998);
      v58 = sinf_0(v57 * 0.5);
      v59 = cosf_0(v57 * 0.5);
      v101.m128_f32[0] = v58 * v91;
      v101.m128_f32[1] = v58 * v92;
      v101.m128_f32[2] = v58 * v93;
      v101.m128_f32[3] = v59;
      v60 = sinf_0(v50 * 0.5);
      v61 = cosf_0(v50 * 0.5);
      v86.m128_f32[0] = v60 * v94;
      v86.m128_f32[1] = v60 * v95;
      v86.m128_f32[2] = v60 * v96;
      v86.m128_f32[3] = v61;
      v62 = _mm_shuffle_ps(v86, v86, 27);
      v63 = _mm_mul_ps(_mm_shuffle_ps(v101, v101, 0), v62);
      v64 = _mm_shuffle_ps(v62, v62, 177);
      v101 = _mm_add_ps(
               _mm_add_ps(
                 _mm_mul_ps(_mm_shuffle_ps(v101, v101, 255), v86),
                 _mm_mul_ps(v63, (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX)),
               _mm_add_ps(
                 _mm_mul_ps(
                   _mm_mul_ps(_mm_shuffle_ps(v101, v101, 85), v64),
                   (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY),
                 _mm_mul_ps(
                   _mm_mul_ps(_mm_shuffle_ps(v101, v101, 170), _mm_shuffle_ps(v64, v64, 27)),
                   (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ)));
      Windows::Foundation::Numerics::make_float4x4_from_quaternion(&v91, &v101);
      v65 = (float)((float)(v96 * v19) + (float)(v93 * v18)) + (float)(v99 * v20);
      v66 = (float)((float)(v95 * v19) + (float)(v92 * v18)) + (float)(v98 * v20);
      v18 = (float)((float)(v94 * v19) + (float)(v91 * v18)) + (float)(v97 * v20);
      v19 = v66;
      v20 = v65;
      v67 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v67 )
      {
        if ( *v67 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta_(
            v68,
            *((_DWORD *)a3 + 1),
            *(_DWORD *)(this + 4772),
            *(_DWORD *)(this + 4776),
            *(_DWORD *)(this + 4892),
            *(_DWORD *)(this + 4884),
            *(_DWORD *)(this + 4888),
            v50,
            v57);
        }
      }
    }
  }
LABEL_24:
  *((_BYTE *)a3 + 500) = 1;
  *((_DWORD *)a3 + 135) = *((_DWORD *)a2 + 38);
  *((_DWORD *)a3 + 136) = *((_DWORD *)a2 + 39);
  *((_DWORD *)a3 + 137) = *((_DWORD *)a2 + 40);
  *((float *)a3 + 138) = v18;
  *((float *)a3 + 139) = v19;
  *((float *)a3 + 140) = v20;
  *((_BYTE *)a3 + 564) = 0;
  v69 = v89;
  if ( !v89 )
    goto LABEL_41;
  v70 = (*(__int64 (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v89 + 96LL))(v89, &v101);
  v71 = retaddr;
  if ( v70 < 0 )
    goto LABEL_45;
  if ( ((v101.m128_i32[0] == v101.m128_i32[2]) == v101.m128_i32[1]) == v101.m128_i32[3] )
  {
    v90[0] = 0;
    v87 = 0;
    LODWORD(X) = 0;
    *(_QWORD *)v82 = 0LL;
    v72 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(this + 16) + 64LL))(*(_QWORD *)(this + 16));
    v73 = *(_QWORD *)v82;
    if ( *(_QWORD *)v82 )
    {
      *(_QWORD *)v82 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
    }
    v74 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)v72 + 64LL))(
            v72,
            0LL,
            *(_QWORD *)(this + 24),
            0LL,
            v82);
    v75 = retaddr;
    if ( v74 < 0 )
      goto LABEL_46;
    v76 = 0LL;
    v86.m128_u64[0] = 0LL;
    v77 = *(_QWORD *)v82;
    if ( !*(_QWORD *)v82 )
    {
LABEL_36:
      *((_BYTE *)a3 + 564) = 1;
      *((_DWORD *)a3 + 142) = v90[0];
      *((_DWORD *)a3 + 143) = v87;
      *((_DWORD *)a3 + 144) = X;
      *(__m128 *)((char *)a3 + 580) = v101;
      if ( v76 )
      {
        v86.m128_u64[0] = 0LL;
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v76 + 16LL))(v76);
        v77 = *(_QWORD *)v82;
      }
      if ( v77 )
      {
        *(_QWORD *)v82 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
      }
      goto LABEL_40;
    }
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, __m128 *))v82)(
           *(_QWORD *)v82,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v86) < 0 )
    {
LABEL_35:
      v77 = *(_QWORD *)v82;
      v76 = v86.m128_u64[0];
      goto LABEL_36;
    }
    v78 = (*(__int64 (__fastcall **)(unsigned __int64, _DWORD *))(*(_QWORD *)v86.m128_u64[0] + 32LL))(
            v86.m128_u64[0],
            v90);
    v79 = retaddr;
    if ( v78 < 0 )
    {
LABEL_47:
      wil::details::in1diag3::FailFast_Hr(
        v79,
        (void *)0x285,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v78);
      __debugbreak();
    }
    v80 = (*(__int64 (__fastcall **)(unsigned __int64, int *))(*(_QWORD *)v86.m128_u64[0] + 40LL))(
            v86.m128_u64[0],
            &v87);
    if ( v80 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x286,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v80);
      JUMPOUT(0x1800FD324LL);
    }
    v81 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64 *))(*(_QWORD *)v86.m128_u64[0] + 48LL))(
            v86.m128_u64[0],
            &X);
    if ( v81 >= 0 )
      goto LABEL_35;
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x287,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v81);
LABEL_45:
    wil::details::in1diag3::FailFast_Hr(
      v71,
      (void *)0x271,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v70);
LABEL_46:
    wil::details::in1diag3::FailFast_Hr(
      v75,
      (void *)0x280,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v74);
    goto LABEL_47;
  }
LABEL_40:
  v69 = v89;
LABEL_41:
  *((_DWORD *)a3 + 134) = **(_DWORD **)(this + 24);
  *(_BYTE *)(this + 4880) = 0;
  *(_QWORD *)(this + 4884) = 0LL;
  *(_DWORD *)(this + 4892) = 0;
  if ( v69 )
  {
    v89 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
  }
}
