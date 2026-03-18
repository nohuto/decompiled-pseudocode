/*
 * XREFs of ??_V@YAXPEAX_K@Z @ 0x1800EC1D0
 * Callers:
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18002C988 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x18002CEC0 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800C2558 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x1800C264C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x1800E88CC (--1CSwapChainBase@@MEAA@XZ.c)
 *     ?ReleaseD3DResources@CSwapChainBase@@EEAAXXZ @ 0x1800EAA50 (-ReleaseD3DResources@CSwapChainBase@@EEAAXXZ.c)
 *     ?GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z @ 0x180204E9C (-GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x180205738 (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x18020E54C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x18022C250 (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022C684 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall operator delete[](void *a1)
{
  MIDL_user_free(a1);
}
