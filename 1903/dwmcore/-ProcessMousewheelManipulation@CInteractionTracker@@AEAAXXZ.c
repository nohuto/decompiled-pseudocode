/*
 * XREFs of ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801DB274
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18021F9CC (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1801D8D24 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z @ 0x1801D97D4 (-CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z.c)
 *     ?CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z @ 0x1801D9934 (-CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x1801D9D50 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1801DAC20 (-HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1801DAC40 (-HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801DBC68 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180208470 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1802089DC (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x18021EA04 (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x18021EA78 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTracker::ProcessMousewheelManipulation(CScrollScaleKeyframeAnimation **this)
{
  char *v1; // rdi
  double ActiveManipulationDelta; // xmm0_8
  float v4; // xmm12_4
  double v5; // xmm0_8
  float v6; // xmm9_4
  double v7; // xmm0_8
  float v8; // xmm10_4
  float v9; // xmm11_4
  double v10; // xmm6_8
  float v11; // xmm1_4
  __int64 LastKeyframeValueForPosition; // rax
  CScrollScaleKeyframeAnimation *v13; // xmm0_8
  unsigned int v14; // eax
  double v15; // xmm2_8
  float v16; // xmm0_4
  double v17; // xmm2_8
  CScrollScaleKeyframeAnimation *v18; // rcx
  unsigned __int64 v19; // rcx
  float v20; // xmm0_4
  int v21; // r9d
  float v22; // xmm2_4
  float v23; // xmm0_4
  double v24; // xmm3_8
  CInteractionTracker *v25; // rcx
  float v26; // xmm6_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  bool v29; // [rsp+28h] [rbp-59h]
  char v30[16]; // [rsp+38h] [rbp-49h] BYREF
  CScrollScaleKeyframeAnimation *v31; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-31h]
  CScrollScaleKeyframeAnimation *v33; // [rsp+58h] [rbp-29h] BYREF
  int v34; // [rsp+60h] [rbp-21h]

  v1 = (char *)(this + 24);
  ActiveManipulationDelta = InteractionSourceManager::GetActiveManipulationDelta(this + 24, 0LL);
  v4 = *(float *)&ActiveManipulationDelta;
  v5 = InteractionSourceManager::GetActiveManipulationDelta(v1, 1LL);
  v6 = *(float *)&v5;
  v7 = InteractionSourceManager::GetActiveManipulationDelta(v1, 2LL);
  v8 = *(float *)&v7;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm);
  v10 = v6;
  if ( v9 < 0.0000011920929 && (v11 = COERCE_DOUBLE(*(_QWORD *)&v10 & _xmm), v11 < 0.0000011920929) )
  {
    v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v7 - 1.0)) & _xmm);
    if ( v22 >= 0.0000011920929 )
    {
      v23 = CInteractionTracker::HasRunningDefaultScaleAnimation((CInteractionTracker *)this)
          ? CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(this[58])
          : *((float *)this + 32);
      *(_QWORD *)&v24 = LODWORD(FLOAT_0_001);
      *(float *)&v24 = fmaxf(0.001, v23 * v8);
      v26 = CInteractionTracker::ClampValueToBoundary((__int64)this, 2LL, v24).m128_f32[0];
      if ( v27 != v26 )
      {
        v28 = CInteractionTracker::CalculateScaleAnimationDuration(v25, *(float *)&v24);
        InteractionSourceManager::GetActiveManipulationCenterpoint(v1, &v33);
        v31 = v33;
        CInteractionTracker::AnimateToScale((CInteractionTracker *)this, v26, (const struct D2DVector2 *)&v31, v28, v29);
      }
    }
  }
  else
  {
    v33 = 0LL;
    v34 = 0;
    if ( CInteractionTracker::HasRunningDefaultPositionAnimation((CInteractionTracker *)this) )
    {
      LastKeyframeValueForPosition = CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(this[57], v30);
      v13 = *(CScrollScaleKeyframeAnimation **)LastKeyframeValueForPosition;
      v14 = *(_DWORD *)(LastKeyframeValueForPosition + 8);
    }
    else
    {
      v13 = this[9];
      v14 = *((_DWORD *)this + 20);
    }
    v32 = v14;
    v31 = v13;
    if ( v9 >= 0.0000011920929 )
    {
      *(_QWORD *)&v15 = (unsigned int)v31;
      *(float *)&v15 = *(float *)&v31 + v4;
      *(float *)&v33 = *(float *)&v31 + v4;
      LODWORD(v31) = CInteractionTracker::ClampValueToBoundary((__int64)this, 0LL, v15).m128_u32[0];
    }
    v16 = COERCE_DOUBLE(*(_QWORD *)&v10 & _xmm);
    if ( v16 >= 0.0000011920929 )
    {
      *(_QWORD *)&v17 = HIDWORD(v31);
      *(float *)&v17 = *((float *)&v31 + 1) + v6;
      *((float *)&v33 + 1) = *((float *)&v31 + 1) + v6;
      HIDWORD(v31) = CInteractionTracker::ClampValueToBoundary((__int64)this, 1LL, v17).m128_u32[0];
    }
    v18 = this[9];
    v32 = 0;
    v19 = v18 - v31;
    if ( !v19 )
      v19 = *((unsigned int *)this + 20) - (unsigned __int64)v32;
    if ( v19 )
    {
      v20 = CInteractionTracker::CalculatePositionAnimationDuration(
              (CInteractionTracker *)this,
              (const struct D2DVector3 *)&v33);
      CInteractionTracker::ScrollToPosition((CInteractionTracker *)this, (const struct D2DVector3 *)&v31, v20, v21);
    }
  }
}
