/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___lambda_0b192ff2ee59a0e56115e85b2e997556___::QueryInterface @ 0x180397930
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _winrt::impl::make_marshaler_::_2_::marshaler::marshaler @ 0x180396ED4 (_winrt--impl--make_marshaler_--_2_--marshaler--marshaler.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___lambda_0b192ff2ee59a0e56115e85b2e997556___::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // rax
  bool v8; // zf

  switch ( *a2 )
  {
    case 0x58FFABA2:
      if ( a2[1] == 1483421483 && a2[2] == -2066339397 )
      {
        v5 = 207606963;
        goto LABEL_13;
      }
LABEL_23:
      *a3 = 0LL;
      return 2147500034LL;
    case 0:
      if ( a2[1] || a2[2] != 192 )
        goto LABEL_23;
      v5 = 1174405120;
LABEL_13:
      if ( a2[3] == v5 )
      {
        *a3 = a1;
        _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
        return 0LL;
      }
      goto LABEL_23;
    case 0x94EA2B94:
      if ( a2[1] != 1239476684 || a2[2] != 1693384640 )
        goto LABEL_23;
      v5 = -1873047606;
      goto LABEL_13;
  }
  if ( *a2 != 3 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
    goto LABEL_23;
  v7 = (__int64)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v7 = winrt::impl::make_marshaler_::_2_::marshaler::marshaler(v7, a1);
  *a3 = v7;
  v8 = v7 == 0;
  result = winrt::impl::error_ok;
  if ( v8 )
    return winrt::impl::error_bad_alloc;
  return result;
}
