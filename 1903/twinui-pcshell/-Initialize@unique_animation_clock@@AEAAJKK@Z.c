/*
 * XREFs of ?Initialize@unique_animation_clock@@AEAAJKK@Z @ 0x180248C4C
 * Callers:
 *     ??0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z @ 0x180247298 (--0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall unique_animation_clock::Initialize(unique_animation_clock *this, __int64 a2, unsigned int a3)
{
  int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 16) )
  {
    v8 = *(_OWORD *)this;
    v5 = DwmpCreateAnimationClock(&v8);
    result = 2149986305LL;
    if ( v5 == -2144980991 )
      return result;
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2147019886 )
    {
      v7 = 44LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"internal\\onecorewindows\\inc\\AnimationClockHelpers.h",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v8 = *(_OWORD *)this;
    v5 = DwmpBeginAnimationClock(&v8, a3);
    if ( v5 < 0 )
    {
      v7 = 46LL;
      goto LABEL_6;
    }
    *((_BYTE *)this + 16) = 1;
  }
  return 0LL;
}
