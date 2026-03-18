/*
 * XREFs of ??$_Emplace_reallocate@AEBVCShapeRenderTask@@@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@AEBV2@@Z @ 0x180222D2C
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x1802236D4 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?_Calculate_growth@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_K_K@Z @ 0x180224340 (-_Calculate_growth@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_.c)
 *     ?_Change_array@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAVCShapeRenderTask@@_K1@Z @ 0x180224390 (-_Change_array@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAV.c)
 */

__int64 __fastcall std::vector<CShapeRenderTask>::_Emplace_reallocate<CShapeRenderTask const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  SIZE_T v10; // rcx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r10
  _OWORD *v13; // rax
  _OWORD *v14; // r10
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // xmm1_8
  char *v19; // rcx
  __int64 v21; // xmm1_8
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2;
  v6 = (a2 - *a1) / 56;
  v7 = (a1[1] - *a1) / 56;
  if ( v7 == 0x492492492492492LL )
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  v8 = v7 + 1;
  v9 = std::vector<CShapeRenderTask>::_Calculate_growth(a1, v7 + 1);
  v10 = 56 * v9;
  v11 = v9;
  if ( v9 > v12 )
    v10 = -1LL;
  v13 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v14 = v13;
  v15 = 56 * v6;
  *(_OWORD *)((char *)v13 + v15) = *(_OWORD *)a3;
  *(_OWORD *)((char *)v13 + v15 + 16) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)((char *)v13 + v15 + 32) = *(_OWORD *)(a3 + 32);
  *(_QWORD *)((char *)v13 + v15 + 48) = *(_QWORD *)(a3 + 48);
  v16 = a1[1];
  v17 = *a1;
  if ( v3 == v16 )
  {
    while ( v17 != v16 )
    {
      *v13 = *(_OWORD *)v17;
      v13 = (_OWORD *)((char *)v13 + 56);
      *(_OWORD *)((char *)v13 - 40) = *(_OWORD *)(v17 + 16);
      *(_OWORD *)((char *)v13 - 24) = *(_OWORD *)(v17 + 32);
      v21 = *(_QWORD *)(v17 + 48);
      v17 += 56LL;
      *((_QWORD *)v13 - 1) = v21;
    }
  }
  else
  {
    if ( v17 != v3 )
    {
      do
      {
        *v13 = *(_OWORD *)v17;
        v13 = (_OWORD *)((char *)v13 + 56);
        *(_OWORD *)((char *)v13 - 40) = *(_OWORD *)(v17 + 16);
        *(_OWORD *)((char *)v13 - 24) = *(_OWORD *)(v17 + 32);
        v18 = *(_QWORD *)(v17 + 48);
        v17 += 56LL;
        *((_QWORD *)v13 - 1) = v18;
      }
      while ( v17 != v3 );
      v16 = a1[1];
    }
    if ( v3 != v16 )
    {
      v19 = (char *)v14 + v15 - v3;
      do
      {
        *(_OWORD *)&v19[v3 + 56] = *(_OWORD *)v3;
        *(_OWORD *)&v19[v3 + 72] = *(_OWORD *)(v3 + 16);
        *(_OWORD *)&v19[v3 + 88] = *(_OWORD *)(v3 + 32);
        *(_QWORD *)&v19[v3 + 104] = *(_QWORD *)(v3 + 48);
        v3 += 56LL;
      }
      while ( v3 != v16 );
    }
  }
  std::vector<CShapeRenderTask>::_Change_array(a1, v14, v8, v11);
  return v15 + *a1;
}
