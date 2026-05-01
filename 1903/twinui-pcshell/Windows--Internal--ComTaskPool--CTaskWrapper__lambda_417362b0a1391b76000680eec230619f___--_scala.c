/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_417362b0a1391b76000680eec230619f___::_scalar_deleting_destructor_ @ 0x1801A0B90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_417362b0a1391b76000680eec230619f_::__lambda_417362b0a1391b76000680eec230619f_ @ 0x1801A04D4 (_lambda_417362b0a1391b76000680eec230619f_--__lambda_417362b0a1391b76000680eec230619f_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_417362b0a1391b76000680eec230619f___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_417362b0a1391b76000680eec230619f_::__lambda_417362b0a1391b76000680eec230619f_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x158);
  return a1;
}
