/*
 * XREFs of ??0?$vector@HV?$allocator@H@std@@@std@@QEAA@AEBV01@@Z @ 0x18013D3B4
 * Callers:
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x18013DCCC (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 *     ??$?0AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV34@@?$_Ref_count_obj@VAssistantLightStrip@Lighting@TwinUI@@@std@@QEAA@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@1@1@Z @ 0x18039BBC0 (--$-0AEAV-$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV-$vector@HV-$allocator.c)
 *     ??0AssistantLightStrip@Lighting@TwinUI@@QEAA@V?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@V?$vector@HV?$allocator@H@std@@@std@@1@Z @ 0x18039D790 (--0AssistantLightStrip@Lighting@TwinUI@@QEAA@V-$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 */

void **__fastcall std::vector<int>::vector<int>(void **a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  size_t v5; // rbx
  _QWORD *v6; // rax
  char *v7; // rax
  char *v8; // rdi
  size_t v9; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v5 = 4 * v4;
    v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
    *a1 = v6;
    a1[1] = v6;
    v7 = (char *)*a1;
    a1[2] = (char *)*a1 + v5;
    try
    {
      v8 = v7;
      v9 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
      memmove_0(v7, *(const void **)a2, v9);
      a1[1] = &v8[v9];
    }
    catch ( ... )
    {
      std::vector<Windows::UI::Color>::_Tidy((__int64)a1);
      throw;
    }
  }
  return a1;
}
