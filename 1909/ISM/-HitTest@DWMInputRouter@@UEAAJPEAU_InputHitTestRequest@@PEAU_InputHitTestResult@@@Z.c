/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1800C43D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180005CF0 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x18000CD40 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800661CC (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?DecideRoutingModeFromHitTestResult@@YA?AW4INPUT_DESTINATION_ROUTING_MODE@@_N0PEBU_InputHitTestRequest@@@Z @ 0x1800C3180 (-DecideRoutingModeFromHitTestResult@@YA-AW4INPUT_DESTINATION_ROUTING_MODE@@_N0PEBU_InputHitTestR.c)
 *     ?GetContainerIdFromInputSitesList@@YA_NAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@PEAUCONTAINER_ID@@@Z @ 0x1800C330C (-GetContainerIdFromInputSitesList@@YA_NAEBV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$all.c)
 *     ?GetSpatialInputActivationPolicyFromInputSites@DWMInputRouter@@AEAA?AW4SPATIAL_INPUT_ACTIVATION_POLICY@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800C357C (-GetSpatialInputActivationPolicyFromInputSites@DWMInputRouter@@AEAA-AW4SPATIAL_INPUT_ACTIVATION_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned int ViewInstanceIdFromInputSiteList; // eax
  char ContainerIdFromInputSitesList; // al
  __int128 v11; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h]
  _OWORD v13[4]; // [rsp+6Ch] [rbp-9Ch]
  int v14; // [rsp+B4h] [rbp-54h]
  int v15; // [rsp+B8h] [rbp-50h]
  __int64 v16; // [rsp+BCh] [rbp-4Ch]
  _BYTE v17[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v18[3]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+E8h] [rbp-20h]
  __int128 v20; // [rsp+F0h] [rbp-18h]
  __int128 v21; // [rsp+100h] [rbp-8h]
  __int128 v22; // [rsp+110h] [rbp+8h]
  __int128 v23; // [rsp+120h] [rbp+18h]
  __int64 v24; // [rsp+130h] [rbp+28h]
  char v25; // [rsp+138h] [rbp+30h]
  int v26; // [rsp+13Ch] [rbp+34h]

  v6 = 0;
  memset_0(&v11, 0, 0x90uLL);
  LODWORD(v11) = *(_DWORD *)a2;
  v12 = *((_QWORD *)a2 + 2);
  v14 = *((_DWORD *)a2 + 22);
  v15 = *((_DWORD *)a2 + 23);
  v16 = *((_QWORD *)a2 + 12);
  v13[0] = *(_OWORD *)((char *)a2 + 24);
  v13[1] = *(_OWORD *)((char *)a2 + 40);
  v13[2] = *(_OWORD *)((char *)a2 + 56);
  v13[3] = *(_OWORD *)((char *)a2 + 72);
  HitTestHelper::HitTestRequestWithRetry(
    (__int64)v17,
    &v11,
    *((__int64 (__fastcall ****)(_QWORD, __int128 *))this + 29));
  if ( v17[0] )
  {
    *(_QWORD *)a3 = *((_QWORD *)a2 + 2);
    *((_QWORD *)a3 + 1) = v24;
    v7 = v19;
    v19 = 0LL;
    *((_QWORD *)a3 + 2) = v7;
    *(_OWORD *)((char *)a3 + 24) = v20;
    *(_OWORD *)((char *)a3 + 40) = v21;
    *(_OWORD *)((char *)a3 + 56) = v22;
    *(_OWORD *)((char *)a3 + 72) = v23;
    *((_DWORD *)a3 + 22) = v26;
    ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList(v18);
    *((_QWORD *)a3 + 12) = ViewInstanceIdFromInputSiteList;
    *((_DWORD *)a3 + 26) = DWMInputRouter::GetSpatialInputActivationPolicyFromInputSites(
                             ViewInstanceIdFromInputSiteList,
                             v18);
    ContainerIdFromInputSitesList = GetContainerIdFromInputSitesList(v18, (_DWORD *)a3 + 28);
    *((_DWORD *)a3 + 27) = DecideRoutingModeFromHitTestResult(v25, ContainerIdFromInputSitesList, (__int64)a2);
  }
  else
  {
    v6 = -2147467259;
  }
  if ( (unsigned __int64)(v19 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v19);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v18);
  return v6;
}
