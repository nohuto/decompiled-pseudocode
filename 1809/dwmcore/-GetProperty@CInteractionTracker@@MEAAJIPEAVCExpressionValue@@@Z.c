/*
 * XREFs of ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18019FA00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18019E4BC (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F89C (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x18019FCE8 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x18019FE04 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18019FE24 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801D610C (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1801D73A4 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1801D7934 (-GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 */

__int64 __fastcall CInteractionTracker::GetProperty(
        CInteractionTracker *this,
        unsigned int a2,
        struct CExpressionValue *a3)
{
  __m128 v3; // xmm0
  unsigned int v4; // esi
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  int v14; // xmm0_4
  int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  bool v23; // zf
  char v24; // al
  char v25; // al
  float NaturalEndpoint; // xmm0_4
  __m128 v27; // xmm6
  int v28; // eax
  __int64 v29; // rcx
  CScrollScaleKeyframeAnimation *v30; // rcx
  __int64 v31; // rcx
  float v32; // xmm0_4
  CScrollAnimation *v33; // rcx
  float v34; // xmm0_4
  __int64 v35; // xmm0_8
  __int64 v36; // rcx
  char *v37; // r8
  __int64 ScaleAdjustedPositionIfNeeded; // rax
  __int64 v40; // [rsp+30h] [rbp-30h] BYREF
  int v41; // [rsp+38h] [rbp-28h]
  char v42[16]; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  if ( a2 > 0x35 )
  {
    v16 = a2 - 55;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
        {
          NaturalEndpoint = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(v29 + 320));
        }
        else
        {
          v30 = *(CScrollScaleKeyframeAnimation **)(v29 + 464);
          if ( v30 )
            NaturalEndpoint = CScrollScaleKeyframeAnimation::GetNaturalEndpoint(v30);
          else
            NaturalEndpoint = *((float *)this + 32);
        }
        goto LABEL_39;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( !v20 )
          {
            v25 = *((_BYTE *)this + 532) & 1;
            *((_DWORD *)a3 + 18) = 17;
            *(_BYTE *)a3 = v25;
            goto LABEL_21;
          }
          v21 = v20 - 1;
          if ( !v21 )
          {
            *((_DWORD *)a3 + 18) = 52;
            *(_QWORD *)a3 = *(_QWORD *)((char *)this + 108);
            v15 = *((_DWORD *)this + 29);
            goto LABEL_20;
          }
          v22 = v21 - 3;
          if ( !v22 )
          {
            v14 = *((_DWORD *)this + 41);
            goto LABEL_18;
          }
          if ( v22 != 14 )
            goto LABEL_30;
          if ( CInteractionTracker::HasImpulse(this)
            || (v23 = !CInteractionTracker::HasDefaultAnimations(this), v24 = 0, !v23) )
          {
            v24 = 1;
          }
          *((_DWORD *)a3 + 18) = 17;
          *(_BYTE *)a3 = v24;
LABEL_54:
          *((_BYTE *)a3 + 76) = 1;
          return v4;
        }
        NaturalEndpoint = CInteractionTracker::GetCurrentVelocity(this, 2);
LABEL_39:
        *(float *)a3 = NaturalEndpoint;
        *((_DWORD *)a3 + 18) = 18;
        goto LABEL_54;
      }
      v3.m128_f32[0] = CInteractionTracker::GetCurrentVelocity(this, 1);
      v27 = v3;
      v3.m128_f32[0] = CInteractionTracker::GetCurrentVelocity(this, 0);
      v41 = 0;
      v28 = 0;
      *(_QWORD *)a3 = _mm_unpacklo_ps(v3, v27).m128_u64[0];
    }
    else
    {
      if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
      {
        v32 = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(v31 + 328));
        v33 = (CScrollAnimation *)*((_QWORD *)this + 42);
        *(float *)&v40 = v32;
        v34 = CScrollAnimation::GetNaturalEndpoint(v33);
        v28 = v41;
        *((float *)&v40 + 1) = v34;
        v35 = v40;
      }
      else
      {
        v36 = *(_QWORD *)(v31 + 456);
        if ( v36 )
          v37 = (char *)CScrollPositionKeyframeAnimation::GetNaturalEndpoint(v36, &v40);
        else
          v37 = (char *)this + 72;
        ScaleAdjustedPositionIfNeeded = CInteractionTracker::GetScaleAdjustedPositionIfNeeded(this, v42, v37);
        v35 = *(_QWORD *)ScaleAdjustedPositionIfNeeded;
        v28 = *(_DWORD *)(ScaleAdjustedPositionIfNeeded + 8);
      }
      *(_QWORD *)a3 = v35;
    }
    *((_DWORD *)a3 + 2) = v28;
    *((_DWORD *)a3 + 18) = 52;
    goto LABEL_54;
  }
  if ( a2 == 53 )
    goto LABEL_17;
  v7 = a2 - 1;
  if ( !v7 )
  {
    *((_DWORD *)a3 + 18) = 52;
    *(_QWORD *)a3 = *((_QWORD *)this + 9);
    v15 = *((_DWORD *)this + 20);
    goto LABEL_20;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_17:
    v14 = *((_DWORD *)this + 32);
    goto LABEL_18;
  }
  v9 = v8 - 20;
  if ( !v9 )
  {
    *((_DWORD *)a3 + 18) = 52;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + 84);
    v15 = *((_DWORD *)this + 23);
    goto LABEL_20;
  }
  v10 = v9 - 3;
  if ( !v10 )
  {
    *((_DWORD *)a3 + 18) = 52;
    *(_QWORD *)a3 = *((_QWORD *)this + 12);
    v15 = *((_DWORD *)this + 26);
LABEL_20:
    *((_DWORD *)a3 + 2) = v15;
    goto LABEL_21;
  }
  v11 = v10 - 3;
  if ( !v11 )
  {
    v14 = *((_DWORD *)this + 33);
    goto LABEL_18;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v14 = *((_DWORD *)this + 34);
    goto LABEL_18;
  }
  v13 = v12 - 22;
  if ( !v13 )
  {
    v14 = *((_DWORD *)this + 18);
    goto LABEL_18;
  }
  if ( v13 != 1 )
  {
LABEL_30:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x4E7u);
    return v4;
  }
  v14 = *((_DWORD *)this + 19);
LABEL_18:
  *(_DWORD *)a3 = v14;
  *((_DWORD *)a3 + 18) = 18;
LABEL_21:
  *((_BYTE *)a3 + 76) = 1;
  return v4;
}
