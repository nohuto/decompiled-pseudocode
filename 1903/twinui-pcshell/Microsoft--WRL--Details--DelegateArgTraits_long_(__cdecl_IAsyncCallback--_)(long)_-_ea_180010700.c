/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_6a3f3a3b5daae62068289b6d6a8748e7___1_long_::_scalar_deleting_destructor_ @ 0x180010700
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6a3f3a3b5daae62068289b6d6a8748e7_::__lambda_6a3f3a3b5daae62068289b6d6a8748e7_ @ 0x180010748 (_lambda_6a3f3a3b5daae62068289b6d6a8748e7_--__lambda_6a3f3a3b5daae62068289b6d6a8748e7_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_6a3f3a3b5daae62068289b6d6a8748e7___1_long_::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_6a3f3a3b5daae62068289b6d6a8748e7_::__lambda_6a3f3a3b5daae62068289b6d6a8748e7_(a1 + 4);
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
