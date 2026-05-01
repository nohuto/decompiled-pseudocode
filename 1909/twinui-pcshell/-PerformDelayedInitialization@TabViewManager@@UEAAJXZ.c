/*
 * XREFs of ?PerformDelayedInitialization@TabViewManager@@UEAAJXZ @ 0x180255240
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$com_weak_query@PEAVTabViewManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVTabViewManager@@@Z @ 0x180247FA8 (--$com_weak_query@PEAVTabViewManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_exception_pol.c)
 *     ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180248238 (--$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?CreateHotKeyHandler@TabViewManager@@AEAAJXZ @ 0x18024CC74 (-CreateHotKeyHandler@TabViewManager@@AEAAJXZ.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802618E8 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ??$MakeAndInitializeOrThrow@VTabTransferManager@@V?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@5678@AEAPEAUITabTransferEventBroker@5678@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@wil@@YA?AV?$ComPtr@VTabTransferManager@@@WRL@Microsoft@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@6789@AEAPEAUITabTransferEventBroker@6789@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@Z @ 0x180274AE0 (--$MakeAndInitializeOrThrow@VTabTransferManager@@V-$com_ptr_t@UIWeakReference@@Uerr_exception_po.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabViewManager::PerformDelayedInitialization(TabViewManager *this)
{
  int HotKeyHandler; // eax
  __int64 *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // eax
  const char *v13; // r9
  __int64 result; // rax
  __int64 v15; // [rsp+40h] [rbp-A8h] BYREF
  int v16[2]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-98h] BYREF
  __int64 v18; // [rsp+58h] [rbp-90h] BYREF
  __int64 v19[4]; // [rsp+60h] [rbp-88h] BYREF
  LPVOID v20[4]; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v21[24]; // [rsp+A0h] [rbp-48h] BYREF
  int v22; // [rsp+B8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  __int64 v24; // [rsp+F0h] [rbp+8h] BYREF
  int v25; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v26; // [rsp+100h] [rbp+18h] BYREF
  __int64 v27; // [rsp+108h] [rbp+20h] BYREF

  v19[1] = -2LL;
  LODWORD(v24) = 0;
  TabViewManagerTraceLogging::WatchCurrentThread(v20, "TabViewManager_PerformDelayedInitialization");
  HotKeyHandler = TabViewManager::CreateHotKeyHandler((TabViewManager *)((char *)this - 48));
  try
  {
    if ( HotKeyHandler < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        790LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)HotKeyHandler);
    v26 = 0LL;
    LODWORD(v24) = 2;
    (*(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this - 5) + 32LL))(
      (char *)this - 40,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v26);
    v24 = (__int64)this - 48;
    v3 = wil::com_weak_query<TabViewManager *>(&v27, &v24);
    v19[2] = (__int64)v3;
    v4 = *((_QWORD *)this + 168);
    v5 = *((_QWORD *)this + 146);
    v6 = *((_QWORD *)this + 147);
    v24 = *((_QWORD *)this + 46);
    v15 = v26;
    *(_QWORD *)v16 = v4;
    v17 = v5;
    v18 = v6;
    v7 = (__int64 *)wil::MakeAndInitializeOrThrow<TabTransferManager,wil::com_ptr_t<IWeakReference,wil::err_exception_policy>,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker * &,IUnknown * &,IPrivilegedForegroundOperations * &>(
                      (unsigned int)v19,
                      (_DWORD)v3,
                      (unsigned int)&v18,
                      (unsigned int)&v17,
                      (unsigned int)v16,
                      (__int64)&v15,
                      (__int64)&v24);
    v8 = *v7;
    *v7 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v3);
    v24 = 0LL;
    v9 = *((_QWORD *)this + 167);
    *((_QWORD *)this + 167) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
    v25 = 0;
    wil::wnf_query_nothrow<unsigned int>(v10, (char *)&v24, (__int64)&v25, v11);
    ++v25;
    v12 = RtlPublishWnfStateData(WNF_SHEL_TAB_SHELL_INIT_COMPLETE, 0LL, &v25, 4LL, 0LL) | 0x10000000;
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x323,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v12);
    if ( v22 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v21);
    wil::details::StoredCallContextInfo::~StoredCallContextInfo(v20);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v24) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x327,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                     v13);
    return (unsigned int)v24;
  }
  return result;
}
