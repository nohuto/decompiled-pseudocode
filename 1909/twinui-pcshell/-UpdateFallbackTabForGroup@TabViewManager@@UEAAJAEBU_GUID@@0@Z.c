/*
 * XREFs of ?UpdateFallbackTabForGroup@TabViewManager@@UEAAJAEBU_GUID@@0@Z @ 0x180260CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x1802608FC (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabViewManager::UpdateFallbackTabForGroup(
        TabViewManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *); // rax
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int128 *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **); // rbx
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v16; // [rsp+60h] [rbp+8h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v17; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 136);
  v6 = *v5;
  v14 = (__int128)*a2;
  v16 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64 *))(v6 + 88);
  try
  {
    v8 = v7(v5);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2025LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v8);
    if ( !v16 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2026LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)0x80070490LL);
    v17 = 0LL;
    v9 = *((_QWORD *)this + 136);
    v10 = *(__int64 (__fastcall **)(__int64, __int128 *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)v9 + 96LL);
    v14 = (__int128)*a3;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v17);
    v11 = v10(v9, &v14, &v17);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2028LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v11);
    TabViewManager::UpdateFallbackTabForGroup((TabViewManager *)((char *)this - 136), v16, v17);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v17);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7F2,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v12);
  }
  return result;
}
