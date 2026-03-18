/*
 * XREFs of ?_Change_array@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAXQEAUFragmentInput@CRenderingTechniqueFragment@@_K1@Z @ 0x1800E156C
 * Callers:
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1800E1454 (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800E1440 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 */

void __fastcall std::vector<CRenderingTechniqueFragment::FragmentInput>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CRenderingTechniqueFragment **v4; // rbx
  CRenderingTechniqueFragment **v9; // r14

  v4 = *(CRenderingTechniqueFragment ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(CRenderingTechniqueFragment ***)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v4 + 1, a2);
        v4 += 2;
      }
      while ( v4 != v9 );
      v4 = *(CRenderingTechniqueFragment ***)a1;
    }
    std::_Deallocate<16,0>(v4, (*(_QWORD *)(a1 + 16) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  *(_QWORD *)a1 = a2;
}
