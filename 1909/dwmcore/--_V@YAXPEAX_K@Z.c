/*
 * XREFs of ??_V@YAXPEAX_K@Z @ 0x1800E958C
 * Callers:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x180057428 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x1800577D8 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18007AD3C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A1390 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?ReleaseD3DResources@CSwapChainBase@@EEAAXXZ @ 0x1800D93D0 (-ReleaseD3DResources@CSwapChainBase@@EEAAXXZ.c)
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x1800DA2F0 (--1CSwapChainBase@@MEAA@XZ.c)
 *     ?GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z @ 0x180163BC8 (-GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x18016429C (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1801ABBD0 (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801AC0A0 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802460D8 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete[](void *a1)
{
  operator delete(a1);
}
