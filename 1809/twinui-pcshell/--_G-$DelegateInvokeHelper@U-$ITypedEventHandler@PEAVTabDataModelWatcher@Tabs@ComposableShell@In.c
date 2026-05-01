/*
 * XREFs of ??_G?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabPropertyChangedEventArgs@2345@@Foundation@Windows@@V_lambda_e061c9838ed53feae5184a4db6d526ff_@@$0?0PEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@3@PEAUITabDataModelTabPropertyChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVTabDataModelTabPropertyChangedEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropertyChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@3@PEAUITabDataModelTabPropertyChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802F2340
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *>>::*)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *>,_lambda_e061c9838ed53feae5184a4db6d526ff_,-1,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *>::`scalar deleting destructor'(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::WeakRef::~WeakRef(Block + 3);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
