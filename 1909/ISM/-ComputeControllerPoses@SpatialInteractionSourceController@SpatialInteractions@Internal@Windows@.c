/*
 * XREFs of ?ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@4@1@Z @ 0x1801642DC
 * Callers:
 *     ?TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2@Z @ 0x180168F08 (-TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_J.c)
 *     ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x18016953C (-UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x18003785B (sqrtf_0.c)
 *     ?XMMatrixRotationQuaternion@DirectX@@YQ?AUXMMATRIX@1@T__m128@@@Z @ 0x1800D8CB4 (-XMMatrixRotationQuaternion@DirectX@@YQ-AUXMMATRIX@1@T__m128@@@Z.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800EF8FC (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1800F21F0 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 *     ?XMQuaternionRotationMatrix@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x1800F7118 (-XMQuaternionRotationMatrix@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 *     ??$ControllerIsFarFromHeadChanged@AEAKAEAKAEA_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0AEA_N@Z @ 0x180161E44 (--$ControllerIsFarFromHeadChanged@AEAKAEAKAEA_N@SpatialInteractionTrace@SpatialInteractionDevice.c)
 *     _lambda_dd13b2336fcec22e7e4908217f5c08fb_::operator() @ 0x180163868 (_lambda_dd13b2336fcec22e7e4908217f5c08fb_--operator().c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ComputeControllerPoses(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a3,
        __m128 *a4,
        __m128 *a5)
{
  int v7; // esi
  __m128 v8; // xmm3
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  __m128i v14; // xmm9
  char v15; // r8
  unsigned __int8 v16; // r9
  int v17; // r10d
  __m128 v18; // xmm10
  __m128 v19; // xmm8
  __m128 v20; // xmm7
  __m128 v21; // xmm6
  __m128 v22; // xmm8
  __m128 v23; // xmm6
  __m128 v24; // xmm3
  __m128 v25; // xmm7
  __m128 v26; // xmm3
  __m128 v27; // xmm8
  __m128 v28; // xmm9
  __m128 v29; // xmm3
  __m128 v30; // xmm14
  __m128 v31; // xmm1
  __m128 v32; // xmm13
  __m128 v33; // xmm10
  __m128 v34; // xmm2
  __m128 v35; // xmm0
  __m128 v36; // xmm6
  __m128 v37; // xmm3
  __m128 v38; // xmm0
  __m128 v39; // xmm11
  __m128 v40; // xmm10
  __m128 v41; // xmm4
  __m128 v42; // xmm11
  __m128 v43; // xmm6
  __m128 v44; // xmm5
  __m128 v45; // xmm10
  __m128 v46; // xmm7
  double v47; // xmm0_8
  __m128 v48; // xmm0
  __int128 v49; // xmm4
  __m128 v50; // xmm12
  char v51; // r9
  bool v52; // zf
  unsigned __int8 v53; // al
  char v54; // r8
  char v55; // r9
  __m128 v56; // xmm0
  int v57; // r10d
  __m128 v58; // xmm2
  __m128 v59; // xmm1
  __m128 v60; // xmm0
  __m128 v61; // xmm3
  __m128 v62; // xmm8
  __m128 v63; // xmm6
  double v64; // xmm0_8
  double v65; // xmm0_8
  double v66; // xmm15_8
  __int128 v67; // xmm0
  __m128 v68; // xmm6
  double v69; // xmm0_8
  double v70; // xmm10_8
  __m128 v71; // xmm9
  __m128 v72; // xmm8
  __m128 v73; // xmm7
  __m128 v74; // xmm6
  double v75; // xmm0_8
  unsigned __int64 v76; // xmm0_8
  double v77; // xmm11_8
  double v78; // xmm10_8
  char v79; // r8
  char v80; // r9
  __m128 v81; // xmm6
  char v82; // r8
  char v83; // r9
  char v84; // r8
  char v85; // r9
  float v86; // xmm0_4
  bool *v87; // r8
  __m128 v88; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v89; // [rsp+48h] [rbp-C0h]
  __int128 v90; // [rsp+58h] [rbp-B0h]
  _OWORD v91[2]; // [rsp+68h] [rbp-A0h]
  __int128 v92; // [rsp+88h] [rbp-80h]
  __m128 v93; // [rsp+98h] [rbp-70h]
  __m128 v94; // [rsp+A8h] [rbp-60h]
  __m128 v95; // [rsp+B8h] [rbp-50h]
  __m128 v96; // [rsp+C8h] [rbp-40h] BYREF
  __m128 v97; // [rsp+D8h] [rbp-30h]
  __m128 v98; // [rsp+E8h] [rbp-20h]
  __m128 v99; // [rsp+F8h] [rbp-10h]
  _OWORD v100[4]; // [rsp+108h] [rbp+0h] BYREF

  v7 = *((_DWORD *)a2 + 4);
  v8 = *(__m128 *)((char *)a2 + 68);
  v10 = *(__m128 *)((char *)a2 + 52);
  v11 = _mm_shuffle_ps(v10, *(__m128 *)((char *)a2 + 36), 244);
  v12 = _mm_and_ps(_mm_shuffle_ps(v10, v8, 14), DirectX::g_XMMask3);
  v13 = _mm_and_ps(_mm_shuffle_ps(v11, v11, 82), DirectX::g_XMMask3);
  v14 = _mm_or_si128(_mm_srli_si128((__m128i)v8, 4), DirectX::g_XMIdentityR3);
  v18 = DirectX::XMMatrixInverse(0LL, *(double *)v13.m128_u64, *(double *)v12.m128_u64, *(double *)v14.m128i_i64);
  if ( (v16 & (unsigned __int8)v7) == 0 )
    v14 = (__m128i)xmmword_1801E0410;
  v19 = *(__m128 *)((char *)a3 + 36);
  v20 = *(__m128 *)((char *)a3 + 52);
  v21 = _mm_shuffle_ps(v20, v19, 244);
  v22 = _mm_and_ps(v19, DirectX::g_XMMask3);
  v23 = _mm_and_ps(_mm_shuffle_ps(v21, v21, 82), DirectX::g_XMMask3);
  v24 = *(__m128 *)((char *)a3 + 68);
  v25 = _mm_and_ps(_mm_shuffle_ps(v20, v24, 14), DirectX::g_XMMask3);
  v26 = (__m128)_mm_or_si128(_mm_srli_si128((__m128i)v24, 4), DirectX::g_XMIdentityR3);
  if ( !v15 )
    v26 = (__m128)xmmword_1801E0410;
  if ( v17 && v15 || (*((_BYTE *)this + 72) & 0x40) != 0 || !*((_BYTE *)this + 904) || !v17 )
  {
    v52 = (*((_BYTE *)this + 72) & 0x40) == 0;
    *((_BYTE *)this + 1180) = 0;
    if ( !v52 )
    {
      v53 = *((_BYTE *)this + 1180);
      if ( (v16 & *((_BYTE *)a3 + 156)) != 0 )
        v53 = v16;
      *((_BYTE *)this + 1180) = v53;
    }
    v97 = v13;
    v98 = v12;
    v96 = v18;
    v99 = (__m128)v14;
    v56 = DirectX::XMMatrixMultiply(*(double *)v22.m128_u64, &v96);
    v90 = (__int128)v26;
    v49 = (__int128)v26;
    v89 = v25;
    v88 = v23;
    v50 = v56;
    if ( v57 && v54 )
    {
      *(__m128 *)((char *)this + 820) = _mm_shuffle_ps(v56, _mm_shuffle_ps(v23, v56, 160), 36);
      *(__m128 *)((char *)this + 836) = _mm_shuffle_ps(v23, v25, 73);
      *(__m128 *)((char *)this + 852) = _mm_shuffle_ps(_mm_shuffle_ps(v25, v26, 10), v26, 152);
      *(__m128 *)((char *)this + 868) = _mm_shuffle_ps(v22, _mm_shuffle_ps(v22, v23, 10), 132);
      *(__m128 *)((char *)this + 884) = _mm_shuffle_ps(v23, v25, 73);
      *((_DWORD *)this + 225) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
      *((_BYTE *)this + 904) = v55;
    }
  }
  else
  {
    v27 = *(__m128 *)((char *)this + 820);
    v28 = *(__m128 *)((char *)this + 852);
    v29 = _mm_unpacklo_ps(*(__m128 *)((char *)this + 884), (__m128)0LL);
    v30 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 12), (__m128)*((unsigned int *)a3 + 14)),
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 13), (__m128)0LL));
    v31 = _mm_unpackhi_ps(*(__m128 *)((char *)this + 868), (__m128)0LL);
    v32 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 15), (__m128)*((unsigned int *)a3 + 17)),
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 16), (__m128)0LL));
    v33 = _mm_movelh_ps(*(__m128 *)((char *)this + 868), v31);
    v34 = (__m128)*((unsigned int *)this + 225);
    v35 = _mm_shuffle_ps(*(__m128 *)((char *)this + 884), v34, 78);
    v36 = _mm_shuffle_ps(v35, DirectX::g_XMIdentityR3, 238);
    v37 = _mm_add_ps(_mm_movehl_ps(v29, _mm_shuffle_ps(v34, v29, 16)), _mm_movehl_ps((__m128)0LL, v31));
    v38 = _mm_shuffle_ps(v35, DirectX::g_XMIdentityR3, 68);
    v39 = _mm_shuffle_ps(v33, v37, 238);
    v40 = _mm_shuffle_ps(v33, v37, 68);
    v41 = _mm_shuffle_ps(v39, v36, 136);
    v42 = _mm_shuffle_ps(v39, v36, 221);
    v43 = *(__m128 *)((char *)this + 836);
    v44 = _mm_shuffle_ps(v40, v38, 136);
    v45 = _mm_shuffle_ps(v40, v38, 221);
    v46 = _mm_shuffle_ps(v43, v27, 244);
    v38.m128_u64[0] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 9), (__m128)*((unsigned int *)a3 + 11)),
                        _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 10), (__m128)0LL)).m128_u64[0];
    v96 = v44;
    v97 = v45;
    v98 = v41;
    v99 = v42;
    *(_QWORD *)&v47 = DirectX::XMMatrixMultiply(*(double *)v38.m128_u64, &v96).m128_u64[0];
    v96 = _mm_and_ps(v27, DirectX::g_XMMask3);
    v97 = _mm_and_ps(_mm_shuffle_ps(v46, v46, 82), DirectX::g_XMMask3);
    v98 = _mm_and_ps(_mm_shuffle_ps(v43, v28, 14), DirectX::g_XMMask3);
    v99 = (__m128)_mm_or_si128(_mm_srli_si128((__m128i)v28, 4), DirectX::g_XMIdentityR3);
    v48 = DirectX::XMMatrixMultiply(v47, &v96);
    v49 = _xmm;
    v90 = _xmm;
    v89 = v32;
    v50 = v48;
    v88 = v30;
    *((_BYTE *)this + 1180) = v51;
  }
  v58 = a4[1];
  v59 = a4[2];
  v60 = a4[3];
  v96 = *a4;
  v61 = (__m128)v49;
  v97 = v58;
  v98 = v59;
  v99 = v60;
  v92 = v49;
  v91[1] = v89;
  v91[0] = v88;
  v100[0] = DirectX::XMMatrixMultiply(*(double *)v50.m128_u64, &v96);
  v100[1] = v88;
  v100[2] = v89;
  v100[3] = v92;
  v62 = _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3);
  v63 = _mm_or_ps(
          _mm_and_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 508), (__m128)*((unsigned int *)this + 129)),
            DirectX::g_XMMask3),
          v62);
  *(_QWORD *)&v64 = DirectX::XMMatrixRotationQuaternion(*((double *)this + 65)).m128_u64[0];
  v96 = (__m128)DirectX::g_XMIdentityR0;
  v97 = (__m128)DirectX::g_XMIdentityR1;
  v98 = (__m128)DirectX::g_XMIdentityR2;
  v99 = v63;
  *(_QWORD *)&v65 = DirectX::XMMatrixMultiply(v64, &v96).m128_u64[0];
  v96 = (__m128)v100[0];
  v97 = v88;
  v98 = v89;
  v99 = (__m128)v92;
  *(_QWORD *)&v66 = DirectX::XMMatrixMultiply(v65, &v96).m128_u64[0];
  v67 = *(_OWORD *)((char *)this + 552);
  v68 = _mm_and_ps(
          _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 540), (__m128)*((unsigned int *)this + 137)),
          DirectX::g_XMMask3);
  v95 = (__m128)v92;
  v94 = v89;
  v93 = v88;
  *(_QWORD *)&v69 = DirectX::XMMatrixRotationQuaternion(*(double *)&v67).m128_u64[0];
  v96 = (__m128)DirectX::g_XMIdentityR0;
  v97 = (__m128)DirectX::g_XMIdentityR1;
  v98 = (__m128)DirectX::g_XMIdentityR2;
  v99 = _mm_or_ps(v68, v62);
  *(_QWORD *)&v70 = DirectX::XMMatrixMultiply(v69, &v96).m128_u64[0];
  v96 = v50;
  v71 = *a5;
  v72 = a5[1];
  v73 = a5[2];
  v74 = a5[3];
  v97 = v88;
  v98 = v89;
  v99 = (__m128)v90;
  *(_QWORD *)&v75 = DirectX::XMMatrixMultiply(v70, &v96).m128_u64[0];
  v96 = v71;
  v97 = v72;
  v98 = v73;
  v99 = v74;
  v74.m128_u64[0] = DirectX::XMMatrixMultiply(v75, &v96).m128_u64[0];
  v96 = (__m128)v100[0];
  v97 = v88;
  v98 = v89;
  v99 = (__m128)v92;
  v76 = DirectX::XMMatrixMultiply(v70, &v96).m128_u64[0];
  v77 = *(double *)v89.m128_u64;
  v78 = *(double *)v88.m128_u64;
  v71.m128_u64[0] = v76;
  *(__m128 *)((char *)this + 1148) = DirectX::XMQuaternionRotationMatrix(
                                       *(double *)v74.m128_u64,
                                       *(double *)v88.m128_u64,
                                       *(double *)v89.m128_u64);
  *((_DWORD *)this + 291) = v61.m128_i32[0];
  *((_DWORD *)this + 292) = _mm_shuffle_ps(v61, v61, 85).m128_u32[0];
  *((_DWORD *)this + 293) = _mm_shuffle_ps(v61, v61, 170).m128_u32[0];
  *((_BYTE *)this + 1177) = v79;
  *((_BYTE *)this + 1176) = v80;
  v81 = v95;
  v59.m128_u64[0] = v93.m128_u64[0];
  v58.m128_u64[0] = v94.m128_u64[0];
  *((__m128 *)this + 66) = DirectX::XMQuaternionRotationMatrix(*(double *)v71.m128_u64, v78, v77);
  *((_DWORD *)this + 268) = v61.m128_i32[0];
  *((_DWORD *)this + 269) = _mm_shuffle_ps(v61, v61, 85).m128_u32[0];
  *((_DWORD *)this + 270) = _mm_shuffle_ps(v61, v61, 170).m128_u32[0];
  *((_BYTE *)this + 1085) = v82;
  *((_BYTE *)this + 1084) = v83;
  *((__m128 *)this + 64) = DirectX::XMQuaternionRotationMatrix(v66, *(double *)v59.m128_u64, *(double *)v58.m128_u64);
  v88.m128_u64[0] = (unsigned __int64)a3;
  *((_DWORD *)this + 260) = v81.m128_i32[0];
  v88.m128_u64[1] = (unsigned __int64)v100;
  *((_DWORD *)this + 261) = _mm_shuffle_ps(v81, v81, 85).m128_u32[0];
  *((_DWORD *)this + 262) = _mm_shuffle_ps(v81, v81, 170).m128_u32[0];
  *((_BYTE *)this + 1053) = v84;
  *((_BYTE *)this + 1052) = v85;
  lambda_dd13b2336fcec22e7e4908217f5c08fb_::operator()(
    &v88,
    (bool *)this + 1124,
    (_DWORD *)this + 272,
    4,
    (unsigned __int64 *)((char *)a3 + 84));
  lambda_dd13b2336fcec22e7e4908217f5c08fb_::operator()(
    &v88,
    (bool *)this + 1125,
    (_DWORD *)this + 275,
    16,
    (unsigned __int64 *)a3 + 12);
  lambda_dd13b2336fcec22e7e4908217f5c08fb_::operator()(
    &v88,
    (bool *)this + 1126,
    (_DWORD *)this + 278,
    128,
    (unsigned __int64 *)a3 + 18);
  if ( *((_BYTE *)this + 1176) )
  {
    v86 = sqrtf_0(
            (float)((float)(*((float *)this + 291) * *((float *)this + 291))
                  + (float)(*((float *)this + 292) * *((float *)this + 292)))
          + (float)(*((float *)this + 293) * *((float *)this + 293)));
    v87 = (bool *)this + 1185;
    if ( v86 > 1.5 != *((_BYTE *)this + 1185) )
    {
      *v87 = v86 > 1.5;
      SpatialInteractionDevices::SpatialInteractionTrace::ControllerIsFarFromHeadChanged<unsigned long &,unsigned long &,bool &>(
        (unsigned int *)this + 2,
        (unsigned int *)this + 3,
        v87);
    }
  }
}
