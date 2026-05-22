/*
 * XREFs of ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x18008C0D0
 * Callers:
 *     ?RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z @ 0x18008C1F0 (-RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z.c)
 *     ?RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@@Z @ 0x18008C230 (-RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@.c)
 * Callees:
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001DF04 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18001E104 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180090FF8 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DWMInputRouter::RequestViewHitTestHelper(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // r15
  int v6; // eax
  int ViewInstanceIdFromInputSiteList; // edi
  int v8; // ebx
  __int64 v9; // [rsp+28h] [rbp-E0h]
  _QWORD v10[26]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v11[8]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v12[24]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v13; // [rsp+128h] [rbp+20h]

  v9 = *(_QWORD *)(a2 + 12);
  v5 = *(unsigned int *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 24);
  ViewInstanceIdFromInputSiteList = 0;
  if ( v6 )
  {
    if ( (v6 & 8) != 0 )
    {
      v8 = 2;
    }
    else if ( (v6 & 0x20) != 0 )
    {
      v8 = 5;
    }
    else
    {
      v8 = 3;
      if ( (v6 & 0x10) == 0 )
        v8 = (v6 & 2) != 0 ? 4 : 1;
    }
  }
  else
  {
    v8 = 0;
  }
  memset_0(v10, 0, 0xC8uLL);
  v10[2] = v9;
  v10[1] = v5;
  LODWORD(v10[0]) = v8;
  HitTestHelper::HitTestRequestWithRetry(v11, v10, *(_QWORD *)(a1 + 232));
  if ( v11[0] )
    ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList((__int64)v12);
  *a3 = ViewInstanceIdFromInputSiteList;
  if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v13);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v12);
}
