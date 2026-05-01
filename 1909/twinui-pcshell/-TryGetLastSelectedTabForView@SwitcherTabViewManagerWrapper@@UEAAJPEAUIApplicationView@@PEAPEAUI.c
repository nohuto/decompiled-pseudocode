/*
 * XREFs of ?TryGetLastSelectedTabForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z @ 0x1802EF200
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E800 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::TryGetLastSelectedTabForView(
        SwitcherTabViewManagerWrapper *this,
        struct IApplicationView *a2,
        struct IInspectable **a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    76LL,
    (__int64)"internal\\pcshellshell\\private\\inc\\switchertabviewmanagerwrapper.h",
    a4);
  JUMPOUT(0x1802EF21ALL);
}
