/*
 * XREFs of _lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_::operator() @ 0x18024AD7C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___::Run @ 0x180256B40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180090130 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _lambda_b1c35f81adaf5b36b55ebdf9a5ea9776_::operator() @ 0x18024ACC0 (_lambda_b1c35f81adaf5b36b55ebdf9a5ea9776_--operator().c)
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18024C1DC (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 *     ?InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTabGroup@5678@@Z @ 0x18025117C (-InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasu.c)
 *     ?Stop@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAX_N@Z @ 0x180258D10 (-Stop@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAX_N@Z.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x18025F30C (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_::operator()(__int64 a1)
{
  struct wil::details::IFailureCallback *v2; // rsi
  _DWORD *v3; // r8
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  bool v8; // zf
  int v9; // eax
  __int64 *v11[5]; // [rsp+28h] [rbp-41h] BYREF
  LPVOID v12[4]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v13; // [rsp+70h] [rbp+7h] BYREF
  __int64 v14; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+88h] [rbp+1Fh]
  __int64 v16; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  char v18; // [rsp+D0h] [rbp+67h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v19; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v20; // [rsp+E0h] [rbp+77h] BYREF

  v2 = (struct wil::details::IFailureCallback *)(a1 + 32);
  v3 = *(_DWORD **)(a1 + 80);
  if ( *v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v12,
      v2,
      (const struct wil::details::StoredCallContextInfo *)(v3 + 10));
  }
  else
  {
    memset_0(v12, 0, sizeof(v12));
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0;
    v16 = 0LL;
  }
  v18 = 0;
  TryGetApplicationViewTabManager(&v20, *(_QWORD *)(a1 + 24), "CloseTabRequested");
  if ( v20 )
  {
    v19 = 0LL;
    v4 = *(__int64 **)(a1 + 16);
    v5 = *v4;
    v19 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **))(v5 + 168))(
           v4,
           &v19);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA03,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
      goto LABEL_13;
    }
    TabViewManagerMeasures::TabViewManagerCloseTabRequested::InvokingAppManagedTabCloseRequestedHandlers(
      v2,
      *(struct IApplicationView **)(a1 + 8),
      *(struct Windows::Internal::ComposableShell::Tabs::IShellTab **)(a1 + 16),
      v19);
    v11[0] = &v20;
    v11[1] = (__int64 *)(a1 + 16);
    v11[2] = (__int64 *)&v18;
    v11[3] = (__int64 *)v2;
    lambda_b1c35f81adaf5b36b55ebdf9a5ea9776_::operator()(v11);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
  }
  v8 = v18 == 0;
  if ( !v18 )
  {
    v9 = TabViewManager::CloseTab(
           *(TabViewManager **)a1,
           *(struct Windows::Internal::ComposableShell::Tabs::IShellTab **)(a1 + 16),
           *(struct IApplicationView **)(a1 + 8));
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA17,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_13;
    }
    v8 = v18 == 0;
  }
  TabViewManagerMeasures::TabViewManagerCloseTabRequested::Stop(v2, !v8);
  v7 = 0;
LABEL_13:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v15 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v13);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v12);
  return v7;
}
