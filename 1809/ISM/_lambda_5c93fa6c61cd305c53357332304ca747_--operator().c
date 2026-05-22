/*
 * XREFs of _lambda_5c93fa6c61cd305c53357332304ca747_::operator() @ 0x1801176A0
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x180117220 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 * Callees:
 *     ?XMMatrixRTInverse@DirectX@@YQ?AUXMMATRIX@1@U21@@Z @ 0x180109DFC (-XMMatrixRTInverse@DirectX@@YQ-AUXMMATRIX@1@U21@@Z.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x18010DCA0 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4TracePredictionType@@AEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_NI@Z @ 0x18010DDD4 (-GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4Tr.c)
 *     ??$ValidateOrthonormalRightHandedMatrix@$00@Details@DirectX@@YQ?AW4OrthonormalMatrixValidationFailures@1@UXMMATRIX@1@@Z @ 0x18011B0F4 (--$ValidateOrthonormalRightHandedMatrix@$00@Details@DirectX@@YQ-AW4OrthonormalMatrixValidationFa.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_84d1669a2d3ff4f598ada49efe38a155___ @ 0x18011BD04 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_18011BD04.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_5c93fa6c61cd305c53357332304ca747_::operator()(__int64 **a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  char v4; // di
  __int64 v5; // r15
  float *v6; // r14
  __int64 v7; // rsi
  unsigned int v8; // r14d
  float *v9; // r15
  __int64 *v10; // r10
  __int64 v11; // rcx
  float **v12; // rsi
  float *v13; // r13
  unsigned int v14; // r14d
  float *v15; // r15
  __int64 v16; // rcx
  __m128 v17; // xmm2
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 *v22; // rdx
  __int64 **v23; // rax
  __int64 v24; // rdx
  __m128 v25; // xmm0
  __m128 v26; // xmm2
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm1
  __m128 v30; // xmm6
  __m128 v31; // xmm7
  __m128 v32; // xmm1
  _DWORD *v33; // rdx
  __int64 v34; // rcx
  __m128 v35; // xmm2
  __int64 v36; // rcx
  __m128 v37; // xmm4
  __int64 *v38; // r14
  __int64 v39; // r14
  int *v40; // r15
  __int64 *v41; // r12
  __int64 *v42; // r13
  _DWORD *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v47; // [rsp+68h] [rbp-A0h]
  __int64 *v48; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-90h] BYREF
  __int64 v50; // [rsp+88h] [rbp-80h] BYREF
  int v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h]
  int v53; // [rsp+A0h] [rbp-68h]
  __int64 v54; // [rsp+A8h] [rbp-60h]
  int v55; // [rsp+B0h] [rbp-58h]
  __int64 v56; // [rsp+B8h] [rbp-50h]
  int v57; // [rsp+C0h] [rbp-48h]
  __int64 v58; // [rsp+C8h] [rbp-40h]
  int v59; // [rsp+D0h] [rbp-38h]
  __int64 v60; // [rsp+D8h] [rbp-30h]
  int v61; // [rsp+E0h] [rbp-28h]
  __int64 v62; // [rsp+E8h] [rbp-20h] BYREF

  v2 = 0;
  v3 = **a1;
  v4 = 1;
  v5 = v3 + 72;
  v6 = (float *)(v3 + 72);
  v47 = *(_DWORD *)(v3 + 16);
  while ( (_fpclass(*v6) & 0x207) == 0 )
  {
    ++v2;
    ++v6;
    if ( v2 >= 3 )
      goto LABEL_6;
  }
  *(_DWORD *)(**a1 + 16) &= ~1u;
LABEL_6:
  v7 = **a1;
  if ( (*(_BYTE *)(v7 + 16) & 1) == 0 )
  {
    *(_QWORD *)v5 = qword_180193DD0;
    *(_DWORD *)(v5 + 8) = dword_180193DD8;
    *(_DWORD *)(**a1 + 16) &= 0xFFFFFFF2;
    v7 = **a1;
  }
  v8 = 0;
  v9 = (float *)(v7 + 36);
  do
  {
    if ( (_fpclass(*v9) & 0x207) != 0 )
    {
      v10 = *a1;
      goto LABEL_14;
    }
    ++v8;
    ++v9;
  }
  while ( v8 < 9 );
  if ( !(unsigned int)DirectX::Details::ValidateOrthonormalRightHandedMatrix<1>() )
    goto LABEL_15;
LABEL_14:
  *(_DWORD *)(*v10 + 16) &= ~2u;
LABEL_15:
  v11 = **a1;
  if ( (*(_BYTE *)(v11 + 16) & 2) == 0 )
  {
    *(_OWORD *)(v7 + 36) = xmmword_1801656E0;
    *(_OWORD *)(v7 + 52) = xmmword_1801656F0;
    *(_DWORD *)(v7 + 68) = 1065353216;
    *(_DWORD *)(**a1 + 16) &= 0xFFFFFF8D;
    v11 = **a1;
  }
  v51 = 4;
  v50 = v11 + 84;
  v12 = (float **)&v50;
  v53 = 16;
  v52 = v11 + 96;
  v54 = v11 + 108;
  v56 = v11 + 120;
  v58 = v11 + 132;
  v60 = v11 + 144;
  v55 = 8;
  v57 = 32;
  v59 = 64;
  v61 = 128;
  do
  {
    v13 = *v12;
    v14 = 0;
    v15 = *v12;
    while ( (_fpclass(*v15) & 0x207) == 0 )
    {
      ++v14;
      ++v15;
      if ( v14 >= 3 )
        goto LABEL_23;
    }
    *(_QWORD *)v13 = qword_180193DD0;
    *((_DWORD *)v13 + 2) = dword_180193DD8;
    *(_DWORD *)(**a1 + 16) &= ~*((_DWORD *)v12 + 2);
LABEL_23:
    v12 += 2;
  }
  while ( v12 != (float **)&v62 );
  v16 = **a1;
  v17 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(v16 + 144), (__m128)*(unsigned int *)(v16 + 152));
  v18 = _mm_mul_ps(v17, v17);
  v19 = _mm_shuffle_ps(v18, v18, 153);
  if ( (float)((float)(v18.m128_f32[0] + v19.m128_f32[0]) + _mm_shuffle_ps(v19, v19, 85).m128_f32[0]) > 1.0201 )
    *(_DWORD *)(v16 + 16) &= ~0x80u;
  if ( *(_DWORD *)a1[1] )
  {
    v20 = -1LL;
    v21 = 0LL;
  }
  else
  {
    v20 = *a1[2];
    v21 = *a1[3] - v20;
  }
  v22 = (__int64 *)*a1[4];
  if ( v22 )
  {
    *v22 = v21;
    v23 = (__int64 **)a1[4];
    if ( **v23 < 0 )
      **v23 = 0LL;
  }
  if ( (a1[5][13] & 0x10) == 0 )
  {
    v24 = **a1;
    if ( (*(_BYTE *)(v24 + 16) & 2) != 0 )
    {
      v25 = *(__m128 *)(v24 + 36);
      v26 = *(__m128 *)(v24 + 52);
      v27 = _mm_shuffle_ps(v26, v25, 244);
      v28 = _mm_and_ps(_mm_shuffle_ps(v26, *(__m128 *)(v24 + 68), 14), DirectX::g_XMMask3);
      v29 = _mm_and_ps(_mm_shuffle_ps(v27, v27, 82), DirectX::g_XMMask3);
      v30 = DirectX::XMMatrixRTInverse(
              COERCE_DOUBLE(v25.m128_u64[0] & DirectX::g_XMMask3),
              *(double *)v29.m128_u64,
              *(double *)v28.m128_u64);
      v31 = _mm_movelh_ps((__m128)(unsigned __int64)qword_180192BF0, (__m128)(unsigned int)dword_180192BF8);
      v32 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), v29), _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v30)),
              _mm_mul_ps(_mm_shuffle_ps(v31, v31, 170), v28));
      v33[33] = v32.m128_i32[0];
      v33[34] = _mm_shuffle_ps(v32, v32, 85).m128_u32[0];
      v33[35] = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
      *(_DWORD *)(**a1 + 16) |= 0x40u;
    }
  }
  v34 = **a1;
  v35 = _mm_sub_ps(
          (__m128)0LL,
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(v34 + 84), (__m128)*(unsigned int *)(v34 + 92)));
  *(_DWORD *)(v34 + 84) = v35.m128_i32[0];
  *(_DWORD *)(v34 + 88) = _mm_shuffle_ps(v35, v35, 85).m128_u32[0];
  *(_DWORD *)(v34 + 92) = _mm_shuffle_ps(v35, v35, 170).m128_u32[0];
  v36 = **a1;
  v37 = _mm_sub_ps(
          (__m128)0LL,
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(v36 + 96), (__m128)*(unsigned int *)(v36 + 104)));
  *(_DWORD *)(v36 + 96) = v37.m128_i32[0];
  *(_DWORD *)(v36 + 100) = _mm_shuffle_ps(v37, v37, 85).m128_u32[0];
  *(_DWORD *)(v36 + 104) = _mm_shuffle_ps(v37, v37, 170).m128_u32[0];
  QueryPerformanceCounter(&PerformanceCount);
  v38 = *a1;
  v48 = a1[5];
  if ( (v48[13] & 0x40) == 0 || (*(_BYTE *)(*v38 + 156) & 1) == 0 )
    v4 = 0;
  v39 = *v38;
  v40 = (int *)a1[1];
  v41 = a1[3];
  v42 = a1[6];
  v43 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
  if ( v43 && *v43 )
  {
    HolographicDriverClientContinuousTrace::Instance();
    HolographicDriverClientContinuousTrace::GetPoseAtTime_(
      v44,
      (__int64)a1[5],
      (__int64)(v48 + 11),
      *v42,
      PerformanceCount.QuadPart,
      v20,
      *v41,
      *(_QWORD *)(v39 + 8),
      *v40,
      v39,
      v4,
      v47);
  }
  v45 = (__int64)(a1[5] + 11);
  v48 = *a1;
  return Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_84d1669a2d3ff4f598ada49efe38a155___(
           v45,
           &v48);
}
