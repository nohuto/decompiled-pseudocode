/*
 * XREFs of ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x1801694EC
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x180166C80 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?XMMatrixRotationQuaternion@DirectX@@YQ?AUXMMATRIX@1@T__m128@@@Z @ 0x1800D8EF4 (-XMMatrixRotationQuaternion@DirectX@@YQ-AUXMMATRIX@1@T__m128@@@Z.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800EFB2C (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?XMMatrixRTInverse@DirectX@@YQ?AUXMMATRIX@1@U21@@Z @ 0x1801600A4 (-XMMatrixRTInverse@DirectX@@YQ-AUXMMATRIX@1@U21@@Z.c)
 *     ?ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@4@1@Z @ 0x1801642AC (-ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateSimulatedPose(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        __int64 a2,
        const struct SpatialInteractionDevices::PoseData *a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a4,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a5,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a6)
{
  __int128 v6; // xmm1
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  int v12; // eax
  __m128 v13; // xmm10
  double v14; // xmm14_8
  __m128 v15; // xmm15
  __m128 v16; // xmm10
  unsigned __int64 v17; // xmm0_8
  int v18; // eax
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __m128i v21; // xmm3
  double v22; // xmm9_8
  __m128 v23; // xmm5
  __m128 v24; // xmm8
  __m128 v25; // xmm7
  __m128i v26; // xmm4
  __m128 v27; // xmm5
  unsigned __int8 v28; // dl
  __m128 v29; // xmm0
  __m128 v30; // xmm6
  double v31; // xmm0_8
  __m128 v32; // xmm0
  __m128 v33; // [rsp+38h] [rbp-D0h]
  __m128 v34; // [rsp+48h] [rbp-C0h]
  __m128 v35; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v36; // [rsp+68h] [rbp-A0h]
  __m128 v37; // [rsp+78h] [rbp-90h]
  __m128i v38; // [rsp+88h] [rbp-80h]
  _QWORD v39[2]; // [rsp+98h] [rbp-70h] BYREF
  int v40; // [rsp+A8h] [rbp-60h]
  __m128 v41; // [rsp+BCh] [rbp-4Ch]
  __m128 v42; // [rsp+CCh] [rbp-3Ch]
  __int128 v43; // [rsp+DCh] [rbp-2Ch]
  _QWORD v44[2]; // [rsp+138h] [rbp+30h] BYREF
  int v45; // [rsp+148h] [rbp+40h]
  __m128 v46; // [rsp+15Ch] [rbp+54h]
  __m128 v47; // [rsp+16Ch] [rbp+64h]
  __m128 v48; // [rsp+17Ch] [rbp+74h]
  wil::details::in1diag3 *retaddr; // [rsp+2C0h] [rbp+1B8h]

  if ( a4 )
  {
    v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, _QWORD, _QWORD *))(*(_QWORD *)a4 + 32LL))(
            a4,
            a2,
            0LL,
            v39);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        975LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)(unsigned int)v12);
  }
  else
  {
    memset_0(v39, 0, 0xA0uLL);
    v39[0] = a2;
    v6 = xmmword_180199560;
    v40 = 3;
    v41 = (__m128)xmmword_180199550;
    v42 = (__m128)xmmword_180199560;
    v43 = xmmword_180199570;
  }
  memset_0(v44, 0, 0xA0uLL);
  v45 = 0;
  v13 = (__m128)DirectX::g_XMIdentityR3;
  v14 = DirectX::g_XMIdentityR0;
  v15 = (__m128)DirectX::g_XMIdentityR1;
  v44[0] = a2;
  v33 = (__m128)DirectX::g_XMIdentityR2;
  v34 = (__m128)DirectX::g_XMIdentityR3;
  if ( *((_BYTE *)a3 + 28) )
  {
    v16 = _mm_and_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)a3, (__m128)*((unsigned int *)a3 + 2)),
            DirectX::g_XMMask3);
    v45 = 1;
    v7 = _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3);
    v13 = _mm_or_ps(v16, v7);
  }
  if ( *((_BYTE *)a3 + 29) )
  {
    v17 = DirectX::XMMatrixRotationQuaternion(*(double *)((char *)a3 + 12)).m128_u64[0];
    v34 = v8;
    v45 = v18 | 2;
    v15 = (__m128)v6;
    v33 = v7;
    v14 = *(double *)&v17;
  }
  v19 = *((__m128 *)a6 + 1);
  v20 = *((__m128 *)a6 + 2);
  v21 = *((__m128i *)a6 + 3);
  *(_QWORD *)&v22 = DirectX::XMMatrixRTInverse(*(double *)a6, *(double *)v19.m128_u64, *(double *)v20.m128_u64).m128_u64[0];
  v23 = _mm_shuffle_ps(v42, v41, 244);
  v24 = _mm_and_ps(v41, DirectX::g_XMMask3);
  v25 = _mm_and_ps(_mm_shuffle_ps(v42, (__m128)v43, 14), DirectX::g_XMMask3);
  v26 = _mm_or_si128(_mm_srli_si128((__m128i)v43, 4), DirectX::g_XMIdentityR3);
  v27 = _mm_and_ps(_mm_shuffle_ps(v23, v23, 82), DirectX::g_XMMask3);
  if ( (v28 & (unsigned __int8)v40) == 0 )
    v26 = (__m128i)xmmword_1801E0410;
  v35 = v24;
  v36 = v27;
  v37 = v25;
  v38 = v26;
  v29 = DirectX::XMMatrixMultiply(v22, &v35);
  v35 = (__m128)DirectX::g_XMIdentityR0;
  v36 = (__m128)DirectX::g_XMIdentityR1;
  v30 = v29;
  v37 = (__m128)DirectX::g_XMIdentityR2;
  v38 = (__m128i)v13;
  *(_QWORD *)&v31 = DirectX::XMMatrixMultiply(v14, &v35).m128_u64[0];
  v35 = v30;
  v36 = v19;
  v37 = v20;
  v38 = v21;
  v32 = DirectX::XMMatrixMultiply(v31, &v35);
  v46 = _mm_shuffle_ps(v32, _mm_shuffle_ps(v15, v32, 160), 36);
  v48 = _mm_shuffle_ps(_mm_shuffle_ps(v33, v34, 10), v34, 152);
  v47 = _mm_shuffle_ps(v15, v33, 73);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ComputeControllerPoses(
    this,
    (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v39,
    (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v44,
    (__m128 *)a5,
    (__m128 *)a6);
}
