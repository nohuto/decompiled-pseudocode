/*
 * XREFs of _WindowGroupManager::MoveWindowToDefaultGroup_::_1_::catch$0 @ 0x18027CDA8
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall WindowGroupManager::MoveWindowToDefaultGroup_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0xE0,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
                           a4);
  return &loc_18027CD9E;
}
