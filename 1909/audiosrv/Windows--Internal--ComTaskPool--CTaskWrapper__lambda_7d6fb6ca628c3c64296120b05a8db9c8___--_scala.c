/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8___::_scalar_deleting_destructor_ @ 0x18006B890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_7d6fb6ca628c3c64296120b05a8db9c8_::__lambda_7d6fb6ca628c3c64296120b05a8db9c8_ @ 0x18006B044 (_lambda_7d6fb6ca628c3c64296120b05a8db9c8_--__lambda_7d6fb6ca628c3c64296120b05a8db9c8_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_7d6fb6ca628c3c64296120b05a8db9c8_::__lambda_7d6fb6ca628c3c64296120b05a8db9c8_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
