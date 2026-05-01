/*
 * XREFs of ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180313648
 * Callers:
 *     ??$ShellHotKeyRequestReceived@IPEAGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEAPEAGAEA_N0@Z @ 0x18009E624 (--$ShellHotKeyRequestReceived@IPEAGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEA.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18031B654 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

const struct _TlgProvider_t *__fastcall TouchKeyboardExperienceTraceLogging::Provider(__int64 a1)
{
  return *(const struct _TlgProvider_t **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                                             a1,
                                             lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                                         + 8);
}
