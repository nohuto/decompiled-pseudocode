/*
 * XREFs of ??$make_shared@VAssistantLightBlock@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VAssistantLightBlock@Lighting@TwinUI@@@0@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@Z @ 0x18039C6CC
 * Callers:
 *     ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x18039C7D8 (-GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV-$ComPtr@UILampArray@Lights@Device.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180084C08 (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@?$_Ref_count_obj@VAssistantLightBlock@Lighting@TwinUI@@@std@@QEAA@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@Z @ 0x18039BB38 (--$-0AEAV-$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@-$_Ref_count_obj@VAssista.c)
 */

__int64 *__fastcall std::make_shared<TwinUI::Lighting::AssistantLightBlock,Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray> &>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *result; // rax
  void *v7; // [rsp+30h] [rbp+8h]

  v7 = operator new(0x20uLL);
  v4 = std::_Ref_count_obj<TwinUI::Lighting::AssistantLightBlock>::_Ref_count_obj<TwinUI::Lighting::AssistantLightBlock>(
         (__int64)v7,
         a2);
  a1[1] = v4;
  v5 = v4 + 16;
  result = a1;
  *a1 = v5;
  return result;
}
