/*
 * XREFs of ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18013B710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081B0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800531B8 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnMouseSnappedToGaze@MPCManager@@QEAAXAEBUDeviceInfo@@@Z @ 0x18007EA74 (-OnMouseSnappedToGaze@MPCManager@@QEAAXAEBUDeviceInfo@@@Z.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084B0C (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?XMQuaternionMultiply@DirectX@@YQ?AT__m128@@T2@0@Z @ 0x1800DD6D4 (-XMQuaternionMultiply@DirectX@@YQ-AT__m128@@T2@0@Z.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x18012D848 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x18012DDCC (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180138718 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAJ1AEAH11AEAM3@Z @ 0x180139D34 (--$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTrac.c)
 *     ?GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x18013AC68 (-GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x18013AECC (-GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18013C4EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@wil@@CAX_.c)
 *     ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x18013C77C (-make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUquaternion@123.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCMouseProcessor::PopulateTargetingData(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  float v9; // xmm2_4
  unsigned int v10; // xmm1_4
  int v11; // xmm0_4
  __m128 v12; // xmm3
  __m128 v13; // xmm2
  __m128 v14; // xmm0
  __m128 v15; // xmm3
  __int64 v16; // xmm7_8
  int v17; // ebx
  float YawAngleBetweenTwoVectors; // xmm6_4
  float v19; // xmm6_4
  const char *v20; // r9
  float v21; // xmm7_4
  struct BamoMPCConstantManagerClientPrincipal *v22; // r12
  unsigned __int64 v23; // rbx
  int v24; // eax
  const char *v25; // r9
  struct BamoMPCConstantManagerClientPrincipal *v26; // r12
  int v27; // eax
  const char *v28; // r9
  float v29; // xmm6_4
  struct BamoMPCConstantManagerClientPrincipal *v30; // r12
  int v31; // eax
  const char *v32; // r9
  float v33; // xmm6_4
  float v34; // xmm8_4
  struct BamoMPCConstantManagerClientPrincipal *v35; // r13
  int v36; // eax
  float v37; // xmm8_4
  union __m128 *v38; // rdx
  DirectX *v39; // rcx
  union __m128 *v40; // r8
  float *v41; // rax
  int v42; // eax
  __int64 v43; // rbx
  __int64 (__fastcall *v44)(__int64, _QWORD, _QWORD, _QWORD, int *); // rdi
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 v50; // rcx
  int v51[4]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B8h]
  __int64 v53; // [rsp+58h] [rbp-B0h] BYREF
  int v54; // [rsp+60h] [rbp-A8h]
  float v55; // [rsp+68h] [rbp-A0h] BYREF
  float v56; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v57; // [rsp+70h] [rbp-98h] BYREF
  __int64 v58; // [rsp+78h] [rbp-90h] BYREF
  union __m128 v59; // [rsp+80h] [rbp-88h] BYREF
  float v60[4]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-60h]
  int v62; // [rsp+B0h] [rbp-58h]
  __int64 v63; // [rsp+D8h] [rbp-30h]
  __int128 v64; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v63 = -2LL;
  v53 = *(_QWORD *)((char *)a2 + 164);
  v54 = *((_DWORD *)a2 + 43);
  v58 = 0LL;
  v6 = *(_QWORD *)(this + 4616);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 40LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v58);
  v8 = v7(v6, &v58);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      558LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v8);
  v9 = *((float *)a2 + 59);
  if ( v9 != *((float *)a2 + 38)
    || *((float *)a2 + 60) != *((float *)a2 + 39)
    || *((float *)a2 + 61) != *((float *)a2 + 40) )
  {
    *(_QWORD *)&v51[2] = *((_QWORD *)a2 + 19);
    LODWORD(v52) = *((_DWORD *)a2 + 40);
    *(float *)&v10 = *((float *)a2 + 61) - *(float *)&v52;
    *(float *)&v11 = *((float *)a2 + 60) - *(float *)&v51[3];
    *(float *)&v51[2] = v9 - *(float *)&v51[2];
    v51[3] = v11;
    v12 = _mm_movelh_ps((__m128)*(unsigned __int64 *)&v51[2], (__m128)v10);
    v13 = _mm_mul_ps(v12, v12);
    v14 = _mm_shuffle_ps(v13, v13, 102);
    v13.m128_f32[0] = (float)(v13.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
    v15 = _mm_div_ps(v12, _mm_sqrt_ps(_mm_shuffle_ps(v13, v13, 0)));
    v51[2] = v15.m128_i32[0];
    v51[3] = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
    LODWORD(v52) = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
    if ( !*(_DWORD *)(this + 6316) )
    {
      v53 = *(_QWORD *)&v51[2];
      v54 = v52;
    }
    if ( *(_DWORD *)(this + 6340) || *(_DWORD *)(this + 6344) )
    {
      v16 = *(_QWORD *)&v51[2];
      *(_QWORD *)&v64 = *(_QWORD *)&v51[2];
      v17 = v52;
      DWORD2(v64) = v52;
      *(_QWORD *)&v51[2] = *(_QWORD *)((char *)a2 + 164);
      LODWORD(v52) = *((_DWORD *)a2 + 43);
      YawAngleBetweenTwoVectors = MPCMouseProcessor::GetYawAngleBetweenTwoVectors(
                                    (unsigned __int64 *)&v51[2],
                                    (unsigned __int64 *)&v64);
      *(_QWORD *)&v64 = v16;
      DWORD2(v64) = v17;
      *(_QWORD *)&v51[2] = *(_QWORD *)((char *)a2 + 164);
      LODWORD(v52) = *((_DWORD *)a2 + 43);
      v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(YawAngleBetweenTwoVectors) & _xmm);
      v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(MPCMouseProcessor::GetPitchAngleBetweenTwoVectors(
                                                  (unsigned __int64 *)&v51[2],
                                                  (unsigned __int64 *)&v64).m128_f32[0]) & _xmm);
      v22 = MPCConstantManager::s_instance;
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v20);
        __debugbreak();
      }
      v23 = this & -(__int64)(this != 40);
      v24 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 48LL))(v23);
      if ( v19 > MPCConstantManager::GetStaticConstant<float>(
                   (__int64)v22,
                   v24,
                   L"MouseParams_ResetHorizontalAngleRadians").m128_f32[0] )
        goto LABEL_25;
      v26 = MPCConstantManager::s_instance;
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v25);
        __debugbreak();
      }
      v27 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 48LL))(this & -(__int64)(this != 40));
      if ( v21 > MPCConstantManager::GetStaticConstant<float>(
                   (__int64)v26,
                   v27,
                   L"MouseParams_ResetVerticalAngleRadians").m128_f32[0] )
      {
LABEL_25:
        MPCManager::OnMouseSnappedToGaze(MPCManager::s_instance, *(const struct DeviceInfo **)(this + 24));
        v53 = *(_QWORD *)((char *)a2 + 164);
        v54 = *((_DWORD *)a2 + 43);
        RayStabilizer::Reset((RayStabilizer *)(this + 360));
      }
      else if ( !*(_BYTE *)(this + 6296)
             || !v58
             || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v58 + 80LL))(v58) )
      {
        wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::ReportUsageToService();
        if ( !*((_BYTE *)a2 + 2280) )
        {
          v29 = (float)*(int *)(this + 6340);
          v30 = MPCConstantManager::s_instance;
          if ( !MPCConstantManager::s_instance )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              41LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              v28);
            __debugbreak();
          }
          v31 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 48LL))(this & -(__int64)(this != 40));
          v33 = (float)(v29
                      / MPCConstantManager::GetStaticConstant<float>(
                          (__int64)v30,
                          v31,
                          L"MouseParams_DeltaToRadiansRatio").m128_f32[0])
              * -1.0;
          v55 = v33;
          v34 = (float)*(int *)(this + 6344);
          v35 = MPCConstantManager::s_instance;
          if ( !MPCConstantManager::s_instance )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              41LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              v32);
            __debugbreak();
          }
          v36 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 48LL))(this & -(__int64)(this != 40));
          v37 = (float)(v34
                      / MPCConstantManager::GetStaticConstant<float>(
                          (__int64)v35,
                          v36,
                          L"MouseParams_DeltaToRadiansRatio").m128_f32[0])
              * -1.0;
          v56 = v37;
          MPCMath::OrientToGravity((__int64)v60, (__int64)a2, 0.89999998);
          *(float *)&v51[2] = v60[0];
          *(float *)&v51[3] = v60[1];
          *(float *)&v52 = v60[2];
          *(_QWORD *)&v64 = v61;
          DWORD2(v64) = v62;
          Windows::Foundation::Numerics::make_quaternion_from_axis_angle(v59.m128_f32, (float *)&v51[2], v37);
          Windows::Foundation::Numerics::make_quaternion_from_axis_angle((float *)&v51[2], (float *)&v64, v33);
          v59 = DirectX::XMQuaternionMultiply(v39, v38, v40);
          Windows::Foundation::Numerics::make_float4x4_from_quaternion(v60, &v59);
          v41 = Windows::Foundation::Numerics::transform_normal((float *)&v64, (float *)&v53, v60);
          v53 = *(_QWORD *)v41;
          v54 = *((_DWORD *)v41 + 2);
          ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta<unsigned long &,long &,long &,int &,long &,long &,float &,float &>(
            (unsigned int *)a3 + 1,
            (int *)(this + 6228),
            (int *)(this + 6232),
            (_DWORD *)(this + 6348),
            (_DWORD *)(this + 6340),
            (_DWORD *)(this + 6344),
            &v55,
            &v56);
        }
      }
    }
  }
  *((_BYTE *)a3 + 48) = 1;
  *((_DWORD *)a3 + 31) = *((_DWORD *)a2 + 38);
  *((_DWORD *)a3 + 32) = *((_DWORD *)a2 + 39);
  *((_DWORD *)a3 + 33) = *((_DWORD *)a2 + 40);
  *((_QWORD *)a3 + 17) = v53;
  *((_DWORD *)a3 + 36) = v54;
  *((_BYTE *)a3 + 93) = 0;
  if ( v58 )
  {
    v42 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v58 + 96LL))(v58, &v64);
    if ( v42 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        639LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v42);
      __debugbreak();
    }
    if ( (((_DWORD)v64 == DWORD2(v64)) == DWORD1(v64)) == HIDWORD(v64) )
    {
      LODWORD(v57) = 0;
      v55 = 0.0;
      v56 = 0.0;
      *(_QWORD *)&v51[2] = 0LL;
      v43 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(this + 16) + 64LL))(*(_QWORD *)(this + 16));
      v44 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)v43 + 64LL);
      v45 = *(_QWORD *)&v51[2];
      if ( *(_QWORD *)&v51[2] )
      {
        *(_QWORD *)&v51[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      }
      v46 = v44(v43, 0LL, 0LL, 0LL, &v51[2]);
      if ( v46 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          654LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v46);
        __debugbreak();
      }
      v53 = 0LL;
      if ( *(_QWORD *)&v51[2]
        && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v51[2],
                  &v53) >= 0 )
      {
        v47 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v53 + 32LL))(v53, &v57);
        if ( v47 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            659LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
            (const char *)(unsigned int)v47);
          __debugbreak();
        }
        v48 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v53 + 40LL))(v53, &v55);
        if ( v48 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            660LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
            (const char *)(unsigned int)v48);
          __debugbreak();
        }
        v49 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v53 + 48LL))(v53, &v56);
        if ( v49 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            661LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
            (const char *)(unsigned int)v49);
          __debugbreak();
        }
      }
      *((_BYTE *)a3 + 93) = 1;
      *((_DWORD *)a3 + 24) = v57;
      *((float *)a3 + 25) = v55;
      *((float *)a3 + 26) = v56;
      *(_OWORD *)((char *)a3 + 108) = v64;
      Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(&v53);
      v50 = *(_QWORD *)&v51[2];
      if ( *(_QWORD *)&v51[2] )
      {
        *(_QWORD *)&v51[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
      }
    }
  }
  *((_DWORD *)a3 + 20) = **(_DWORD **)(this + 24);
  *((_DWORD *)a3 + 21) = 2;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v58);
}
