/*
 * XREFs of ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1801DE758
 * Callers:
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___::type__lambda_9783efd0cf9a4011a5fefd366cc6ea27___::Invoke_::_1_::catch$0 @ 0x180094ED7 (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool___--type_.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___::type__lambda_89fb5ab193d74e8b0300aa0759d904c8___::Invoke_::_1_::catch$0 @ 0x180094F3F (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Application.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___::type__lambda_0b192ff2ee59a0e56115e85b2e997556___::Invoke_::_1_::catch$10 @ 0x1803FD7B8 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--C.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
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
  BSTR v8[3]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-50h] BYREF
  const winrt::hresult_error *v10; // [rsp+60h] [rbp-28h] BYREF
  const std::out_of_range *v11; // [rsp+68h] [rbp-20h] BYREF
  const std::invalid_argument *v12; // [rsp+70h] [rbp-18h] BYREF
  const std::exception *v13; // [rsp+78h] [rbp-10h] BYREF
  _DWORD *v14; // [rsp+90h] [rbp+8h]
  _DWORD *v15; // [rsp+90h] [rbp+8h]
  _DWORD *v16; // [rsp+90h] [rbp+8h]
  const CHAR *v17; // [rsp+98h] [rbp+10h] BYREF
  HSTRING v18; // [rsp+A0h] [rbp+18h] BYREF

  v9[4] = -2LL;
  try
  {
    throw;
  }
  catch ( const winrt::hresult_error *v10 )
  {
    winrt::hresult_error::to_abi((__int64)v10, v14);
    return;
  }
  catch ( std::bad_alloc )
  {
    *v15 = -2147024882;
    return;
  }
  catch ( const std::out_of_range *v11 )
  {
    v5 = v7;
    v0 = v5;
    *((_QWORD *)v5 + 19) = (*(__int64 (**)(void))(**((_QWORD **)v5 + 13) + 8LL))();
    *((_QWORD *)v0 + 7) = *winrt::to_hstring<char const *,void>((_QWORD *)v0 + 20, (const CHAR **)v0 + 19);
    winrt::hresult_error::hresult_error((__int64)(v0 + 32), winrt::impl::error_out_of_bounds, (_QWORD *)v0 + 7);
    winrt::hresult_error::to_abi((__int64)(v0 + 32), *((_DWORD **)v0 + 18));
    if ( *((_QWORD *)v0 + 6) )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(v0 + 48);
    v1 = (OLECHAR *)*((_QWORD *)v0 + 4);
    if ( v1 )
    {
      SysFreeString_0(v1);
      *((_QWORD *)v0 + 4) = 0LL;
    }
    winrt::hstring::~hstring((HSTRING *)v0 + 20);
    return;
  }
  catch ( const std::invalid_argument *v12 )
  {
    v6 = v7;
    v2 = v6;
    *((_QWORD *)v6 + 19) = (*(__int64 (**)(void))(**((_QWORD **)v6 + 14) + 8LL))();
    *((_QWORD *)v2 + 7) = *winrt::to_hstring<char const *,void>((_QWORD *)v2 + 20, (const CHAR **)v2 + 19);
    winrt::hresult_error::hresult_error((__int64)(v2 + 32), winrt::impl::error_invalid_argument, (_QWORD *)v2 + 7);
    winrt::hresult_error::to_abi((__int64)(v2 + 32), *((_DWORD **)v2 + 18));
    if ( *((_QWORD *)v2 + 6) )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(v2 + 48);
    v3 = (OLECHAR *)*((_QWORD *)v2 + 4);
    if ( v3 )
    {
      SysFreeString_0(v3);
      *((_QWORD *)v2 + 4) = 0LL;
    }
    winrt::hstring::~hstring((HSTRING *)v2 + 20);
    return;
  }
  catch ( const std::exception *v13 )
  {
    (*(void (**)(void))(*(_QWORD *)v13 + 8LL))();
    v9[0] = *winrt::to_hstring<char const *,void>(&v18, &v17);
    v4 = winrt::hresult_error::hresult_error((__int64)v8, winrt::impl::error_fail, v9);
    winrt::hresult_error::to_abi(v4, v16);
    winrt::hresult_out_of_bounds::~hresult_out_of_bounds(v8);
    winrt::hstring::~hstring(&v18);
    return;
  }
  catch ( ... )
  {
    _o_terminate();
    JUMPOUT(0x1801DE9B4LL);
  }
}
