/*
 * XREFs of ?IsWorldTransformCurrent@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@PEA_NPEAPEBV3@@Z @ 0x1801C3AD4
 * Callers:
 *     ?IsWorldTransformNewForCurrentFrame@CVisual@@QEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1802527A0 (-IsWorldTransformNewForCurrentFrame@CVisual@@QEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 * Callees:
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x180005E54 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 */

bool __fastcall CVisual::IsWorldTransformCurrent(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        bool *a4,
        const struct CTreeData **a5)
{
  const struct CTreeData *ParentTreeData; // rax
  unsigned __int64 v7; // rax

  ParentTreeData = CVisual::GetParentTreeData(this, a2, a3, a4);
  *a5 = ParentTreeData;
  if ( ParentTreeData )
    v7 = *((_QWORD *)ParentTreeData + 15);
  else
    v7 = 1LL;
  return *((_QWORD *)a3 + 15) >= v7;
}
