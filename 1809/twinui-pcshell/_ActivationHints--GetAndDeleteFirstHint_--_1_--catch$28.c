/*
 * XREFs of _ActivationHints::GetAndDeleteFirstHint_::_1_::catch$28 @ 0x18032BB6E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall ActivationHints::GetAndDeleteFirstHint_::_1_::catch_28(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 184) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 168),
                            (void *)0x91,
                            (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
                            a4);
  return &loc_18032BB31;
}
