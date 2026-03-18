/*
 * XREFs of ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800E1440
 * Callers:
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800DF8B0 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0CA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?_Change_array@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAXQEAUFragmentInput@CRenderingTechniqueFragment@@_K1@Z @ 0x1800E156C (-_Change_array@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInput@.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800E1608 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(
        CRenderingTechniqueFragment **a1,
        unsigned int a2)
{
  CRenderingTechniqueFragment *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CRenderingTechniqueFragment::`scalar deleting destructor'(v2, a2);
  return result;
}
