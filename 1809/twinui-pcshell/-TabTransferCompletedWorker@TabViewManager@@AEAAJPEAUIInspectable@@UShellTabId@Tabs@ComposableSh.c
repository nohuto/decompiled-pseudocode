/*
 * XREFs of ?TabTransferCompletedWorker@TabViewManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EB9B8
 * Callers:
 *     ?DragEnterForApplicationManagedTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x1801DA760 (-DragEnterForApplicationManagedTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@.c)
 *     ?OnTabTransferCompleted@TabViewManager@@AEAAJPEAUIInspectable@@0@Z @ 0x1801E0F80 (-OnTabTransferCompleted@TabViewManager@@AEAAJPEAUIInspectable@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x18008E57C (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$?0VTabViewManager@@@?$ComPtr@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAA@PEAVTabViewManager@@@Z @ 0x1801CDEAC (--$-0VTabViewManager@@@-$ComPtr@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_75bf3f442c37a1ba04403cb499a5bf05___ @ 0x1801D05E0 (Windows--Internal--ComTaskPool--QueueTask__lambda_75bf3f442c37a1ba04403cb499a5bf05___.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801D3AFC (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1801D5DBC (--1TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?AddTabAndViewToMaps@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1801D8128 (-AddTabAndViewToMaps@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@P.c)
 *     ?GetViewForTabLockHeld@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DDAE0 (-GetViewForTabLockHeld@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_poli.c)
 *     ?RemoveTabAndViewFromMaps@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1801E3F2C (-RemoveTabAndViewFromMaps@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windo.c)
 *     ?StartActivity@TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x1801E64C8 (-StartActivity@TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E67D0 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?TabViewManager_NoViewForTabTransferCompleted@TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAAXXZ @ 0x1801EC748 (-TabViewManager_NoViewForTabTransferCompleted@TabViewManager_TabTransferCompleted@TabViewManager.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@9@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x1801F1618 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna_ea_1801F1618.c)
 */

__int64 __fastcall TabViewManager::TabTransferCompletedWorker(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v5; // rbx
  int v6; // eax
  int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // r14d
  __int64 **v11; // r10
  __int64 **ViewForTabLockHeld; // rax
  __int64 *v13; // rbx
  struct IApplicationView *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v19; // [rsp+28h] [rbp-E0h] BYREF
  __int64 *v20[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v23[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v22[2] = -2LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v23,
    (__int64)"TabViewManager_TabTransferCompleted");
  v23[0] = &TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted::`vftable';
  *(_OWORD *)&v20[1] = *a3;
  TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted::StartActivity(
    (TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted *)v23,
    (struct _GUID *)&v20[1]);
  v19 = 0LL;
  *(_OWORD *)&v20[1] = *a3;
  v5 = *(_QWORD *)(a1 + 1168);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v19);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 **, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)v5 + 96LL))(
         v5,
         &v20[1],
         &v19);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 1507LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)v8);
    goto LABEL_29;
  }
  if ( !v19 )
  {
    v7 = -2147023728;
    v8 = 2147943568LL;
    v9 = 1509LL;
    goto LABEL_5;
  }
  v10 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 1472));
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    (__int64 **)(a1 + 1336),
    v20,
    (unsigned __int64 *)&v19);
  if ( v20[0] != *v11 )
  {
    v10 = *((_DWORD *)v20[0] + 10);
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,Windows::Internal::ApplicationModel::WindowManagement::WindowId,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,Windows::Internal::ApplicationModel::WindowManagement::WindowId>>,0>>::erase(
      v11,
      &v20[1]);
  }
  ViewForTabLockHeld = TabViewManager::GetViewForTabLockHeld(a1, &v20[1], (unsigned __int64)v19);
  v13 = *ViewForTabLockHeld;
  *ViewForTabLockHeld = 0LL;
  v20[0] = v13;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20[1]);
  if ( a1 != -1472 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 1472));
  if ( v13 )
  {
LABEL_13:
    if ( !*(_BYTE *)(a1 + 1440) )
      goto LABEL_19;
    goto LABEL_14;
  }
  if ( !*(_BYTE *)(a1 + 1440) )
  {
    TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted::TabViewManager_NoViewForTabTransferCompleted((TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted *)v23);
    goto LABEL_13;
  }
LABEL_14:
  v14 = *(struct IApplicationView **)(a1 + 1448);
  if ( v14 && v14 != (struct IApplicationView *)v13 )
  {
    if ( v13 )
    {
      TabViewManager::RemoveTabAndViewFromMaps((TabViewManager *)a1, v19, (struct IApplicationView *)v13);
      v14 = *(struct IApplicationView **)(a1 + 1448);
    }
    TabViewManager::AddTabAndViewToMaps((TabViewManager *)a1, v19, v14);
  }
LABEL_19:
  if ( !v10 )
  {
LABEL_28:
    *(_BYTE *)(a1 + 1440) = 0;
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)(a1 + 1448));
    *(_DWORD *)(a1 + 1456) = 0;
    wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v23);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v20);
    v7 = 0;
    goto LABEL_29;
  }
  AcquireSRWLockShared((PSRWLOCK)(a1 + 1472));
  v15 = Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter>::ComPtr<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter>(
          (__int64 *)&v20[1],
          a1);
  v21 = 0LL;
  if ( &v21 != v15 )
  {
    v21 = *v15;
    *v15 = 0LL;
  }
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    v22,
    (__int64)v19);
  v22[1] = v10;
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_75bf3f442c37a1ba04403cb499a5bf05___(
         v17,
         v16,
         *(_DWORD *)(a1 + 1432),
         &v21);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20[1]);
  if ( v7 >= 0 )
  {
    if ( a1 != -1472 )
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 1472));
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x61B,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v7);
  if ( a1 != -1472 )
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 1472));
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v20);
LABEL_29:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
  TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted::~TabViewManager_TabTransferCompleted((TabViewManagerTraceLogging::TabViewManager_TabTransferCompleted *)v23);
  return (unsigned int)v7;
}
