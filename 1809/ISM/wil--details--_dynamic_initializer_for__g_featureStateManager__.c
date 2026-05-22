/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  qword_180191638 = 0LL;
  SRWLock.Ptr = 0LL;
  qword_180191618 = 0LL;
  xmmword_180191620 = 0LL;
  word_180191630 = 0;
  xmmword_180191640 = 0LL;
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_180191678 = 0LL;
  qword_180191690 = 0LL;
  xmmword_180191680 = 0LL;
  InitializeCriticalSectionEx(&stru_180191698, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_1801916C0 = 0LL;
  xmmword_1801916D0 = 0LL;
  xmmword_1801916E0 = 0LL;
  xmmword_1801916F0 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
