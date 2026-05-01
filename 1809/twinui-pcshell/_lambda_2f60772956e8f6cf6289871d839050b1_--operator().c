/*
 * XREFs of _lambda_2f60772956e8f6cf6289871d839050b1_::operator() @ 0x1801F644C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64___::_)(Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__Microsoft::WRL::FtmBase___lambda_2f60772956e8f6cf6289871d839050b1___1_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1801F7DB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1801F7DB0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$CallAndHandleErrorsWithReturnType@XV?$function@$$A6AXJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@AEAJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@$0A@@details@wil@@YAJAEBV?$function@$$A6AXJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@AEAJ$$QEAPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1801F4A28 (--$CallAndHandleErrorsWithReturnType@XV-$function@$$A6AXJPEAUITitleBarFactory@Experience@Shell@I.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_2f60772956e8f6cf6289871d839050b1_::operator()(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  int v9; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF

  v10 = 0LL;
  v9 = 0;
  if ( a3 == 1 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v10);
  }
  else
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &_uuidof__AUIAsyncInfo_Foundation_Windows__, &v8);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 64LL))(v8, &v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
  v8 = v10;
  v5 = wil::details::CallAndHandleErrorsWithReturnType<void,wistd::function<void (long,Windows::Internal::Shell::Experience::ITitleBarFactory *)>,long &,Windows::Internal::Shell::Experience::ITitleBarFactory *,0>(a1);
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
