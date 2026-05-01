/*
 * XREFs of _ViewGroup::SelectView_::_1_::catch$26 @ 0x180260AEC
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewGroup::SelectView_::_1_::catch_26(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 120) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x186,
                            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
                            a4);
  return &loc_180260AC1;
}
