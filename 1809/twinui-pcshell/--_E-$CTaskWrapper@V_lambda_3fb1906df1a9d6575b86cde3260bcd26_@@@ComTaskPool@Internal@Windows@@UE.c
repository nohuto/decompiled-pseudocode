/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_3fb1906df1a9d6575b86cde3260bcd26_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180380250
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_3fb1906df1a9d6575b86cde3260bcd26_::__lambda_3fb1906df1a9d6575b86cde3260bcd26_ @ 0x18030EEF4 (_lambda_3fb1906df1a9d6575b86cde3260bcd26_--__lambda_3fb1906df1a9d6575b86cde3260bcd26_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_3fb1906df1a9d6575b86cde3260bcd26_>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  lambda_3fb1906df1a9d6575b86cde3260bcd26_::__lambda_3fb1906df1a9d6575b86cde3260bcd26_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
