/*
 * XREFs of _CApplication::NotifyVolumePolicyChange_::_1_::catch$3 @ 0x180036568
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180017DE4 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CApplication::NotifyVolumePolicyChange_::_1_::catch_3(
        __int64 a1,
        wil::details::in1diag3 **a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(a2[11], a2, a3, a4);
  return &loc_180010C82;
}
