/*
 * XREFs of ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A8A88
 * Callers:
 *     ?BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z @ 0x180015E50 (-BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003E5E0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180047930 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x180066CC0 (-RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 *     ?Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18007D0B0 (-Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800A7240 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x1800A9970 (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801690E4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801793A4 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?CopyFrontToBackBuffer@CHwCompSwapChainTarget@@UEAAJXZ @ 0x1802004C0 (-CopyFrontToBackBuffer@CHwCompSwapChainTarget@@UEAAJXZ.c)
 *     ?RotateFrameInvalidRegions@CHwCompSwapChainTarget@@IEAAJXZ @ 0x1802010E4 (-RotateFrameInvalidRegions@CHwCompSwapChainTarget@@IEAAJXZ.c)
 *     ?CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z @ 0x180207A70 (-CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z.c)
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180209480 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?HasScribbleStarted@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEA_NPEAVCRegion@@@Z @ 0x18022DEA8 (-HasScribbleStarted@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEA_NPEAVCRegion@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::Copy(void **this, void **a2)
{
  int *v3; // rbx
  int v4; // r10d
  _DWORD *v5; // r9
  int *v6; // r14
  int v7; // esi
  int v8; // eax
  int v9; // esi
  __int64 v10; // r11
  _DWORD *v11; // r8
  _DWORD *v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r11
  SIZE_T v18; // r8
  LPVOID v19; // rbp

  if ( this == a2 )
    return 0LL;
  v3 = (int *)*a2;
  v4 = *(_DWORD *)*a2;
  if ( !v4 )
  {
    *(_DWORD *)*this = 0;
    return 0LL;
  }
  v5 = *this;
  v6 = (int *)(this + 1);
  v7 = v3[2 * v4 + 2] + 8 * v4 - v3[4] - 12 + 8 * (v4 - 1) + 24;
  v8 = 60;
  if ( this + 1 != *this )
    v8 = *v6;
  if ( v8 >= v7 )
    goto LABEL_6;
  v18 = v7;
  if ( !v7 )
    v18 = 1LL;
  v19 = HeapAlloc(WPF::g_processHeap, 0, v18);
  if ( v19 )
  {
    FastRegion::CRegion::FreeMemory(this);
    *this = v19;
    *v6 = v7;
    v5 = *this;
    v4 = *v3;
LABEL_6:
    *v5 = v4;
    v9 = 0;
    v5[1] = v3[1];
    v5[2] = v3[2];
    v10 = (__int64)v3 + v3[4] + 12;
    v11 = &v5[2 * v4 + 3];
    if ( v4 > 0 )
    {
      v12 = v5 + 3;
      do
      {
        *v12 = *(_DWORD *)((char *)v12 + (char *)v3 - (char *)v5);
        v12 += 2;
        v13 = v9++;
        v5[2 * v13 + 4] = (_DWORD)v3
                        + 8 * v13
                        + 4 * (((__int64)v11 - v10) >> 2)
                        + v3[2 * v13 + 4]
                        - ((_DWORD)v5
                         + 8 * v13);
      }
      while ( v9 < *v5 );
    }
    v14 = (unsigned __int64)(8 * *v3 + 4 + v3[2 * *v3 + 2] - v3[4] - 12) >> 2;
    v15 = (int)v14;
    if ( (int)v14 > 0 )
    {
      v16 = v10 - (_QWORD)v11;
      do
      {
        *v11 = *(_DWORD *)((char *)v11 + v16);
        ++v11;
        --v15;
      }
      while ( v15 );
    }
    return 0LL;
  }
  return 2147942414LL;
}
