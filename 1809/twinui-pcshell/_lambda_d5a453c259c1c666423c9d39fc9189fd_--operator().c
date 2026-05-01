/*
 * XREFs of _lambda_d5a453c259c1c666423c9d39fc9189fd_::operator() @ 0x1801D71EC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd___::Run @ 0x1801E4820 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18017B930 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_5860b5e6cc13572247a78ff58f223768__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_ @ 0x1801D0E20 (wil--RunWhenCompleteNoThrow_Microsoft--WRL--FtmBase_Windows--Internal--Shell--Experience--TitleB.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x1801D460C (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_d5a453c259c1c666423c9d39fc9189fd_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v9[64]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8[1] = -2LL;
  v8[0] = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1384LL);
  v8[0] = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 72LL))(v2, v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    std::function<void (void)>::function<void (void)>((__int64)v9, a1 + 16);
    v5 = wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_5860b5e6cc13572247a78ff58f223768__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_(
           v8[0],
           (__int64)v9);
    std::_Func_class<void,>::_Tidy((__int64)v9, v6);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1372LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v5);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x550,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v3);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v8);
  return v4;
}
