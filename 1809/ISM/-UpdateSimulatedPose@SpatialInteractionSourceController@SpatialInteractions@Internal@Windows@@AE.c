/*
 * XREFs of ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x180126528
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1801259F0 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800AA148 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?XMMatrixRTInverse@DirectX@@YQ?AUXMMATRIX@1@U21@@Z @ 0x180109DFC (-XMMatrixRTInverse@DirectX@@YQ-AUXMMATRIX@1@U21@@Z.c)
 *     ?ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@4@1@Z @ 0x1801268C0 (-ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateSimulatedPose(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        __int64 a2,
        const struct SpatialInteractionDevices::PoseData *a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a4,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a5,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a6)
{
  int v9; // eax
  int v10; // eax
  __m128 v11; // xmm11
  __m128 v12; // xmm10
  double v13; // xmm12_8
  __m128 v14; // xmm13
  __m128 v15; // xmm10
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm1
  __m128 v19; // xmm4
  __m128 v20; // xmm1
  __m128 v21; // xmm3
  __m128 v22; // xmm11
  __m128 v23; // xmm1
  __m128 v24; // xmm0
  __m128 v25; // xmm11
  __m128 v26; // xmm0
  __m128 v27; // xmm0
  __m128 v28; // xmm12
  __m128 v29; // xmm13
  __m128 v30; // xmm1
  __m128 v31; // xmm2
  __m128i v32; // xmm3
  double v33; // xmm0_8
  __m128 v34; // xmm6
  __m128 v35; // xmm6
  double v36; // xmm0_8
  __m128 v37; // xmm0
  __m128 v38; // [rsp+38h] [rbp-D0h]
  __m128 v39; // [rsp+48h] [rbp-C0h]
  __m128 v40; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v41; // [rsp+68h] [rbp-A0h]
  __m128 v42; // [rsp+78h] [rbp-90h]
  __m128i v43; // [rsp+88h] [rbp-80h]
  _QWORD v44[2]; // [rsp+98h] [rbp-70h] BYREF
  int v45; // [rsp+A8h] [rbp-60h]
  __m128 v46; // [rsp+BCh] [rbp-4Ch]
  __m128 v47; // [rsp+CCh] [rbp-3Ch]
  __int128 v48; // [rsp+DCh] [rbp-2Ch]
  _QWORD v49[2]; // [rsp+138h] [rbp+30h] BYREF
  int v50; // [rsp+148h] [rbp+40h]
  __m128 v51; // [rsp+15Ch] [rbp+54h]
  __m128 v52; // [rsp+16Ch] [rbp+64h]
  __m128 v53; // [rsp+17Ch] [rbp+74h]
  wil::details::in1diag3 *retaddr; // [rsp+2B0h] [rbp+1A8h]

  if ( a4 )
  {
    v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, _QWORD, _QWORD *))(*(_QWORD *)a4 + 32LL))(
           a4,
           a2,
           0LL,
           v44);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3CD,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)(unsigned int)v9);
  }
  else
  {
    memset_0(v44, 0, 0xA0uLL);
    v44[0] = a2;
    v45 = 3;
    v46 = (__m128)xmmword_180165B90;
    v47 = (__m128)xmmword_180165BA0;
    v48 = xmmword_180165BB0;
  }
  memset_0(v49, 0, 0xA0uLL);
  v10 = 0;
  v11 = (__m128)DirectX::g_XMIdentityR2;
  v12 = (__m128)DirectX::g_XMIdentityR3;
  v13 = DirectX::g_XMIdentityR0;
  v14 = (__m128)DirectX::g_XMIdentityR1;
  v49[0] = a2;
  v50 = 0;
  v38 = (__m128)DirectX::g_XMIdentityR2;
  v39 = (__m128)DirectX::g_XMIdentityR3;
  if ( *((_BYTE *)a3 + 28) )
  {
    v10 = 1;
    v38 = (__m128)DirectX::g_XMIdentityR2;
    v15 = _mm_and_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)a3, (__m128)*((unsigned int *)a3 + 2)),
            DirectX::g_XMMask3);
    v50 = 1;
    v12 = _mm_or_ps(v15, _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3));
  }
  if ( *((_BYTE *)a3 + 29) )
  {
    v16 = *(__m128 *)((char *)a3 + 12);
    v39 = (__m128)DirectX::g_XMIdentityR3;
    v17 = _mm_add_ps(v16, v16);
    v50 = v10 | 2;
    v18 = _mm_mul_ps(v17, v16);
    v19 = _mm_sub_ps(
            _mm_sub_ps(
              (__m128)`DirectX::XMMatrixRotationQuaternion'::`2'::Constant1110,
              _mm_and_ps(_mm_shuffle_ps(v18, v18, 193), DirectX::g_XMMask3)),
            _mm_and_ps(_mm_shuffle_ps(v18, v18, 218), DirectX::g_XMMask3));
    v20 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 230), _mm_shuffle_ps(v16, v16, 208));
    v21 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 201), _mm_shuffle_ps(v16, v16, 255));
    v22 = _mm_add_ps(v21, v20);
    v23 = _mm_sub_ps(v20, v21);
    v24 = v22;
    v25 = _mm_shuffle_ps(v22, v23, 160);
    v26 = _mm_shuffle_ps(v24, v23, 73);
    v27 = _mm_shuffle_ps(v26, v26, 120);
    v28 = _mm_shuffle_ps(v19, v27, 76);
    v29 = _mm_shuffle_ps(v19, v27, 237);
    *(_QWORD *)&v13 = _mm_shuffle_ps(v28, v28, 120).m128_u64[0];
    v14 = _mm_shuffle_ps(v29, v29, 114);
    v11 = _mm_shuffle_ps(_mm_shuffle_ps(v25, v25, 136), v19, 228);
  }
  v30 = *((__m128 *)a6 + 1);
  v31 = *((__m128 *)a6 + 2);
  v32 = *((__m128i *)a6 + 3);
  *(_QWORD *)&v33 = DirectX::XMMatrixRTInverse(*(double *)a6, *(double *)v30.m128_u64, *(double *)v31.m128_u64).m128_u64[0];
  v34 = _mm_shuffle_ps(v47, v46, 244);
  v43 = _mm_or_si128(_mm_srli_si128((__m128i)v48, 4), DirectX::g_XMIdentityR3);
  v41 = _mm_and_ps(_mm_shuffle_ps(v34, v34, 82), DirectX::g_XMMask3);
  v40 = _mm_and_ps(v46, DirectX::g_XMMask3);
  v42 = _mm_and_ps(_mm_shuffle_ps(v47, (__m128)v48, 14), DirectX::g_XMMask3);
  v35 = DirectX::XMMatrixMultiply(v33, &v40);
  v40 = (__m128)DirectX::g_XMIdentityR0;
  v42 = v38;
  v41 = (__m128)DirectX::g_XMIdentityR1;
  v43 = (__m128i)v12;
  *(_QWORD *)&v36 = DirectX::XMMatrixMultiply(v13, &v40).m128_u64[0];
  v40 = v35;
  v41 = v30;
  v42 = v31;
  v43 = v32;
  v37 = DirectX::XMMatrixMultiply(v36, &v40);
  v51 = _mm_shuffle_ps(v37, _mm_shuffle_ps(v14, v37, 160), 36);
  v53 = _mm_shuffle_ps(_mm_shuffle_ps(v11, v39, 10), v39, 152);
  v52 = _mm_shuffle_ps(v14, v11, 73);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ComputeControllerPoses(
    this,
    (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v44,
    (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v49,
    a5,
    a6);
}
