/*
 * XREFs of ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1801E03B4
 * Callers:
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1801E02F0 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18005461C (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180143514 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F7A0 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x1801A38BC (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1801D9908 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::EnsureInertiaStateChangeInfo(CScrollKeyframeAnimation *this)
{
  char v1; // al
  KeyframeValue *LastKeyframeValue; // rax
  float *v4; // rsi
  int Value; // eax
  const char *v6; // r9
  unsigned int v7; // edi
  const char *v9; // r9
  float AnimationTimeLength; // xmm7_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float CurrentValue; // xmm6_4
  float v14; // xmm0_4
  __m128 v15; // xmm3
  __m128 v16; // xmm1
  float v17; // xmm0_4
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = *((_BYTE *)this + 696);
  if ( (v1 & 2) == 0 )
  {
    *((_BYTE *)this + 696) = v1 | 2;
    LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(this);
    v4 = (float *)((char *)this + 536);
    Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (CScrollKeyframeAnimation *)((char *)this + 536));
    v7 = Value;
    if ( Value < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF3,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        (const char *)(unsigned int)Value);
      return v7;
    }
    if ( !*((_BYTE *)this + 612) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xF5,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        v6);
      __debugbreak();
    }
    AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
    if ( AnimationTimeLength != 0.0 )
    {
      if ( *((_DWORD *)this + 46) == 1 )
      {
        if ( *((_DWORD *)this + 152) != 52 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xFE,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
          __debugbreak();
        }
        CurrentValue = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 66), 1);
        v14 = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 66), 0);
        v15 = (__m128)*(unsigned int *)v4;
        v16 = (__m128)*((unsigned int *)this + 135);
        v15.m128_f32[0] = v15.m128_f32[0] - v14;
        v17 = *((float *)this + 136) - 0.0;
        *((_DWORD *)this + 172) = 52;
        v15.m128_f32[0] = v15.m128_f32[0] * (float)(1.0 / AnimationTimeLength);
        v16.m128_f32[0] = (float)(v16.m128_f32[0] - CurrentValue) * (float)(1.0 / AnimationTimeLength);
        *((_QWORD *)this + 77) = _mm_unpacklo_ps(v15, v16).m128_u64[0];
        *((float *)this + 156) = v17 * (float)(1.0 / AnimationTimeLength);
      }
      else
      {
        if ( *((_DWORD *)this + 46) != 2 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x113,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
          __debugbreak();
        }
        if ( *((_DWORD *)this + 152) != 18 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x10A,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
          __debugbreak();
        }
        v11 = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 66), 2);
        v12 = *v4;
        *((_DWORD *)this + 172) = 18;
        *((float *)this + 154) = (float)(v12 - v11) / AnimationTimeLength;
      }
      *((_BYTE *)this + 692) = 1;
    }
  }
  return 0LL;
}
