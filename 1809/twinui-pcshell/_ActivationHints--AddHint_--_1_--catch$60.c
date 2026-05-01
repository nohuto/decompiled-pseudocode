/*
 * XREFs of _ActivationHints::AddHint_::_1_::catch$60 @ 0x18032B781
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ActivationHints::AddHint_::_1_::catch_60(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 184),
                           (void *)0x70,
                           (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
                           a4);
  return &loc_18032B72F;
}
