/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800013F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  qword_180183178 = 0LL;
  SRWLock.Ptr = 0LL;
  qword_180183158 = 0LL;
  *(_OWORD *)&pti = 0LL;
  word_180183170 = 0;
  xmmword_180183180 = 0LL;
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_1801831B8 = 0LL;
  qword_1801831D0 = 0LL;
  xmmword_1801831C0 = 0LL;
  InitializeCriticalSectionEx(&stru_1801831D8, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_180183200 = 0LL;
  xmmword_180183210 = 0LL;
  xmmword_180183220 = 0LL;
  xmmword_180183230 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
