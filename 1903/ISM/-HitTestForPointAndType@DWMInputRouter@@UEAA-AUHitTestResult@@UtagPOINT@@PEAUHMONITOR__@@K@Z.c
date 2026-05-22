/*
 * XREFs of ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x1800C47B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180005CF0 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x18000CC40 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?ToExternalResult@HitTestHelper@@CA?AUHitTestResult@@$$QEAUInternalHitTestResult@1@@Z @ 0x1800C7F90 (-ToExternalResult@HitTestHelper@@CA-AUHitTestResult@@$$QEAUInternalHitTestResult@1@@Z.c)
 */

__int64 __fastcall DWMInputRouter::HitTestForPointAndType(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdi
  int v9; // eax
  __int64 (__fastcall ***v10)(_QWORD, __int128 *); // r8
  int v12[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h]
  _BYTE v15[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v16[24]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v17; // [rsp+E0h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v5 = a4;
  *(_QWORD *)v12 = a4;
  if ( !a4 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216), v12);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1833LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v5 = *(_QWORD *)v12;
  }
  memset_0(&v13, 0, 0x90uLL);
  v10 = *(__int64 (__fastcall ****)(_QWORD, __int128 *))(a1 + 224);
  LODWORD(v13) = a5;
  v14 = a3;
  *((_QWORD *)&v13 + 1) = v5;
  HitTestHelper::HitTestRequestWithRetry((__int64)v15, &v13, v10);
  HitTestHelper::ToExternalResult(a2, v15);
  if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v17);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v16);
  return a2;
}
