/*
 * XREFs of ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x1800326D8
 * Callers:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x1800320F0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18006CBF4 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x1801E3C38 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Top(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = 0;
  if ( *(_DWORD *)a1 )
  {
    v4 = 68LL * (unsigned int)(*(_DWORD *)a1 - 1);
    v5 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)a2 = *(_OWORD *)(v4 + v5);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(v4 + v5 + 16);
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(v4 + v5 + 32);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(v4 + v5 + 48);
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(v4 + v5 + 64);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v2;
}
