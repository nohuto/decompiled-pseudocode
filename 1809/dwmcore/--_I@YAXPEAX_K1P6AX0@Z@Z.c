/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8
 * Callers:
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18002C988 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x18002CEC0 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800C2558 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x1800C264C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800D6D60 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800D960C (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x1800E88CC (--1CSwapChainBase@@MEAA@XZ.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x1800E9264 (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x1800E92D4 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x1800E9748 (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ?ReleaseD3DResources@CSwapChainBase@@EEAAXXZ @ 0x1800EAA50 (-ReleaseD3DResources@CSwapChainBase@@EEAAXXZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801495E0 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180181CB8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x18018A0CC (--1CExpressionManager@@UEAA@XZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18019DA98 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x1801A5550 (--1CManipulation@@UEAA@XZ.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x1801B4950 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 *     ?GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z @ 0x180204E9C (-GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x180205738 (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x18020E54C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x18022C250 (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022C684 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
