/*
 * XREFs of ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_N33@Z @ 0x1800BDF98
 * Callers:
 *     ?Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800BDDD0 (-Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatial.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800AA148 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800AA4A4 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1800BC660 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 *     ?XMQuaternionRotationMatrix@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x1800BC964 (-XMQuaternionRotationMatrix@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 *     ??$_Emplace_reallocate@AEBUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@?$vector@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@V?$allocator@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAPEAUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAU23456@AEBU23456@@Z @ 0x1800BFBEC (--$_Emplace_reallocate@AEBUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Intern.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::AddReport(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        __int64 a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a3,
        __m128 *a4,
        __m128 *a5,
        bool a6,
        bool a7,
        bool a8)
{
  int v12; // eax
  unsigned int v13; // ebx
  const char *v14; // r9
  __int64 result; // rax
  int v16; // eax
  unsigned int v17; // ebx
  char v18; // r15
  __m128 v19; // xmm4
  __m128 v20; // xmm2
  __m128i v21; // xmm3
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  __m128i v24; // xmm8
  __m128 v25; // xmm5
  __m128 v26; // xmm6
  __m128 v27; // xmm2
  __m128 v28; // xmm3
  __m128 v29; // xmm1
  double v30; // xmm0_8
  __m128 v31; // xmm9
  __m128 v32; // xmm7
  __m128i v33; // xmm6
  __m128 v34; // xmm13
  __m128 v35; // xmm11
  __m128 v36; // xmm10
  __m128 v37; // xmm8
  double v38; // xmm0_8
  char v39; // r8
  char v40; // r10
  char v41; // r9
  char v42; // r9
  BOOL v43; // ebx
  BOOL v44; // eax
  int v45; // edx
  unsigned __int64 v46; // xmm0_8
  int v47; // eax
  __m128 v48; // xmm3
  __m128 v49; // xmm3
  char v50; // cl
  bool v51; // al
  __int64 v52; // rbx
  _OWORD *v53; // rdx
  _OWORD *v54; // rax
  _OWORD *v55; // rax
  _OWORD *v56; // rcx
  __int64 v57; // rdx
  _OWORD *v58; // rdx
  _OWORD *v59; // rax
  __int64 v60; // r8
  __m128 v61; // [rsp+40h] [rbp-4C8h]
  _BYTE v62[128]; // [rsp+70h] [rbp-498h] BYREF
  int v63; // [rsp+F0h] [rbp-418h]
  int v64; // [rsp+178h] [rbp-390h]
  __m128 v65; // [rsp+180h] [rbp-388h] BYREF
  __m128 v66; // [rsp+190h] [rbp-378h]
  __m128 v67; // [rsp+1A0h] [rbp-368h]
  __m128i v68; // [rsp+1B0h] [rbp-358h]
  __int128 v69; // [rsp+1C0h] [rbp-348h] BYREF
  int v70; // [rsp+1D0h] [rbp-338h]
  _OWORD v71[4]; // [rsp+1E0h] [rbp-328h] BYREF
  __int32 v72; // [rsp+220h] [rbp-2E8h]
  unsigned __int32 v73; // [rsp+224h] [rbp-2E4h]
  unsigned __int32 v74; // [rsp+228h] [rbp-2E0h]
  unsigned __int64 v75; // [rsp+22Ch] [rbp-2DCh]
  unsigned __int32 v76; // [rsp+234h] [rbp-2D4h]
  unsigned __int64 v77; // [rsp+238h] [rbp-2D0h]
  int v78; // [rsp+240h] [rbp-2C8h]
  __m128 v79; // [rsp+244h] [rbp-2C4h]
  int v80; // [rsp+254h] [rbp-2B4h]
  int v81; // [rsp+258h] [rbp-2B0h]
  BOOL v82; // [rsp+25Ch] [rbp-2ACh]
  int v83; // [rsp+260h] [rbp-2A8h]
  BOOL v84; // [rsp+264h] [rbp-2A4h]
  float v85; // [rsp+268h] [rbp-2A0h]
  __int64 v86; // [rsp+270h] [rbp-298h]
  __int128 v87; // [rsp+2C8h] [rbp-240h]
  int v88; // [rsp+2D8h] [rbp-230h]
  int v89; // [rsp+2DCh] [rbp-22Ch]
  int v90; // [rsp+2E0h] [rbp-228h]
  int v91; // [rsp+2E8h] [rbp-220h]
  char v92[16]; // [rsp+2F0h] [rbp-218h] BYREF
  int v93; // [rsp+300h] [rbp-208h]
  __m128 v94; // [rsp+314h] [rbp-1F4h]
  __m128 v95; // [rsp+324h] [rbp-1E4h]
  __m128 v96; // [rsp+334h] [rbp-1D4h]
  unsigned __int64 v97; // [rsp+344h] [rbp-1C4h]
  unsigned int v98; // [rsp+34Ch] [rbp-1BCh]
  unsigned __int64 v99; // [rsp+380h] [rbp-188h]
  int v100; // [rsp+388h] [rbp-180h]
  __m128 v101; // [rsp+3B4h] [rbp-154h]
  __m128 v102; // [rsp+3C4h] [rbp-144h]
  __m128 v103; // [rsp+3D4h] [rbp-134h]
  wil::details::in1diag3 *retaddr; // [rsp+508h] [rbp+0h]

  memset_0(v71, 0, 0x110uLL);
  try
  {
    v12 = (*(__int64 (**)(void))(*(_QWORD *)a3 + 32LL))();
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE0,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *))(**((_QWORD **)this + 11) + 32LL))(
            *((_QWORD *)this + 11),
            a2,
            0LL,
            v92);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE1,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)(unsigned int)v16);
      return v17;
    }
    v18 = v93 & 1;
    v19 = _mm_shuffle_ps(v102, v101, 244);
    v20 = _mm_and_ps(_mm_shuffle_ps(v102, v103, 14), DirectX::g_XMMask3);
    v21 = _mm_or_si128(_mm_srli_si128((__m128i)v103, 4), DirectX::g_XMIdentityR3);
    v22 = _mm_and_ps(_mm_shuffle_ps(v19, v19, 82), DirectX::g_XMMask3);
    v23 = DirectX::XMMatrixInverse(0LL, *(double *)v22.m128_u64, *(double *)v20.m128_u64, *(double *)v21.m128i_i64);
    v24 = v21;
    v25 = v20;
    v26 = _mm_shuffle_ps(v95, v94, 244);
    v27 = _mm_and_ps(_mm_shuffle_ps(v95, v96, 14), DirectX::g_XMMask3);
    v28 = (__m128)_mm_or_si128(_mm_srli_si128((__m128i)v96, 4), DirectX::g_XMIdentityR3);
    v65 = v23;
    v66 = v22;
    v67 = v25;
    v68 = v24;
    v29 = _mm_and_ps(_mm_shuffle_ps(v26, v26, 82), DirectX::g_XMMask3);
    *(_QWORD *)&v30 = DirectX::XMMatrixMultiply(COERCE_DOUBLE(v94.m128_u64[0] & DirectX::g_XMMask3), &v65).m128_u64[0];
    v31 = a4[1];
    v32 = a4[2];
    v33 = (__m128i)a4[3];
    v34 = *a5;
    v35 = a5[1];
    v36 = a5[2];
    v37 = a5[3];
    v65 = *a4;
    v66 = v31;
    v67 = v32;
    v68 = v33;
    v61 = DirectX::XMMatrixMultiply(v30, &v65);
    *(_QWORD *)&v38 = DirectX::XMMatrixInverse(
                        0LL,
                        *(double *)v31.m128_u64,
                        *(double *)v32.m128_u64,
                        *(double *)v33.m128i_i64).m128_u64[0];
    v65 = v34;
    v66 = v35;
    v67 = v36;
    v68 = (__m128i)v37;
    v71[0] = DirectX::XMMatrixMultiply(v38, &v65);
    v71[1] = v31;
    v71[2] = v32;
    v71[3] = v33;
    v42 = v41 & 1;
    v43 = v42 && v39;
    v44 = v40 && v42 && v18;
    *((_DWORD *)this + 53) = v44;
    v81 = *((_DWORD *)this + 3);
    v89 = *((_DWORD *)this + 2);
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
      this,
      (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v69);
    v87 = v69;
    v88 = v70;
    v86 = a2;
    v80 = 1;
    v90 = *((_DWORD *)this + 53) != 0 ? 3 : 0;
    v72 = v28.m128_i32[0];
    v73 = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
    v74 = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
    v84 = v43;
    v79 = DirectX::XMQuaternionRotationMatrix(*(double *)v61.m128_u64, *(double *)v29.m128_u64, *(double *)v27.m128_u64);
    if ( (v93 & 0x80) != 0 )
    {
      v46 = v99;
      v47 = v100;
    }
    else
    {
      v46 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      v47 = 0;
    }
    v78 = v47;
    v77 = v46;
    v85 = FLOAT_1_0;
    if ( (v93 & 4) != 0 )
    {
      v48 = _mm_movelh_ps((__m128)v97, (__m128)v98);
      v49 = _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v48, v48, 170), v27),
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v48, v48, 85), v29), _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v61)));
      LODWORD(v75) = v49.m128_i32[0];
      HIDWORD(v75) = _mm_shuffle_ps(v49, v49, 85).m128_u32[0];
      v76 = _mm_shuffle_ps(v49, v49, 170).m128_u32[0];
    }
    else
    {
      v75 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      v76 = 0;
    }
    v50 = *((_BYTE *)this + 209);
    v82 = v50 != 0;
    v83 = 0;
    v91 = 0;
    v51 = 0;
    if ( !v45 )
    {
      if ( !a6 )
        return 0LL;
      v91 = 4;
      goto LABEL_38;
    }
    if ( *((_BYTE *)this + 210) && !a8 )
    {
      v91 = 9;
      v51 = !a6;
LABEL_38:
      v52 = 2LL;
LABEL_39:
      if ( v51 )
      {
        v55 = v62;
        v56 = v71;
        v57 = 2LL;
        do
        {
          *v55 = *v56;
          v55[1] = v56[1];
          v55[2] = v56[2];
          v55[3] = v56[3];
          v55[4] = v56[4];
          v55[5] = v56[5];
          v55[6] = v56[6];
          v55 += 8;
          *(v55 - 1) = v56[7];
          v56 += 8;
          --v57;
        }
        while ( v57 );
        *v55 = *v56;
        v64 = 5;
        v63 = 0;
        v58 = (_OWORD *)*((_QWORD *)this + 29);
        if ( *((_OWORD **)this + 30) == v58 )
        {
          std::vector<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo>::_Emplace_reallocate<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo const &>(
            (char *)this + 224,
            v58,
            v62);
        }
        else
        {
          v59 = v62;
          v60 = 2LL;
          do
          {
            *v58 = *v59;
            v58[1] = v59[1];
            v58[2] = v59[2];
            v58[3] = v59[3];
            v58[4] = v59[4];
            v58[5] = v59[5];
            v58[6] = v59[6];
            v58 += 8;
            *(v58 - 1) = v59[7];
            v59 += 8;
            --v60;
          }
          while ( v60 );
          *v58 = *v59;
          *((_QWORD *)this + 29) += 272LL;
        }
      }
      goto LABEL_32;
    }
    if ( v50 )
    {
      if ( !a7 )
      {
        v52 = 2LL;
        v91 = 2;
        v83 = 1;
LABEL_28:
        v51 = !a6;
        goto LABEL_39;
      }
    }
    else if ( a7 )
    {
      v91 = 3;
      v52 = 2LL;
      v83 = 2;
      goto LABEL_28;
    }
    v91 = a6 + 5;
    v52 = 2LL;
LABEL_32:
    v53 = (_OWORD *)*((_QWORD *)this + 29);
    if ( *((_OWORD **)this + 30) == v53 )
    {
      std::vector<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo>::_Emplace_reallocate<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo const &>(
        (char *)this + 224,
        v53,
        v71);
    }
    else
    {
      v54 = v71;
      do
      {
        *v53 = *v54;
        v53[1] = v54[1];
        v53[2] = v54[2];
        v53[3] = v54[3];
        v53[4] = v54[4];
        v53[5] = v54[5];
        v53[6] = v54[6];
        v53 += 8;
        *(v53 - 1) = v54[7];
        v54 += 8;
        --v52;
      }
      while ( v52 );
      *v53 = *v54;
      *((_QWORD *)this + 29) += 272LL;
    }
    return 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x155,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
                           v14);
  }
  return result;
}
