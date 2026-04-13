/*
 * XREFs of wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800014B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_enabledStateManager__()
{
  wil::details::g_enabledStateManager = 1;
  qword_180185230 = 0LL;
  stru_180185228.Ptr = 0LL;
  byte_180185238 = 0;
  xmmword_180185240 = 0LL;
  xmmword_180185250 = 0LL;
  xmmword_180185260 = 0LL;
  xmmword_180185270 = 0LL;
  xmmword_180185280 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__);
}
