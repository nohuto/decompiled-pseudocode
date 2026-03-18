/*
 * XREFs of ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801DDDD8
 * Callers:
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801DEBE8 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801D7A2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801D7C54 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801D8DC8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x1801D9438 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::CalculateBoundTrackerInertiaCallbackValues(
        __int64 a1,
        __int64 a2,
        CInteractionTracker *a3,
        __int64 a4,
        char a5)
{
  CInteractionTracker *v8; // rcx
  __int64 v9; // r8
  unsigned int *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __m128 v13; // xmm10
  float v14; // xmm8_4
  float v15; // xmm7_4
  float v16; // xmm10_4
  float v17; // xmm9_4
  __m128 v18; // xmm6
  float v19; // xmm5_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  __int64 result; // rax
  __int128 v27; // [rsp+38h] [rbp-A1h]
  __int64 v28; // [rsp+68h] [rbp-71h]
  _OWORD v29[3]; // [rsp+70h] [rbp-69h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-39h]

  if ( CInteractionTracker::AreInteractionAnimationsAlive(a3) || CInteractionTracker::HasDefaultAnimations(v8) )
  {
    v10 = CInteractionTracker::CalculateInertiaCallbackValues((__int64)a3, (unsigned int *)v29);
  }
  else
  {
    v10 = (unsigned int *)v29;
    v11 = *(_OWORD *)(v9 + 588);
    v29[0] = *(_OWORD *)(v9 + 572);
    v12 = *(_OWORD *)(v9 + 604);
    v29[1] = v11;
    *(_QWORD *)&v11 = *(_QWORD *)(v9 + 620);
    v29[2] = v12;
    v30 = v11;
  }
  v18 = *((__m128 *)v10 + 2);
  v13 = *((__m128 *)v10 + 1);
  v27 = *(_OWORD *)v10;
  v28 = *((_QWORD *)v10 + 6);
  v14 = v13.m128_f32[0] - CInteractionTracker::GetCurrentValue((__int64)a3, 0);
  v15 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0] - CInteractionTracker::GetCurrentValue((__int64)a3, 1);
  v16 = _mm_shuffle_ps(v13, v13, 255).m128_f32[0] / CInteractionTracker::GetCurrentValue((__int64)a3, 2);
  v17 = v18.m128_f32[0] - CInteractionTracker::GetCurrentValue((__int64)a3, 0);
  v18.m128_f32[0] = _mm_shuffle_ps(v18, v18, 85).m128_f32[0] - CInteractionTracker::GetCurrentValue((__int64)a3, 1);
  v19 = *(float *)&v28 / CInteractionTracker::GetCurrentValue((__int64)a3, 2);
  *(_QWORD *)(a2 + 16) = _mm_unpacklo_ps((__m128)*(unsigned int *)(a4 + 72), (__m128)*(unsigned int *)(a4 + 76)).m128_u64[0];
  *(_DWORD *)(a2 + 24) = 0;
  v20 = *(float *)(a4 + 128);
  *(float *)(a2 + 28) = v20;
  *(_QWORD *)(a2 + 32) = _mm_unpacklo_ps((__m128)*(unsigned int *)(a4 + 72), (__m128)*(unsigned int *)(a4 + 76)).m128_u64[0];
  *(_DWORD *)(a2 + 40) = 0;
  v21 = *(float *)(a4 + 128);
  *(_DWORD *)(a2 + 12) = 0;
  *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a2 + 8) = 0;
  *(float *)(a2 + 48) = v21;
  if ( (a5 & 1) != 0 )
  {
    v22 = v14 + *(float *)(a2 + 16);
    v23 = v17 + *(float *)(a2 + 32);
    *(_DWORD *)a2 = v27;
    *(float *)(a2 + 16) = v22;
    *(float *)(a2 + 32) = v23;
  }
  else if ( (a5 & 2) == 0 )
  {
    goto LABEL_11;
  }
  if ( (a5 & 2) != 0 )
  {
    v24 = v15 + *(float *)(a2 + 20);
    v25 = v18.m128_f32[0] + *(float *)(a2 + 36);
    *(_DWORD *)(a2 + 4) = DWORD1(v27);
    *(float *)(a2 + 20) = v24;
    *(float *)(a2 + 36) = v25;
  }
LABEL_11:
  if ( (a5 & 4) != 0 )
  {
    *(float *)(a2 + 28) = v20 * v16;
    *(_DWORD *)(a2 + 12) = HIDWORD(v27);
    *(float *)(a2 + 48) = v21 * v19;
  }
  result = a2;
  *(_BYTE *)(a2 + 44) = v18.m128_i8[12];
  *(_WORD *)(a2 + 52) = WORD2(v28);
  *(_BYTE *)(a2 + 54) = 1;
  return result;
}
