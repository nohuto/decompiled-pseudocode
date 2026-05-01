/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_pProxy__ @ 0x1000D7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_pProxy__()
{
  Microsoft::WRL::ComPtr<ModernResourceManagerProxy>::InternalRelease();
}
