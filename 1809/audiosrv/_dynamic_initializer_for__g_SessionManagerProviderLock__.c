/*
 * XREFs of _dynamic_initializer_for__g_SessionManagerProviderLock__ @ 0x1800011F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_SessionManagerProviderLock__()
{
  InitializeCriticalSectionEx(&g_SessionManagerProviderLock, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_SessionManagerProviderLock__);
}
