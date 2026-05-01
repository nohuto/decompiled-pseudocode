/*
 * XREFs of ?UnsubscribeFromServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180137490
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DesktopBlueLightReductionManager::UnsubscribeFromServices(
        DesktopBlueLightReductionManager *this,
        struct IServiceProvider *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    if ( *((_QWORD *)this + 16) )
    {
      if ( *((_DWORD *)this + 38) )
      {
        v9 = 0LL;
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v9);
        if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
               a2,
               &IID_IImmersiveWindowMessageService,
               &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
               &v9) >= 0 )
        {
          if ( *((_DWORD *)this + 38) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
          *((_DWORD *)this + 38) = 0;
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
      }
      if ( *((_DWORD *)this + 39) )
      {
        v9 = 0LL;
        if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
               a2,
               &SID_IImmersiveMonitorService,
               &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
               &v9) >= 0 )
        {
          if ( *((_DWORD *)this + 39) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
          *((_DWORD *)this + 39) = 0;
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
      }
      if ( *((_DWORD *)this + 40) )
      {
        v9 = 0LL;
        if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
               a2,
               &IID_IImmersiveSessionIdleDetector,
               &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
               &v9) >= 0 )
        {
          if ( *((_DWORD *)this + 40) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
          *((_DWORD *)this + 40) = 0;
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
      }
      v6 = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *, _QWORD))(**((_QWORD **)this + 16) + 48LL))(
             *((_QWORD *)this + 16),
             a2,
             0LL);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          192LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v6);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC4,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           a4);
  }
  return result;
}
