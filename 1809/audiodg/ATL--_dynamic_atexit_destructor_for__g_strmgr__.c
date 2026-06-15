/*
 * XREFs of ATL::_dynamic_atexit_destructor_for__g_strmgr__ @ 0x1400213D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **ATL::_dynamic_atexit_destructor_for__g_strmgr__()
{
  void **result; // rax

  result = &ATL::CAtlStringMgr::`vftable';
  ATL::g_strmgr = (__int64)&ATL::CAtlStringMgr::`vftable';
  return result;
}
