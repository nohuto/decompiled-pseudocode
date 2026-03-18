/*
 * XREFs of ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801A055C
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801E5F80 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x18019E0A0 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z @ 0x18019EB5C (-CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z.c)
 *     ?CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z @ 0x18019ECBC (-CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18019F0D8 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x18019FEDC (-HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x18019FEFC (-HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801A0FD8 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1801D72E0 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1801D788C (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x1801E4FEC (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1801E5060 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTracker::ProcessMousewheelManipulation(CInteractionTracker *this)
{
  char *v1; // rdi
  double ActiveManipulationDelta; // xmm0_8
  float v4; // xmm11_4
  double v5; // xmm0_8
  float v6; // xmm10_4
  double v7; // xmm0_8
  float v8; // xmm9_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float LastKeyframeValueForScale; // xmm0_4
  double v13; // xmm3_8
  CInteractionTracker *v14; // rcx
  float v15; // xmm6_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  __int64 LastKeyframeValueForPosition; // rax
  __int64 v19; // xmm0_8
  unsigned int v20; // eax
  double v21; // xmm0_8
  double v22; // xmm2_8
  float v23; // xmm0_4
  double v24; // xmm2_8
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  float v27; // xmm0_4
  _BYTE v28[16]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v29; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-21h]
  __int64 v31; // [rsp+58h] [rbp-19h] BYREF
  int v32; // [rsp+60h] [rbp-11h]

  v1 = (char *)this + 192;
  ActiveManipulationDelta = InteractionSourceManager::GetActiveManipulationDelta((char *)this + 192, 0LL);
  v4 = *(float *)&ActiveManipulationDelta;
  v5 = InteractionSourceManager::GetActiveManipulationDelta(v1, 1LL);
  v6 = *(float *)&v5;
  v7 = InteractionSourceManager::GetActiveManipulationDelta(v1, 2LL);
  v8 = *(float *)&v7;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm);
  if ( v9 >= 0.0000011920929 || (v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm), v10 >= 0.0000011920929) )
  {
    v31 = 0LL;
    v32 = 0;
    if ( CInteractionTracker::HasRunningDefaultPositionAnimation(this) )
    {
      LastKeyframeValueForPosition = CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(
                                       *((_QWORD *)this + 57),
                                       v28);
      v19 = *(_QWORD *)LastKeyframeValueForPosition;
      v20 = *(_DWORD *)(LastKeyframeValueForPosition + 8);
    }
    else
    {
      v19 = *((_QWORD *)this + 9);
      v20 = *((_DWORD *)this + 20);
    }
    v29 = v19;
    v21 = v6;
    v30 = v20;
    if ( v9 >= 0.0000011920929 )
    {
      *(_QWORD *)&v22 = (unsigned int)v29;
      *(float *)&v22 = *(float *)&v29 + v4;
      *(float *)&v31 = *(float *)&v29 + v4;
      LODWORD(v29) = CInteractionTracker::ClampValueToBoundary((__int64)this, 0LL, v22).m128_u32[0];
      v21 = v6;
    }
    v23 = COERCE_DOUBLE(*(_QWORD *)&v21 & _xmm);
    if ( v23 >= 0.0000011920929 )
    {
      *(_QWORD *)&v24 = HIDWORD(v29);
      *(float *)&v24 = *((float *)&v29 + 1) + v6;
      *((float *)&v31 + 1) = *((float *)&v29 + 1) + v6;
      HIDWORD(v29) = CInteractionTracker::ClampValueToBoundary((__int64)this, 1LL, v24).m128_u32[0];
    }
    v25 = *((_QWORD *)this + 9);
    v30 = 0;
    v26 = v25 - v29;
    if ( !v26 )
      v26 = *((unsigned int *)this + 20) - (unsigned __int64)v30;
    if ( v26 )
    {
      v27 = CInteractionTracker::CalculatePositionAnimationDuration(this, (const struct D2DVector3 *)&v31);
      CInteractionTracker::ScrollToPosition(this, (const struct D2DVector3 *)&v29, v27, 0);
    }
  }
  else
  {
    v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v7 - 1.0)) & _xmm);
    if ( v11 >= 0.0000011920929 )
    {
      if ( CInteractionTracker::HasRunningDefaultScaleAnimation(this) )
        LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(*((CScrollScaleKeyframeAnimation **)this
                                                                                                + 58));
      else
        LastKeyframeValueForScale = *((float *)this + 32);
      *(_QWORD *)&v13 = LODWORD(FLOAT_0_001);
      *(float *)&v13 = fmaxf(0.001, LastKeyframeValueForScale * v8);
      v15 = CInteractionTracker::ClampValueToBoundary((__int64)this, 2LL, v13).m128_f32[0];
      if ( v16 != v15 )
      {
        v17 = CInteractionTracker::CalculateScaleAnimationDuration(v14, *(float *)&v13);
        InteractionSourceManager::GetActiveManipulationCenterpoint(v1, &v31);
        v29 = v31;
        CInteractionTracker::AnimateToScale(this, v15, (const struct D2DVector2 *)&v29, v17, 0);
      }
    }
  }
}
