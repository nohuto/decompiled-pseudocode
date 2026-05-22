/*
 * XREFs of ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001771C
 * Callers:
 *     _Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_d4d997c91d9ada6146019f0263a22bf4____Windows::Internal::CNoResult_::Run_::_1_::dtor$1 @ 0x18012E707 (_Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_d4d997c91d9ada.c)
 *     _MPCManagerClient::MPCManagerClient_::_1_::dtor$2 @ 0x180134594 (_MPCManagerClient--MPCManagerClient_--_1_--dtor$2.c)
 *     _Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_891e6175c7f2ccc3599c4db7fcbe05a3____Windows::Internal::CNoResult_::Run_::_1_::dtor$1 @ 0x1801347B8 (_Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_891e6175c7f2cc.c)
 *     _Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_0020444391bc65c77824af03bb11f5f3____Windows::Internal::CNoResult_::Run_::_1_::dtor$1 @ 0x1801347CA (_Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_0020444391bc65.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
