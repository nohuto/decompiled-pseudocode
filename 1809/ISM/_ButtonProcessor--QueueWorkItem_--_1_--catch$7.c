/*
 * XREFs of _ButtonProcessor::QueueWorkItem_::_1_::catch$7 @ 0x1801348C8
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180064E60 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ButtonProcessor::QueueWorkItem_::_1_::catch_7(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x1A0,
                            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\bu"
                                     "ttonprocessor.cpp",
                            a4);
  return &loc_1800EAF86;
}
