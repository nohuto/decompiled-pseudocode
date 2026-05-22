/*
 * XREFs of wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_enabledStateManager__()
{
  wil::details::g_enabledStateManager = 1;
  qword_180193C30 = 0LL;
  stru_180193C28.Ptr = 0LL;
  byte_180193C38 = 0;
  xmmword_180193C40 = 0LL;
  xmmword_180193C50 = 0LL;
  xmmword_180193C60 = 0LL;
  xmmword_180193C70 = 0LL;
  xmmword_180193C80 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__);
}
