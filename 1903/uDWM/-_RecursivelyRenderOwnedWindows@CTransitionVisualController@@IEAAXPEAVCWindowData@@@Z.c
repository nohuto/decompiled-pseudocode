/*
 * XREFs of ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18004B210
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180032148 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180028F30 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x18004B3F8 (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 */

void __fastcall CTransitionVisualController::_RecursivelyRenderOwnedWindows(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  CVisual *v2; // rcx
  __int64 v4; // r8
  CTransitionVisualController *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  v2 = (CVisual *)*((_QWORD *)a2 + 50);
  if ( v2 )
  {
    if ( (int)CVisual::RenderRecursive(v2) >= 0 )
    {
      LOBYTE(v4) = 1;
      LOBYTE(v5) = 0;
      CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___(a2, &v5, v4);
    }
  }
}
