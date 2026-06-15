/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  qword_18004F0D8 = 0LL;
  SRWLock.Ptr = 0LL;
  qword_18004F0B8 = 0LL;
  xmmword_18004F0C0 = 0LL;
  word_18004F0D0 = 0;
  xmmword_18004F0E0 = 0LL;
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18004F118 = 0LL;
  qword_18004F130 = 0LL;
  xmmword_18004F120 = 0LL;
  InitializeCriticalSectionEx(&stru_18004F138, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_18004F160 = 0LL;
  xmmword_18004F170 = 0LL;
  xmmword_18004F180 = 0LL;
  xmmword_18004F190 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
