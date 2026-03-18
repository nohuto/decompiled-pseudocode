/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18007AE34
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002C22C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x18002C634 (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x18002CC84 (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18002E1D0 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180030490 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x180057428 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x1800577D8 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18007AD3C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A1390 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?ReleaseD3DResources@CSwapChainBase@@EEAAXXZ @ 0x1800D93D0 (-ReleaseD3DResources@CSwapChainBase@@EEAAXXZ.c)
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x1800DA2F0 (--1CSwapChainBase@@MEAA@XZ.c)
 *     ?GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z @ 0x180163BC8 (-GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x18016429C (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180177BF8 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1801ABBD0 (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801AC0A0 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801ADD18 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801BFAEC (--1CExpressionManager@@UEAA@XZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1801D6F1C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x1801E0F98 (--1CManipulation@@UEAA@XZ.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x180216E40 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802460D8 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
