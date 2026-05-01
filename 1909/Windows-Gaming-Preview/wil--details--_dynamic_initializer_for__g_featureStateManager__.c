/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  qword_18005C088 = 0LL;
  SRWLock.Ptr = 0LL;
  qword_18005C068 = 0LL;
  *(_OWORD *)&pti = 0LL;
  word_18005C080 = 0;
  xmmword_18005C090 = 0LL;
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18005C0C8 = 0LL;
  qword_18005C0E0 = 0LL;
  xmmword_18005C0D0 = 0LL;
  InitializeCriticalSectionEx(&stru_18005C0E8, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_18005C110 = 0LL;
  xmmword_18005C120 = 0LL;
  xmmword_18005C130 = 0LL;
  xmmword_18005C140 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
