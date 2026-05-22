/*
 * XREFs of _dynamic_initializer_for__MPCManager::s_instance__ @ 0x1800016B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__MPCManager::s_instance__()
{
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__MPCManager::s_instance__);
}
