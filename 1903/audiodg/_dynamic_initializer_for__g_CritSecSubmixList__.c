/*
 * XREFs of _dynamic_initializer_for__g_CritSecSubmixList__ @ 0x140001150
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14000E284 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__g_CritSecSubmixList__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&g_CritSecSubmixList);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_CritSecSubmixList__);
}
