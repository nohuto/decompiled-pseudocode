/*
 * XREFs of ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18008B700
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18001E104 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180090FF8 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     ?ToExternalResult@HitTestHelper@@CA?AUHitTestResult@@$$QEAUInternalHitTestResult@1@@Z @ 0x180091558 (-ToExternalResult@HitTestHelper@@CA-AUHitTestResult@@$$QEAUInternalHitTestResult@1@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 DWMInputRouter::HitTestForPointAndType(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rdi
  int v7; // eax
  __int64 v8; // r8
  _BYTE v10[8]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h]
  int v13; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v14; // [rsp+D0h] [rbp-38h]
  __int64 v15; // [rsp+D8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]
  __int64 v17; // [rsp+1D0h] [rbp+C8h] BYREF
  va_list va; // [rsp+1D0h] [rbp+C8h]
  __int64 v19; // [rsp+1D8h] [rbp+D0h]
  va_list va1; // [rsp+1E0h] [rbp+D8h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  v3 = v17;
  if ( !v17 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 216) + 24LL))(
           *(_QWORD *)(a1 + 216),
           (__int64 *)va);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x697,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v7);
      JUMPOUT(0x18008B7F5LL);
    }
    v3 = v17;
  }
  memset_0(&v13, 0, 0xC8uLL);
  v8 = *(_QWORD *)(a1 + 224);
  v13 = v19;
  v15 = a3;
  v14 = v3;
  HitTestHelper::HitTestRequestWithRetry(v10, &v13, v8);
  HitTestHelper::ToExternalResult(a2, v10);
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v12);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v11);
  return a2;
}
