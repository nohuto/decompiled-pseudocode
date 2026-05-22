/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_891e6175c7f2ccc3599c4db7fcbe05a3____Windows::Internal::CNoResult_::Run @ 0x1800E2300
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x1800E0DC0 (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 *     ??$GetDeferral@VCNoResult@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA?AV?$AsyncDeferral@VCNoResult@Internal@Windows@@@12@AEAVCNoResult@12@@Z @ 0x1800E161C (--$GetDeferral@VCNoResult@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA-AV-$AsyncDeferra.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_891e6175c7f2ccc3599c4db7fcbe05a3____Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[1] = -2LL;
  if ( a2 == 1 && a3 >= 0 )
  {
    v5 = Windows::Internal::CResultBase::GetDeferral<Windows::Internal::CNoResult>(a4, v12, a4);
    MPCConstantManagerClient::CreateHRPrincipal(*(MPCConstantManagerClient **)(a1 + 8), v11, v5);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 152LL);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
    v8 = v11[0];
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v7 + 8) + 64LL))(
           v7 + 8,
           *(unsigned int *)(a1 + 16),
           v11[0]);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    return (unsigned int)a3;
  }
  return v9;
}
