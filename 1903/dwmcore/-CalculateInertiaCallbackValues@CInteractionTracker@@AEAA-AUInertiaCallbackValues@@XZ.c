/*
 * XREFs of ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801D9364
 * Callers:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801DC654 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801DDE88 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801DF4E8 (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801E02F8 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 * Callees:
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801D913C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x1801DA9EC (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x1801DAB48 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801DAB68 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1802072AC (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180208470 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180208534 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18020859C (-GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1802089DC (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180208A84 (-GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180208ADC (-GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetModifiedRestingValue@CMotion@@QEBAMXZ @ 0x18020FD70 (-GetModifiedRestingValue@CMotion@@QEBAMXZ.c)
 */

unsigned int *__fastcall CInteractionTracker::CalculateInertiaCallbackValues(__int64 a1, unsigned int *a2)
{
  __m128 v2; // xmm0
  CInteractionTracker *v5; // rcx
  bool HasImpulse; // al
  __int64 v7; // rcx
  __m128 v8; // xmm6
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128 v11; // xmm6
  CScrollAnimation *v12; // rcx
  __int64 v13; // rcx
  CMotion *v14; // rax
  __m128 v15; // xmm6
  CMotion *v16; // rax
  __int64 v17; // rcx
  CMotion *v18; // rax
  float ModifiedRestingValue; // xmm0_4
  __int64 v20; // rcx
  char v21; // si
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  char v25; // al
  bool v26; // al
  __int64 v27; // rcx
  __int64 v28; // rcx
  bool HasDefaultAnimations; // al
  unsigned int v30; // xmm0_4
  __m128 v31; // xmm3
  __m128 v32; // xmm4
  unsigned int v33; // xmm2_4
  unsigned __int64 v34; // xmm0_8
  __int64 v35; // rcx
  unsigned int v36; // xmm0_4
  __m128 v37; // xmm2
  unsigned __int64 v38; // xmm1_8
  __m128 v39; // xmm2
  unsigned int v40; // eax
  unsigned int v41; // xmm0_4
  __m128 v42; // xmm1
  unsigned int v43; // xmm0_4
  unsigned int v44; // eax
  unsigned int v45; // eax
  CScrollScaleKeyframeAnimation *v46; // rcx
  float NaturalEndpoint; // xmm7_4
  float LastKeyframeValueForScale; // xmm6_4
  float ScaleVelocity; // xmm0_4
  unsigned int v50; // xmm1_4
  unsigned int v51; // xmm1_4
  unsigned int v52; // xmm0_4
  __m128 v53; // xmm2
  unsigned __int64 v54; // xmm1_8
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v59; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v60; // [rsp+24h] [rbp-5Ch]
  unsigned int v61; // [rsp+28h] [rbp-58h]
  unsigned int v62; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v63; // [rsp+34h] [rbp-4Ch]
  unsigned int v64; // [rsp+38h] [rbp-48h]
  unsigned int v65; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v66; // [rsp+44h] [rbp-3Ch]
  unsigned int v67; // [rsp+48h] [rbp-38h]
  unsigned int v68; // [rsp+58h] [rbp-28h]

  memset_0(a2, 0, 0x38uLL);
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
  {
    HasImpulse = CInteractionTracker::HasImpulse(v5);
    v7 = *(_QWORD *)(a1 + 328);
    *((_BYTE *)a2 + 53) = HasImpulse;
    v8 = (__m128)*(unsigned int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 312LL))(v7) + 48);
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 312LL))(*(_QWORD *)(a1 + 336));
    v10 = *(_QWORD *)(a1 + 320);
    v67 = 0;
    *(_QWORD *)a2 = _mm_unpacklo_ps(v8, (__m128)*(unsigned int *)(v9 + 48)).m128_u64[0];
    a2[2] = 0;
    a2[3] = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 312LL))(v10) + 48);
    v2.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 328));
    v11 = v2;
    v2.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 336));
    v67 = 0;
    v12 = *(CScrollAnimation **)(a1 + 320);
    *((_QWORD *)a2 + 2) = _mm_unpacklo_ps(v11, v2).m128_u64[0];
    a2[6] = 0;
    v2.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(v12);
    v13 = *(_QWORD *)(a1 + 328);
    a2[7] = v2.m128_i32[0];
    v14 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 312LL))(v13);
    v2.m128_f32[0] = CMotion::GetModifiedRestingValue(v14);
    v15 = v2;
    v16 = (CMotion *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 312LL))(*(_QWORD *)(a1 + 336));
    v2.m128_f32[0] = CMotion::GetModifiedRestingValue(v16);
    v17 = *(_QWORD *)(a1 + 320);
    v67 = 0;
    *((_QWORD *)a2 + 4) = _mm_unpacklo_ps(v15, v2).m128_u64[0];
    a2[10] = 0;
    v18 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 312LL))(v17);
    ModifiedRestingValue = CMotion::GetModifiedRestingValue(v18);
    v20 = *(_QWORD *)(a1 + 328);
    *((float *)a2 + 12) = ModifiedRestingValue;
    v21 = 1;
    v22 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 312LL))(v20) + 136);
    if ( v22 )
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 48LL))(v22);
    else
      v23 = 1;
    v26 = 0;
    if ( v23 )
    {
      v24 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 312LL))(*(_QWORD *)(a1 + 336))
                      + 136);
      v25 = v24 ? (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24) : 1;
      if ( v25 )
        v26 = 1;
    }
    v27 = *(_QWORD *)(a1 + 320);
    *((_BYTE *)a2 + 44) = v26;
    v28 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 312LL))(v27) + 136);
    if ( v28 )
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 48LL))(v28);
    *((_BYTE *)a2 + 52) = v21;
  }
  else
  {
    HasDefaultAnimations = CInteractionTracker::HasDefaultAnimations(v5);
    v30 = *(_DWORD *)(a1 + 128);
    v31 = (__m128)*(unsigned int *)(a1 + 72);
    v32 = (__m128)*(unsigned int *)(a1 + 76);
    v33 = *(_DWORD *)(a1 + 80);
    a2[7] = v30;
    a2[12] = v30;
    v34 = _mm_unpacklo_ps(v31, v32).m128_u64[0];
    *((_QWORD *)a2 + 4) = v34;
    if ( HasDefaultAnimations )
    {
      v35 = *(_QWORD *)(a1 + 456);
      v67 = v33;
      *((_QWORD *)a2 + 2) = v34;
      *((_WORD *)a2 + 26) = 257;
      *((_BYTE *)a2 + 44) = 1;
      a2[6] = v33;
      a2[10] = v33;
      if ( v35 )
      {
        CScrollPositionKeyframeAnimation::GetNaturalEndpoint(v35, &v65);
        CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(*(_QWORD *)(a1 + 456), &v62);
        CScrollPositionKeyframeAnimation::GetPositionVelocity(*(_QWORD *)(a1 + 456), &v59);
        v36 = v61;
        v37 = (__m128)v63;
        *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)v59, (__m128)v60).m128_u64[0];
        v38 = _mm_unpacklo_ps((__m128)v62, v37).m128_u64[0];
        v39 = (__m128)v66;
        v40 = v36;
        v41 = v64;
        *((_QWORD *)a2 + 4) = v38;
        v42 = (__m128)v65;
        v68 = v41;
        v43 = v67;
        a2[2] = v40;
        v44 = v68;
        v68 = v43;
        a2[10] = v44;
        v45 = v68;
        *((_QWORD *)a2 + 2) = _mm_unpacklo_ps(v42, v39).m128_u64[0];
        a2[6] = v45;
      }
      v46 = *(CScrollScaleKeyframeAnimation **)(a1 + 464);
      if ( v46 )
      {
        NaturalEndpoint = CScrollScaleKeyframeAnimation::GetNaturalEndpoint(v46);
        LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(*(CScrollScaleKeyframeAnimation **)(a1 + 464));
        ScaleVelocity = CScrollScaleKeyframeAnimation::GetScaleVelocity(*(CScrollScaleKeyframeAnimation **)(a1 + 464));
        v50 = a2[9];
        *((float *)a2 + 3) = ScaleVelocity;
        v65 = a2[8];
        v67 = a2[10];
        *((float *)a2 + 12) = LastKeyframeValueForScale;
        *((float *)a2 + 7) = NaturalEndpoint;
        v66 = v50;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v62, &v65);
        v51 = a2[5];
        v65 = a2[4];
        v67 = a2[6];
        v66 = v51;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v59, &v65);
        v52 = v64;
        v53 = (__m128)v60;
        *((_QWORD *)a2 + 4) = _mm_unpacklo_ps((__m128)v62, (__m128)v63).m128_u64[0];
        v54 = _mm_unpacklo_ps((__m128)v59, v53).m128_u64[0];
        v68 = v61;
        a2[10] = v52;
        v55 = v68;
        *((_QWORD *)a2 + 2) = v54;
        a2[6] = v55;
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = _mm_unpacklo_ps(v31, v32).m128_u64[0];
      v68 = v33;
      a2[10] = v33;
      v56 = v68;
      v68 = 0;
      a2[3] = 0;
      a2[6] = v56;
      v57 = v68;
      *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      a2[2] = v57;
    }
  }
  return a2;
}
