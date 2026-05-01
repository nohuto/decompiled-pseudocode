/*
 * XREFs of ?TryGetTabGroupForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180276520
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DF27C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::TryGetTabGroupForView(
        SwitcherTabViewManagerWrapper *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        void **a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    51LL,
    (__int64)"internal\\pcshellshell\\private\\inc\\switchertabviewmanagerwrapper.h",
    (const char *)a4);
  JUMPOUT(0x18027653ALL);
}
