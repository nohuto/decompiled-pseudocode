/*
 * XREFs of _lambda_5860b5e6cc13572247a78ff58f223768_::operator() @ 0x1801D685C
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_5860b5e6cc13572247a78ff58f223768__0__wistd::details::function_allocator_wistd::_Func_class_long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1801F0090 (wistd--_Func_impl_wistd--_Callable_obj__lambda_5860b5e6cc13572247a78ff58f223768__0__ea_1801F0090.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_5860b5e6cc13572247a78ff58f223768_::operator()(__int64 a1, int a2, __int64 a3)
{
  int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v8[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v9 = -2LL;
  v3 = a2;
  if ( a2 >= 0 )
  {
    v11 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 72LL))(a3, &v11);
    if ( v3 >= 0 )
    {
      *(_QWORD *)v8 = v11;
      v6 = *(_QWORD *)(a1 + 56);
      if ( !v6 )
        std::_Xbad_function_call();
      v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 16LL))(v6, v8);
      if ( v3 >= 0 )
        goto LABEL_10;
      v5 = 1370LL;
    }
    else
    {
      v5 = 1368LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v3);
LABEL_10:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
    return (unsigned int)v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x555,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)a2);
  return (unsigned int)v3;
}
