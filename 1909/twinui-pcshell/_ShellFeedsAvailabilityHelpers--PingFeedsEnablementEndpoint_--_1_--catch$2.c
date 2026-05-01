/*
 * XREFs of _ShellFeedsAvailabilityHelpers::PingFeedsEnablementEndpoint_::_1_::catch$2 @ 0x1800D2C87
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801339B0 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ShellFeedsAvailabilityHelpers::PingFeedsEnablementEndpoint_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 4232),
    (void *)0x17D,
    (unsigned int)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
    a4);
  return &loc_1800D2C47;
}
