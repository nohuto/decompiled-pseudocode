/*
 * XREFs of _dynamic_initializer_for__CManipulationManager::s_rwPointerBufferLock__ @ 0x180002B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__CManipulationManager::s_rwPointerBufferLock__()
{
  InitializeSRWLock(&CManipulationManager::s_rwPointerBufferLock);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CManipulationManager::s_rwPointerBufferLock__);
}
