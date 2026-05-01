/*
 * XREFs of ??$make_event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@U?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$1??_9type@?$abi@UIUserWatcher@System@Windows@winrt@@@impl@6@$BJA@AA@impl@6@PEBU?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@86@@impl@winrt@@YA?AU?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$1??_9type@?$abi@UIUserWatcher@System@Windows@winrt@@@impl@6@$BJA@AA@01@PEBU?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x18009AC6C
 * Callers:
 *     ?TabsChanged@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$1??_9type@?$abi@UIUserWatcher@System@Windows@winrt@@@impl@6@$BJA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1803981BC (-TabsChanged@-$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180384E9C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1803850DC (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 *     ??$as@UIWeakReferenceSource@impl@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@@23@@impl@winrt@@YA?AU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@@01@@Z @ 0x180396A20 (--$as@UIWeakReferenceSource@impl@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@@23@@imp.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::make_event_revoker<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher,winrt::impl::event_revoker<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher,&[thunk]: winrt::impl::abi<winrt::Windows::System::IUserWatcher>::type::`vcall'{144,{flat}}>,winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher> const *>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v5; // rax
  __int64 v6; // rsi
  int v7; // eax
  _QWORD *v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v11; // [rsp+68h] [rbp+20h]

  v9 = a1;
  v11 = a1;
  *a1 = 0LL;
  if ( *a2 )
  {
    v5 = (__int64 *)winrt::impl::as<winrt::impl::IWeakReferenceSource,winrt::impl::abi<winrt::Windows::Foundation::IUnknown>::type>(&v9);
    v6 = *v5;
    *v5 = 0LL;
    v10 = v6;
    if ( v9 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(&v9);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 24LL))(v6, a1);
    if ( v7 < 0 )
      winrt::throw_hresult((unsigned int)v7);
    if ( v6 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(&v10);
  }
  a1[1] = a3;
  return a1;
}
