/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f8d696b2e2b9ef5ca7bb243e22227a17___::_scalar_deleting_destructor_ @ 0x1801BFAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_f8d696b2e2b9ef5ca7bb243e22227a17_::__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_ @ 0x1801BF3F4 (_lambda_f8d696b2e2b9ef5ca7bb243e22227a17_--__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f8d696b2e2b9ef5ca7bb243e22227a17___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_f8d696b2e2b9ef5ca7bb243e22227a17_::__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
