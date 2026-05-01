/*
 * XREFs of ?OnShellHookMessage@TabViewManager@@UEAAJ_K_J@Z @ 0x1801E0790
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801EDCDC (-TryGetTabForViewImpl@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna.c)
 *     ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EF24C (-UpdateTabDisplayName@TabViewManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Intern.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1801EFC44 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabViewManager::OnShellHookMessage(TabViewManager *this, __int64 a2, HWND a3)
{
  __int64 v6; // rbx
  TabViewManager *v7; // rcx
  bool v8; // bl
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v12[2]; // [rsp+20h] [rbp-68h] BYREF
  LPVOID v13[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v14[24]; // [rsp+50h] [rbp-38h] BYREF
  int v15; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  void (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+10h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+20h] BYREF

  v12[1] = (struct Windows::Internal::ComposableShell::Tabs::IShellTab *)-2LL;
  TabViewManagerTraceLogging::WatchCurrentThread(v13, "TabViewManager_OnShellHookMessage");
  try
  {
    if ( a2 == 6 )
    {
      v17 = 0LL;
      v6 = *((_QWORD *)this + 120);
      wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v17);
      (*(void (__fastcall **)(__int64, HWND, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, a3, &v17);
      if ( v17 )
      {
        TabViewManager::TryGetTabForViewImpl((char *)this - 184, v12, v17);
        if ( v12[0] )
        {
          if ( TabViewManager::UpdateTabDisplayName(v7, a3, v12[0]) >= 0 )
          {
            (**v17)(v17, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v18);
            v8 = v18 != 0;
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
            if ( v8 )
            {
              v9 = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 152) + 24LL))(
                     *((_QWORD *)this + 152),
                     v17);
              if ( v9 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  1150LL,
                  (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                  (const char *)(unsigned int)v9);
            }
          }
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v12);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v17);
    }
    if ( v15 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v14);
    wil::details::StoredCallContextInfo::~StoredCallContextInfo(v13);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v17) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x48F,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                     v10);
    return (unsigned int)v17;
  }
  return result;
}
