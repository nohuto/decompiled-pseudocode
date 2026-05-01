/*
 * XREFs of ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x18039BC80
 * Callers:
 *     ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x18039C7D8 (-GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV-$ComPtr@UILampArray@Lights@Device.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     ?_Change_array@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@AEAAXQEAW4LayoutSKU@SharedStartModel@@_K1@Z @ 0x18013ECD8 (-_Change_array@-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@.c)
 *     ?_Calculate_growth@?$vector@HV?$allocator@H@std@@@std@@AEBA_K_K@Z @ 0x18039CDE0 (-_Calculate_growth@-$vector@HV-$allocator@H@std@@@std@@AEBA_K_K@Z.c)
 */

__int64 __fastcall std::vector<int>::_Emplace_reallocate<int>(const void **a1, _BYTE *a2, _DWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  size_t v10; // rcx
  unsigned __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rsi
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8
  __int64 result; // rax
  void *v19; // [rsp+68h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = std::vector<int>::_Calculate_growth(a1, v7 + 1);
  v10 = 4 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v13 = (__int64)v12;
  v19 = v12;
  try
  {
    *((_DWORD *)v12 + v6) = *a3;
    v14 = a1[1];
    v15 = *a1;
    v16 = v12;
    if ( a2 == v14 )
    {
      v17 = v14 - v15;
    }
    else
    {
      memmove_0(v12, v15, a2 - (_BYTE *)*a1);
      v16 = (void *)(v13 + 4 * (v6 + 1));
      v17 = (_BYTE *)a1[1] - a2;
      v15 = a2;
    }
    memmove_0(v16, v15, v17);
    std::vector<enum SharedStartModel::LayoutSKU>::_Change_array((__int64)a1, v13, v8, v9);
    result = (__int64)*a1 + 4 * v6;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(4 * v9));
    throw;
  }
  return result;
}
