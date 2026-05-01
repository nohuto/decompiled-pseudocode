/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___::_)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs____Microsoft::WRL::FtmBase___lambda_ed34b563ec40e9065e441218289ca2a0___1_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs____Microsoft::WRL::FtmBase___lambda_ed34b563ec40e9065e441218289ca2a0___1_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___ @ 0x180355DE4
 * Callers:
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1803550B8 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@Composable.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B4E8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___::___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs____Microsoft::WRL::FtmBase___lambda_ed34b563ec40e9065e441218289ca2a0___1_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs____Microsoft::WRL::FtmBase___lambda_ed34b563ec40e9065e441218289ca2a0___1_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rsi

  v3 = (_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>'};
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_QWORD *)(a1 + 64) != a2 )
  {
    *(_QWORD *)(a1 + 64) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)a1 = off_1804743D0;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
