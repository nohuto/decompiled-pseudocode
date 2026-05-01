/*
 * XREFs of ??$MakeOrThrow@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@wil@@YA?AV?$ComPtr@VWindowGroupManager@@@WRL@Microsoft@@AEAPEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x18025C378
 * Callers:
 *     ?Initialize@ViewGroupManager@@UEAAJPEAUIServiceProvider@@PEAUIPrivilegedWindowGroupingOperations@@PEAUIPrivilegedForegroundOperations@@@Z @ 0x18024D600 (-Initialize@ViewGroupManager@@UEAAJPEAUIServiceProvider@@PEAUIPrivilegedWindowGroupingOperations.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801200A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowGroupManager@@@12@AEAPEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x18025C290 (--$Make@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@Details@WRL@Microsoft@.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int64 **__fastcall wil::MakeOrThrow<WindowGroupManager,IPrivilegedWindowGroupingOperations * &>(
        volatile signed __int64 **a1,
        struct IPrivilegedWindowGroupingOperations **a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<WindowGroupManager,IPrivilegedWindowGroupingOperations * &>(a1, a2);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      47LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v3);
    __debugbreak();
  }
  return a1;
}
