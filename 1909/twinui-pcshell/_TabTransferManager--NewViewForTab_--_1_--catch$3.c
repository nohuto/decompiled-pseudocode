/*
 * XREFs of _TabTransferManager::NewViewForTab_::_1_::catch$3 @ 0x180276AF7
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801361BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall TabTransferManager::NewViewForTab_::_1_::catch_3(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 136),
                           (void *)0xF7,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
                           a4);
  return &loc_180276ACF;
}
