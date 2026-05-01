/*
 * XREFs of ??$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabDroppedEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YAJPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P823456@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabDroppedEventArgs@2345@@Foundation@6@PEAUEventRegistrationToken@@@ZP823456@EAAJU9@@Z1PEAV?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@1@@Z @ 0x180275070
 * Callers:
 *     ?RuntimeClassInitialize@TabTransferManager@@QEAAJV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@5678@PEAUITabTransferEventBroker@5678@PEAUIUnknown@@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180278330 (-RuntimeClassInitialize@TabTransferManager@@QEAAJV-$com_ptr_t@UIWeakReference@@Uerr_exception_po.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BLA@AA @ 0x1800DAFC0 (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BLA@AA.c)
 *     ??0?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAA@UEventRegistrationToken@@PEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJ0@Z@Z @ 0x180275140 (--0-$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@w.c)
 *     ??4?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802754A4 (--4-$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@w.c)
 *     ?reset@?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAXXZ @ 0x180279910 (-reset@-$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows.c)
 */

__int64 __fastcall wil::details::make_unique_winrt_event_token<wil::err_returncode_policy,Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker,long (Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker::*)(Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *,Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs *> *,EventRegistrationToken *),long (Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker::*)(EventRegistrationToken),Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *,Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs *> *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9[4]; // [rsp+28h] [rbp-20h] BYREF

   Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{176,{flat}}(a1);
  v6 = wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>(
         v8,
         a3,
         a1,
          Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker::`vcall'{184,{flat}});
  wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::operator=(a5, v6);
  wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::reset(v8);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v9);
  return 0LL;
}
