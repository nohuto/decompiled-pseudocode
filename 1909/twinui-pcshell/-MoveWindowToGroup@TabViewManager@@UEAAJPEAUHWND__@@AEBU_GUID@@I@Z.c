/*
 * XREFs of ?MoveWindowToGroup@TabViewManager@@UEAAJPEAUHWND__@@AEBU_GUID@@I@Z @ 0x1802518E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x18024FE00 (-GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabViewManager::MoveWindowToGroup(
        TabViewManager *this,
        HWND a2,
        const struct _GUID *a3,
        unsigned int a4)
{
  int v6; // esi
  int TabForWindowId; // eax
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  const char *v13; // r9
  __int64 result; // rax
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v15[2]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v16; // [rsp+40h] [rbp-78h] BYREF
  __int128 v17; // [rsp+50h] [rbp-68h] BYREF
  __int128 v18; // [rsp+60h] [rbp-58h] BYREF
  int v19[4]; // [rsp+70h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v15[1] = (struct Windows::Internal::ComposableShell::Tabs::IShellTab *)-2LL;
  v6 = (int)a2;
  v15[0] = 0LL;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)v15);
  TabForWindowId = TabViewManager::GetTabForWindowId((__int64)this + 8, v6, v15);
  try
  {
    if ( TabForWindowId < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        394LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)TabForWindowId);
    if ( v15[0] )
    {
      v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int128 *))(*(_QWORD *)v15[0] + 48LL))(
             v15[0],
             &v18);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          398LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v9);
      v10 = (__int64 *)*((_QWORD *)this + 133);
      v11 = *v10;
      v16 = (__int128)*a3;
      v17 = v18;
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int128 *, _QWORD, int *))(v11 + 200))(
              v10,
              &v17,
              &v16,
              a4,
              v19);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          400LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v12);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x195,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v13);
  }
  return result;
}
