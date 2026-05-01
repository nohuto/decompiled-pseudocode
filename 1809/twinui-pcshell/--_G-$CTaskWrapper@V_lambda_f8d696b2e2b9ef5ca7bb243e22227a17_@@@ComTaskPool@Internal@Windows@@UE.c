/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_f8d696b2e2b9ef5ca7bb243e22227a17_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180171A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_f8d696b2e2b9ef5ca7bb243e22227a17_::__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_ @ 0x180171384 (_lambda_f8d696b2e2b9ef5ca7bb243e22227a17_--__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_f8d696b2e2b9ef5ca7bb243e22227a17_>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  lambda_f8d696b2e2b9ef5ca7bb243e22227a17_::__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
