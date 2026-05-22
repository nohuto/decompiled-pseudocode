/*
 * XREFs of ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x1800E0C54
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_64d1621e142b48138871a19a2ed9ec3f____Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___::Run @ 0x1800E23B0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_64d1621e142b481.c)
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_b4aac5c81e01c7ce07380680a5f1fd0d____Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___::Run @ 0x1800E2490 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_b4aac5c81e01c7c.c)
 * Callees:
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x1800E0ED8 (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@PEAVAsyncPVPrincipal@@@?$vector@V?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncPVPrincipal@@@Z @ 0x1800E1BE8 (--$_Emplace_reallocate@PEAVAsyncPVPrincipal@@@-$vector@V-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exce.c)
 *     ??0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXAEBUtagPROPVARIANT@@@Z@std@@V?$function@$$A6AXJ@Z@3@@Z @ 0x1800E9424 (--0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXAEBUtagPROPVARIANT@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall MPCConstantManagerClient::CreatePVPrincipal(MPCConstantManagerClient *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rsi
  void (__fastcall ***v11)(_QWORD); // rax
  _QWORD *v12; // rdx
  void (__fastcall ***v13)(_QWORD); // rcx
  __int64 v14; // rcx
  _QWORD v16[8]; // [rsp+30h] [rbp-71h] BYREF
  _QWORD v17[17]; // [rsp+70h] [rbp-31h] BYREF
  _QWORD *v18; // [rsp+110h] [rbp+6Fh] BYREF
  _QWORD *v19; // [rsp+118h] [rbp+77h]

  v19 = a3;
  v18 = a2;
  MPCConstantManagerClient::CleanupPrincipals(a1);
  v6 = operator new(0xC0uLL);
  v18 = v6;
  v7 = *a3;
  v8 = a3[1];
  v9 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(a3[1]);
    v9 = a3[1];
  }
  v17[0] = off_180141C98;
  v17[1] = v7;
  v17[2] = v8;
  v17[7] = v17;
  v10 = *a3;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v16[0] = off_180141C08;
  v16[1] = a1;
  v16[2] = v10;
  v16[3] = v9;
  v16[7] = v16;
  v11 = (void (__fastcall ***)(_QWORD))((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD *, _QWORD *, __int64))AsyncPVPrincipal::AsyncPVPrincipal)(
                                         v6,
                                         *((_QWORD *)a1 + 4),
                                         v16,
                                         v17,
                                         -2LL);
  v18 = v11;
  v12 = (_QWORD *)*((_QWORD *)a1 + 6);
  if ( *((_QWORD **)a1 + 7) == v12 )
  {
    std::vector<wil::com_ptr_t<AsyncPVPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<AsyncPVPrincipal *>(
      (char *)a1 + 40,
      v12,
      &v18);
  }
  else
  {
    *v12 = v11;
    if ( v11 )
      (**v11)(v11);
    *((_QWORD *)a1 + 6) += 8LL;
  }
  v13 = *(void (__fastcall ****)(_QWORD))(*((_QWORD *)a1 + 6) - 8LL);
  *a2 = v13;
  if ( v13 )
    (**v13)(v13);
  v14 = a3[1];
  if ( v14 )
  {
    a3[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return a2;
}
