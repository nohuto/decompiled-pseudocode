/*
 * XREFs of ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x1800E0DC0
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_806f78d28c8f10a2fa7e8f1910bc87ed____Windows::Internal::CNoResult_::Run @ 0x1800E2220 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_806f78d28c8f10a.c)
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_891e6175c7f2ccc3599c4db7fcbe05a3____Windows::Internal::CNoResult_::Run @ 0x1800E2300 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_891e6175c7f2ccc.c)
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_d4d997c91d9ada6146019f0263a22bf4____Windows::Internal::CNoResult_::Run @ 0x1800E2580 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_d4d997c91d9ada6.c)
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_0020444391bc65c77824af03bb11f5f3____Windows::Internal::CNoResult_::Run @ 0x1800E2680 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_0020444391bc65c.c)
 * Callees:
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x1800E0ED8 (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@PEAVAsyncPVPrincipal@@@?$vector@V?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncPVPrincipal@@@Z @ 0x1800E1BE8 (--$_Emplace_reallocate@PEAVAsyncPVPrincipal@@@-$vector@V-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exce.c)
 *     ??0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXJ@Z@std@@@Z @ 0x1800E9CE4 (--0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXJ@Z@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall MPCConstantManagerClient::CreateHRPrincipal(MPCConstantManagerClient *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbx
  void (__fastcall ***v9)(_QWORD); // rax
  _QWORD *v10; // rdx
  void (__fastcall ***v11)(_QWORD); // rcx
  __int64 v12; // rcx
  _QWORD v14[9]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD *v15; // [rsp+C8h] [rbp+48h] BYREF
  _QWORD *v16; // [rsp+D0h] [rbp+50h]

  v16 = a3;
  v15 = a2;
  MPCConstantManagerClient::CleanupPrincipals(a1);
  v6 = operator new(0x80uLL);
  v15 = v6;
  v7 = *a3;
  v8 = a3[1];
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(a3[1]);
  v14[0] = off_180141C68;
  v14[1] = v7;
  v14[2] = v8;
  v14[7] = v14;
  v9 = (void (__fastcall ***)(_QWORD))AsyncHRESULTPrincipal::AsyncHRESULTPrincipal(v6, *((_QWORD *)a1 + 4), v14);
  v15 = v9;
  v10 = (_QWORD *)*((_QWORD *)a1 + 9);
  if ( *((_QWORD **)a1 + 10) == v10 )
  {
    std::vector<wil::com_ptr_t<AsyncPVPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<AsyncPVPrincipal *>(
      (char *)a1 + 64,
      v10,
      &v15);
  }
  else
  {
    *v10 = v9;
    if ( v9 )
      (**v9)(v9);
    *((_QWORD *)a1 + 9) += 8LL;
  }
  v11 = *(void (__fastcall ****)(_QWORD))(*((_QWORD *)a1 + 9) - 8LL);
  *a2 = v11;
  if ( v11 )
    (**v11)(v11);
  v12 = a3[1];
  if ( v12 )
  {
    a3[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return a2;
}
