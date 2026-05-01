/*
 * XREFs of _lambda_cbb0258dd247905ababaa0c64dc22f3a_::operator() @ 0x1801D6F9C
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_cbb0258dd247905ababaa0c64dc22f3a__0__wistd::details::function_allocator_wistd::_Func_class_long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1801F00B0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_cbb0258dd247905ababaa0c64dc22f3a__0__ea_1801F00B0.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_cbb0258dd247905ababaa0c64dc22f3a_::operator()(RTL_SRWLOCK **a1, int a2, __int64 a3)
{
  RTL_SRWLOCK *v7; // rbx
  int v8; // esi
  __int64 v9; // rdx
  RTL_SRWLOCK *v10; // r8
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF

  if ( a2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x419,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)a2);
    return (unsigned int)a2;
  }
  v7 = *a1 + 184;
  AcquireSRWLockExclusive(v7);
  v14 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 72LL))(a3, &v14);
  if ( v8 < 0 )
  {
    v9 = 1054LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v8);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    return (unsigned int)v8;
  }
  v10 = *a1;
  if ( (*a1)[153].Ptr )
  {
    (*(void (__fastcall **)(__int64, PVOID))(*(_QWORD *)v14 + 112LL))(v14, v10[153].Ptr);
    (*a1)[153].Ptr = 0LL;
    v10 = *a1;
  }
  if ( v10[154].Ptr )
  {
    (*(void (__fastcall **)(__int64, PVOID))(*(_QWORD *)v14 + 144LL))(v14, v10[154].Ptr);
    (*a1)[154].Ptr = 0LL;
    v10 = *a1;
  }
  if ( v10[155].Ptr )
  {
    (*(void (__fastcall **)(__int64, PVOID))(*(_QWORD *)v14 + 160LL))(v14, v10[155].Ptr);
    (*a1)[155].Ptr = 0LL;
    v10 = *a1;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *, PVOID *))(*(_QWORD *)v14 + 104LL))(v14, a1[2], &v10[153].Ptr);
  if ( v8 < 0 )
  {
    v9 = 1074LL;
    goto LABEL_5;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *, RTL_SRWLOCK *))(*(_QWORD *)v14 + 136LL))(
         v14,
         a1[3],
         *a1 + 154);
  if ( v8 < 0 )
  {
    v9 = 1075LL;
    goto LABEL_5;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *, RTL_SRWLOCK *))(*(_QWORD *)v14 + 152LL))(
          v14,
          a1[4],
          *a1 + 155);
  v12 = v11;
  if ( v11 >= 0 )
  {
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x434,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    return v12;
  }
}
