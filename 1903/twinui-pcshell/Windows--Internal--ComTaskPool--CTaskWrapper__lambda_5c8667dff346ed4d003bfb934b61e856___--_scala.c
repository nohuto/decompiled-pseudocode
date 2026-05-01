/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___::_scalar_deleting_destructor_ @ 0x18038C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_ @ 0x18038C708 (_lambda_5c8667dff346ed4d003bfb934b61e856_--__lambda_5c8667dff346ed4d003bfb934b61e856_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
