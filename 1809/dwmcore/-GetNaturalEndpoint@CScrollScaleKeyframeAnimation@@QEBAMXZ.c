/*
 * XREFs of ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1801D7934
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18019E6E0 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18019FA00 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180143514 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

float __fastcall CScrollScaleKeyframeAnimation::GetNaturalEndpoint(
        CScrollScaleKeyframeAnimation *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 612) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      a4);
    __debugbreak();
  }
  if ( *((_DWORD *)this + 152) != 18 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC8,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      a4);
    __debugbreak();
  }
  return *((float *)this + 134);
}
