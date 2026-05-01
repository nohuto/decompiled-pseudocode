/*
 * XREFs of _dynamic_initializer_for__Windows::System::CMemoryManager::s_pProxy__ @ 0x100054E0
 * Callers:
 *     <none>
 * Callees:
 *     _atexit @ 0x1000CB33 (_atexit.c)
 */

int dynamic_initializer_for__Windows::System::CMemoryManager::s_pProxy__()
{
  return atexit(dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_pProxy__);
}
