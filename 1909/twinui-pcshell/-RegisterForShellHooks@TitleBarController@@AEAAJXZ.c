/*
 * XREFs of ?RegisterForShellHooks@TitleBarController@@AEAAJXZ @ 0x180268ECC
 * Callers:
 *     _lambda_8c677c44027c68cbd42f9970f610ae83_::operator() @ 0x180266D74 (_lambda_8c677c44027c68cbd42f9970f610ae83_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800547D0 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801286A8 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x180233FB4 (-Swap@SmartCookie@@QEAAXAEAV1@@Z.c)
 *     ??$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@ZPEB_KIPEAVTitleBarController@@@SmartCookie@@QEAAJPEAUIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@Z1IPEAVTitleBarController@@@Z @ 0x180265F7C (--$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotif_ea_180265F7C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TitleBarController::RegisterForShellHooks(TitleBarController *this)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8[4]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v9[112]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v10; // [rsp+D0h] [rbp-28h]
  int v11; // [rsp+D8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v8[1] = -2LL;
  v8[0] = 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockShared((PSRWLOCK)this + 10);
  try
  {
    v3 = *((_QWORD *)this + 17);
    if ( !v3 || *((_DWORD *)this + 86) )
    {
      if ( v2 )
        ReleaseSRWLockShared(v2);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v8);
      result = 0LL;
    }
    else
    {
      v8[0] = *((_QWORD *)this + 17);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      if ( v2 )
        ReleaseSRWLockShared(v2);
      v10 = 0LL;
      v11 = 0;
      v5 = SmartCookie::Register<IImmersiveShellHookService,long (IImmersiveShellHookService::*)(unsigned __int64 const *,unsigned int,IImmersiveShellHookNotification *,unsigned long *),long (IImmersiveShellHookService::*)(unsigned long),unsigned __int64 const *,unsigned int,TitleBarController *>(
             (__int64)v9,
             *((_QWORD *)this + 17),
             v4);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          774LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
          (const char *)(unsigned int)v5);
      AcquireSRWLockExclusive(v2);
      v8[2] = (__int64)v2;
      SmartCookie::Swap((TitleBarController *)((char *)this + 224), (struct SmartCookie *)v9);
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      SmartCookie::Unregister((SmartCookie *)v9);
      wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v9);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v8);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x30F,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v6);
  }
  return result;
}
