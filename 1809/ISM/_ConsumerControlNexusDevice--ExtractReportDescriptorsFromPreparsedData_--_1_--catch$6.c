/*
 * XREFs of _ConsumerControlNexusDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::catch$6 @ 0x180131AD9
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180064E60 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ConsumerControlNexusDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 280) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 248),
                            (void *)0xE7,
                            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consum"
                                     "ercontrolnexusdevice.cpp",
                            a4);
  return &loc_180077C10;
}
