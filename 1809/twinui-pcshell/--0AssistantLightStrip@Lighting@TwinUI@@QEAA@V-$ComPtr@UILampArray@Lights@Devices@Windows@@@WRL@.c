/*
 * XREFs of ??0AssistantLightStrip@Lighting@TwinUI@@QEAA@V?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@V?$vector@HV?$allocator@H@std@@@std@@1@Z @ 0x18039D790
 * Callers:
 *     ??$?0AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV34@@?$_Ref_count_obj@VAssistantLightStrip@Lighting@TwinUI@@@std@@QEAA@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@1@1@Z @ 0x18039BBC0 (--$-0AEAV-$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV-$vector@HV-$allocator.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180083574 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$vector@HV?$allocator@H@std@@@std@@QEAA@AEBV01@@Z @ 0x18013D3B4 (--0-$vector@HV-$allocator@H@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@_KAEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x18039D6FC (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@_KAEBV-$allocato.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 v12[10]; // [rsp+28h] [rbp-50h] BYREF

  *(_QWORD *)a1 = &TwinUI::Lighting::AssistantLightStrip::`vftable';
  v8 = *a2;
  *(_QWORD *)(a1 + 8) = *a2;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  std::vector<int>::vector<int>((void **)(a1 + 16), a3);
  std::vector<int>::vector<int>((void **)(a1 + 40), a4);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v9 = std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(
         v12,
         (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 2);
  if ( (__int64 *)(a1 + 64) != v9 )
  {
    std::vector<Windows::UI::Color>::_Tidy(a1 + 64);
    *(_QWORD *)(a1 + 64) = *v9;
    *(_QWORD *)(a1 + 72) = v9[1];
    *(_QWORD *)(a1 + 80) = v9[2];
    *v9 = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)v12);
  v10 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  std::vector<Windows::UI::Color>::_Tidy(a3);
  std::vector<Windows::UI::Color>::_Tidy(a4);
  return a1;
}
