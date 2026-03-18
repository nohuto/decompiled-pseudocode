/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x180222B94
 * Callers:
 *     ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x180223180 (-CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?_Calculate_growth@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_K_K@Z @ 0x180224340 (-_Calculate_growth@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_.c)
 *     ?_Change_array@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAVCShapeRenderTask@@_K1@Z @ 0x180224390 (-_Change_array@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAV.c)
 */

__int64 __fastcall std::vector<CShapeRenderTask>::_Emplace_reallocate<>(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  SIZE_T v8; // rcx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r10
  _OWORD *v11; // rax
  __int64 v12; // rsi
  _OWORD *v13; // r10
  __int64 v14; // r8
  __int64 v15; // rcx
  _OWORD *v16; // rdx
  __int64 v17; // xmm1_8
  __int64 v18; // xmm1_8
  char *v19; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  v4 = (a2 - *a1) / 56;
  v5 = (a1[1] - *a1) / 56;
  if ( v5 == 0x492492492492492LL )
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  v6 = v5 + 1;
  v7 = std::vector<CShapeRenderTask>::_Calculate_growth(a1, v5 + 1);
  v8 = 56 * v7;
  v9 = v7;
  if ( v7 > v10 )
    v8 = -1LL;
  v11 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
  v12 = 56 * v4;
  v13 = v11;
  *(_DWORD *)((char *)v11 + v12) = 0;
  v14 = a1[1];
  v15 = *a1;
  if ( v2 == v14 )
  {
    v16 = v11;
    while ( v15 != v14 )
    {
      *v16 = *(_OWORD *)v15;
      v16 = (_OWORD *)((char *)v16 + 56);
      *(_OWORD *)((char *)v16 - 40) = *(_OWORD *)(v15 + 16);
      *(_OWORD *)((char *)v16 - 24) = *(_OWORD *)(v15 + 32);
      v17 = *(_QWORD *)(v15 + 48);
      v15 += 56LL;
      *((_QWORD *)v16 - 1) = v17;
    }
  }
  else
  {
    if ( v15 != v2 )
    {
      do
      {
        *v11 = *(_OWORD *)v15;
        v11 = (_OWORD *)((char *)v11 + 56);
        *(_OWORD *)((char *)v11 - 40) = *(_OWORD *)(v15 + 16);
        *(_OWORD *)((char *)v11 - 24) = *(_OWORD *)(v15 + 32);
        v18 = *(_QWORD *)(v15 + 48);
        v15 += 56LL;
        *((_QWORD *)v11 - 1) = v18;
      }
      while ( v15 != v2 );
      v14 = a1[1];
    }
    if ( v2 != v14 )
    {
      v19 = (char *)v13 + v12 - v2;
      do
      {
        *(_OWORD *)&v19[v2 + 56] = *(_OWORD *)v2;
        *(_OWORD *)&v19[v2 + 72] = *(_OWORD *)(v2 + 16);
        *(_OWORD *)&v19[v2 + 88] = *(_OWORD *)(v2 + 32);
        *(_QWORD *)&v19[v2 + 104] = *(_QWORD *)(v2 + 48);
        v2 += 56LL;
      }
      while ( v2 != v14 );
    }
  }
  std::vector<CShapeRenderTask>::_Change_array(a1, v13, v6, v9);
  return v12 + *a1;
}
