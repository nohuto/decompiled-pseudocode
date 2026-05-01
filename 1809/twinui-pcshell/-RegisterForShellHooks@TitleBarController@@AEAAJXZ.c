/*
 * XREFs of ?RegisterForShellHooks@TitleBarController@@AEAAJXZ @ 0x1801F898C
 * Callers:
 *     _lambda_662c9e03a7f7cb620b2a10f3e52d88d6_::operator() @ 0x1801F692C (_lambda_662c9e03a7f7cb620b2a10f3e52d88d6_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800E75AC (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@ZPEB_KIPEAVTitleBarController@@@SmartCookie@@QEAAJPEAUIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@Z1IPEAVTitleBarController@@@Z @ 0x1801F54F8 (--$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotif_ea_1801F54F8.c)
 *     ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x1801F91C0 (-Swap@SmartCookie@@QEAAXAEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TitleBarController::RegisterForShellHooks(TitleBarController *this)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  const char *v9; // r9
  __int64 result; // rax
  __int64 v11[4]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v12[104]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v13; // [rsp+C8h] [rbp-30h]
  int v14; // [rsp+D0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v11[1] = -2LL;
  v11[0] = 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockShared((PSRWLOCK)this + 10);
  try
  {
    v3 = *((_QWORD *)this + 17);
    if ( !v3 || *((_DWORD *)this + 84) )
    {
      if ( v2 )
        ReleaseSRWLockShared(v2);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v11);
      result = 0LL;
    }
    else
    {
      v11[0] = *((_QWORD *)this + 17);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      if ( v2 )
        ReleaseSRWLockShared(v2);
      v5 = 2LL;
      do
      {
        v13 = 0LL;
        --v5;
      }
      while ( v5 );
      v14 = 0;
      v6 = SmartCookie::Register<IImmersiveShellHookService,long (IImmersiveShellHookService::*)(unsigned __int64 const *,unsigned int,IImmersiveShellHookNotification *,unsigned long *),long (IImmersiveShellHookService::*)(unsigned long),unsigned __int64 const *,unsigned int,TitleBarController *>(
             (__int64)v12,
             *((_QWORD *)this + 17),
             v4);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          795LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
          (const char *)(unsigned int)v6);
      AcquireSRWLockExclusive(v2);
      v11[2] = (__int64)v2;
      SmartCookie::Swap((TitleBarController *)((char *)this + 224), (struct SmartCookie *)v12);
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      SmartCookie::Unregister((SmartCookie *)v12);
      wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
        (__int64)v12,
        v7);
      wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
        (__int64)v12,
        v8);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v11);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x324,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v9);
  }
  return result;
}
