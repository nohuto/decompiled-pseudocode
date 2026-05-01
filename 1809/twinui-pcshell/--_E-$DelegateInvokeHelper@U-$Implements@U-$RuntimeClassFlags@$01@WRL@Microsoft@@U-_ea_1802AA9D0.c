/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabPropertyChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_c986d26c92642d3a69330169dfef2fa8_@@$0?0PEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropertyChangedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVTabDataModelTabPropertyChangedEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropertyChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@3@PEAUITabDataModelTabPropertyChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802AA9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *>>::*)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_c986d26c92642d3a69330169dfef2fa8_,-1,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 9);
  *((_DWORD *)a1 + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
