/*
 * XREFs of _dynamic_initializer_for__g_header_init_ResultStowedExceptionInitialize__ @ 0x18000B1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *dynamic_initializer_for__g_header_init_ResultStowedExceptionInitialize__())(wil::details *__hidden this, const struct wil::FailureInfo *)
{
  void (__fastcall *result)(wil::details *__hidden, const struct wil::FailureInfo *); // rax

  result = wil::details::RaiseRoOriginateOnWilExceptions;
  wil::details::g_pfnOriginateCallback = (void (*)(const struct wil::FailureInfo *))wil::details::RaiseRoOriginateOnWilExceptions;
  return result;
}
