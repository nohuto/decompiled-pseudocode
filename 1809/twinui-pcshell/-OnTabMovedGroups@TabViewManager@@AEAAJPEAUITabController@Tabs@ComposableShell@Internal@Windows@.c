/*
 * XREFs of ?OnTabMovedGroups@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x1801E0BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_32076d8d527a4c2a596cc095f37c3471___ @ 0x1801CFC24 (ShellPositionerHelpers--PerformCallbackOnView__lambda_32076d8d527a4c2a596cc095f37c3471___.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EE088 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TabViewManager::OnTabMovedGroups(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *a3)
{
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  __int64 v11; // [rsp+28h] [rbp-60h] BYREF
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  __int128 v15; // [rsp+48h] [rbp-40h] BYREF
  __int64 v16; // [rsp+58h] [rbp-30h]
  _BYTE v17[16]; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v16 = -2LL;
  v11 = 0LL;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v11);
  try
  {
    v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *))(*(_QWORD *)a3 + 48LL))(a3);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3168LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v5);
    TabViewManager::TryGetViewForTab(this, &v12, v11);
    if ( v12 )
    {
      v14 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 168LL))(v11, &v14);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3178LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 48LL))(v14, v17);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3181LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v9);
      punk = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL))(
        (char *)this + 8,
        &GUID_00000000_0000_0000_c000_000000000046,
        &punk);
      *(_QWORD *)&v15 = &v12;
      *((_QWORD *)&v15 + 1) = v17;
      v10 = ShellPositionerHelpers::PerformCallbackOnView__lambda_32076d8d527a4c2a596cc095f37c3471___(punk, v12, &v15);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3191LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v10);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v12);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
      result = 0LL;
    }
    else
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v12);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC7B,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v6);
  }
  return result;
}
