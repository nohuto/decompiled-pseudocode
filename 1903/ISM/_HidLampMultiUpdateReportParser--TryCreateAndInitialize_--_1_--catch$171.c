/*
 * XREFs of _HidLampMultiUpdateReportParser::TryCreateAndInitialize_::_1_::catch$171 @ 0x1800B8EB3
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009EABC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall HidLampMultiUpdateReportParser::TryCreateAndInitialize_::_1_::catch_171(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x6B,
                           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamp"
                                    "multiupdatereportparser.cpp",
                           a4);
  return &loc_1800B8E8C;
}
