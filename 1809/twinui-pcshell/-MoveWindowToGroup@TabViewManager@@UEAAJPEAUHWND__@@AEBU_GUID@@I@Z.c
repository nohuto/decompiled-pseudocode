/*
 * XREFs of ?MoveWindowToGroup@TabViewManager@@UEAAJPEAUHWND__@@AEBU_GUID@@I@Z @ 0x1801DEC90
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

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabViewManager::MoveWindowToGroup(
        TabViewManager *this,
        HWND a2,
        const struct _GUID *a3,
        unsigned int a4)
{
  int v6; // edi
  int TabForWindowId; // eax
  int v9; // eax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v13[2]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v14; // [rsp+40h] [rbp-78h] BYREF
  __int128 v15; // [rsp+50h] [rbp-68h] BYREF
  __int128 v16; // [rsp+60h] [rbp-58h] BYREF
  int v17[4]; // [rsp+70h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v13[1] = (struct Windows::Internal::ComposableShell::Tabs::IShellTab *)-2LL;
  v6 = (int)a2;
  v13[0] = 0LL;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)v13);
  TabForWindowId = TabViewManager::GetTabForWindowId((__int64)this + 8, v6, v13);
  try
  {
    if ( TabForWindowId < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        427LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)TabForWindowId);
    if ( v13[0] )
    {
      v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int128 *))(*(_QWORD *)v13[0] + 48LL))(
             v13[0],
             &v16);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          431LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v9);
      v14 = (__int128)*a3;
      v15 = v16;
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int128 *, _QWORD, int *))(**((_QWORD **)this + 127) + 200LL))(
              *((_QWORD *)this + 127),
              &v15,
              &v14,
              a4,
              v17);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          433LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v10);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1B6,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v11);
  }
  return result;
}
