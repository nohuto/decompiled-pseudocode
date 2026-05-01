/*
 * XREFs of ?InternalRelease@?$ComPtr@VModernResourceManagerProxy@@@WRL@Microsoft@@IAEKXZ @ 0x1000C420
 * Callers:
 *     _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_pProxy__ @ 0x1000D7C0 (_dynamic_atexit_destructor_for__Windows--System--CMemoryManager--s_pProxy__.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int Microsoft::WRL::ComPtr<ModernResourceManagerProxy>::InternalRelease()
{
  ModernResourceManagerProxy *v0; // ecx
  int result; // eax

  v0 = Windows::System::CMemoryManager::s_pProxy;
  result = 0;
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
    Windows::System::CMemoryManager::s_pProxy = 0;
    return (*(int (__thiscall **)(_DWORD, ModernResourceManagerProxy *))(*(_DWORD *)v0 + 8))(
             *(_DWORD *)(*(_DWORD *)v0 + 8),
             v0);
  }
  return result;
}
