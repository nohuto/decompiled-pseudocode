/*
 * XREFs of _CursorNotificationProcessor::CheckAndEnsureCursorManagerClient_::_1_::catch$2 @ 0x18003D927
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BFD74 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CursorNotificationProcessor::CheckAndEnsureCursorManagerClient_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0xD3,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornoti"
                  "ficationprocessor.cpp",
    a4);
  return &loc_180029FD4;
}
