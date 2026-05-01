/*
 * XREFs of ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18032FD70
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18032FF2C (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GenericInputProcessor@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180313F38 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_GenericInputProcessor@@@wil@@CAX_NW4.c)
 *     ?ConstrainRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBU4@HH@Z @ 0x1804160F0 (-ConstrainRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBU4@HH@Z.c)
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x1804162F8 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x180416620 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetRelativePosition(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5)
{
  __m128 v5; // xmm2
  int v9; // esi
  float v10; // xmm0_4
  float v12; // xmm1_4
  int v13; // eax
  _OWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r14d
  int v18; // edx
  int v19; // edx
  int v20; // ecx
  const struct tagRECT *v21; // r9
  __int128 v22; // xmm0
  __int64 result; // rax
  int v24; // [rsp+20h] [rbp-40h]
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v26; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v27[24]; // [rsp+48h] [rbp-18h] BYREF

  v5 = (__m128)_mm_loadu_si128((const __m128i *)a3);
  v25 = a5;
  v9 = a2[5];
  v10 = _mm_shuffle_ps(v5, v5, 170).m128_f32[0] + v5.m128_f32[0];
  v12 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v26.left = (int)v5.m128_f32[0];
  v26.top = (int)v12;
  v26.right = (int)v10;
  v26.bottom = (int)(float)(_mm_shuffle_ps(v5, v5, 255).m128_f32[0] + v12);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  wil::Feature<__WilFeatureTraits_Feature_GenericInputProcessor>::ReportUsageToService((unsigned int)(int)v10, 3u, a3);
  if ( v9 == 6 )
  {
    v13 = 2;
  }
  else if ( v9 == 1 )
  {
    v13 = 1;
  }
  else
  {
    v13 = 2;
    if ( v9 != 2 )
      v13 = (v9 != 4) + 3;
  }
  v24 = v13;
  v14 = (_OWORD *)Windows::UI::Immersive::QueryRelativePosition(v27, &v26, &v25, a4);
  v17 = HIDWORD(v25);
  *(_OWORD *)a1 = *v14;
  if ( v9 == 1 )
  {
    if ( *(_DWORD *)(a1 + 4) >= a4[3] )
    {
      v15 = (unsigned int)(int)*(float *)(a3 + 4);
      if ( (int)v15 <= a4[1] && (int)v15 - a4[1] >= v17 )
      {
        *(_DWORD *)(a1 + 4) = v15;
        *(_DWORD *)(a1 + 12) = v15 + v17;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 12) <= a4[1] )
  {
    v15 = (unsigned int)(int)(float)(*(float *)(a3 + 12) + *(float *)(a3 + 4));
    if ( (int)v15 >= a4[3] && (int)v15 - a4[3] >= v17 )
    {
      *(_DWORD *)(a1 + 12) = v15;
      *(_DWORD *)(a1 + 4) = v15 - v17;
    }
  }
  wil::Feature<__WilFeatureTraits_Feature_GenericInputProcessor>::ReportUsageToService(v15, 3u, v16);
  if ( (unsigned int)(v9 - 1) <= 1 )
  {
    v19 = *a4 + a2[3];
    v20 = v19 + v25;
    *(_DWORD *)a1 = v19;
    *(_DWORD *)(a1 + 8) = v20;
  }
  else if ( ((v9 - 4) & 0xFFFFFFFB) == 0 )
  {
    v18 = a2[4] + a4[1];
    *(_DWORD *)(a1 + 4) = v18;
    *(_DWORD *)(a1 + 12) = v18 + v17;
  }
  *(struct tagRECT *)a1 = *Windows::UI::Immersive::ConstrainRect(
                             (Windows::UI::Immersive *)v27,
                             (struct tagRECT *)a1,
                             (const struct tagRECT *)(unsigned int)(int)*(float *)(a3 + 8),
                             (int)*(float *)(a3 + 12),
                             v24);
  v22 = (__int128)*Windows::UI::Immersive::ShiftRectIntoContainer(
                     (Windows::UI::Immersive *)v27,
                     &v26,
                     (const struct Windows::UI::Immersive::CConstraint *)a1,
                     v21);
  result = a1;
  *(_OWORD *)a1 = v22;
  return result;
}
