/*
 * XREFs of _GazeHidParser::Initialize_::_1_::catch$0 @ 0x1800F8B2B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall GazeHidParser::Initialize_::_1_::catch_0(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x2B,
    (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
    (const char *)0x8007000ELL);
  return &loc_1800F8B12;
}
