/*
 * XREFs of ?GetWindowGroupInfo@TabViewManager@@UEAAJPEAUHWND__@@PEAUWINDOW_GROUP_INFO@@@Z @ 0x1801DDD20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x1801DD270 (-GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabViewManager::GetWindowGroupInfo(TabViewManager *this, HWND a2, struct WINDOW_GROUP_INFO *a3)
{
  int v4; // esi
  int TabForWindowId; // eax
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  const char *v13; // r9
  __int64 result; // rax
  _BYTE v15[4]; // [rsp+30h] [rbp-68h] BYREF
  int v16; // [rsp+34h] [rbp-64h] BYREF
  __int64 v17; // [rsp+38h] [rbp-60h] BYREF
  __int64 v18; // [rsp+40h] [rbp-58h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v19[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v20; // [rsp+58h] [rbp-40h] BYREF
  __int64 v21; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v19[1] = (struct Windows::Internal::ComposableShell::Tabs::IShellTab *)-2LL;
  v4 = (int)a2;
  v20 = 0uLL;
  v21 = 0LL;
  *(_OWORD *)a3 = 0uLL;
  *((_QWORD *)a3 + 2) = v21;
  v19[0] = 0LL;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)v19);
  TabForWindowId = TabViewManager::GetTabForWindowId((__int64)this + 8, v4, v19);
  try
  {
    if ( TabForWindowId < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        395LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)TabForWindowId);
    v7 = v19[0];
    if ( v19[0] )
    {
      v18 = 0LL;
      v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 *))(*(_QWORD *)v19[0] + 168LL))(
             v19[0],
             &v18);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          399LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v8);
      if ( v18 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v18 + 48LL))(v18, &v20);
        if ( v9 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            403LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v9);
        *(_OWORD *)a3 = v20;
        v17 = 0LL;
        v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 56LL))(v18, &v17);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            407LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v10);
        v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 56LL))(v17, (char *)a3 + 16);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            409LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v11);
        v16 = 0;
        v15[0] = 0;
        v12 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTab *, int *, _BYTE *))(*(_QWORD *)v17 + 64LL))(
                v17,
                v7,
                &v16,
                v15);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            413LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v12);
        if ( v15[0] )
          *((_DWORD *)a3 + 5) = v16;
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v19);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1A6,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v13);
  }
  return result;
}
