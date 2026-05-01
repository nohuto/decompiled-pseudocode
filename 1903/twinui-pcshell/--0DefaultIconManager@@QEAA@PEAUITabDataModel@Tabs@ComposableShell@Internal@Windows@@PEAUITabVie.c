/*
 * XREFs of ??0DefaultIconManager@@QEAA@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@PEAUIImmersiveWindowMessageService@@@Z @ 0x18025055C
 * Callers:
 *     ??$Make@VDefaultIconManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAPEAUIImmersiveWindowMessageService@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDefaultIconManager@@@12@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAPEAUIImmersiveWindowMessageService@@@Z @ 0x18024E3E4 (--$Make@VDefaultIconManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAU.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180022178 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180121284 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ?attach@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIWeakReference@@@Z @ 0x180208920 (-attach@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIWeakReference@@.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V12@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V12@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V12@@std@@PEAX@2@XZ @ 0x180214EC4 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Ue_ea_180214EC4.c)
 *     ??$GetActivationFactory@UIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180225060 (--$GetActivationFactory@UIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@@@wil@@YA-A.c)
 *     ??$com_weak_query_failfast@AEAPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180246CE8 (--$com_weak_query_failfast@AEAPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_961dfd5ca30ced7f152f1faecc2cc684___ @ 0x18024E75C (Windows--Internal--ComTaskPool--QueueTask__lambda_961dfd5ca30ced7f152f1faecc2cc684___.c)
 *     ?InitializeHighContrastListener@DefaultIconManager@@AEAAJXZ @ 0x180252B48 (-InitializeHighContrastListener@DefaultIconManager@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHICON__@@@Z @ 0x180254CF4 (-reset@-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIcon@@YAH0@ZU-$int.c)
 */

// Hidden C++ exception states: #wind=18
DefaultIconManager *__fastcall DefaultIconManager::DefaultIconManager(
        DefaultIconManager *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *a2,
        struct ITabViewManager *a3,
        struct IImmersiveWindowMessageService *a4)
{
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  HRESULT Instance; // eax
  const WCHAR *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  HICON IconW; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // ebx
  int v18; // eax
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+38h] [rbp-40h] BYREF
  __int64 v22[2]; // [rsp+40h] [rbp-38h] BYREF
  char *v23; // [rsp+50h] [rbp-28h] BYREF
  __int64 v24[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+D0h] [rbp+58h] BYREF
  struct IImmersiveWindowMessageService *v28; // [rsp+D8h] [rbp+60h]

  v28 = a4;
  v27 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
  v22[1] = -2LL;
  Microsoft::WRL::FtmBase::FtmBase((DefaultIconManager *)((char *)this + 16));
  *((_DWORD *)this + 13) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDefaultIconManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDefaultIconManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 2) = &DefaultIconManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &DefaultIconManager::`vftable';
  *((_QWORD *)this + 1) = &DefaultIconManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 2) = &DefaultIconManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>,0>>::_Buyheadnode();
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>,0>>::_Buyheadnode();
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_BYTE *)this + 152) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = SHTaskPoolGetUniqueContext(v5);
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 57) = 0LL;
  *((_DWORD *)this + 116) = 0;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  v23 = (char *)this + 504;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 63) = std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>,0>>::_Buyheadnode();
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
    (__int64 *)this + 17,
    (__int64)a2);
  v6 = wil::com_weak_query_failfast<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker * &>(&v20, &v27);
  v7 = *v6;
  *v6 = 0LL;
  wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::attach((__int64 *)this + 18, v7);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
    (__int64 *)this + 26,
    (__int64)v28);
  v8 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  Instance = CoCreateInstance(
               &CLSID_WICImagingFactory2,
               0LL,
               1u,
               &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
               (LPVOID *)this + 16);
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      120LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)Instance);
    __debugbreak();
  }
  v10 = wil::GetActivationFactory<Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>((const WCHAR *)&v21);
  v11 = *(_QWORD *)v10;
  *(_QWORD *)v10 = 0LL;
  v12 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = v11;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
  IconW = LoadIconW(0LL, (LPCWSTR)0x7F00);
  if ( (char **)((char *)this + 168) != &v23 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::reset(
      (char *)this + 168,
      IconW);
    IconW = 0LL;
  }
  if ( IconW )
    DestroyIcon(IconW);
  v14 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
          v22,
          (__int64)this);
  v15 = *v14;
  *v14 = 0LL;
  v24[0] = v15;
  v24[1] = (__int64)this;
  v17 = Windows::Internal::ComTaskPool::QueueTask__lambda_961dfd5ca30ced7f152f1faecc2cc684___(
          v15,
          v16,
          *((_DWORD *)this + 44),
          v24);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v24);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v22);
  if ( v17 >= 0 )
    v17 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18D,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v17);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      125LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  v18 = DefaultIconManager::InitializeHighContrastListener(this);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      128LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v18);
  return this;
}
