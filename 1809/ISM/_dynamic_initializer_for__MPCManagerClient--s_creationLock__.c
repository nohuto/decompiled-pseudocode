/*
 * XREFs of _dynamic_initializer_for__MPCManagerClient::s_creationLock__ @ 0x1800018A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__MPCManagerClient::s_creationLock__()
{
  InitializeCriticalSectionEx(&MPCManagerClient::s_creationLock, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__MPCManagerClient::s_creationLock__);
}
