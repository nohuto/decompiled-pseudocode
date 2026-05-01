/*
 * XREFs of _RetailDemoExperienceManager::Hide_::_1_::catch$2 @ 0x1801D4100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall RetailDemoExperienceManager::Hide_::_1_::catch_2(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0xC5,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           a4);
  return &loc_1801D40E4;
}
