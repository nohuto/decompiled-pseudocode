/*
 * XREFs of _CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch$1 @ 0x1800FBDAB
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CF99C (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x242,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
    a4);
  return &loc_1800FBD96;
}
