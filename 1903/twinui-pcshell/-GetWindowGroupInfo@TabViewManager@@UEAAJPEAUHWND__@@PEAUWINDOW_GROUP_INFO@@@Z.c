/*
 * XREFs of ?GetWindowGroupInfo@TabViewManager@@UEAAJPEAUHWND__@@PEAUWINDOW_GROUP_INFO@@@Z @ 0x180231320
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x180230850 (-GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabViewManager::GetWindowGroupInfo(TabViewManager *this, HWND a2, struct WINDOW_GROUP_INFO *a3)
{
  int v4; // esi
  char *v5; // rbx
  int TabForWindowId; // eax
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  const char *v15; // r9
  __int64 result; // rax
  _BYTE v17[4]; // [rsp+30h] [rbp-68h] BYREF
  int v18; // [rsp+34h] [rbp-64h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v20; // [rsp+40h] [rbp-58h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v21[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v22; // [rsp+58h] [rbp-40h] BYREF
  __int64 v23; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v21[1] = (struct Windows::Internal::ComposableShell::Tabs::IShellTab *)-2LL;
  v4 = (int)a2;
  v22 = 0uLL;
  v23 = 0LL;
  *(_OWORD *)a3 = 0uLL;
  *((_QWORD *)a3 + 2) = v23;
  v21[0] = 0LL;
  v5 = (char *)this + 8;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)v21);
  TabForWindowId = TabViewManager::GetTabForWindowId((__int64)v5, v4, v21);
  try
  {
    if ( TabForWindowId < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        362LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)TabForWindowId);
    v7 = v21[0];
    if ( v21[0] )
    {
      v20 = 0LL;
      v8 = *(_QWORD *)v21[0];
      v20 = 0LL;
      v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 **))(v8 + 168))(
             v21[0],
             &v20);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          366LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v9);
      if ( v20 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v20 + 48))(v20, &v22);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            370LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v10);
        *(_OWORD *)a3 = v22;
        v19 = 0LL;
        v11 = *v20;
        v19 = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 56))(v20, &v19);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            374LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v12);
        v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 56LL))(v19, (char *)a3 + 16);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            376LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v13);
        v18 = 0;
        v17[0] = 0;
        v14 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTab *, int *, _BYTE *))(*(_QWORD *)v19 + 64LL))(
                v19,
                v7,
                &v18,
                v17);
        if ( v14 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            380LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v14);
        if ( v17[0] )
          *((_DWORD *)a3 + 5) = v18;
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v21);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x185,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v15);
  }
  return result;
}
