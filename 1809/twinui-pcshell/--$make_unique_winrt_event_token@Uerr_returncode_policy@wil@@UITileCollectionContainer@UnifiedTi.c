/*
 * XREFs of ??$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@P83456@EAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@ZP83456@EAAJUEventRegistrationToken@@@ZPEAU789@@details@wil@@YAJPEAUITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@P82345@EAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@ZP82345@EAAJU9@@Z1PEAV?$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@1@@Z @ 0x1801FD0F4
 * Callers:
 *     _lambda_961dfd5ca30ced7f152f1faecc2cc684_::operator() @ 0x1801FDC38 (_lambda_961dfd5ca30ced7f152f1faecc2cc684_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??_9ISwitchItemController@@$BHA@AA @ 0x18009C560 (--_9ISwitchItemController@@$BHA@AA.c)
 *     ??$com_weak_query_failfast@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801F5AF8 (--$com_weak_query_failfast@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Window.c)
 *     ??$swap_wil@V?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@wistd@@YAXAEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@0@Z @ 0x1801F5CE4 (--$swap_wil@V-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@wistd@@YAXAEAV-$com_p.c)
 *     ?reset@?$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@wil@@QEAAXXZ @ 0x180201B3C (-reset@-$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@.c)
 */

__int64 __fastcall wil::details::make_unique_winrt_event_token<wil::err_returncode_policy,WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer,long (WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer::*)(Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::TileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs *> *,EventRegistrationToken *),long (WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer::*)(EventRegistrationToken),Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::TileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs *> *>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rdi
  __int64 (__fastcall *v10)(__int64); // rcx
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 (__fastcall *v14)(__int64); // [rsp+30h] [rbp-10h]
  __int64 v15; // [rsp+60h] [rbp+20h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+28h] BYREF
  __int64 v17; // [rsp+70h] [rbp+30h]

  v17 = a3;
  v16 = a2;
   ISwitchItemController::`vcall'{112,{flat}}((__int64)a1);
  v16 = a1;
  v6 = v17;
  v12 = v17;
  v14 =  Windows::Foundation::IPropertyValueStatics::`vcall'{120,{flat}};
  v7 = wil::com_weak_query_failfast<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter * &>(&v15, &v16);
  v8 = *v7;
  *v7 = 0LL;
  v13 = v8;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
  v9 = a5;
  if ( a5 != &v12 )
  {
    wil::unique_winrt_event_token<WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer>::reset(a5);
    v12 = *v9;
    *v9 = v6;
    wistd::swap_wil<wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>>(v9 + 1, &v13);
    v10 = (__int64 (__fastcall *)(__int64))v9[2];
    v9[2] = (__int64)v14;
    v14 = v10;
  }
  wil::unique_winrt_event_token<WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer>::reset(&v12);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
  return 0LL;
}
