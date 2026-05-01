/*
 * XREFs of ?OnTabTransferStarting@TabViewManager@@AEAAJPEAUIInspectable@@0@Z @ 0x1801E1080
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180026DC4 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$?0VTabViewManager@@@?$ComPtr@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAA@PEAVTabViewManager@@@Z @ 0x1801CDEAC (--$-0VTabViewManager@@@-$ComPtr@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0c9591b3b7af47026ef620a0b989ad73___ @ 0x1801D038C (Windows--Internal--ComTaskPool--QueueTask__lambda_0c9591b3b7af47026ef620a0b989ad73___.c)
 *     ??$_Try_emplace@AEBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@9@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801D3530 (--$_Try_emplace@AEBV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801D3AFC (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5DE8 (--1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?RunCallbackWithTabTransferEventBrokerAsync@TabViewManager@@AEAAJV?$function@$$A6AJPEAUITabTransferEventBroker@Experience@Shell@Internal@Windows@@@Z@std@@@Z @ 0x1801E48B0 (-RunCallbackWithTabTransferEventBrokerAsync@TabViewManager@@AEAAJV-$function@$$A6AJPEAUITabTrans.c)
 *     ?StartActivity@TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x1801E65B0 (-StartActivity@TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E67D0 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EE088 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x1801EEEC4 (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
 *     ?count@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$00@std@@@std@@QEBA_KAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801F1114 (-count@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 */

__int64 __fastcall TabViewManager::OnTabTransferStarting(
        TabViewManager *this,
        struct IInspectable *a2,
        struct IInspectable *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  struct IApplicationView *v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  int CoreWindowForView; // r14d
  unsigned __int64 v18; // rsi
  int v19; // eax
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v24; // [rsp+28h] [rbp-E0h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v25; // [rsp+30h] [rbp-D8h] BYREF
  ApplicationViewHelpers *v26; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v27[4]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v28[3]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v29[24]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v30; // [rsp+90h] [rbp-78h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  _BYTE *v32; // [rsp+B0h] [rbp-58h]
  _QWORD v33[40]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v27[3] = -2LL;
  v4 = ((__int64 (__fastcall *)(struct IInspectable *, _QWORD *))a3->lpVtbl[3].Release)(a3, &v28[1]);
  v5 = v4;
  if ( v4 >= 0 )
  {
    wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v33,
      (__int64)"TabViewManager_TabTransferStarted");
    v33[0] = &TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::`vftable';
    *(_OWORD *)&v27[1] = *(_OWORD *)&v28[1];
    TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::StartActivity(
      (TabViewManagerTraceLogging::TabViewManager_TabTransferStarted *)v33,
      (struct _GUID *)&v27[1]);
    *((_BYTE *)this + 1440) = 0;
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 181);
    *((_DWORD *)this + 364) = 0;
    v25 = 0LL;
    *(_OWORD *)&v27[1] = *(_OWORD *)&v28[1];
    v6 = *((_QWORD *)this + 146);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v25);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)v6 + 96LL))(
           v6,
           &v27[1],
           &v25);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = (unsigned int)v7;
      v9 = 1393LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)v8);
LABEL_36:
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v25);
      TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::~TabViewManager_TabTransferStarted((TabViewManagerTraceLogging::TabViewManager_TabTransferStarted *)v33);
      return v5;
    }
    if ( !v25 )
    {
      v5 = -2147023728;
      v8 = 2147943568LL;
      v9 = 1394LL;
      goto LABEL_7;
    }
    v24 = 0LL;
    v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **))(*(_QWORD *)v25 + 168LL))(
            v25,
            &v24);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = (unsigned int)v10;
      v12 = 1397LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)v11);
LABEL_11:
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v24);
      goto LABEL_36;
    }
    if ( !v24 )
    {
      v5 = -2147023728;
      v11 = 2147943568LL;
      v12 = 1398LL;
      goto LABEL_10;
    }
    v27[0] = 0LL;
    v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *, __int64 *))(*(_QWORD *)v24 + 56LL))(
            v24,
            v27);
    v5 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x579,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v13);
LABEL_16:
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v27);
      goto LABEL_11;
    }
    TabViewManager::TryGetViewForTab(this, &v26, v25);
    if ( v26 )
    {
      CoreWindowForView = ApplicationViewHelpers::GetCoreWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v26,
                            v14);
      TabViewManager::UpdateFallbackTabForGroup(this, v24, v25);
      AcquireSRWLockExclusive((PSRWLOCK)this + 184);
      v18 = std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,1>>::count(
              (char *)this + 1256,
              &v26);
      if ( v18 <= 1 )
        *((_DWORD *)this + 364) |= 1u;
      if ( this != (TabViewManager *)-1472LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 184);
      if ( v18 > 1 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)this + 184);
        std::map<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Try_emplace<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const &,>(
          (__int64 *)this + 167,
          (__int64)&v27[1],
          (__int64 *)&v25);
        *(_DWORD *)(v27[1] + 40) = CoreWindowForView;
        if ( this != (TabViewManager *)-1472LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 184);
      }
      else
      {
        *(_QWORD *)v29 = off_1803DDE90;
        *(_OWORD *)&v29[8] = *(_OWORD *)&v28[1];
        v32 = v29;
        v19 = TabViewManager::RunCallbackWithTabTransferEventBrokerAsync(this, v29);
        v5 = v19;
        if ( v19 < 0 )
        {
          v16 = (unsigned int)v19;
          v15 = 1437LL;
          goto LABEL_20;
        }
      }
      if ( v18 <= 1 )
        goto LABEL_35;
      v20 = Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter>::ComPtr<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter>(
              &v27[1],
              (__int64)this);
      *(_OWORD *)v29 = (unsigned __int64)this;
      if ( &v29[8] != (_BYTE *)v20 )
      {
        *(_QWORD *)&v29[8] = *v20;
        *v20 = 0LL;
      }
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v29[16],
        (__int64)v25);
      v30 = *(_OWORD *)&v28[1];
      v31 = CoreWindowForView;
      v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_0c9591b3b7af47026ef620a0b989ad73___(
             v22,
             v21,
             *((_DWORD *)this + 358),
             (__int64)v29);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v29[16]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29[8]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27[1]);
      if ( (v5 & 0x80000000) == 0 )
      {
LABEL_35:
        wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v33);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v26);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v27);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v24);
        v5 = 0;
        goto LABEL_36;
      }
      v15 = 1476LL;
    }
    else
    {
      v5 = -2147023728;
      v15 = 1405LL;
    }
    v16 = v5;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)v16);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v26);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x566,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
