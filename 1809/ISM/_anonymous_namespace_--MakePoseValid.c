/*
 * XREFs of _anonymous_namespace_::MakePoseValid @ 0x1800A2B50
 * Callers:
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800A2D4C (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::MakePoseValid(__int64 a1)
{
  __int64 result; // rax
  __m128 v2; // xmm4
  __m128 v3; // xmm3
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  __m128 v8; // xmm3
  __m128 v9; // xmm3
  __m128 v10; // xmm3
  __m128 v11; // xmm3
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm2

  if ( !*(_BYTE *)(a1 + 28) )
  {
    *(_QWORD *)a1 = qword_180193D60;
    result = (unsigned int)dword_180193D68;
    *(_DWORD *)(a1 + 8) = dword_180193D68;
    *(_BYTE *)(a1 + 28) = 1;
  }
  if ( *(_BYTE *)(a1 + 29) )
  {
    v2 = *(__m128 *)(a1 + 12);
    v3 = _mm_mul_ps(v2, v2);
    v4 = _mm_add_ps(_mm_shuffle_ps(v2, v3, 64), v3);
    v5 = _mm_add_ps(_mm_shuffle_ps(v3, v4, 48), v4);
    v6 = _mm_sub_ps(_mm_shuffle_ps(v5, v5, 170), (__m128)_xmm);
    result = (unsigned int)_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v6), v6), (__m128)_xmm));
    if ( (_DWORD)result == 15 )
    {
      v14 = *(__m128 *)(a1 + 12);
    }
    else
    {
      v7 = _mm_shuffle_ps(v3, v3, 238);
      v8 = _mm_add_ps(v3, v7);
      v9 = _mm_shuffle_ps(v8, v8, 64);
      v10 = _mm_add_ps(v9, _mm_shuffle_ps(v7, v9, 240));
      v11 = _mm_shuffle_ps(v10, v10, 170);
      v12 = _mm_sqrt_ps(v11);
      v13 = _mm_cmpneq_ps(DirectX::g_XMInfinity, v11);
      v14 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_cmpneq_ps((__m128)0LL, v12), _mm_div_ps(v2, v12)), v13),
              _mm_andnot_ps(v13, DirectX::g_XMQNaN));
    }
    *(__m128 *)(a1 + 12) = v14;
  }
  else
  {
    *(_BYTE *)(a1 + 29) = 1;
    *(_OWORD *)(a1 + 12) = xmmword_180160838;
  }
  return result;
}
