/*
 * XREFs of _ViewGroup::GetSelectedView_::_1_::catch$2 @ 0x180206ED9
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall ViewGroup::GetSelectedView_::_1_::catch_2(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x142,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
                           a4);
  return &loc_180206EB8;
}
