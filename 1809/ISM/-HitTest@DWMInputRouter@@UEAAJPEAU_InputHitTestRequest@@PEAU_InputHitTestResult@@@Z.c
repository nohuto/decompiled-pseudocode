/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18008A720
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180006260 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 * Callees:
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001DF04 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18001E104 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?GetSpatialInputActivationPolicyFromInputSites@DWMInputRouter@@AEAA?AW4SPATIAL_INPUT_ACTIVATION_POLICY@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18008A8CC (-GetSpatialInputActivationPolicyFromInputSites@DWMInputRouter@@AEAA-AW4SPATIAL_INPUT_ACTIVATION_.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180090FF8 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rax
  unsigned int ViewInstanceIdFromInputSiteList; // eax
  _DWORD v10[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h]
  _OWORD v12[7]; // [rsp+70h] [rbp-98h]
  int v13; // [rsp+E4h] [rbp-24h]
  int v14; // [rsp+F0h] [rbp-18h]
  __int64 v15; // [rsp+F4h] [rbp-14h]
  _BYTE v16[8]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v17[24]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v18; // [rsp+128h] [rbp+20h]
  __int128 v19; // [rsp+130h] [rbp+28h]
  __int128 v20; // [rsp+140h] [rbp+38h]
  __int128 v21; // [rsp+150h] [rbp+48h]
  __int128 v22; // [rsp+160h] [rbp+58h]
  __int64 v23; // [rsp+170h] [rbp+68h]
  char v24; // [rsp+178h] [rbp+70h]
  int v25; // [rsp+17Ch] [rbp+74h]
  __int128 v26; // [rsp+180h] [rbp+78h]
  __int128 v27; // [rsp+190h] [rbp+88h]
  __int64 v28; // [rsp+1A0h] [rbp+98h]

  v6 = 0;
  memset_0(v10, 0, 0xC8uLL);
  v10[0] = *(_DWORD *)a2;
  v11 = *((_QWORD *)a2 + 2);
  v13 = *((_DWORD *)a2 + 23);
  v14 = *((_DWORD *)a2 + 24);
  v15 = *(_QWORD *)((char *)a2 + 100);
  v12[0] = *(_OWORD *)((char *)a2 + 28);
  v12[1] = *(_OWORD *)((char *)a2 + 44);
  v12[2] = *(_OWORD *)((char *)a2 + 60);
  v12[3] = *(_OWORD *)((char *)a2 + 76);
  HitTestHelper::HitTestRequestWithRetry(v16, v10, *((_QWORD *)this + 29));
  if ( v16[0] )
  {
    *(_QWORD *)a3 = *((_QWORD *)a2 + 2);
    *((_QWORD *)a3 + 1) = v23;
    v7 = v18;
    v18 = 0LL;
    *((_QWORD *)a3 + 2) = v7;
    *(_OWORD *)((char *)a3 + 24) = v19;
    *(_OWORD *)((char *)a3 + 40) = v20;
    *(_OWORD *)((char *)a3 + 56) = v21;
    *(_OWORD *)((char *)a3 + 72) = v22;
    *((_DWORD *)a3 + 22) = v25;
    *((_OWORD *)a3 + 6) = v26;
    *((_OWORD *)a3 + 7) = v27;
    *((_QWORD *)a3 + 16) = v28;
    *((_DWORD *)a3 + 34) &= ~1u;
    *((_DWORD *)a3 + 34) |= v24 & 1;
    ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList((__int64)v17);
    *((_QWORD *)a3 + 18) = ViewInstanceIdFromInputSiteList;
    *((_DWORD *)a3 + 38) = DWMInputRouter::GetSpatialInputActivationPolicyFromInputSites(
                             ViewInstanceIdFromInputSiteList,
                             v17);
  }
  else
  {
    v6 = -2147467259;
  }
  if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v18);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v17);
  return v6;
}
