/*
 * XREFs of ??1?$AgileEventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x180196E6C
 * Callers:
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$1 @ 0x1801969CE (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$1.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$2 @ 0x1801969DE (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$2.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$3 @ 0x1801969EE (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$3.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$4 @ 0x180196A01 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$4.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$5 @ 0x180196A14 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$5.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$6 @ 0x180196A27 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$6.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$7 @ 0x180196A3A (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$7.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$8 @ 0x180196A4D (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$8.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$1_0 @ 0x180196CF2 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$1_0.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$2_0 @ 0x180196D02 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$2_0.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$3_0 @ 0x180196D12 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$3_0.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$4_0 @ 0x180196D25 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$4_0.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$5_0 @ 0x180196D38 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$5_0.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$6_0 @ 0x180196D4B (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$6_0.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$7_0 @ 0x180196D5E (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$7_0.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$8_0 @ 0x180196D71 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$8_0.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$1 @ 0x180229B4E (_TabViewManager--TabViewManager_--_1_--dtor$1.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$2 @ 0x180229B61 (_TabViewManager--TabViewManager_--_1_--dtor$2.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$3 @ 0x180229B74 (_TabViewManager--TabViewManager_--_1_--dtor$3.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$4 @ 0x180229B87 (_TabViewManager--TabViewManager_--_1_--dtor$4.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$5 @ 0x180229B9A (_TabViewManager--TabViewManager_--_1_--dtor$5.c)
 *     _ViewGroup::ViewGroup_::_1_::dtor$6 @ 0x18025E730 (_ViewGroup--ViewGroup_--_1_--dtor$6.c)
 *     _VirtualDesktopDataSource::VirtualDesktopDataSource_::_1_::dtor$1 @ 0x180336B21 (_VirtualDesktopDataSource--VirtualDesktopDataSource_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(
        volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
