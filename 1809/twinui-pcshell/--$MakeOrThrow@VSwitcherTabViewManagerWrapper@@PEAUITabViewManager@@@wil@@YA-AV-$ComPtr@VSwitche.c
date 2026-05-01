/*
 * XREFs of ??$MakeOrThrow@VSwitcherTabViewManagerWrapper@@PEAUITabViewManager@@@wil@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@$$QEAPEAUITabViewManager@@@Z @ 0x180266E9C
 * Callers:
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x180271300 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18027FA40 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VSwitcherTabViewManagerWrapper@@PEAUITabViewManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@12@$$QEAPEAUITabViewManager@@@Z @ 0x180266AEC (--$Make@VSwitcherTabViewManagerWrapper@@PEAUITabViewManager@@@Details@WRL@Microsoft@@YA-AV-$ComP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<SwitcherTabViewManagerWrapper,ITabViewManager *>(
        __int64 *a1,
        struct ITabViewManager **a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<SwitcherTabViewManagerWrapper,ITabViewManager *>(a1, a2);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, 56LL, (__int64)"internal\\sdk\\inc\\wil/wrl.h", v3);
    __debugbreak();
  }
  return a1;
}
