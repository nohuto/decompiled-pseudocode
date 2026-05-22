/*
 * XREFs of ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18002F204
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18002F430 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x18002F654 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180006088 (--$_Emplace_reallocate@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@.c)
 *     ??$Make@VInputSite@@AEAW4InputSiteIdNamespace@@AEA_KPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAW4InputSiteIdNamespace@@AEA_K$$QEAPEAVInputSiteManager@@@Z @ 0x18002F0D8 (--$Make@VInputSite@@AEAW4InputSiteIdNamespace@@AEA_KPEAVInputSiteManager@@@Details@WRL@Microsoft.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *InputSiteManager::CreateInputSiteFromId(__int64 a1, __int64 *a2, int a3, ...)
{
  __int64 v5; // rax
  _BYTE *v6; // rdx
  void (__fastcall ***v8)(_QWORD); // [rsp+50h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+58h] [rbp+10h]
  int v10; // [rsp+60h] [rbp+18h] BYREF
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v10 = a3;
  v9 = a2;
  v8 = (void (__fastcall ***)(_QWORD))a1;
  Microsoft::WRL::Details::Make<InputSite,enum InputSiteIdNamespace &,unsigned __int64 &,InputSiteManager *>(
    a2,
    &v10,
    (__int64 *)va,
    &v8);
  v5 = *a2;
  v8 = (void (__fastcall ***)(_QWORD))*a2;
  v6 = *(_BYTE **)(a1 + 64);
  if ( *(_BYTE **)(a1 + 72) == v6 )
  {
    std::vector<InputSite *>::_Emplace_reallocate<InputSite *>((void **)(a1 + 56), v6, &v8);
  }
  else
  {
    *(_QWORD *)v6 = v5;
    *(_QWORD *)(a1 + 64) += 8LL;
  }
  return a2;
}
