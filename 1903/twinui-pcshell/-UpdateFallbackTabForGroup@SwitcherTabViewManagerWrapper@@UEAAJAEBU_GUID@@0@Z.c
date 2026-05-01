/*
 * XREFs of ?UpdateFallbackTabForGroup@SwitcherTabViewManagerWrapper@@UEAAJAEBU_GUID@@0@Z @ 0x1802CFFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::UpdateFallbackTabForGroup(
        SwitcherTabViewManagerWrapper *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    69LL,
    (__int64)"internal\\pcshellshell\\private\\inc\\switchertabviewmanagerwrapper.h",
    a4);
  JUMPOUT(0x1802CFFFALL);
}
