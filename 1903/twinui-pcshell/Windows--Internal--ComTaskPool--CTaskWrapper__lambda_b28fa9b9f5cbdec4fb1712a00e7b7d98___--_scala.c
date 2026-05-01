/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___::_scalar_deleting_destructor_ @ 0x18022BA00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_::__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_ @ 0x180229F88 (_lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_--__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_::__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
