/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__stdcall_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_046e550ea9397cce661af54b6af0d395___1_IInspectable___IInspectable___::Invoke @ 0x100079C0
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_c8fac60120d0355ff66629c823b43c3a__Windows::Foundation::IEventHandler_IInspectable_____ @ 0x100078FC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_c8fac60120d0355ff66629c823b43c3a__Wind.c)
 * Callees:
 *     _lambda_046e550ea9397cce661af54b6af0d395_::operator()_IInspectable___IInspectable___ @ 0x100079EF (_lambda_046e550ea9397cce661af54b6af0d395_--operator()_IInspectable___IInspectable___.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SGXJ@Z @ 0x100107BE (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SGXJ@Z.c)
 */

int __stdcall Microsoft::WRL::Details::DelegateArgTraits_long____stdcall_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_046e550ea9397cce661af54b6af0d395___1_IInspectable___IInspectable___::Invoke(
        int a1,
        char a2,
        char a3)
{
  int v3; // eax
  int v4; // esi

  v3 = lambda_046e550ea9397cce661af54b6af0d395_::operator()_IInspectable___IInspectable___(&a2, &a3);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
