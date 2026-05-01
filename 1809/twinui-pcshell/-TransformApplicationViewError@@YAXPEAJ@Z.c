/*
 * XREFs of ?TransformApplicationViewError@@YAXPEAJ@Z @ 0x18007D8BC
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_cb40275b8a9e9b5447b31c82a09c6fd5___1_long_::Invoke @ 0x18007D870 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18007D870.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_9731f89704d943095d8b967b624cda2b___1_long_::Invoke @ 0x18010AD30 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18010AD30.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_d5477cdde00c396a06f6576e925c03df___1_long_::Invoke @ 0x18010AE20 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18010AE20.c)
 * Callees:
 *     <none>
 */

void __fastcall TransformApplicationViewError(int *a1)
{
  if ( *a1 == -2147023496 || *a1 == -2147024890 )
  {
    *a1 = -2147024809;
  }
  else if ( *a1 == -2147467260 )
  {
    *a1 = 0;
  }
}
