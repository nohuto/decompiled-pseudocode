/*
 * XREFs of _lambda_f50e41e2a94bb9c65f89ee2429a9e4ef_::operator() @ 0x180089E00
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_f50e41e2a94bb9c65f89ee2429a9e4ef___::Invoke @ 0x18008A100 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_f50e41e2a94bb9c65f89ee2429a9e4e.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f50e41e2a94bb9c65f89ee2429a9e4ef_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // edi
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v9 = 0LL;
  v4 = (**a2)(a2, &GUID_288fc02d_5a3a_4a73_8ee6_52de772339ac, &v9);
  v5 = v4;
  if ( v4 != -2147467262 )
  {
    if ( v4 < 0 )
    {
      v6 = 6947LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v5);
      v3 = v5;
      goto LABEL_7;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(
           v9,
           **(_QWORD **)(a1 + 8),
           *(_QWORD *)a1);
    if ( v5 < 0 )
    {
      v6 = 6948LL;
      goto LABEL_6;
    }
  }
LABEL_7:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
  return v3;
}
