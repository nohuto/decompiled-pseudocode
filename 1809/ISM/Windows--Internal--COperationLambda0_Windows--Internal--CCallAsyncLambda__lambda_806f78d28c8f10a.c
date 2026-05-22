/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_806f78d28c8f10a2fa7e8f1910bc87ed____Windows::Internal::CNoResult_::Run @ 0x1800E2220
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x1800E0DC0 (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 *     ??$GetDeferral@VCNoResult@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA?AV?$AsyncDeferral@VCNoResult@Internal@Windows@@@12@AEAVCNoResult@12@@Z @ 0x1800E161C (--$GetDeferral@VCNoResult@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA-AV-$AsyncDeferra.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_806f78d28c8f10a2fa7e8f1910bc87ed____Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // rdi
  PCWSTR StringRawBuffer; // rax
  __int64 v10; // rbx
  unsigned int v11; // edi
  _QWORD v13[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF

  v13[1] = -2LL;
  if ( a2 == 1 && a3 >= 0 )
  {
    v5 = Windows::Internal::CResultBase::GetDeferral<Windows::Internal::CNoResult>(a4, v14, a4);
    MPCConstantManagerClient::CreateHRPrincipal(*(MPCConstantManagerClient **)(a1 + 8), v13, v5);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 152LL);
    v7 = (__int64 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6) + 8);
    v8 = *v7;
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 24), 0LL);
    v10 = v13[0];
    v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, PCWSTR, _QWORD))(v8 + 56))(
            v7,
            *(unsigned int *)(a1 + 16),
            StringRawBuffer,
            v13[0]);
    WindowsDeleteString(*(HSTRING *)(a1 + 24));
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    return (unsigned int)a3;
  }
  return v11;
}
