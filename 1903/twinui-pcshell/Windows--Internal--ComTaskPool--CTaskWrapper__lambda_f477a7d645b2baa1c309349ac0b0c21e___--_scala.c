/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f477a7d645b2baa1c309349ac0b0c21e___::_scalar_deleting_destructor_ @ 0x18007CCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f477a7d645b2baa1c309349ac0b0c21e___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
