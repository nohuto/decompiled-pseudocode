/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x18025163C
 * Callers:
 *     ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x180251C18 (-CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Calculate_growth@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_K_K@Z @ 0x180252E8C (-_Calculate_growth@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_.c)
 *     ?_Change_array@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAVCShapeRenderTask@@_K1@Z @ 0x180252EDC (-_Change_array@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAV.c)
 */

__int64 __fastcall std::vector<CShapeRenderTask>::_Emplace_reallocate<>(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  SIZE_T v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r10
  _OWORD *v13; // rax
  __int64 v14; // rsi
  _OWORD *v15; // r10
  __int64 v16; // r8
  __int64 v17; // rcx
  _OWORD *v18; // rdx
  __int64 v19; // xmm1_8
  __int64 v20; // xmm1_8
  char *v21; // rcx

  v2 = a2;
  v3 = a2 - *a1;
  v5 = a1[1] - *a1;
  v6 = v3 / 56;
  v7 = v5 / 56;
  if ( v5 / 56 == 0x492492492492492LL )
    std::_Xlength_error((const char *)v5);
  v8 = v7 + 1;
  v9 = std::vector<CShapeRenderTask>::_Calculate_growth(a1, v7 + 1);
  v10 = 56 * v9;
  v11 = v9;
  if ( v9 > v12 )
    v10 = -1LL;
  v13 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v14 = 56 * v6;
  v15 = v13;
  *(_DWORD *)((char *)v13 + v14) = 0;
  v16 = a1[1];
  v17 = *a1;
  if ( v2 == v16 )
  {
    v18 = v13;
    while ( v17 != v16 )
    {
      *v18 = *(_OWORD *)v17;
      v18 = (_OWORD *)((char *)v18 + 56);
      *(_OWORD *)((char *)v18 - 40) = *(_OWORD *)(v17 + 16);
      *(_OWORD *)((char *)v18 - 24) = *(_OWORD *)(v17 + 32);
      v19 = *(_QWORD *)(v17 + 48);
      v17 += 56LL;
      *((_QWORD *)v18 - 1) = v19;
    }
  }
  else
  {
    if ( v17 != v2 )
    {
      do
      {
        *v13 = *(_OWORD *)v17;
        v13 = (_OWORD *)((char *)v13 + 56);
        *(_OWORD *)((char *)v13 - 40) = *(_OWORD *)(v17 + 16);
        *(_OWORD *)((char *)v13 - 24) = *(_OWORD *)(v17 + 32);
        v20 = *(_QWORD *)(v17 + 48);
        v17 += 56LL;
        *((_QWORD *)v13 - 1) = v20;
      }
      while ( v17 != v2 );
      v16 = a1[1];
    }
    if ( v2 != v16 )
    {
      v21 = (char *)v15 + v14 - v2;
      do
      {
        *(_OWORD *)&v21[v2 + 56] = *(_OWORD *)v2;
        *(_OWORD *)&v21[v2 + 72] = *(_OWORD *)(v2 + 16);
        *(_OWORD *)&v21[v2 + 88] = *(_OWORD *)(v2 + 32);
        *(_QWORD *)&v21[v2 + 104] = *(_QWORD *)(v2 + 48);
        v2 += 56LL;
      }
      while ( v2 != v16 );
    }
  }
  std::vector<CShapeRenderTask>::_Change_array(a1, v15, v8, v11);
  return v14 + *a1;
}
