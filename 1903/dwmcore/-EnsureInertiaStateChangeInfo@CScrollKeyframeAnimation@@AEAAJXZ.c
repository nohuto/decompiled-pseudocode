/*
 * XREFs of ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1802104E0
 * Callers:
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x180210410 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x1800C0C18 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180155168 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801DA4D8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x1801E1438 (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1802098E4 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::EnsureInertiaStateChangeInfo(CScrollKeyframeAnimation *this)
{
  char v1; // al
  KeyframeValue *LastKeyframeValue; // rax
  float *v4; // rsi
  int Value; // eax
  const char *v6; // r9
  unsigned int v7; // ebx
  const char *v9; // r9
  float AnimationTimeLength; // xmm7_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  __int64 v13; // rbx
  float CurrentValue; // xmm6_4
  float v15; // xmm0_4
  __m128 v16; // xmm3
  __m128 v17; // xmm1
  float v18; // xmm0_4
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = *((_BYTE *)this + 712);
  if ( (v1 & 2) == 0 )
  {
    *((_BYTE *)this + 712) = v1 | 2;
    LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(this);
    v4 = (float *)((char *)this + 552);
    Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (CScrollKeyframeAnimation *)((char *)this + 552));
    v7 = Value;
    if ( Value < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        (const char *)(unsigned int)Value);
      return v7;
    }
    if ( !*((_BYTE *)this + 628) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xE4,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        v6);
      __debugbreak();
    }
    AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
    if ( AnimationTimeLength != 0.0 )
    {
      if ( *((_DWORD *)this + 46) == 1 )
      {
        if ( *((_DWORD *)this + 156) != 52 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xED,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
          __debugbreak();
        }
        v13 = *((_QWORD *)this + 68);
        CurrentValue = CInteractionTracker::GetCurrentValue(v13, 1);
        v15 = CInteractionTracker::GetCurrentValue(v13, 0);
        v16 = (__m128)*(unsigned int *)v4;
        v17 = (__m128)*((unsigned int *)this + 139);
        v16.m128_f32[0] = v16.m128_f32[0] - v15;
        v18 = *((float *)this + 140) - 0.0;
        *((_DWORD *)this + 176) = 52;
        v16.m128_f32[0] = v16.m128_f32[0] * (float)(1.0 / AnimationTimeLength);
        v17.m128_f32[0] = (float)(v17.m128_f32[0] - CurrentValue) * (float)(1.0 / AnimationTimeLength);
        *((_QWORD *)this + 79) = _mm_unpacklo_ps(v16, v17).m128_u64[0];
        *((float *)this + 160) = v18 * (float)(1.0 / AnimationTimeLength);
      }
      else
      {
        if ( *((_DWORD *)this + 46) != 2 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x102,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
          __debugbreak();
        }
        if ( *((_DWORD *)this + 156) != 18 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xF9,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
          __debugbreak();
        }
        v11 = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 68), 2);
        v12 = *v4;
        *((_DWORD *)this + 176) = 18;
        *((float *)this + 158) = (float)(v12 - v11) / AnimationTimeLength;
      }
      *((_BYTE *)this + 708) = 1;
    }
  }
  return 0LL;
}
