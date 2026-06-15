/*
 * XREFs of _dynamic_atexit_destructor_for__TsSessionListLock__ @ 0x180037F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__TsSessionListLock__()
{
  DeleteCriticalSection(&CriticalSection);
}
