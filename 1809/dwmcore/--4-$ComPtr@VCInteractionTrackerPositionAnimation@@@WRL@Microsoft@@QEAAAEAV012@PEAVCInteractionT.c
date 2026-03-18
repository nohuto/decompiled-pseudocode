/*
 * XREFs of ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x18004ED70
 * Callers:
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18004EC34 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18019F3A8 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180211608 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 *     ?FrameUpdate@CHolographicClient@@UEAAJII@Z @ 0x180212450 (-FrameUpdate@CHolographicClient@@UEAAJII@Z.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18021CD94 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = a2;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v6);
  }
  return a1;
}
