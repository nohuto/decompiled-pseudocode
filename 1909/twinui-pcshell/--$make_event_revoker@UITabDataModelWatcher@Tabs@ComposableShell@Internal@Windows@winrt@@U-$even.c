/*
 * XREFs of ??$make_event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@U?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$1??_9type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@6@$BJA@AA@impl@6@PEBU?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@86@@impl@winrt@@YA?AU?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$1??_9type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@6@$BJA@AA@01@PEBU?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1800AE3B4
 * Callers:
 *     ?TabsChanged@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$1??_9type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@6@$BJA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18041D724 (-TabsChanged@-$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801ED780 (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 *     ??$as@UIWeakReferenceSource@impl@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@@23@@impl@winrt@@YA?AU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@@01@@Z @ 0x18041C390 (--$as@UIWeakReferenceSource@impl@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@@23@@imp.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::make_event_revoker<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher,winrt::impl::event_revoker<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher,&[thunk]: winrt::impl::abi<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::type::`vcall'{144,{flat}}>,winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher> const *>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  int v5; // eax
  _QWORD *v7; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp+10h]

  v7 = a1;
  v8 = a1;
  *a1 = 0LL;
  if ( *a2 )
  {
    winrt::impl::as<winrt::impl::IWeakReferenceSource,winrt::impl::abi<winrt::Windows::Foundation::IUnknown>::type>(&v7);
    v5 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 24LL))(v7, a1);
    if ( v5 < 0 )
      winrt::throw_hresult((unsigned int)v5);
    if ( v7 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(&v7);
  }
  a1[1] = a3;
  return a1;
}
