/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008877C
 * Callers:
 *     ?ReleaseD3DResources@CSwapChainBase@@EEAAXXZ @ 0x180023FF0 (-ReleaseD3DResources@CSwapChainBase@@EEAAXXZ.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002436C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x180024774 (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x180024DC4 (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x180026A90 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180028680 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x180052254 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x1800887D8 (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800C0510 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x1800C6228 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x1800D97A0 (--1CSwapChainBase@@MEAA@XZ.c)
 *     ?GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z @ 0x1801652B8 (-GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x18016598C (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801792F8 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1801AD490 (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801AD960 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801AF5D8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801C128C (--1CExpressionManager@@UEAA@XZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1801D862C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x1801E2708 (--1CManipulation@@UEAA@XZ.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x180218530 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802477E8 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *v7; // rdi

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      a4(v7);
      --v5;
    }
    while ( v5 );
  }
}
