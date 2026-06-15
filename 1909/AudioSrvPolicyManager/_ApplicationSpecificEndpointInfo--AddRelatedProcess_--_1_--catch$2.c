/*
 * XREFs of _ApplicationSpecificEndpointInfo::AddRelatedProcess_::_1_::catch$2 @ 0x1800377C1
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180017CAC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall ApplicationSpecificEndpointInfo::AddRelatedProcess_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x160,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspe"
                                    "cificendpointinfo.cpp",
                           a4);
  return &loc_18002E2CA;
}
