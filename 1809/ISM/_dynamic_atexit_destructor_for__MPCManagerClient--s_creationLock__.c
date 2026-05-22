/*
 * XREFs of _dynamic_atexit_destructor_for__MPCManagerClient::s_creationLock__ @ 0x180136FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__MPCManagerClient::s_creationLock__()
{
  DeleteCriticalSection(&MPCManagerClient::s_creationLock);
}
