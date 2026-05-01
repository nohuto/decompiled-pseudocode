/*
 * XREFs of ?SelectViewInTabGroup@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1802CD9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::SelectViewInTabGroup(
        SwitcherTabViewManagerWrapper *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    68LL,
    (__int64)"internal\\pcshellshell\\private\\inc\\switchertabviewmanagerwrapper.h",
    a4);
  JUMPOUT(0x1802CD9EALL);
}
