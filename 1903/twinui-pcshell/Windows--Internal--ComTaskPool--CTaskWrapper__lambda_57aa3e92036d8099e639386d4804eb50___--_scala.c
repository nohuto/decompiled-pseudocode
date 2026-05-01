/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57aa3e92036d8099e639386d4804eb50___::_scalar_deleting_destructor_ @ 0x18006DBB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_57aa3e92036d8099e639386d4804eb50_::__lambda_57aa3e92036d8099e639386d4804eb50_ @ 0x18006DD34 (_lambda_57aa3e92036d8099e639386d4804eb50_--__lambda_57aa3e92036d8099e639386d4804eb50_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57aa3e92036d8099e639386d4804eb50___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_57aa3e92036d8099e639386d4804eb50_::__lambda_57aa3e92036d8099e639386d4804eb50_(a1 + 4);
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
