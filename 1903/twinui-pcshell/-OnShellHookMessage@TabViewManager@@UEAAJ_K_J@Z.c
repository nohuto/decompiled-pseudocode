/*
 * XREFs of ?OnShellHookMessage@TabViewManager@@UEAAJ_K_J@Z @ 0x180233CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x1800484E4 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18024025C (-TryGetTabForViewImpl@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna.c)
 *     ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802418E4 (-UpdateTabDisplayName@TabViewManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Intern.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802422F8 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabViewManager::OnShellHookMessage(TabViewManager *this, __int64 a2, HWND a3)
{
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, HWND, _QWORD); // rbx
  TabViewManager *v8; // rcx
  bool v9; // bl
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v13[2]; // [rsp+20h] [rbp-78h] BYREF
  LPVOID v14[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v15[24]; // [rsp+50h] [rbp-48h] BYREF
  int v16; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  void (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+10h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+20h] BYREF

  v13[1] = (struct Windows::Internal::ComposableShell::Tabs::IShellTab *)-2LL;
  TabViewManagerTraceLogging::WatchCurrentThread(v14, "TabViewManager_OnShellHookMessage");
  try
  {
    if ( a2 == 6 )
    {
      v18 = 0LL;
      v6 = *((_QWORD *)this + 126);
      v7 = *(void (__fastcall **)(__int64, HWND, _QWORD))(*(_QWORD *)v6 + 48LL);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v18);
      v7(v6, a3, &v18);
      if ( v18 )
      {
        TabViewManager::TryGetTabForViewImpl((char *)this - 192, v13, v18);
        if ( v13[0] )
        {
          if ( TabViewManager::UpdateTabDisplayName(v8, a3, v13[0]) >= 0 )
          {
            (**v18)(v18, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v19);
            v9 = v19 != 0;
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
            if ( v9 )
            {
              v10 = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 152) + 24LL))(
                      *((_QWORD *)this + 152),
                      v18);
              if ( v10 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  1042LL,
                  (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                  (const char *)(unsigned int)v10);
            }
          }
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v13);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
    }
    if ( v16 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
    wil::details::StoredCallContextInfo::~StoredCallContextInfo(v14);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v18) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x423,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                     v11);
    return (unsigned int)v18;
  }
  return result;
}
