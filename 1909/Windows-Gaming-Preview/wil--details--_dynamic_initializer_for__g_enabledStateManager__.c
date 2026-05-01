/*
 * XREFs of wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_enabledStateManager__()
{
  wil::details::g_enabledStateManager = 1;
  qword_18005CDE0 = 0LL;
  stru_18005CDD8.Ptr = 0LL;
  byte_18005CDE8 = 0;
  xmmword_18005CDF0 = 0LL;
  xmmword_18005CE00 = 0LL;
  xmmword_18005CE10 = 0LL;
  xmmword_18005CE20 = 0LL;
  xmmword_18005CE30 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__);
}
