/*
 * XREFs of _ViewGroupManager::OnTitleBarsLost_::_1_::catch$16 @ 0x1801FAE29
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewGroupManager::OnTitleBarsLost_::_1_::catch_16(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0xB2,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           a4);
  return &loc_1801FAE01;
}
