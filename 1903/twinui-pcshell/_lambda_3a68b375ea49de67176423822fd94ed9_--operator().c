/*
 * XREFs of _lambda_3a68b375ea49de67176423822fd94ed9_::operator() @ 0x18008CB40
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3a68b375ea49de67176423822fd94ed9___::Invoke @ 0x18008CFA0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_3a68b375ea49de67176423822fd94ed.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3a68b375ea49de67176423822fd94ed9_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, GUID *, __int64 *); // rax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // edi
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = 0;
  v10 = 0LL;
  v5 = (*v3)(a2, &GUID_288fc02d_5a3a_4a73_8ee6_52de772339ac, &v10);
  v6 = v5;
  if ( v5 != -2147467262 )
  {
    if ( v5 < 0 )
    {
      v7 = 7162LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6);
      v4 = v6;
      goto LABEL_7;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(
           v10,
           **(_QWORD **)(a1 + 8),
           *(_QWORD *)a1);
    if ( v6 < 0 )
    {
      v7 = 7163LL;
      goto LABEL_6;
    }
  }
LABEL_7:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
  return v4;
}
