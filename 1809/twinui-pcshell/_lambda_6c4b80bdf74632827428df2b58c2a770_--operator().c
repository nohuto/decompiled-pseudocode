/*
 * XREFs of _lambda_6c4b80bdf74632827428df2b58c2a770_::operator() @ 0x1801D692C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c4b80bdf74632827428df2b58c2a770___::Run @ 0x1801E47E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6c4b80bdf74632827428df2b58c2a770___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18008B08C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_36384bfe8fddeea64aa1ca6986ceb908_::operator() @ 0x1801D64F4 (_lambda_36384bfe8fddeea64aa1ca6986ceb908_--operator().c)
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1801D8B98 (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 *     ?InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTabGroup@5678@@Z @ 0x1801DE530 (-InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasu.c)
 *     ?Stop@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAX_N@Z @ 0x1801E6D48 (-Stop@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_6c4b80bdf74632827428df2b58c2a770_::operator()(__int64 a1)
{
  struct wil::details::IFailureCallback *v2; // rsi
  _DWORD *v3; // r8
  bool v4; // r14
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  _QWORD *v10[5]; // [rsp+30h] [rbp-41h] BYREF
  LPVOID v11[4]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v12; // [rsp+78h] [rbp+7h] BYREF
  __int64 v13; // [rsp+88h] [rbp+17h]
  int v14; // [rsp+90h] [rbp+1Fh]
  __int64 v15; // [rsp+98h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  char v17; // [rsp+D8h] [rbp+67h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v18; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v19; // [rsp+E8h] [rbp+77h] BYREF

  v2 = (struct wil::details::IFailureCallback *)(a1 + 32);
  v3 = *(_DWORD **)(a1 + 80);
  v4 = 1;
  if ( *v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v11,
      v2,
      (const struct wil::details::StoredCallContextInfo *)(v3 + 10));
  }
  else
  {
    memset_0(v11, 0, sizeof(v11));
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
  }
  v17 = 0;
  v19 = 0LL;
  if ( (int)CoreQueryWindowService(
              *(_QWORD *)(a1 + 24),
              &unk_1804774C0,
              &GUID_82c021b7_aaf4_48fd_98d2_8c3cc38e2558,
              &v19) >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v18 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **))(*(_QWORD *)v5 + 168LL))(
           v5,
           &v18);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBCC,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
      goto LABEL_14;
    }
    TabViewManagerMeasures::TabViewManagerCloseTabRequested::InvokingAppManagedTabCloseRequestedHandlers(
      v2,
      *(struct IApplicationView **)(a1 + 8),
      *(struct Windows::Internal::ComposableShell::Tabs::IShellTab **)(a1 + 16),
      v18);
    v10[0] = &v19;
    v10[1] = (_QWORD *)(a1 + 16);
    v10[2] = &v17;
    v10[3] = v2;
    lambda_36384bfe8fddeea64aa1ca6986ceb908_::operator()(v10);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
  }
  if ( !v17 )
  {
    v8 = TabViewManager::CloseTab(
           *(TabViewManager **)a1,
           *(struct Windows::Internal::ComposableShell::Tabs::IShellTab **)(a1 + 16),
           *(struct IApplicationView **)(a1 + 8));
    v7 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE3,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_14;
    }
    if ( !v17 )
      v4 = 0;
  }
  TabViewManagerMeasures::TabViewManagerCloseTabRequested::Stop(v2, v4);
  v7 = 0;
LABEL_14:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
  if ( v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v12);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v11);
  return v7;
}
