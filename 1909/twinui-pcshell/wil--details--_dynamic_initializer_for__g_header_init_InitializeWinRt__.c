/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeWinRt__ @ 0x180002650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall __noreturn *wil::details::_dynamic_initializer_for__g_header_init_InitializeWinRt__())(wil::details *__hidden this, const struct wil::FailureInfo *, const wchar_t *)
{
  void (__fastcall __noreturn *result)(wil::details *__hidden, const struct wil::FailureInfo *, const wchar_t *); // rax

  g_pfnResultFromCaughtException_WinRt = (__int64)wil::details::ResultFromCaughtException_WinRt;
  result = wil::details::ThrowPlatformException;
  g_pfnThrowPlatformException = (__int64)wil::details::ThrowPlatformException;
  return result;
}
