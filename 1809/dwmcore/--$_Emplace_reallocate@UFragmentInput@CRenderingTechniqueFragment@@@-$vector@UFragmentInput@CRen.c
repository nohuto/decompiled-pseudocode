/*
 * XREFs of ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1800E1454
 * Callers:
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800DF50C (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800DF8B0 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0CA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAXQEAUFragmentInput@CRenderingTechniqueFragment@@_K1@Z @ 0x1800E156C (-_Change_array@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInput@.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  signed __int64 v4; // r14
  __int64 v5; // rax
  char *v6; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  unsigned __int64 v13; // r14
  __int64 v14; // r10
  _QWORD *v15; // r8
  char *v16; // r9
  __int64 v17; // rcx
  char *v18; // rdx
  char *v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  signed __int64 v23; // r9
  __int64 v24; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2 - *a1;
  v5 = (a1[1] - *a1) >> 4;
  v6 = a2;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v8 = v5 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 > 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v5 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v15 = (_QWORD *)v14;
  v16 = (char *)(v13 + v14);
  *(_QWORD *)v16 = *a3;
  v17 = a3[1];
  a3[1] = 0LL;
  *((_QWORD *)v16 + 1) = v17;
  v18 = a1[1];
  v19 = *a1;
  if ( v6 == v18 )
  {
    while ( v19 != v18 )
    {
      *v15 = *(_QWORD *)v19;
      v15 += 2;
      v21 = *((_QWORD *)v19 + 1);
      *((_QWORD *)v19 + 1) = 0LL;
      v19 += 16;
      *(v15 - 1) = v21;
    }
  }
  else
  {
    if ( v19 != v6 )
    {
      do
      {
        *v15 = *(_QWORD *)v19;
        v15 += 2;
        v22 = *((_QWORD *)v19 + 1);
        *((_QWORD *)v19 + 1) = 0LL;
        v19 += 16;
        *(v15 - 1) = v22;
      }
      while ( v19 != v6 );
      v18 = a1[1];
    }
    if ( v6 != v18 )
    {
      v23 = v16 - v6;
      do
      {
        *(_QWORD *)&v6[v23 + 16] = *(_QWORD *)v6;
        v24 = *((_QWORD *)v6 + 1);
        *((_QWORD *)v6 + 1) = 0LL;
        *(_QWORD *)&v6[v23 + 24] = v24;
        v6 += 16;
      }
      while ( v6 != v18 );
    }
  }
  std::vector<CRenderingTechniqueFragment::FragmentInput>::_Change_array(a1, v14, v8, v11);
  return (unsigned __int64)&(*a1)[v13];
}
