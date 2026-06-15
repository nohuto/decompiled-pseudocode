/*
 * XREFs of wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_enabledStateManager__()
{
  wil::details::g_enabledStateManager = 1;
  qword_18004FED0 = 0LL;
  stru_18004FEC8.Ptr = 0LL;
  byte_18004FED8 = 0;
  xmmword_18004FEE0 = 0LL;
  xmmword_18004FEF0 = 0LL;
  xmmword_18004FF00 = 0LL;
  xmmword_18004FF10 = 0LL;
  xmmword_18004FF20 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__);
}
