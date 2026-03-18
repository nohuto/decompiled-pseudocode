/*
 * XREFs of ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x180225990
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800034A0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180006BA0 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180004250 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800767C0 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 */

void __fastcall CPreComputeHelper::ClearResolvingFlagsFromStack(CPreComputeHelper *this, const struct CVisualTree *a2)
{
  int *v2; // rdi
  struct _LIST_ENTRY *TreeData; // rbx
  CVisual *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = (int *)((char *)this + 8);
  while ( CWatermarkStack<CVisual *,64,2,10>::Pop(v2, &v5) )
  {
    TreeData = CVisual::FindTreeData(v5, a2);
    if ( CVisual::GetTransformParentNoRef(v5) )
      LOBYTE(TreeData[1].Flink) &= ~8u;
  }
}
