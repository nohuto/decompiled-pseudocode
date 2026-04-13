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
  qword_18018F860 = 0LL;
  stru_18018F858.Ptr = 0LL;
  byte_18018F868 = 0;
  xmmword_18018F870 = 0LL;
  xmmword_18018F880 = 0LL;
  xmmword_18018F890 = 0LL;
  xmmword_18018F8A0 = 0LL;
  xmmword_18018F8B0 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__);
}
