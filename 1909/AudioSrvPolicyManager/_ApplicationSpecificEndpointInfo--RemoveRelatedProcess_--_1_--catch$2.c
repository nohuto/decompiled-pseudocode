/*
 * XREFs of _ApplicationSpecificEndpointInfo::RemoveRelatedProcess_::_1_::catch$2 @ 0x1800377FA
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180017CAC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall ApplicationSpecificEndpointInfo::RemoveRelatedProcess_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x178,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspe"
                                    "cificendpointinfo.cpp",
                           a4);
  return &loc_18002E3A2;
}
