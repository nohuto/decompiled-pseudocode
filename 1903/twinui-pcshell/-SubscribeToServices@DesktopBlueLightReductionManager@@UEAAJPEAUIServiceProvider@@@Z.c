/*
 * XREFs of ?SubscribeToServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180160C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DesktopBlueLightReductionManager::SubscribeToServices(
        DesktopBlueLightReductionManager *this,
        struct IServiceProvider *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  try
  {
    v6 = *((_QWORD *)this + 16);
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, a2, 0LL);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          120LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v7);
      v16 = 0LL;
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v16);
      v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
             a2,
             &IID_IImmersiveWindowMessageService,
             &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
             &v16);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          123LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, char *))(*(_QWORD *)v16 + 24LL))(
             v16,
             30LL,
             ((unsigned __int64)this + 64) & -(__int64)(this != (DesktopBlueLightReductionManager *)40),
             (char *)this + 152);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          124LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v9);
      v18 = 0LL;
      v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
              a2,
              &SID_IImmersiveMonitorService,
              &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
              &v18);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          127LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v10);
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v18 + 24LL))(
              v18,
              ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64),
              (char *)this + 156);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          128LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v11);
      v17 = 0LL;
      v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
              a2,
              &IID_IImmersiveSessionIdleDetector,
              &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
              &v17);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          131LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v12);
      v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v17 + 32LL))(
              v17,
              ((unsigned __int64)this + 80) & -(__int64)(this != (DesktopBlueLightReductionManager *)40),
              (char *)this + 160);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          132LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v13);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x88,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           a4);
  }
  return result;
}
