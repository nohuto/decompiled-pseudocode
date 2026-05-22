/*
 * XREFs of ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18002F430
 * Callers:
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18000CFF0 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801040D0 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 * Callees:
 *     ??0LegacyInputSinkData@@QEAA@PEAX@Z @ 0x1800018A0 (--0LegacyInputSinkData@@QEAA@PEAX@Z.c)
 *     ??0LegacyInputSinkData@@QEAA@$$QEAV0@@Z @ 0x180001A90 (--0LegacyInputSinkData@@QEAA@$$QEAV0@@Z.c)
 *     ??$?9VInputSite@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@VInputSite@@@01@$$T@Z @ 0x180001DE0 (--$-9VInputSite@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@VInputSite@@@01@$$T@Z.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180001E00 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180027178 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18002F204 (-CreateInputSiteFromId@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSite.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x18002F390 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18002F894 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputSiteManager::GetInputSiteFromInputSinkHandle(__int64 a1, __int64 *a2, void *a3)
{
  __int64 v5; // rax
  int v6; // ecx
  __int64 *v7; // rbx
  _DWORD *CompositionInputQueue; // rcx
  __int64 *InputSiteFromId; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h]
  __int64 v17; // [rsp+48h] [rbp-C0h]
  __int64 *v18; // [rsp+50h] [rbp-B8h]
  _QWORD v19[44]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v21; // [rsp+1C8h] [rbp+C0h] BYREF

  v17 = -2LL;
  v18 = a2;
  LODWORD(v16) = 0;
  LegacyInputSinkData::LegacyInputSinkData((LegacyInputSinkData *)v19, a3);
  v15 = (__int64)*LegacyInputSinkData::GetLuid((LegacyInputSinkData *)v19);
  InputSiteManager::GetInputSiteFromId(a1, a2, 0, v15, 0);
  LODWORD(v16) = 1;
  if ( !*a2 )
  {
    v5 = 0LL;
    v6 = 1;
    do
      *((_DWORD *)v20 + v5++) = v6++;
    while ( v5 < 4 );
    v7 = v20;
    do
    {
      CompositionInputQueue = (_DWORD *)LegacyInputSinkData::GetCompositionInputQueue(v19, *(unsigned int *)v7);
      if ( (unsigned int)(*CompositionInputQueue - 2) <= 1 )
      {
        InputSiteFromId = InputSiteManager::GetInputSiteFromId(
                            a1,
                            &v15,
                            1,
                            (unsigned int)CompositionInputQueue[2],
                            CompositionInputQueue[4]);
        Microsoft::WRL::ComPtr<InputSite>::operator=(a2, (char *)InputSiteFromId);
        v10 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        if ( Microsoft::WRL::operator!=<InputSite>(a2) )
          break;
      }
      v7 = (__int64 *)((char *)v7 + 4);
    }
    while ( v7 != &v21 );
    if ( !*a2 )
    {
      v15 = (__int64)*LegacyInputSinkData::GetLuid((LegacyInputSinkData *)v19);
      v11 = InputSiteManager::CreateInputSiteFromId(a1, v20, 0, v15);
      Microsoft::WRL::ComPtr<InputSite>::operator=(a2, (char *)v11);
      v12 = v20[0];
      if ( v20[0] )
      {
        v20[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  v13 = *a2;
  if ( !*(_BYTE *)(*a2 + 384) )
  {
    LegacyInputSinkData::LegacyInputSinkData(v13 + 32, (__int64)v19);
    *(_BYTE *)(v13 + 384) = 1;
  }
  if ( (unsigned __int64)(v19[0] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v19[0]);
  return a2;
}
