/*
 * XREFs of ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18019E6E0
 * Callers:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801A1A44 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801A2F88 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18019E4BC (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x18019FCE8 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x18019FE04 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18019FE24 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801D610C (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1801D72E0 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1801D73A4 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1801D740C (-GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1801D788C (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1801D7934 (-GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1801D798C (-GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetModifiedRestingValue@CMotion@@QEBAMXZ @ 0x1801DFC5C (-GetModifiedRestingValue@CMotion@@QEBAMXZ.c)
 */

unsigned int *__fastcall CInteractionTracker::CalculateInertiaCallbackValues(__int64 a1, unsigned int *a2)
{
  CInteractionTracker *v4; // rcx
  bool HasImpulse; // al
  __int64 v6; // rcx
  __m128 v7; // xmm6
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128 v10; // xmm0
  __m128 v11; // xmm6
  CScrollAnimation *v12; // rcx
  __int64 v13; // rcx
  CMotion *v14; // rax
  __m128 v15; // xmm6
  CMotion *v16; // rax
  __int64 v17; // rcx
  CMotion *v18; // rax
  __int64 v19; // rcx
  char v20; // si
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rcx
  char v24; // al
  bool v25; // al
  __int64 v26; // rcx
  __int64 v27; // rcx
  bool HasDefaultAnimations; // al
  unsigned int v29; // xmm0_4
  __m128 v30; // xmm3
  __m128 v31; // xmm4
  unsigned int v32; // xmm2_4
  unsigned __int64 v33; // xmm0_8
  __int64 v34; // rcx
  unsigned int v35; // eax
  __m128 v36; // xmm1
  unsigned __int64 v37; // xmm0_8
  __m128 v38; // xmm1
  unsigned int v39; // eax
  unsigned __int64 v40; // xmm0_8
  unsigned int v41; // eax
  CScrollScaleKeyframeAnimation *v42; // rcx
  float NaturalEndpoint; // xmm7_4
  float LastKeyframeValueForScale; // xmm6_4
  float ScaleVelocity; // xmm0_4
  unsigned int v46; // xmm1_4
  unsigned int v47; // xmm1_4
  unsigned int v48; // eax
  __m128 v49; // xmm1
  unsigned __int64 v50; // xmm0_8
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v55; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v56; // [rsp+24h] [rbp-5Ch]
  unsigned int v57; // [rsp+28h] [rbp-58h]
  unsigned int v58; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v59; // [rsp+34h] [rbp-4Ch]
  unsigned int v60; // [rsp+38h] [rbp-48h]
  unsigned int v61; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v62; // [rsp+44h] [rbp-3Ch]
  unsigned int v63; // [rsp+48h] [rbp-38h]
  unsigned int v64; // [rsp+58h] [rbp-28h]

  memset_0(a2, 0, 0x38uLL);
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
  {
    HasImpulse = CInteractionTracker::HasImpulse(v4);
    v6 = *(_QWORD *)(a1 + 328);
    *((_BYTE *)a2 + 53) = HasImpulse;
    v7 = (__m128)*(unsigned int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 280LL))(v6) + 48);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 280LL))(*(_QWORD *)(a1 + 336));
    v9 = *(_QWORD *)(a1 + 320);
    v63 = 0;
    v10 = _mm_unpacklo_ps(v7, (__m128)*(unsigned int *)(v8 + 48));
    *(_QWORD *)a2 = v10.m128_u64[0];
    a2[2] = 0;
    a2[3] = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 280LL))(v9) + 48);
    v10.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 328));
    v11 = v10;
    v10.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 336));
    v63 = 0;
    v12 = *(CScrollAnimation **)(a1 + 320);
    *((_QWORD *)a2 + 2) = _mm_unpacklo_ps(v11, v10).m128_u64[0];
    a2[6] = 0;
    v10.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(v12);
    v13 = *(_QWORD *)(a1 + 328);
    a2[7] = v10.m128_i32[0];
    v14 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 280LL))(v13);
    v10.m128_f32[0] = CMotion::GetModifiedRestingValue(v14);
    v15 = v10;
    v16 = (CMotion *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 280LL))(*(_QWORD *)(a1 + 336));
    v10.m128_f32[0] = CMotion::GetModifiedRestingValue(v16);
    v17 = *(_QWORD *)(a1 + 320);
    v63 = 0;
    *((_QWORD *)a2 + 4) = _mm_unpacklo_ps(v15, v10).m128_u64[0];
    a2[10] = 0;
    v18 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 280LL))(v17);
    v10.m128_f32[0] = CMotion::GetModifiedRestingValue(v18);
    v19 = *(_QWORD *)(a1 + 328);
    a2[12] = v10.m128_i32[0];
    v20 = 1;
    v21 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 280LL))(v19) + 136);
    if ( v21 )
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21);
    else
      v22 = 1;
    v25 = 0;
    if ( v22 )
    {
      v23 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 280LL))(*(_QWORD *)(a1 + 336))
                      + 136);
      v24 = v23 ? (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23) : 1;
      if ( v24 )
        v25 = 1;
    }
    v26 = *(_QWORD *)(a1 + 320);
    *((_BYTE *)a2 + 44) = v25;
    v27 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 280LL))(v26) + 136);
    if ( v27 )
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 48LL))(v27);
    *((_BYTE *)a2 + 52) = v20;
  }
  else
  {
    HasDefaultAnimations = CInteractionTracker::HasDefaultAnimations(v4);
    v29 = *(_DWORD *)(a1 + 128);
    v30 = (__m128)*(unsigned int *)(a1 + 72);
    v31 = (__m128)*(unsigned int *)(a1 + 76);
    v32 = *(_DWORD *)(a1 + 80);
    a2[7] = v29;
    a2[12] = v29;
    v33 = _mm_unpacklo_ps(v30, v31).m128_u64[0];
    *((_QWORD *)a2 + 4) = v33;
    if ( HasDefaultAnimations )
    {
      v34 = *(_QWORD *)(a1 + 456);
      v63 = v32;
      *((_QWORD *)a2 + 2) = v33;
      *((_WORD *)a2 + 26) = 257;
      *((_BYTE *)a2 + 44) = 1;
      a2[6] = v32;
      a2[10] = v32;
      if ( v34 )
      {
        CScrollPositionKeyframeAnimation::GetNaturalEndpoint(v34, &v61);
        CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(*(_QWORD *)(a1 + 456), &v58);
        CScrollPositionKeyframeAnimation::GetPositionVelocity(*(_QWORD *)(a1 + 456), &v55);
        v35 = v57;
        v36 = (__m128)v59;
        *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)v55, (__m128)v56).m128_u64[0];
        v64 = v60;
        v37 = _mm_unpacklo_ps((__m128)v58, v36).m128_u64[0];
        v38 = (__m128)v62;
        *((_QWORD *)a2 + 4) = v37;
        LODWORD(v37) = v63;
        a2[2] = v35;
        v39 = v64;
        v64 = v37;
        v40 = _mm_unpacklo_ps((__m128)v61, v38).m128_u64[0];
        a2[10] = v39;
        v41 = v64;
        *((_QWORD *)a2 + 2) = v40;
        a2[6] = v41;
      }
      v42 = *(CScrollScaleKeyframeAnimation **)(a1 + 464);
      if ( v42 )
      {
        NaturalEndpoint = CScrollScaleKeyframeAnimation::GetNaturalEndpoint(v42);
        LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(*(CScrollScaleKeyframeAnimation **)(a1 + 464));
        ScaleVelocity = CScrollScaleKeyframeAnimation::GetScaleVelocity(*(CScrollScaleKeyframeAnimation **)(a1 + 464));
        v46 = a2[9];
        *((float *)a2 + 3) = ScaleVelocity;
        v61 = a2[8];
        v63 = a2[10];
        *((float *)a2 + 12) = LastKeyframeValueForScale;
        *((float *)a2 + 7) = NaturalEndpoint;
        v62 = v46;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v58, &v61);
        v47 = a2[5];
        v61 = a2[4];
        v63 = a2[6];
        v62 = v47;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v55, &v61);
        v48 = v60;
        v49 = (__m128)v56;
        *((_QWORD *)a2 + 4) = _mm_unpacklo_ps((__m128)v58, (__m128)v59).m128_u64[0];
        v64 = v57;
        v50 = _mm_unpacklo_ps((__m128)v55, v49).m128_u64[0];
        a2[10] = v48;
        v51 = v64;
        *((_QWORD *)a2 + 2) = v50;
        a2[6] = v51;
      }
    }
    else
    {
      *((_WORD *)a2 + 26) = 0;
      *((_QWORD *)a2 + 2) = _mm_unpacklo_ps(v30, v31).m128_u64[0];
      v64 = v32;
      a2[10] = v32;
      v52 = v64;
      v64 = 0;
      a2[3] = 0;
      a2[6] = v52;
      v53 = v64;
      *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      a2[2] = v53;
      *((_BYTE *)a2 + 44) = 0;
    }
  }
  return a2;
}
