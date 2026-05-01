/*
 * XREFs of ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1803985F4
 * Callers:
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___::type__lambda_0b192ff2ee59a0e56115e85b2e997556___::Invoke_::_1_::catch$10 @ 0x180397728 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--C.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 */

void __noreturn winrt::to_hresult()
{
  _QWORD *v0; // rbp
  int *v1; // rbx
  __int64 v2; // rax
  OLECHAR *v3; // rcx
  HSTRING v4; // rcx
  _QWORD *v5; // rbp
  OLECHAR *v6; // rcx
  HSTRING v7; // rcx
  _QWORD *v8; // rbp
  OLECHAR *v9; // rcx
  HSTRING v10; // rcx
  _QWORD *v11; // rbp
  __int64 v12; // rax
  OLECHAR *v13; // rcx
  HSTRING v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rdx
  _QWORD *v17; // rdx
  _QWORD *v18; // rdx
  _QWORD v19[12]; // [rsp+0h] [rbp-98h] BYREF
  const winrt::hresult_error *v20; // [rsp+60h] [rbp-38h] BYREF
  const wil::ResultException *v21; // [rsp+68h] [rbp-30h] BYREF
  const std::out_of_range *v22; // [rsp+70h] [rbp-28h] BYREF
  const std::invalid_argument *v23; // [rsp+78h] [rbp-20h] BYREF
  const std::exception *v24; // [rsp+80h] [rbp-18h] BYREF
  _DWORD *v25; // [rsp+A0h] [rbp+8h]
  _DWORD *v26; // [rsp+A0h] [rbp+8h]

  v19[11] = -2LL;
  try
  {
    throw;
  }
  catch ( const winrt::hresult_error *v20 )
  {
    winrt::hresult_error::to_abi((__int64)v20, v25);
    return;
  }
  catch ( const wil::ResultException *v21 )
  {
    v15 = v19;
    v0 = v15;
    v1 = (int *)v15[13];
    v15[21] = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)v1 + 8LL))(v1);
    v0[7] = *winrt::to_hstring<char const *,void>(v0 + 22, (const CHAR **)v0 + 21);
    v2 = winrt::hresult_error::hresult_error((__int64)(v0 + 4), v1[7]);
    winrt::hresult_error::to_abi(v2, (_DWORD *)v0[20]);
    if ( v0[6] )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(v0 + 6);
    v3 = (OLECHAR *)v0[4];
    if ( v3 )
    {
      SysFreeString_0(v3);
      v0[4] = 0LL;
    }
    v4 = (HSTRING)v0[22];
    if ( v4 )
      WindowsDeleteString_0(v4);
    return;
  }
  catch ( std::bad_alloc )
  {
    *v26 = -2147024882;
    return;
  }
  catch ( const std::out_of_range *v22 )
  {
    v16 = v19;
    v5 = v16;
    v16[21] = (*(__int64 (**)(void))(*(_QWORD *)v16[14] + 8LL))();
    v5[7] = *winrt::to_hstring<char const *,void>(v5 + 22, (const CHAR **)v5 + 21);
    winrt::hresult_error::hresult_error((__int64)(v5 + 4), winrt::impl::error_out_of_bounds);
    winrt::hresult_error::to_abi((__int64)(v5 + 4), (_DWORD *)v5[20]);
    if ( v5[6] )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(v5 + 6);
    v6 = (OLECHAR *)v5[4];
    if ( v6 )
    {
      SysFreeString_0(v6);
      v5[4] = 0LL;
    }
    v7 = (HSTRING)v5[22];
    if ( v7 )
      WindowsDeleteString_0(v7);
    return;
  }
  catch ( const std::invalid_argument *v23 )
  {
    v17 = v19;
    v8 = v17;
    v17[21] = (*(__int64 (**)(void))(*(_QWORD *)v17[15] + 8LL))();
    v8[7] = *winrt::to_hstring<char const *,void>(v8 + 22, (const CHAR **)v8 + 21);
    winrt::hresult_error::hresult_error((__int64)(v8 + 4), winrt::impl::error_invalid_argument);
    winrt::hresult_error::to_abi((__int64)(v8 + 4), (_DWORD *)v8[20]);
    if ( v8[6] )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(v8 + 6);
    v9 = (OLECHAR *)v8[4];
    if ( v9 )
    {
      SysFreeString_0(v9);
      v8[4] = 0LL;
    }
    v10 = (HSTRING)v8[22];
    if ( v10 )
      WindowsDeleteString_0(v10);
    return;
  }
  catch ( const std::exception *v24 )
  {
    v18 = v19;
    v11 = v18;
    v18[21] = (*(__int64 (**)(void))(*(_QWORD *)v18[16] + 8LL))();
    v11[7] = *winrt::to_hstring<char const *,void>(v11 + 22, (const CHAR **)v11 + 21);
    v12 = winrt::hresult_error::hresult_error((__int64)(v11 + 4), winrt::impl::error_fail);
    winrt::hresult_error::to_abi(v12, (_DWORD *)v11[20]);
    if ( v11[6] )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(v11 + 6);
    v13 = (OLECHAR *)v11[4];
    if ( v13 )
    {
      SysFreeString_0(v13);
      v11[4] = 0LL;
    }
    v14 = (HSTRING)v11[22];
    if ( v14 )
      WindowsDeleteString_0(v14);
    return;
  }
  catch ( ... )
  {
    _o_terminate();
    JUMPOUT(0x18039892CLL);
  }
}
