/*
 * XREFs of ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x1802B4B20
 * Callers:
 *     ??_GTouchKeyboardExperienceManager@@EEAAPEAXI@Z @ 0x1802B4FF8 (--_GTouchKeyboardExperienceManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004059C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800E5F1C (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800E75AC (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1800E7DD0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800E7DF8 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1802B5034 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802BCC84 (-UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::~TouchKeyboardExperienceManager(TouchKeyboardExperienceManager *this)
{
  __int64 *v2; // rbp
  Concurrency::details::_RefCounter *v3; // rcx
  Concurrency::details::_RefCounter *v4; // rcx
  Concurrency::details::_RefCounter *v5; // rcx
  Concurrency::details::_RefCounter *v6; // rcx
  Concurrency::details::_RefCounter *v7; // rcx
  Concurrency::details::_RefCounter *v8; // rcx
  Concurrency::details::_RefCounter *v9; // rcx
  Concurrency::details::_RefCounter *v10; // rcx
  Concurrency::details::_RefCounter *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  _QWORD *v16; // rsi
  std::_Ref_count_base *v17; // rcx
  volatile int *v18; // rdx
  Concurrency::details::_RefCounter *v19; // rcx
  Concurrency::details::_RefCounter *v20; // rcx
  __int64 v21; // rsi
  void *v22; // rdx
  __int64 v23; // rsi
  void *v24; // rdx
  wil::details::event_watcher_state *v25; // rcx
  void *v26; // rcx
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+8h] BYREF
  PSRWLOCK v28; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 6) = &TouchKeyboardExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 15) = &TouchKeyboardExperienceManager::`vftable'{for `IApplicationFrameEventHandler'};
  *((_QWORD *)this + 16) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 17) = &TouchKeyboardExperienceManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 18) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 19) = &TouchKeyboardExperienceManager::`vftable'{for `ITabletModeChangeListener'};
  *((_QWORD *)this + 20) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 21) = &TouchKeyboardExperienceManager::`vftable'{for `ILightDismissNotification'};
  *((_QWORD *)this + 22) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 23) = &TouchKeyboardExperienceManager::`vftable'{for `Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher'};
  *((_QWORD *)this + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = (__int64 *)((char *)this + 384);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 48);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 49);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 50);
  TouchKeyboardExperienceManager::UnsubscribeTouchKeyboardWnfNotifications(this);
  v3 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 99);
  if ( v3 )
    Concurrency::details::_RefCounter::_Destroy(v3);
  v4 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 98);
  if ( v4 )
    Concurrency::details::_RefCounter::_Destroy(v4);
  v5 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 97);
  if ( v5 )
    Concurrency::details::_RefCounter::_Destroy(v5);
  v6 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 96);
  if ( v6 )
    Concurrency::details::_RefCounter::_Destroy(v6);
  v7 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 95);
  if ( v7 )
    Concurrency::details::_RefCounter::_Destroy(v7);
  v8 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 94);
  if ( v8 )
    Concurrency::details::_RefCounter::_Destroy(v8);
  v9 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 93);
  if ( v9 )
    Concurrency::details::_RefCounter::_Destroy(v9);
  v10 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 92);
  if ( v10 )
    Concurrency::details::_RefCounter::_Destroy(v10);
  v11 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 91);
  if ( v11 )
    Concurrency::details::_RefCounter::_Destroy(v11);
  v12 = *((_QWORD *)this + 88);
  if ( v12 )
  {
    *((_QWORD *)this + 88) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 87);
  SmartCookie::Unregister((TouchKeyboardExperienceManager *)((char *)this + 560));
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 560,
    v13);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 560,
    v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 69);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 64);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 60);
  v15 = (_QWORD *)*((_QWORD *)this + 57);
  if ( v15 )
  {
    v16 = (_QWORD *)*((_QWORD *)this + 58);
    if ( v15 != v16 )
    {
      do
      {
        v17 = (std::_Ref_count_base *)v15[1];
        if ( v17 )
          std::_Ref_count_base::_Decref(v17);
        v15 += 2;
      }
      while ( v15 != v16 );
      v15 = (_QWORD *)*((_QWORD *)this + 57);
    }
    std::_Deallocate<16,0>(
      v15,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 59) - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 408));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 50);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 49);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 44);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
  v19 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 40);
  if ( v19 )
    Concurrency::details::_RefCounter::_Destroy(v19);
  v20 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 39);
  if ( v20 )
    Concurrency::details::_RefCounter::_Destroy(v20);
  v21 = *((_QWORD *)this + 38);
  if ( v21 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v21 + 144));
    SRWLock = (PSRWLOCK)(v21 + 144);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 140), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'(
        (wil::details::registry_watcher_state *)v21,
        v22);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  v23 = *((_QWORD *)this + 37);
  if ( v23 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v23 + 144));
    v28 = (PSRWLOCK)(v23 + 144);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 140), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &v28,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'(
        (wil::details::registry_watcher_state *)v23,
        v24);
    }
    if ( v28 )
      ReleaseSRWLockExclusive(v28);
  }
  v25 = (wil::details::event_watcher_state *)*((_QWORD *)this + 36);
  if ( v25 )
    wil::details::event_watcher_state::`scalar deleting destructor'(v25, (unsigned int)v18);
  v26 = (void *)*((_QWORD *)this + 30);
  if ( v26 )
    CoTaskMemFree(v26);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>(
    (__int64 *)this,
    v18);
}
