/*
 * XREFs of ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1801FD93C
 * Callers:
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___::type__lambda_9783efd0cf9a4011a5fefd366cc6ea27___::Invoke_::_1_::catch$0 @ 0x1800A20C7 (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool___--type_.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___::type__lambda_89fb5ab193d74e8b0300aa0759d904c8___::Invoke_::_1_::catch$0 @ 0x1800A212F (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Application.c)
 *     _winrt::impl::delegate_winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler_::type__lambda_be8a6f579aab40e35446f4addbd39028___::Invoke_::_1_::catch$0 @ 0x1800C0F3A (_winrt--impl--delegate_winrt--Windows--Networking--Connectivity--NetworkStatusChangedEventHandle.c)
 *     _winrt::impl::root_implements_winrt::immersive_shell_component_IObjectWithSite_IServiceProvider_IImmersiveShellComponent_winrt::Windows::Foundation::IInspectable_::NonDelegatingGetRuntimeClassName_::_1_::catch$3 @ 0x1800C1195 (_winrt--impl--root_implements_winrt--immersive_shell_component_IObjectWithSite_IServiceProvider_.c)
 *     _winrt::impl::root_implements_winrt::immersive_shell_component_IObjectWithSite_IServiceProvider_IImmersiveShellComponent_winrt::Windows::Foundation::IInspectable_::NonDelegatingGetTrustLevel_::_1_::catch$0 @ 0x1800C1201 (_winrt--impl--root_implements_winrt--immersive_shell_component_IObjectWithSite_ISer_ea_1800C1201.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___::type__lambda_0b192ff2ee59a0e56115e85b2e997556___::Invoke_::_1_::catch$10 @ 0x18041CE48 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--C.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 */

void __noreturn winrt::to_hresult()
{
  _BYTE *v0; // rbp
  OLECHAR *v1; // rcx
  _BYTE *v2; // rbp
  OLECHAR *v3; // rcx
  __int64 v4; // rax
  _BYTE *v5; // rdx
  _BYTE *v6; // rdx
  _BYTE v7[32]; // [rsp+0h] [rbp-88h] BYREF
  BSTR v8[8]; // [rsp+20h] [rbp-68h] BYREF
  const winrt::hresult_error *v9; // [rsp+60h] [rbp-28h] BYREF
  const std::out_of_range *v10; // [rsp+68h] [rbp-20h] BYREF
  const std::invalid_argument *v11; // [rsp+70h] [rbp-18h] BYREF
  const std::exception *v12; // [rsp+78h] [rbp-10h] BYREF
  _DWORD *v13; // [rsp+90h] [rbp+8h]
  _DWORD *v14; // [rsp+90h] [rbp+8h]
  _DWORD *v15; // [rsp+90h] [rbp+8h]
  const CHAR *v16; // [rsp+98h] [rbp+10h] BYREF
  HSTRING v17; // [rsp+A0h] [rbp+18h] BYREF

  v8[7] = (BSTR)-2LL;
  try
  {
    throw;
  }
  catch ( const winrt::hresult_error *v9 )
  {
    winrt::hresult_error::to_abi((__int64)v9, v13);
    return;
  }
  catch ( std::bad_alloc )
  {
    *v14 = -2147024882;
    return;
  }
  catch ( const std::out_of_range *v10 )
  {
    v5 = v7;
    v0 = v5;
    *((_QWORD *)v5 + 19) = (*(__int64 (**)(void))(**((_QWORD **)v5 + 13) + 8LL))();
    *((_QWORD *)v0 + 7) = *winrt::to_hstring<char const *,void>((_QWORD *)v0 + 20, (const CHAR **)v0 + 19);
    winrt::hresult_error::hresult_error((__int64)(v0 + 32), winrt::impl::error_out_of_bounds);
    winrt::hresult_error::to_abi((__int64)(v0 + 32), *((_DWORD **)v0 + 18));
    if ( *((_QWORD *)v0 + 6) )
      winrt::com_ptr<IInspectable>::unconditional_release_ref((__int64 *)v0 + 6);
    v1 = (OLECHAR *)*((_QWORD *)v0 + 4);
    if ( v1 )
    {
      SysFreeString_0(v1);
      *((_QWORD *)v0 + 4) = 0LL;
    }
    winrt::hstring::~hstring((HSTRING *)v0 + 20);
    return;
  }
  catch ( const std::invalid_argument *v11 )
  {
    v6 = v7;
    v2 = v6;
    *((_QWORD *)v6 + 19) = (*(__int64 (**)(void))(**((_QWORD **)v6 + 14) + 8LL))();
    *((_QWORD *)v2 + 7) = *winrt::to_hstring<char const *,void>((_QWORD *)v2 + 20, (const CHAR **)v2 + 19);
    winrt::hresult_error::hresult_error((__int64)(v2 + 32), winrt::impl::error_invalid_argument);
    winrt::hresult_error::to_abi((__int64)(v2 + 32), *((_DWORD **)v2 + 18));
    if ( *((_QWORD *)v2 + 6) )
      winrt::com_ptr<IInspectable>::unconditional_release_ref((__int64 *)v2 + 6);
    v3 = (OLECHAR *)*((_QWORD *)v2 + 4);
    if ( v3 )
    {
      SysFreeString_0(v3);
      *((_QWORD *)v2 + 4) = 0LL;
    }
    winrt::hstring::~hstring((HSTRING *)v2 + 20);
    return;
  }
  catch ( const std::exception *v12 )
  {
    (*(void (**)(void))(*(_QWORD *)v12 + 8LL))();
    v8[3] = *(BSTR *)winrt::to_hstring<char const *,void>(&v17, &v16);
    v4 = winrt::hresult_error::hresult_error((__int64)v8, winrt::impl::error_fail);
    winrt::hresult_error::to_abi(v4, v15);
    winrt::hresult_out_of_bounds::~hresult_out_of_bounds(v8);
    winrt::hstring::~hstring(&v17);
    return;
  }
  catch ( ... )
  {
    _o_terminate();
    JUMPOUT(0x1801FDB98LL);
  }
}
