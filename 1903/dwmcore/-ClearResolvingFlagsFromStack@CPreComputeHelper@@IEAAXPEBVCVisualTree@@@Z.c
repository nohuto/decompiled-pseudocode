/*
 * XREFs of ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x180255B48
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180004C20 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000CE60 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180005EEC (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18006E4B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800D4A68 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 */

void __fastcall CPreComputeHelper::ClearResolvingFlagsFromStack(CPreComputeHelper *this, const struct CVisualTree *a2)
{
  int *v2; // rdi
  __int64 **TreeData; // rbx
  CVisual *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = (int *)((char *)this + 8);
  while ( CWatermarkStack<CVisual *,64,2,10>::Pop(v2, &v5) )
  {
    TreeData = CVisual::FindTreeData(v5, a2);
    if ( CVisual::GetTransformParentNoRef(v5) )
      *((_BYTE *)TreeData + 16) &= ~8u;
  }
}
