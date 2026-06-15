/*
 * XREFs of _dynamic_atexit_destructor_for__g_CritSecSadMap__ @ 0x14001B490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_CritSecSadMap__()
{
  DeleteCriticalSection(&g_CritSecSadMap);
}
