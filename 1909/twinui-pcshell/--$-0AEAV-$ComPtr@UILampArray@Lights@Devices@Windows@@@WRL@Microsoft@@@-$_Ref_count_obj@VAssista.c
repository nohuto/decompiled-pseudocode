/*
 * XREFs of ??$?0AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@?$_Ref_count_obj@VAssistantLightBlock@Lighting@TwinUI@@@std@@QEAA@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@Z @ 0x180420A38
 * Callers:
 *     ??$make_shared@VAssistantLightBlock@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VAssistantLightBlock@Lighting@TwinUI@@@0@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@Z @ 0x1804215D0 (--$make_shared@VAssistantLightBlock@Lighting@TwinUI@@AEAV-$ComPtr@UILampArray@Lights@Devices@Win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<TwinUI::Lighting::AssistantLightBlock>::_Ref_count_obj<TwinUI::Lighting::AssistantLightBlock>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<TwinUI::Lighting::AssistantLightBlock>::`vftable';
  v3 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*a2);
  *(_QWORD *)(a1 + 16) = &TwinUI::Lighting::AssistantLightBlock::`vftable';
  *(_QWORD *)(a1 + 24) = v3;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return a1;
}
