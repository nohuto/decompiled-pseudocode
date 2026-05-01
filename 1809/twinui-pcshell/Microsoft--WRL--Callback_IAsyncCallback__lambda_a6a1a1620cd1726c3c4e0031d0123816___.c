/*
 * XREFs of Microsoft::WRL::Callback_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___ @ 0x18008A694
 * Callers:
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x18011249C (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___1_long_ @ 0x18008AA20 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18008AA20.c)
 */

__int64 *__fastcall Microsoft::WRL::Callback_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax

  v4 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___1_long_(
           v5,
           a2);
  result = a1;
  *a1 = v4;
  return result;
}
