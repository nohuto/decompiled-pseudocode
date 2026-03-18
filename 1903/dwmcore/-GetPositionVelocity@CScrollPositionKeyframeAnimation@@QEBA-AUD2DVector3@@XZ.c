/*
 * XREFs of ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18020859C
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801D9364 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801DA5D4 (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180155168 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CScrollPositionKeyframeAnimation::GetPositionVelocity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 708) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD0,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      a4);
    __debugbreak();
  }
  if ( *(_DWORD *)(a1 + 704) != 52 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD1,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      a4);
    __debugbreak();
  }
  v4 = *(_DWORD *)(a1 + 640);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 632);
  *(_DWORD *)(a2 + 8) = v4;
  return a2;
}
