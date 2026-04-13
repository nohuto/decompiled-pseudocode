/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800013F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  qword_18018D1E8 = 0LL;
  SRWLock.Ptr = 0LL;
  qword_18018D1C8 = 0LL;
  *(_OWORD *)&pti = 0LL;
  word_18018D1E0 = 0;
  xmmword_18018D1F0 = 0LL;
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18018D228 = 0LL;
  qword_18018D240 = 0LL;
  xmmword_18018D230 = 0LL;
  InitializeCriticalSectionEx(&stru_18018D248, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_18018D270 = 0LL;
  xmmword_18018D280 = 0LL;
  xmmword_18018D290 = 0LL;
  xmmword_18018D2A0 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
