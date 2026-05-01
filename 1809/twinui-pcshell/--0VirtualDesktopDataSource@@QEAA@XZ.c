/*
 * XREFs of ??0VirtualDesktopDataSource@@QEAA@XZ @ 0x1802D5A1C
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopDataSource@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopDataSource@@@Z @ 0x1802D4F1C (--$MakeAndInitialize@VVirtualDesktopDataSource@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualD.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800364B4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801965DC (-_Init@-$_Hash@V-$_Umap_traits@I_NV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$all.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@2@PEAU32@0@Z @ 0x18021DA64 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$ComPtr@UIVirtualDesktop@@@WRL@Micros.c)
 */

// Hidden C++ exception states: #wind=8
VirtualDesktopDataSource *__fastcall VirtualDesktopDataSource::VirtualDesktopDataSource(VirtualDesktopDataSource *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 4) = &VirtualDesktopNotificationBase<IVirtualDesktopNotification>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((VirtualDesktopDataSource *)((char *)this + 40));
  *((_QWORD *)this + 10) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::`vftable'{for `IDesktopVirtualDesktopDataSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::`vftable'{for `VirtualDesktopNotificationBase<IVirtualDesktopNotification>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &VirtualDesktopDataSource::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource'};
  *((_QWORD *)this + 1) = &VirtualDesktopDataSource::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &VirtualDesktopDataSource::`vftable'{for `IDesktopVirtualDesktopDataSource'};
  *((_QWORD *)this + 3) = &VirtualDesktopDataSource::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 4) = &VirtualDesktopDataSource::`vftable'{for `VirtualDesktopNotificationBase<IVirtualDesktopNotification>'};
  *((_QWORD *)this + 5) = &VirtualDesktopDataSource::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 11) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 12);
  InitializeSRWLock((PSRWLOCK)this + 13);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 33) = std::_List_alloc<std::_List_base_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>::_Buynode0(
                             v2,
                             0LL,
                             0LL);
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 64) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::_Init(
    (_QWORD *)this + 32,
    8LL);
  InitializeSRWLock((PSRWLOCK)this + 40);
  return this;
}
