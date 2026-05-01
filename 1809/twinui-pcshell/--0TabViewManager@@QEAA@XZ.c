/*
 * XREFs of ??0TabViewManager@@QEAA@XZ @ 0x1801D47D4
 * Callers:
 *     ??$MakeAndInitialize@VTabViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801CFA2C (--$MakeAndInitialize@VTabViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UITabViewManager@@UITabGroupManager@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@UITitleBarRecovery@@UIPrivilegedOperationsConsumer@@UIShellTabsSource@@UIImmersiveShellHookNotification@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801D4424 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponent_ea_1801D4424.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x1801EFDD8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitask.c)
 */

// Hidden C++ exception states: #wind=28
TabViewManager *__fastcall TabViewManager::TabViewManager(TabViewManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,ITabViewManager,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IShellTabsSource,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,ITabViewManager,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IShellTabsSource,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &TabViewManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &TabViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,ITabViewManager,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IShellTabsSource,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 6) = &TabViewManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &TabViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,ITabViewManager,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IShellTabsSource,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 15) = &TabViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,ITabViewManager,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IShellTabsSource,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 16) = &TabViewManager::`vftable'{for `IWindowManagementShowMoveSizeEvents'};
  *((_QWORD *)this + 17) = &TabViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabViewManager,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IShellTabsSource,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 18) = &TabViewManager::`vftable'{for `ITabGroupManager'};
  *((_QWORD *)this + 19) = &TabViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IShellTabsSource,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 20) = &TabViewManager::`vftable'{for `ITitleBarRecovery'};
  *((_QWORD *)this + 21) = &TabViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPrivilegedOperationsConsumer,IShellTabsSource,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 22) = &TabViewManager::`vftable'{for `IShellTabsSource'};
  *((_QWORD *)this + 23) = &TabViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 24) = &TabViewManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 25) = &TabViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 31) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 32);
  InitializeSRWLock((PSRWLOCK)this + 33);
  *((_QWORD *)this + 34) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 35);
  InitializeSRWLock((PSRWLOCK)this + 36);
  *((_QWORD *)this + 37) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 38);
  InitializeSRWLock((PSRWLOCK)this + 39);
  *((_QWORD *)this + 40) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 41);
  InitializeSRWLock((PSRWLOCK)this + 42);
  *((_QWORD *)this + 43) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 44);
  InitializeSRWLock((PSRWLOCK)this + 45);
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_QWORD *)this + 81) = 0LL;
  *((_DWORD *)this + 164) = 0;
  *((_QWORD *)this + 96) = 0LL;
  *((_DWORD *)this + 194) = 0;
  *((_QWORD *)this + 111) = 0LL;
  *((_DWORD *)this + 224) = 0;
  *((_QWORD *)this + 126) = 0LL;
  *((_DWORD *)this + 254) = 0;
  *((_QWORD *)this + 141) = 0LL;
  *((_DWORD *)this + 284) = 0;
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_QWORD *)this + 145) = 0LL;
  *((_QWORD *)this + 146) = 0LL;
  memset_0((char *)this + 1176, 0, 0x50uLL);
  *((_QWORD *)this + 157) = 0LL;
  *((_QWORD *)this + 158) = 0LL;
  *((_QWORD *)this + 157) = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(v2);
  *((_QWORD *)this + 159) = 0LL;
  *((_QWORD *)this + 160) = 0LL;
  *((_QWORD *)this + 159) = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(v3);
  *((_QWORD *)this + 161) = 0LL;
  *((_QWORD *)this + 162) = 0LL;
  *((_QWORD *)this + 161) = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(v4);
  *((_QWORD *)this + 163) = 0LL;
  *((_QWORD *)this + 164) = 0LL;
  *((_QWORD *)this + 163) = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(v5);
  *((_QWORD *)this + 165) = 0LL;
  *((_QWORD *)this + 166) = 0LL;
  *((_QWORD *)this + 165) = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(v6);
  *((_QWORD *)this + 167) = 0LL;
  *((_QWORD *)this + 168) = 0LL;
  *((_QWORD *)this + 167) = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(v7);
  *((_QWORD *)this + 169) = 0LL;
  *((_QWORD *)this + 170) = 0LL;
  *((_QWORD *)this + 169) = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(v8);
  *((_QWORD *)this + 171) = 0LL;
  *((_QWORD *)this + 172) = 0LL;
  *((_QWORD *)this + 173) = 0LL;
  *((_QWORD *)this + 174) = 0LL;
  *((_QWORD *)this + 175) = 0LL;
  *((_QWORD *)this + 176) = 0LL;
  *((_QWORD *)this + 177) = 0LL;
  *((_QWORD *)this + 178) = 0LL;
  *((_DWORD *)this + 358) = SHTaskPoolGetUniqueContext(v9);
  *((_BYTE *)this + 1440) = 0;
  *((_QWORD *)this + 181) = 0LL;
  *((_DWORD *)this + 364) = 0;
  *((_BYTE *)this + 1464) = 1;
  *((_QWORD *)this + 184) = 0LL;
  return this;
}
