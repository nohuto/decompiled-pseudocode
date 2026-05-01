/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_20dbc4d6acc0852c34b2762e9d23547f_@@$0?0PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIViewTabEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIBrokeredViewTabConverter@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUIViewTabEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@3@PEAUIViewTabEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801D78F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs *>>::*)(Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_20dbc4d6acc0852c34b2762e9d23547f_,-1,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs *>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 8);
  *((_DWORD *)a1 + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
