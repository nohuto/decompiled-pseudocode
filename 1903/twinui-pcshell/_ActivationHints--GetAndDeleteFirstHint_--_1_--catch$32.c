/*
 * XREFs of _ActivationHints::GetAndDeleteFirstHint_::_1_::catch$32 @ 0x1800C6B4B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ActivationHints::GetAndDeleteFirstHint_::_1_::catch_32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 136) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0x91,
                            (unsigned int)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
                            a4);
  return &loc_18007BB85;
}
