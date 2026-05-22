/*
 * XREFs of _dynamic_atexit_destructor_for__MPCManager::s_instance__ @ 0x180136E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__MPCManager::s_instance__()
{
  MPCManager *v0; // rcx
  __int64 result; // rax

  v0 = MPCManager::s_instance;
  if ( MPCManager::s_instance )
  {
    MPCManager::s_instance = 0LL;
    return (**((__int64 (__fastcall ***)(__int64))v0 + 2))((__int64)v0 + 16);
  }
  return result;
}
