/*
 * XREFs of ??$MakeOrThrow@VViewGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@wil@@YA?AV?$ComPtr@VViewGroupManager@@@WRL@Microsoft@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@Z @ 0x1801F9A4C
 * Callers:
 *     ?RuntimeClassInitialize@TabViewManager@@QEAAJXZ @ 0x1801E4AAC (-RuntimeClassInitialize@TabViewManager@@QEAAJXZ.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VViewGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VViewGroupManager@@@12@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@Z @ 0x1801F9954 (--$Make@VViewGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@Details@WRL@Micr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<ViewGroupManager,ITitleBarController * &,ITabViewManager * &>(
        __int64 *a1,
        struct ITitleBarController **a2,
        struct ITabViewManager **a3)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<ViewGroupManager,ITitleBarController * &,ITabViewManager * &>(a1, a2, a3);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, 56LL, (__int64)"internal\\sdk\\inc\\wil\\wrl.h", v4);
    __debugbreak();
  }
  return a1;
}
