/*
 * XREFs of ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x1801E1A30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UITabControllerThumbnailEventArgsInternal@@AEAPEAUITabControllerThumbnailEventArgs@Tabs@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UITabControllerThumbnailEventArgsInternal@@Uerr_exception_policy@wil@@@0@AEAPEAUITabControllerThumbnailEventArgs@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18008FC00 (--$com_query@UITabControllerThumbnailEventArgsInternal@@AEAPEAUITabControllerThumbnailEventArgs@.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$TabViewManager_OnThumbnailRequested@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@2345@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@2345@@Z @ 0x1801D13CC (--$TabViewManager_OnThumbnailRequested@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@.c)
 *     ?CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA?AU?$pair@V?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@std@@PEAUICompositor@Composition@UI@Windows@@PEAUIShellTab@Tabs@ComposableShell@Internal@7@PEAUHWND__@@AEBUSize@Foundation@7@@Z @ 0x1801D9414 (-CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA-AU-$pair@V-$com_ptr_t@UIVisual@Composition@.c)
 *     ?CreateStaticThumbnailVisual@TabViewManager@@AEAA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@7@AEBUSize@Foundation@7@@Z @ 0x1801D9730 (-CreateStaticThumbnailVisual@TabViewManager@@AEAA-AV-$com_ptr_t@UIVisual@Composition@UI@Windows@.c)
 *     ?GetNumTabsInGroupForView@TabViewManager@@AEAAIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1801DCCA0 (-GetNumTabsInGroupForView@TabViewManager@@AEAAIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EE088 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1801EFC44 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TabViewManager::OnThumbnailRequested(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *a3)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  bool v11; // bl
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  const char *v19; // r9
  __int64 result; // rax
  _BYTE v21[8]; // [rsp+30h] [rbp-B8h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v22; // [rsp+38h] [rbp-B0h] BYREF
  struct IApplicationView *v23; // [rsp+40h] [rbp-A8h] BYREF
  struct IUnknown *v24; // [rsp+48h] [rbp-A0h] BYREF
  struct Windows::UI::Composition::ICompositor *v25; // [rsp+50h] [rbp-98h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v26; // [rsp+58h] [rbp-90h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v27; // [rsp+60h] [rbp-88h] BYREF
  __int64 v28; // [rsp+68h] [rbp-80h]
  unsigned int v29; // [rsp+70h] [rbp-78h] BYREF
  __int64 v30; // [rsp+78h] [rbp-70h]
  LPVOID v31[4]; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v32[24]; // [rsp+A0h] [rbp-48h] BYREF
  int v33; // [rsp+B8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *v35; // [rsp+100h] [rbp+18h] BYREF
  char v36; // [rsp+108h] [rbp+20h] BYREF

  v35 = a3;
  v30 = -2LL;
  TabViewManagerTraceLogging::WatchCurrentThread(v31, "TabViewManager_OnThumbnailRequested");
  v22 = 0LL;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v22);
  try
  {
    v5 = (*(__int64 (**)(void))(*(_QWORD *)a3 + 48LL))();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3340LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v5);
    v26 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **))(*(_QWORD *)v22 + 168LL))(
           v22,
           &v26);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3343LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v6);
    if ( v26 )
    {
      v27 = v22;
      v23 = v26;
      TabViewManagerTraceLogging::TabViewManager_OnThumbnailRequested<Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,Windows::Internal::ComposableShell::Tabs::IShellTab *>(
        &v23,
        &v27);
      v25 = 0LL;
      v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *, struct Windows::UI::Composition::ICompositor **))(*(_QWORD *)a3 + 56LL))(
             a3,
             &v25);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3349LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v7);
      v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *, unsigned int *))(*(_QWORD *)a3 + 72LL))(
             a3,
             &v29);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3352LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v8);
      v21[0] = 0;
      v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, _BYTE *))(*(_QWORD *)v22 + 176LL))(
             v22,
             v21);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3355LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v9);
      v36 = 0;
      v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, char *))(*(_QWORD *)v22 + 336LL))(
              v22,
              &v36);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3358LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v10);
      v11 = 0;
      if ( v36 )
        goto LABEL_31;
      TabViewManager::TryGetViewForTab(this, &v23, v22);
      if ( v23 )
        v11 = (unsigned int)TabViewManager::GetNumTabsInGroupForView(this, v26, v23) == 1;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v23);
      if ( v36 || v21[0] || v11 )
      {
LABEL_31:
        v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *, struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs **))(*(_QWORD *)a3 + 64LL))(
                a3,
                &v35);
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            3377LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v16);
        TabViewManager::CreateDwmSharedThumbnailVisual(
          (__int64)this,
          &v27,
          (__int64)v25,
          (__int64)v22,
          (int)v35,
          (float *)&v29);
        v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(*(_QWORD *)a3 + 104LL))(
                a3,
                v27);
        if ( v17 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            3380LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v17);
        v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *, __int64))(*(_QWORD *)a3 + 88LL))(
                a3,
                v28);
        if ( v18 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            3381LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v18);
        v28 = 0LL;
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v27);
      }
      else
      {
        wil::com_query<ITabControllerThumbnailEventArgsInternal,Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs * &>(
          (__int64)&v27,
          &v35);
        v24 = 0LL;
        v12 = v27;
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v24);
        v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, struct IUnknown **))(*(_QWORD *)v12 + 24LL))(
                v12,
                &v24);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            3389LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v13);
        v23 = 0LL;
        v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, struct IApplicationView **))(*(_QWORD *)v22 + 152LL))(
                v22,
                &v23);
        if ( v14 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            3393LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v14);
        if ( v23 )
        {
          TabViewManager::CreateStaticThumbnailVisual((TabViewManager *)this, &v35, v25, v24, (__int64)v23, &v29);
          v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *, struct Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *))(*(_QWORD *)a3 + 104LL))(
                  a3,
                  v35);
          if ( v15 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              3398LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v15);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v35);
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v23);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v24);
        if ( v27 )
          (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(*(_QWORD *)v27 + 16LL))(v27);
      }
      if ( v25 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositor *))(*(_QWORD *)v25 + 16LL))(v25);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v26);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v22);
    if ( v33 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v32);
    wil::details::StoredCallContextInfo::~StoredCallContextInfo(v31);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v35) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xD51,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                     v19);
    return (unsigned int)v35;
  }
  return result;
}
