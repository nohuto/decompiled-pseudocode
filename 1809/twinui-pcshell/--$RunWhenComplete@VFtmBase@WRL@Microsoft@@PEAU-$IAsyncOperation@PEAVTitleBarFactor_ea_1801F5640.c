/*
 * XREFs of ??$RunWhenComplete@VFtmBase@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@V?$function@$$A6AXJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@$$QEAV?$function@$$A6AXJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@@Z @ 0x1801F5640
 * Callers:
 *     wil::RunWhenComplete_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_38da9a343bc3123aac8a9a1bc66a1660__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_ @ 0x1801F574C (wil--RunWhenComplete_Microsoft--WRL--FtmBase_Windows--Internal--Shell--Experience--TitleBarFacto.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64___::_)(Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__Microsoft::WRL::FtmBase___lambda_2f60772956e8f6cf6289871d839050b1___1_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__Microsoft::WRL::FtmBase___lambda_2f60772956e8f6cf6289871d839050b1___1_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x1801F5D54 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1801F5D54.c)
 */

__int64 __fastcall wil::details::RunWhenComplete<Microsoft::WRL::FtmBase,Windows::Foundation::IAsyncOperation<Windows::Internal::Shell::Experience::TitleBarFactory *> *,wistd::function<void (long,Windows::Internal::Shell::Experience::ITitleBarFactory *)>>(
        __int64 a1,
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  _BYTE *v4; // rdx
  void *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // edi
  _BYTE v11[104]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v12; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v12 = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 104);
  if ( v3 )
  {
    if ( v3 == (__int64 (__fastcall ***)(_QWORD, _BYTE *))a2 )
      v4 = v11;
    else
      v4 = 0LL;
    v12 = (**v3)(v3, v4);
  }
  else
  {
    v12 = 0LL;
  }
  v5 = operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v5 )
    v7 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64___::___Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__Microsoft::WRL::FtmBase___lambda_2f60772956e8f6cf6289871d839050b1___1_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__Microsoft::WRL::FtmBase___lambda_2f60772956e8f6cf6289871d839050b1___1_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_(
           v5,
           v11);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v11,
    v6);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v11,
    v8);
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55C,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)0x8007000ELL);
  }
  return v9;
}
