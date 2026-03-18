/*
 * XREFs of ??$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAPEAU_D3D11_PARAMETER_DESC@@QEAU2@AEBU2@@Z @ 0x1801B6C68
 * Callers:
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800321CC (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 * Callees:
 *     ?_Change_array@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAXQEAU_D3D11_PARAMETER_DESC@@_K1@Z @ 0x180033018 (-_Change_array@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<_D3D11_PARAMETER_DESC>::_Emplace_reallocate<_D3D11_PARAMETER_DESC const &>(
        __int64 *a1,
        char *a2,
        __int64 a3)
{
  __int64 v4; // r9
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  SIZE_T v13; // rcx
  char *v14; // rdi
  char *v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r8
  const void *v18; // rdx
  size_t v19; // r8

  v4 = (__int64)&a2[-*a1];
  v7 = a1[1] - *a1;
  v8 = v4 / 56;
  if ( v7 / 56 == 0x492492492492492LL )
    std::_Xlength_error((const char *)v7);
  v9 = v7 / 56 + 1;
  v10 = (a1[2] - *a1) / 56;
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v13 = 56 * v12;
  if ( v12 > 0x492492492492492LL )
    v13 = -1LL;
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = v14;
  v16 = 56 * v8;
  *(_OWORD *)&v14[v16] = *(_OWORD *)a3;
  *(_OWORD *)&v14[v16 + 16] = *(_OWORD *)(a3 + 16);
  *(_OWORD *)&v14[v16 + 32] = *(_OWORD *)(a3 + 32);
  *(_QWORD *)&v14[v16 + 48] = *(_QWORD *)(a3 + 48);
  v17 = a1[1];
  v18 = (const void *)*a1;
  if ( a2 == (char *)v17 )
  {
    v19 = v17 - (_QWORD)v18;
  }
  else
  {
    memmove_0(v14, v18, (size_t)&a2[-*a1]);
    v19 = a1[1] - (_QWORD)a2;
    v18 = a2;
    v15 = &v14[v16 + 56];
  }
  memmove_0(v15, v18, v19);
  std::vector<_D3D11_PARAMETER_DESC>::_Change_array(a1, (__int64)v14, v9, v12);
  return v16 + *a1;
}
