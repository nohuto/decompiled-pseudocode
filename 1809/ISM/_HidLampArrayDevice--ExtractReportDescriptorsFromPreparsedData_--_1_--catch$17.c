/*
 * XREFs of _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::catch$17 @ 0x180131B81
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180064E60 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::catch_17(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 272) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 264),
                            (void *)0x259,
                            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlam"
                                     "parraydevice.cpp",
                            a4);
  return &loc_18007B7C5;
}
