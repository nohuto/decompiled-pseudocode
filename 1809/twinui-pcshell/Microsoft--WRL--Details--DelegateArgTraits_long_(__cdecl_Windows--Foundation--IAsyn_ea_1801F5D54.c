/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64___::_)(Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__Microsoft::WRL::FtmBase___lambda_2f60772956e8f6cf6289871d839050b1___1_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__Microsoft::WRL::FtmBase___lambda_2f60772956e8f6cf6289871d839050b1___1_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x1801F5D54
 * Callers:
 *     ??$RunWhenComplete@VFtmBase@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@V?$function@$$A6AXJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@$$QEAV?$function@$$A6AXJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@@Z @ 0x1801F5640 (--$RunWhenComplete@VFtmBase@WRL@Microsoft@@PEAU-$IAsyncOperation@PEAVTitleBarFactor_ea_1801F5640.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IAsyncOperationCompletedHandler@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@VFtmBase@23@@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801D434C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeClassFlags@$01.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64___::___Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__Microsoft::WRL::FtmBase___lambda_2f60772956e8f6cf6289871d839050b1___1_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__Microsoft::WRL::FtmBase___lambda_2f60772956e8f6cf6289871d839050b1___1_Windows::Foundation::IAsyncOperation_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Shell::Experience::TitleBarFactory *>,Microsoft::WRL::FtmBase>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Shell::Experience::TitleBarFactory *>,Microsoft::WRL::FtmBase>>((__int64)a1);
  a1[21] = 0LL;
  v4 = *(_QWORD *)(a2 + 104);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      a1[21] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 8LL))(v4, a1 + 8);
      wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
        a2,
        v5);
    }
    else
    {
      a1[21] = v4;
      *(_QWORD *)(a2 + 104) = 0LL;
    }
  }
  else
  {
    a1[21] = 0LL;
  }
  *a1 = off_1803DEF08;
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Shell::Experience::TitleBarFactory *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
