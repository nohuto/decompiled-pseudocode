/*
 * XREFs of ??$com_weak_query_failfast@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801F5AF8
 * Callers:
 *     ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@P834567@EAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YA?AV?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@1@PEAUITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@P834567@EAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@Z1@Z @ 0x1801F5C2C (--$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITitleBarFactoryWatcher@Experience@.c)
 *     ??$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@P83456@EAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@ZP83456@EAAJUEventRegistrationToken@@@ZPEAU789@@details@wil@@YAJPEAUITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@P82345@EAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@ZP82345@EAAJU9@@Z1PEAV?$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@1@@Z @ 0x1801FD0F4 (--$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITileCollectionContainer@UnifiedTi.c)
 *     ??0DefaultIconManager@@QEAA@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@PEAUIImmersiveWindowMessageService@@@Z @ 0x1801FD2E8 (--0DefaultIconManager@@QEAA@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabVie.c)
 *     ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YA?AV?$unique_winrt_event_token@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@1@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@Z1@Z @ 0x180396C14 (--$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UIBrokeredViewTabConverter@Tabs@Comp.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800E62AC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall wil::com_weak_query_failfast<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter * &>(
        __int64 *a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  *a1 = 0LL;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(a1);
  *a1 = 0LL;
  v7 = 0LL;
  v4 = (**v3)(v3, &GUID_00000038_0000_0000_c000_000000000046, &v7);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 24LL))(v7, a1);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v7);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1766LL,
      (__int64)"internal\\sdk\\inc\\wil\\com.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  return a1;
}
