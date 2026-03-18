/*
 * XREFs of ??$_Emplace_reallocate@AEBVCShapeRenderTask@@@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@AEBV2@@Z @ 0x180252F3C
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x180253928 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Calculate_growth@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_K_K@Z @ 0x1802545FC (-_Calculate_growth@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_.c)
 *     ?_Change_array@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAVCShapeRenderTask@@_K1@Z @ 0x18025464C (-_Change_array@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAV.c)
 */

__int64 __fastcall std::vector<CShapeRenderTask>::_Emplace_reallocate<CShapeRenderTask const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  SIZE_T v12; // rcx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r10
  _OWORD *v15; // rax
  _OWORD *v16; // r10
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // xmm1_8
  char *v21; // rcx
  __int64 v23; // xmm1_8

  v3 = a2;
  v5 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = v5 / 56;
  v9 = v7 / 56;
  if ( v7 / 56 == 0x492492492492492LL )
    std::_Xlength_error((const char *)v7);
  v10 = v9 + 1;
  v11 = std::vector<CShapeRenderTask>::_Calculate_growth(a1, v9 + 1);
  v12 = 56 * v11;
  v13 = v11;
  if ( v11 > v14 )
    v12 = -1LL;
  v15 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v16 = v15;
  v17 = 56 * v8;
  *(_OWORD *)((char *)v15 + v17) = *(_OWORD *)a3;
  *(_OWORD *)((char *)v15 + v17 + 16) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)((char *)v15 + v17 + 32) = *(_OWORD *)(a3 + 32);
  *(_QWORD *)((char *)v15 + v17 + 48) = *(_QWORD *)(a3 + 48);
  v18 = a1[1];
  v19 = *a1;
  if ( v3 == v18 )
  {
    while ( v19 != v18 )
    {
      *v15 = *(_OWORD *)v19;
      v15 = (_OWORD *)((char *)v15 + 56);
      *(_OWORD *)((char *)v15 - 40) = *(_OWORD *)(v19 + 16);
      *(_OWORD *)((char *)v15 - 24) = *(_OWORD *)(v19 + 32);
      v23 = *(_QWORD *)(v19 + 48);
      v19 += 56LL;
      *((_QWORD *)v15 - 1) = v23;
    }
  }
  else
  {
    if ( v19 != v3 )
    {
      do
      {
        *v15 = *(_OWORD *)v19;
        v15 = (_OWORD *)((char *)v15 + 56);
        *(_OWORD *)((char *)v15 - 40) = *(_OWORD *)(v19 + 16);
        *(_OWORD *)((char *)v15 - 24) = *(_OWORD *)(v19 + 32);
        v20 = *(_QWORD *)(v19 + 48);
        v19 += 56LL;
        *((_QWORD *)v15 - 1) = v20;
      }
      while ( v19 != v3 );
      v18 = a1[1];
    }
    if ( v3 != v18 )
    {
      v21 = (char *)v16 + v17 - v3;
      do
      {
        *(_OWORD *)&v21[v3 + 56] = *(_OWORD *)v3;
        *(_OWORD *)&v21[v3 + 72] = *(_OWORD *)(v3 + 16);
        *(_OWORD *)&v21[v3 + 88] = *(_OWORD *)(v3 + 32);
        *(_QWORD *)&v21[v3 + 104] = *(_QWORD *)(v3 + 48);
        v3 += 56LL;
      }
      while ( v3 != v18 );
    }
  }
  std::vector<CShapeRenderTask>::_Change_array(a1, v16, v10, v13);
  return v17 + *a1;
}
