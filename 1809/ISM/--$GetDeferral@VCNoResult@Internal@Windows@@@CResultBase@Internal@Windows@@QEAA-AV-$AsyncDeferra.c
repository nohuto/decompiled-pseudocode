/*
 * XREFs of ??$GetDeferral@VCNoResult@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA?AV?$AsyncDeferral@VCNoResult@Internal@Windows@@@12@AEAVCNoResult@12@@Z @ 0x1800E161C
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_806f78d28c8f10a2fa7e8f1910bc87ed____Windows::Internal::CNoResult_::Run @ 0x1800E2220 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_806f78d28c8f10a.c)
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_891e6175c7f2ccc3599c4db7fcbe05a3____Windows::Internal::CNoResult_::Run @ 0x1800E2300 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_891e6175c7f2ccc.c)
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_64d1621e142b48138871a19a2ed9ec3f____Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___::Run @ 0x1800E23B0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_64d1621e142b481.c)
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_b4aac5c81e01c7ce07380680a5f1fd0d____Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___::Run @ 0x1800E2490 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_b4aac5c81e01c7c.c)
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_d4d997c91d9ada6146019f0263a22bf4____Windows::Internal::CNoResult_::Run @ 0x1800E2580 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_d4d997c91d9ada6.c)
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_0020444391bc65c77824af03bb11f5f3____Windows::Internal::CNoResult_::Run @ 0x1800E2680 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_0020444391bc65c.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::CResultBase::GetDeferral<Windows::Internal::CNoResult>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v6; // rcx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))a1)(
    *(_QWORD *)a1,
    &GUID_5fb52445_1407_4f25_9aa4_ac25bb3a9606,
    &v8);
  *(_BYTE *)(a1 + 9) = 1;
  *a2 = a3;
  v6 = v8;
  a2[1] = v8;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v6 = v8;
  }
  if ( v6 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a2;
}
