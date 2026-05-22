/*
 * XREFs of _lambda_a408cc100a5b103155a70fabf7a2049b_::operator() @ 0x18011A210
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows::Internal::CNoResult_::Run @ 0x180120410 (Windows--Internal--COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b___ea_180120410.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$GetDeferral@VCNoResult@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA?AV?$AsyncDeferral@VCNoResult@Internal@Windows@@@12@AEAVCNoResult@12@@Z @ 0x180116EA8 (--$GetDeferral@VCNoResult@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA-AV-$AsyncDeferra.c)
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x18011BB0C (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_a408cc100a5b103155a70fabf7a2049b_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, _QWORD, PCWSTR, __int64, __int64); // rdi
  PCWSTR StringRawBuffer; // rax
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = Windows::Internal::CResultBase::GetDeferral<Windows::Internal::CNoResult>(a2, v10, a2);
  MPCConstantManagerClient::CreateHRPrincipal(v3, &v11, v4);
  v5 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 152LL);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 72LL))(v5) + 8;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, PCWSTR, __int64, __int64))(*(_QWORD *)v6 + 24LL);
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a1[5], 0LL);
  LODWORD(v3) = v7(v6, *((unsigned int *)a1 + 2), StringRawBuffer, (__int64)(a1 + 2), v11);
  WindowsDeleteString((HSTRING)a1[5]);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v11);
  return (unsigned int)v3;
}
