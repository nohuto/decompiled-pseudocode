/*
 * XREFs of ??$?0AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV34@@?$_Ref_count_obj@VAssistantLightStrip@Lighting@TwinUI@@@std@@QEAA@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@1@1@Z @ 0x18039BBC0
 * Callers:
 *     ??$make_shared@VAssistantLightStrip@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV78@@std@@YA?AV?$shared_ptr@VAssistantLightStrip@Lighting@TwinUI@@@0@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@0@1@Z @ 0x18039C718 (--$make_shared@VAssistantLightStrip@Lighting@TwinUI@@AEAV-$ComPtr@UILampArray@Lights@Devices@Win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$vector@HV?$allocator@H@std@@@std@@QEAA@AEBV01@@Z @ 0x18013D3B4 (--0-$vector@HV-$allocator@H@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0AssistantLightStrip@Lighting@TwinUI@@QEAA@V?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@V?$vector@HV?$allocator@H@std@@@std@@1@Z @ 0x18039D790 (--0AssistantLightStrip@Lighting@TwinUI@@QEAA@V-$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Ref_count_obj<TwinUI::Lighting::AssistantLightStrip>::_Ref_count_obj<TwinUI::Lighting::AssistantLightStrip>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  void **v7; // r14
  void **v8; // rbx
  __int64 v9; // rcx
  void *v11[3]; // [rsp+28h] [rbp-60h] BYREF
  void *v12; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+98h] [rbp+10h] BYREF
  void **v14; // [rsp+A0h] [rbp+18h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<TwinUI::Lighting::AssistantLightStrip>::`vftable';
  v14 = v11;
  v7 = std::vector<int>::vector<int>(v11, a4);
  v8 = std::vector<int>::vector<int>(&v12, a3);
  v9 = *a2;
  v13 = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip(a1 + 16, &v13, v8, v7, -2LL);
  return a1;
}
