/*
 * XREFs of ?TryAssignViewToTabGroup@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x180276380
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DF27C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::TryAssignViewToTabGroup(
        SwitcherTabViewManagerWrapper *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct _GUID *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    64LL,
    (__int64)"internal\\pcshellshell\\private\\inc\\switchertabviewmanagerwrapper.h",
    (const char *)a4);
  JUMPOUT(0x18027639ALL);
}
