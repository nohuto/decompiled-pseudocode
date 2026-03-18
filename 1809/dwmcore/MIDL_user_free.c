/*
 * XREFs of MIDL_user_free @ 0x1800BAE70
 * Callers:
 *     ??_V@YAXPEAX_K@Z @ 0x1800EC1D0 (--_V@YAXPEAX_K@Z.c)
 *     ??$reset@PEAUMeshVertexData@Mesh@@X@?$unique_ptr@$$BY0A@UMeshVertexData@Mesh@@U?$default_delete@$$BY0A@UMeshVertexData@Mesh@@@std@@@std@@QEAAXPEAUMeshVertexData@Mesh@@@Z @ 0x1800EF024 (--$reset@PEAUMeshVertexData@Mesh@@X@-$unique_ptr@$$BY0A@UMeshVertexData@Mesh@@U-$default_delete@.c)
 *     ?reset@?$unique_ptr@$$BY0A@UMeshVertexData@Mesh@@U?$default_delete@$$BY0A@UMeshVertexData@Mesh@@@std@@@std@@QEAAX$$T@Z @ 0x1800EF048 (-reset@-$unique_ptr@$$BY0A@UMeshVertexData@Mesh@@U-$default_delete@$$BY0A@UMeshVertexData@Mesh@@.c)
 *     ??$SAFE_DELETE_ARRAY@UD2D1_COMPOSITOR_DRAWING_STATE@@@@YAXAEAPEAUD2D1_COMPOSITOR_DRAWING_STATE@@@Z @ 0x1800EFC88 (--$SAFE_DELETE_ARRAY@UD2D1_COMPOSITOR_DRAWING_STATE@@@@YAXAEAPEAUD2D1_COMPOSITOR_DRAWING_STATE@@.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@PEA_N@Z @ 0x180169BEC (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AEB.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall MIDL_user_free(void *a1)
{
  WPF::ProcessHeapImpl::Free(a1);
}
