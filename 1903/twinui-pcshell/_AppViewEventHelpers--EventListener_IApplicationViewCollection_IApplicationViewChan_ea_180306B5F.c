/*
 * XREFs of _AppViewEventHelpers::EventListener_IApplicationViewCollection_IApplicationViewChangeListener_AppViewEventHelpers::details::ApplicationViewEventRegistration_::Register_::_1_::catch$2 @ 0x180306B5F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall AppViewEventHelpers::EventListener_IApplicationViewCollection_IApplicationViewChangeListener_AppViewEventHelpers::details::ApplicationViewEventRegistration_::Register_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0xE1,
                           (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appvieweventhelpers.h",
                           a4);
  return &loc_180306B43;
}
