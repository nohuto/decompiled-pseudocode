/*
 * XREFs of _lambda_86dfcfb900c2cb342977b68534687bf6_::operator() @ 0x1802C5518
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_86dfcfb900c2cb342977b68534687bf6___::Run @ 0x1802C6D50 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_86dfcfb900c2cb342977b68534687bf6___--.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_86dfcfb900c2cb342977b68534687bf6_::operator()(__int64 **a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  void (__fastcall *v4)(__int64 *); // rax
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = *a1;
  v3 = *v2;
  v9 = 0LL;
  v4 = *(void (__fastcall **)(__int64 *))(v3 + 232);
  try
  {
    v4(v2);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, *a1[1]);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1011LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3F5,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
