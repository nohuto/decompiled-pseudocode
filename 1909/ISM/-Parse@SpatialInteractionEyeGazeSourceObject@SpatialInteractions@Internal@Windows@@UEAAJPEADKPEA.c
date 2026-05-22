/*
 * XREFs of ?Parse@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800F0F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800EF8FC (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ??$SpatialInteractionEyeGaze_CombinedGaze@AEAMAEAMAEAMAEAMAEAMAEAM@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAXAEAM00000@Z @ 0x1800F0198 (--$SpatialInteractionEyeGaze_CombinedGaze@AEAMAEAMAEAMAEAMAEAMAEAM@SpatialInteractionTraceContin.c)
 *     ?UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J@Z @ 0x1800F1E58 (-UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1800F21F0 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::Parse(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject *this,
        char *a2,
        __int64 a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a4,
        __int64 a5,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a6,
        __m128 *a7,
        bool *a8,
        enum MPCAugmentedInputGestureType *a9,
        bool *a10,
        bool *a11)
{
  char v13; // al
  __int64 result; // rax
  char v15; // di
  int v16; // eax
  unsigned int v17; // esi
  char v18; // r8
  __m128 v19; // xmm3
  __m128 v20; // xmm4
  __m128 v21; // xmm2
  __m128 v22; // xmm5
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // rdx
  char v29; // di
  __m128 v30; // xmm1
  __m128 v31; // xmm2
  __m128 v32; // xmm1
  __m128 v33; // xmm0
  __m128 v34; // xmm2
  __m128i v35; // xmm3
  __m128 v36; // xmm8
  __m128 v37; // xmm6
  __m128 v38; // xmm3
  __m128 v39; // xmm1
  __m128 v40; // xmm2
  double v41; // xmm0_8
  __m128 v42; // xmm6
  __m128 v43; // xmm5
  __m128 v44; // xmm4
  __m128 v45; // xmm8
  __m128 v46; // xmm9
  __m128 v47; // xmm6
  __m128 v48; // xmm0
  __m128 v49; // xmm4
  __m128 v50; // xmm6
  __m128 v51; // xmm2
  __m128 v52; // xmm4
  __m128 v53; // xmm3
  __m128 v54[4]; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v55[4]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v56[16]; // [rsp+B8h] [rbp-50h] BYREF
  int v57; // [rsp+C8h] [rbp-40h]
  __m128 v58; // [rsp+DCh] [rbp-2Ch]
  __m128 v59; // [rsp+ECh] [rbp-1Ch]
  __m128 v60; // [rsp+FCh] [rbp-Ch]
  _BYTE v61[16]; // [rsp+158h] [rbp+50h] BYREF
  int v62; // [rsp+168h] [rbp+60h]
  __m128 v63; // [rsp+17Ch] [rbp+74h]
  __m128 v64; // [rsp+18Ch] [rbp+84h]
  __m128 v65; // [rsp+19Ch] [rbp+94h]
  wil::details::in1diag3 *retaddr; // [rsp+260h] [rbp+158h]

  *a10 = 0;
  v13 = *((_BYTE *)this + 105);
  *((_BYTE *)this + 105) = 0;
  *a11 = v13 != 0;
  *(_DWORD *)a9 = 0;
  *a8 = 0;
  if ( *((_QWORD *)this + 11) )
  {
    if ( a4 )
      goto LABEL_3;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( a4 )
    goto LABEL_10;
LABEL_3:
  if ( ++*((_DWORD *)this + 328) >= 0x78u )
  {
    *((_DWORD *)this + 328) = 0;
    *((_BYTE *)this + 105) = 1;
  }
  result = Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::UpdateState(this, a5);
  if ( (int)result >= 0 )
  {
    v15 = 3;
    if ( a4 )
    {
      v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, _QWORD, _BYTE *))(*(_QWORD *)a4 + 32LL))(
              a4,
              a5,
              0LL,
              v56);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBA,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
          (const char *)(unsigned int)v16);
        return v17;
      }
      v18 = v57;
      v19 = (__m128)DirectX::g_XMIdentityR0;
      v20 = (__m128)DirectX::g_XMIdentityR1;
      v21 = (__m128)DirectX::g_XMIdentityR2;
      v22 = (__m128)DirectX::g_XMIdentityR3;
    }
    else
    {
      v20 = (__m128)DirectX::g_XMIdentityR1;
      v18 = 3;
      v19 = (__m128)DirectX::g_XMIdentityR0;
      v21 = (__m128)DirectX::g_XMIdentityR2;
      v22 = (__m128)DirectX::g_XMIdentityR3;
      v58 = _mm_shuffle_ps(
              DirectX::g_XMIdentityR0,
              _mm_shuffle_ps(DirectX::g_XMIdentityR1, DirectX::g_XMIdentityR0, 160),
              36);
      v57 = 3;
      v60 = _mm_shuffle_ps(
              _mm_shuffle_ps(DirectX::g_XMIdentityR2, DirectX::g_XMIdentityR3, 10),
              DirectX::g_XMIdentityR3,
              152);
      v59 = _mm_shuffle_ps(DirectX::g_XMIdentityR1, DirectX::g_XMIdentityR2, 73);
    }
    v23 = *((_QWORD *)this + 11);
    if ( v23 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v23 + 32LL))(v23, a5, 0LL, v61);
      v25 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC4,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
          (const char *)(unsigned int)v24);
        return v25;
      }
      v18 = v57;
      v15 = v62;
    }
    else
    {
      v62 = 3;
      v63 = _mm_shuffle_ps(v19, _mm_shuffle_ps(v20, v19, 160), 36);
      v65 = _mm_shuffle_ps(_mm_shuffle_ps(v21, v22, 10), v22, 152);
      v64 = _mm_shuffle_ps(v20, v21, 73);
    }
    *((_BYTE *)this + 1249) = *((_BYTE *)this + 1212);
    v26 = 1000000LL * *((_QWORD *)this + 147);
    *((_BYTE *)this + 1248) = 0;
    v27 = v15 & 2;
    v28 = v26 % qword_1801E0C18;
    v29 = v15 & 1;
    *((_QWORD *)this + 152) = 10 * (v26 / qword_1801E0C18);
    if ( (v18 & 2) != 0 && (v18 & 1) != 0 && v27 && v29 )
    {
      if ( *((_BYTE *)this + 1184) )
      {
        v30 = v59;
        *((_BYTE *)this + 1248) = 1;
        v31 = v30;
        v32 = _mm_shuffle_ps(v30, v58, 244);
        v33 = _mm_and_ps(v58, DirectX::g_XMMask3);
        v34 = _mm_and_ps(_mm_shuffle_ps(v31, v60, 14), DirectX::g_XMMask3);
        v35 = _mm_or_si128(_mm_srli_si128((__m128i)v60, 4), DirectX::g_XMIdentityR3);
        *(double *)v33.m128_u64 = DirectX::XMMatrixInverse(0LL, v28);
        v36 = (__m128)v35;
        v54[0] = v33;
        v54[1] = _mm_and_ps(_mm_shuffle_ps(v32, v32, 82), DirectX::g_XMMask3);
        v37 = _mm_shuffle_ps(v64, v63, 244);
        v38 = (__m128)_mm_or_si128(_mm_srli_si128((__m128i)v65, 4), DirectX::g_XMIdentityR3);
        v54[2] = v34;
        v39 = _mm_and_ps(_mm_shuffle_ps(v37, v37, 82), DirectX::g_XMMask3);
        v54[3] = v36;
        v40 = _mm_and_ps(DirectX::g_XMMask3, _mm_shuffle_ps(v64, v65, 14));
        *(_QWORD *)&v41 = DirectX::XMMatrixMultiply(COERCE_DOUBLE(v63.m128_u64[0] & DirectX::g_XMMask3), v54).m128_u64[0];
        v42 = *a7;
        v43 = a7[1];
        v44 = a7[2];
        v55[3] = a7[3];
        v55[0] = v42;
        v55[1] = v43;
        v55[2] = v44;
        v45 = DirectX::XMMatrixMultiply(v41, v55);
        v46 = v40;
        v47 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 1188), (__m128)*((unsigned int *)this + 299));
        v48 = _mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), v45);
        v49 = _mm_mul_ps(_mm_shuffle_ps(v47, v47, 85), v39);
        v50 = _mm_mul_ps(_mm_shuffle_ps(v47, v47, 170), v40);
        v51 = _mm_movelh_ps((__m128)*((unsigned __int64 *)this + 150), (__m128)*((unsigned int *)this + 302));
        v52 = _mm_add_ps(_mm_add_ps(_mm_add_ps(v49, v48), v50), v38);
        v53 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v51, v51, 85), v39), _mm_mul_ps(_mm_shuffle_ps(v51, v51, 0), v45)),
                _mm_mul_ps(_mm_shuffle_ps(v51, v51, 170), v46));
        *((_DWORD *)this + 306) = v52.m128_i32[0];
        *((_DWORD *)this + 307) = _mm_shuffle_ps(v52, v52, 85).m128_u32[0];
        *((_DWORD *)this + 308) = _mm_shuffle_ps(v52, v52, 170).m128_u32[0];
        *((_DWORD *)this + 309) = v53.m128_i32[0];
        *((_DWORD *)this + 310) = _mm_shuffle_ps(v53, v53, 85).m128_u32[0];
        *((_DWORD *)this + 311) = _mm_shuffle_ps(v53, v53, 170).m128_u32[0];
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::SpatialInteractionEyeGaze_CombinedGaze<float &,float &,float &,float &,float &,float &>(
          (float *)this + 306,
          (float *)this + 307,
          (float *)this + 308,
          (float *)this + 309,
          (float *)this + 310,
          (float *)this + 311);
      }
    }
    return 0LL;
  }
  return result;
}
