/*
 * XREFs of _CortanaStoreAppHelper::UpdateReplaceDecision_::_1_::catch$11 @ 0x1801CC667
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180114540 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CortanaStoreAppHelper::UpdateReplaceDecision_::_1_::catch_11(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 488),
    (void *)0x1CF,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
    a4);
  return &loc_1801CC54B;
}
