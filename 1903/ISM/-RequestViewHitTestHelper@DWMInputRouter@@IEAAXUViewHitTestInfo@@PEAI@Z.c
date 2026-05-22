/*
 * XREFs of ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1800C5404
 * Callers:
 *     ?RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@@Z @ 0x1800C5380 (-RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@.c)
 *     ?RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z @ 0x1800C5510 (-RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180005CF0 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x18000CC40 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18006642C (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@CA?BHW4InputType@@@Z @ 0x1800C7F5C (-ConvertInputTypeToPointerType@HitTestHelper@@CA-BHW4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DWMInputRouter::RequestViewHitTestHelper(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // r14
  int v6; // edi
  __int64 v7; // [rsp+28h] [rbp-E0h]
  _BYTE v8[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v9[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+58h] [rbp-B0h]
  __int128 v11; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v12; // [rsp+C8h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 12);
  v5 = *(unsigned int *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) )
    v6 = HitTestHelper::ConvertInputTypeToPointerType();
  else
    v6 = 0;
  memset_0(&v11, 0, 0x90uLL);
  v12 = v7;
  *((_QWORD *)&v11 + 1) = v5;
  LODWORD(v11) = v6;
  HitTestHelper::HitTestRequestWithRetry((__int64)v8, &v11, *(__int64 (__fastcall ****)(_QWORD, __int128 *))(a1 + 232));
  if ( v8[0] )
    *a3 = InputSiteManager::GetViewInstanceIdFromInputSiteList(v9);
  else
    *a3 = 0;
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v10);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v9);
}
