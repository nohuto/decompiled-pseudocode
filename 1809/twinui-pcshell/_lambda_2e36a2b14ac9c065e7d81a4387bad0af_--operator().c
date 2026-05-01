/*
 * XREFs of _lambda_2e36a2b14ac9c065e7d81a4387bad0af_::operator() @ 0x18028E6E4
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_79452b082508ddec67a327ac22c13f81___::Invoke @ 0x18028ED50 (CAsyncCallbackWithLambda__lambda_79452b082508ddec67a327ac22c13f81___--Invoke.c)
 * Callees:
 *     ??$query@UIAltTabViewHost@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAltTabViewHost@@Uerr_exception_policy@wil@@@1@XZ @ 0x180091748 (--$query@UIAltTabViewHost@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2e36a2b14ac9c065e7d81a4387bad0af_::operator()(_QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rax
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_QWORD *)(*a1 + 56LL);
  try
  {
    v2 = (_QWORD *)wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAltTabViewHost>(
                     v1,
                     (__int64)&v6);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 64LL))(*v2);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x88,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewcontroller.cpp",
                           v3);
  }
  return result;
}
