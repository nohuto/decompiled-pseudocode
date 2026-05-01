/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_5f9e95539f8e1465166802ff2b1874b7_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801F6DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_5f9e95539f8e1465166802ff2b1874b7_::__lambda_5f9e95539f8e1465166802ff2b1874b7_ @ 0x1801F616C (_lambda_5f9e95539f8e1465166802ff2b1874b7_--__lambda_5f9e95539f8e1465166802ff2b1874b7_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_5f9e95539f8e1465166802ff2b1874b7_>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  lambda_5f9e95539f8e1465166802ff2b1874b7_::__lambda_5f9e95539f8e1465166802ff2b1874b7_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
