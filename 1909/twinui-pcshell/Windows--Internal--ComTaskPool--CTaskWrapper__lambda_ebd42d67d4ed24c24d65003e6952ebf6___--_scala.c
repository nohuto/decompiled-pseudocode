/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___::_scalar_deleting_destructor_ @ 0x18023EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_ @ 0x18023E780 (_lambda_ebd42d67d4ed24c24d65003e6952ebf6_--__lambda_ebd42d67d4ed24c24d65003e6952ebf6_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x190);
  return a1;
}
