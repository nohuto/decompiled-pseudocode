/*
 * XREFs of ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x180005E54
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800057C4 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?IsWorldTransformCurrent@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@PEA_NPEAPEBV3@@Z @ 0x1801C3AD4 (-IsWorldTransformCurrent@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@PEA_NPEAPEBV3@@Z.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180005EEC (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18006E4B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

const struct CTreeData *__fastcall CVisual::GetParentTreeData(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        bool *a4)
{
  __int64 v4; // rax
  struct CTreeData *TreeData; // rbx
  __int64 v10; // r15
  CVisual *TransformParentNoRef; // rax

  v4 = *((_QWORD *)this + 2);
  TreeData = 0LL;
  *a4 = 0;
  v10 = *(_QWORD *)(v4 + 384);
  TransformParentNoRef = CVisual::GetTransformParentNoRef(this);
  if ( !TransformParentNoRef
    || (*((_BYTE *)a3 + 16) & 4) != 0 && *((_QWORD *)a3 + 27) == v10
    || (*a4 = 1, (TreeData = CVisual::FindTreeData(TransformParentNoRef, a2)) == 0LL) )
  {
    if ( this != *((CVisual **)a2 + 3) )
      return CVisual::FindTreeData(*((CVisual **)this + 10), a2);
  }
  return TreeData;
}
