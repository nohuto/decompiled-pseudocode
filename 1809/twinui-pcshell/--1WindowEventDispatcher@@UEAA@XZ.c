/*
 * XREFs of ??1WindowEventDispatcher@@UEAA@XZ @ 0x180225098
 * Callers:
 *     ??_EWindowEventDispatcher@@UEAAPEAXI@Z @ 0x180225774 (--_EWindowEventDispatcher@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019F60 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18022D3F0 (-clear@-$list@V-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@.c)
 */

void __fastcall WindowEventDispatcher::~WindowEventDispatcher(WindowEventDispatcher *this)
{
  void **v2; // rbx
  char *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  std::_Ref_count_base *v6; // rcx
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  __int64 *v9; // rbx
  __int64 *v10; // rsi
  std::_Ref_count_base *v11; // rcx
  __int64 v12; // rcx
  volatile int *v13; // rdx

  v2 = (void **)((char *)this + 512);
  std::list<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::clear((char *)this + 512);
  std::_Deallocate<16,0>(*v2, (const struct std::nothrow_t *)0x18);
  std::list<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::clear((char *)this + 496);
  std::_Deallocate<16,0>(*((void **)this + 62), (const struct std::nothrow_t *)0x18);
  v3 = (char *)*((_QWORD *)this + 59);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)this + 56);
  v4 = (_QWORD *)*((_QWORD *)this + 52);
  if ( v4 )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 53);
    if ( v4 != v5 )
    {
      do
      {
        v6 = (std::_Ref_count_base *)v4[1];
        if ( v6 )
          std::_Ref_count_base::_Decref(v6);
        v4 += 2;
      }
      while ( v4 != v5 );
      v4 = (_QWORD *)*((_QWORD *)this + 52);
    }
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 54) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 52) = 0LL;
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
  }
  v7 = (__int64 *)*((_QWORD *)this + 48);
  if ( v7 )
  {
    v8 = (__int64 *)*((_QWORD *)this + 49);
    if ( v7 != v8 )
    {
      do
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(v7++);
      while ( v7 != v8 );
      v7 = (__int64 *)*((_QWORD *)this + 48);
    }
    std::_Deallocate<16,0>(
      v7,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 50) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
  }
  v9 = (__int64 *)*((_QWORD *)this + 45);
  if ( v9 )
  {
    v10 = (__int64 *)*((_QWORD *)this + 46);
    if ( v9 != v10 )
    {
      do
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(v9++);
      while ( v9 != v10 );
      v9 = (__int64 *)*((_QWORD *)this + 45);
    }
    std::_Deallocate<16,0>(
      v9,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 47) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 45) = 0LL;
    *((_QWORD *)this + 46) = 0LL;
    *((_QWORD *)this + 47) = 0LL;
  }
  v11 = (std::_Ref_count_base *)*((_QWORD *)this + 44);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 42);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 41);
  v12 = *((_QWORD *)this + 40);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 39);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 38);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 37);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 36);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>(
    (__int64 *)this,
    v13);
}
