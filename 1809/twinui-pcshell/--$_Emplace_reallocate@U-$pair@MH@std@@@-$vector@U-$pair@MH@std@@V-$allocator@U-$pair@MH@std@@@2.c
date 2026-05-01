/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@MH@std@@@?$vector@U?$pair@MH@std@@V?$allocator@U?$pair@MH@std@@@2@@std@@QEAAPEAU?$pair@MH@1@QEAU21@$$QEAU21@@Z @ 0x18039BDAC
 * Callers:
 *     ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x18039C7D8 (-GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV-$ComPtr@UILampArray@Lights@Device.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@PEAUIApplicationView@@V?$allocator@PEAUIApplicationView@@@std@@@std@@AEAAXQEAPEAUIApplicationView@@_K1@Z @ 0x18013EBB8 (-_Change_array@-$vector@PEAUIApplicationView@@V-$allocator@PEAUIApplicationView@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::vector<std::pair<float,int>>::_Emplace_reallocate<std::pair<float,int>>(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r10
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _QWORD *v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // r11
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rdx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rsi
  __int64 result; // rax
  void *v28; // [rsp+68h] [rbp+10h]

  v6 = (__int64)(a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = (__int64)v13;
  v28 = v13;
  try
  {
    v13[v6] = *a3;
    v15 = a1[1];
    v16 = *a1;
    v17 = (_QWORD *)v14;
    v18 = 0LL;
    if ( a2 == v15 )
    {
      v19 = (v15 - v16 + 7) >> 3;
      if ( v16 > v15 )
        v19 = 0LL;
      if ( v19 )
      {
        v20 = v16 - v14;
        do
        {
          *v17 = *(_QWORD *)((char *)v17 + v20);
          ++v17;
          ++v18;
        }
        while ( v18 != v19 );
      }
    }
    else
    {
      v21 = 0LL;
      v22 = (a2 - v16 + 7) >> 3;
      if ( v16 > a2 )
        v22 = 0LL;
      if ( v22 )
      {
        v23 = v16 - v14;
        do
        {
          *v17 = *(_QWORD *)((char *)v17 + v23);
          ++v17;
          ++v21;
        }
        while ( v21 != v22 );
        v15 = a1[1];
      }
      v24 = (_QWORD *)(v14 + 8 * (v6 + 1));
      v25 = (v15 - a2 + 7) >> 3;
      if ( a2 > v15 )
        v25 = 0LL;
      if ( v25 )
      {
        v26 = a2 - (_QWORD)v24;
        do
        {
          *v24 = *(_QWORD *)((char *)v24 + v26);
          ++v24;
          ++v18;
        }
        while ( v18 != v25 );
      }
    }
    std::vector<IApplicationView *>::_Change_array((__int64)a1, v14, v8, v11);
    result = *a1 + 8 * v6;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v28, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  return result;
}
