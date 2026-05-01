/*
 * XREFs of _ActivationHints::GetKeyAt_::_1_::catch$28 @ 0x18038BEA4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ActivationHints::GetKeyAt_::_1_::catch_28(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 136) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0x30,
                            (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
                            a4);
  return &loc_18038BE76;
}
