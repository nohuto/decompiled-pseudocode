/*
 * XREFs of ??$MakeOrThrow@VDefaultIconManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAPEAUIImmersiveWindowMessageService@@@wil@@YA?AV?$ComPtr@VDefaultIconManager@@@WRL@Microsoft@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAPEAUIImmersiveWindowMessageService@@@Z @ 0x18026DC30
 * Callers:
 *     ?SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025C730 (-SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18013F548 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VDefaultIconManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAPEAUIImmersiveWindowMessageService@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDefaultIconManager@@@12@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAPEAUIImmersiveWindowMessageService@@@Z @ 0x18026D934 (--$Make@VDefaultIconManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAU.c)
 */

// Hidden C++ exception states: #wind=1
DefaultIconManager **__fastcall wil::MakeOrThrow<DefaultIconManager,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,ITabViewManager * &,IImmersiveWindowMessageService * &>(
        DefaultIconManager **a1,
        struct Windows::Internal::ComposableShell::Tabs::ITabDataModel **a2,
        struct ITabViewManager **a3,
        struct IImmersiveWindowMessageService **a4)
{
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<DefaultIconManager,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,ITabViewManager * &,IImmersiveWindowMessageService * &>(
    a1,
    a2,
    a3,
    a4);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      47LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
    __debugbreak();
  }
  return a1;
}
