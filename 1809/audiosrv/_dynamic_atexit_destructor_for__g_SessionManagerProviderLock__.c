/*
 * XREFs of _dynamic_atexit_destructor_for__g_SessionManagerProviderLock__ @ 0x180070590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_SessionManagerProviderLock__()
{
  DeleteCriticalSection(&g_SessionManagerProviderLock);
}
