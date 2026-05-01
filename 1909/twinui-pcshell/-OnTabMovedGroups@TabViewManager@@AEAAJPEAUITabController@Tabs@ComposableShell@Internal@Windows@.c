/*
 * XREFs of ?OnTabMovedGroups@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x1802536D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_a268cc864b1d4e9bb111a66fb7164930___ @ 0x1802458A0 (ShellPositionerHelpers--PerformCallbackOnView__lambda_a268cc864b1d4e9bb111a66fb7164930___.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025FC04 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TabViewManager::OnTabMovedGroups(
        __int64 **this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *a3)
{
  __int64 (*v4)(void); // rbx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // ebx
  int v16; // [rsp+20h] [rbp-98h] BYREF
  BOOL v17; // [rsp+24h] [rbp-94h] BYREF
  __int64 *v18; // [rsp+28h] [rbp-90h] BYREF
  __int64 v19; // [rsp+30h] [rbp-88h] BYREF
  __int64 v20; // [rsp+38h] [rbp-80h] BYREF
  int v21; // [rsp+40h] [rbp-78h]
  IUnknown *punk[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v23[4]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v24; // [rsp+80h] [rbp-38h] BYREF
  _BYTE v25[16]; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v23[3] = -2LL;
  v21 = 0;
  v18 = 0LL;
  v4 = *(__int64 (**)(void))(*(_QWORD *)a3 + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v18);
  try
  {
    v5 = v4();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2714LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v5);
    TabViewManager::TryGetViewForTab(this, &v19, v18);
    if ( v19 )
    {
      v20 = 0LL;
      v8 = *v18;
      v20 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 168))(v18, &v20);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2724LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v9);
      v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 48LL))(v20, v25);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2727LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v10);
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v18 + 48))(v18, &v24);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2730LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v11);
      LOBYTE(v16) = 0;
      v12 = this[173];
      v13 = *v12;
      *(_OWORD *)punk = v24;
      v14 = (*(__int64 (__fastcall **)(__int64 *, IUnknown **, int *))(v13 + 24))(v12, punk, &v16);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2733LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v14);
      v17 = (_BYTE)v16 != 0;
      punk[0] = 0LL;
      v21 = 2;
      ((void (__fastcall *)(char *, GUID *, IUnknown **))this[1][4])(
        (char *)this + 8,
        &GUID_00000000_0000_0000_c000_000000000046,
        punk);
      v23[0] = &v19;
      v23[1] = v25;
      v23[2] = &v17;
      v15 = ShellPositionerHelpers::PerformCallbackOnView__lambda_a268cc864b1d4e9bb111a66fb7164930___(
              punk[0],
              v19,
              (__int64)v23);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)punk);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2745LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v15);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
      result = 0LL;
    }
    else
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xABD,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v6);
  }
  return result;
}
