/*
 * XREFs of _Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::get_ActiveExperience_::_1_::catch$9 @ 0x18008BD5B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::get_ActiveExperience_::_1_::catch_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 40) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 120),
                           (void *)0x4B,
                           (__int64)"pcshell\\twinui\\customshellexperiencerepository\\lib\\customshellexperiencerepository.cpp",
                           a4);
  return &loc_18008BCEC;
}
