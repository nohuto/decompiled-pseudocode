/*
 * XREFs of ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x1802CF540
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x1802CF6A8 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GenericInputProcessor@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802CF164 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_GenericInputProcessor@@@wil@@CAX_NW4.c)
 *     ?ConstrainRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBU4@HH@Z @ 0x1803B38D0 (-ConstrainRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBU4@HH@Z.c)
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x1803B3AE8 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1803B3E20 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetRelativePosition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5)
{
  __m128 v5; // xmm2
  float v9; // xmm1_4
  int v10; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // edx
  int v16; // r9d
  int v17; // ecx
  const struct tagRECT *v18; // r9
  __int128 v19; // xmm0
  __int64 result; // rax
  __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v22; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v23[24]; // [rsp+48h] [rbp-18h] BYREF

  v5 = (__m128)_mm_loadu_si128((const __m128i *)a3);
  v21 = a5;
  v9 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v10 = *(_DWORD *)(a2 + 20);
  v22.left = (int)v5.m128_f32[0];
  v22.top = (int)v9;
  v22.bottom = (int)(float)(_mm_shuffle_ps(v5, v5, 255).m128_f32[0] + v9);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v22.right = (int)(float)(_mm_shuffle_ps(v5, v5, 170).m128_f32[0] + v5.m128_f32[0]);
  wil::Feature<__WilFeatureTraits_Feature_GenericInputProcessor>::ReportUsageToService(
    (unsigned int)v22.right,
    (unsigned int)(int)v9,
    a3);
  *(_OWORD *)a1 = *(_OWORD *)Windows::UI::Immersive::QueryRelativePosition(v23, &v22, &v21, a4);
  if ( v10 == 1 )
  {
    if ( *(_DWORD *)(a1 + 4) >= a4[3] )
    {
      v13 = (unsigned int)(int)*(float *)(a3 + 4);
      if ( (int)v13 <= a4[1] )
      {
        v12 = HIDWORD(v21);
        if ( (int)v13 - a4[1] >= SHIDWORD(v21) )
        {
          *(_DWORD *)(a1 + 4) = v13;
          *(_DWORD *)(a1 + 12) = v13 + v12;
        }
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 12) <= a4[1] )
  {
    v13 = (unsigned int)(int)(float)(*(float *)(a3 + 12) + *(float *)(a3 + 4));
    if ( (int)v13 >= a4[3] && (int)v13 - a4[3] >= SHIDWORD(v21) )
    {
      *(_DWORD *)(a1 + 12) = v13;
      *(_DWORD *)(a1 + 4) = v13 - HIDWORD(v21);
    }
  }
  wil::Feature<__WilFeatureTraits_Feature_GenericInputProcessor>::ReportUsageToService(v13, v12, v14);
  v15 = *a4 + *(_DWORD *)(a2 + 12);
  v16 = (int)*(float *)(a3 + 12);
  v17 = v15 + v21;
  *(_DWORD *)a1 = v15;
  *(_DWORD *)(a1 + 8) = v17;
  *(struct tagRECT *)a1 = *Windows::UI::Immersive::ConstrainRect(
                             (Windows::UI::Immersive *)v23,
                             (struct tagRECT *)a1,
                             (const struct tagRECT *)(unsigned int)(int)*(float *)(a3 + 8),
                             v16,
                             (unsigned int)(v10 != 1) + 1);
  v19 = (__int128)*Windows::UI::Immersive::ShiftRectIntoContainer(
                     (Windows::UI::Immersive *)v23,
                     &v22,
                     (const struct Windows::UI::Immersive::CConstraint *)a1,
                     v18);
  result = a1;
  *(_OWORD *)a1 = v19;
  return result;
}
