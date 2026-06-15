/*
 * XREFs of _dynamic_initializer_for__g_CritSecSadMap__ @ 0x140001110
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14000E284 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__g_CritSecSadMap__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&g_CritSecSadMap);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_CritSecSadMap__);
}
