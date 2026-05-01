/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___lambda_0b192ff2ee59a0e56115e85b2e997556___::QueryInterface @ 0x18041CFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___lambda_0b192ff2ee59a0e56115e85b2e997556___::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  int v3; // eax

  if ( *a2 != 1493150626 )
  {
    if ( *a2 )
    {
      if ( *a2 != -1796592748 )
      {
        if ( *a2 == 3 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
          return winrt::impl::make_marshaler(a1, a3);
        goto LABEL_20;
      }
      if ( a2[1] != 1239476684 || a2[2] != 1693384640 )
        goto LABEL_20;
      v3 = -1873047606;
    }
    else
    {
      if ( a2[1] || a2[2] != 192 )
        goto LABEL_20;
      v3 = 1174405120;
    }
LABEL_13:
    if ( a2[3] == v3 )
    {
      *a3 = a1;
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
      return 0LL;
    }
    goto LABEL_20;
  }
  if ( a2[1] == 1483421483 && a2[2] == -2066339397 )
  {
    v3 = 207606963;
    goto LABEL_13;
  }
LABEL_20:
  *a3 = 0LL;
  return 2147500034LL;
}
