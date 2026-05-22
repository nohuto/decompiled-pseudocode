/*
 * XREFs of ?Complete@?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAAXJ@Z @ 0x18011B970
 * Callers:
 *     _lambda_c98bc3bcd78db050c21a40d0889cad93_::operator() @ 0x18011A2AC (_lambda_c98bc3bcd78db050c21a40d0889cad93_--operator().c)
 *     _lambda_f167ce5618b3131ff3632db620bc3da6_::operator() @ 0x18011A4B0 (_lambda_f167ce5618b3131ff3632db620bc3da6_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_::_Do_call @ 0x180121970 (std--_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_--_Do_call.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::Complete(
        __int64 a1)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)(a1 + 8);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8));
  return Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v1);
}
