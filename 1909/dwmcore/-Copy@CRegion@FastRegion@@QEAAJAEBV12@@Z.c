/*
 * XREFs of ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006E3F8
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D4E0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z @ 0x18004E570 (-BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180062740 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18006B1C0 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z @ 0x18006B304 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18006CF00 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BAAD8 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z @ 0x180165914 (-CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z.c)
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180167B90 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801829B0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801932A4 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?HasScribbleStarted@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEA_NPEAVCRegion@@@Z @ 0x1801B4544 (-HasScribbleStarted@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEA_NPEAVCRegion@@@Z.c)
 *     ?CopyFrontToBackBuffer@CHwCompSwapChainTarget@@UEAAJXZ @ 0x18023E100 (-CopyFrontToBackBuffer@CHwCompSwapChainTarget@@UEAAJXZ.c)
 *     ?RotateFrameInvalidRegions@CHwCompSwapChainTarget@@IEAAJXZ @ 0x18023ECF4 (-RotateFrameInvalidRegions@CHwCompSwapChainTarget@@IEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::Copy(int **this, int **a2)
{
  int *v3; // rbx
  int v4; // r10d
  int *v5; // r9
  int *v6; // r14
  int v7; // esi
  int v8; // eax
  int v9; // esi
  __int64 v10; // r11
  int *v11; // r8
  _DWORD *v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r11
  int *v18; // rbp

  if ( this == a2 )
    return 0LL;
  v3 = *a2;
  v4 = **a2;
  if ( !v4 )
  {
    **this = 0;
    return 0LL;
  }
  v5 = *this;
  v6 = (int *)(this + 1);
  v7 = v3[2 * v4 + 2] + 8 * v4 - v3[4] - 12 + 8 * (v4 - 1) + 24;
  v8 = 60;
  if ( this + 1 != (int **)*this )
    v8 = *v6;
  if ( v8 >= v7 )
    goto LABEL_6;
  v18 = (int *)DefaultHeap::Alloc(v7);
  if ( v18 )
  {
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
    *this = v18;
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
        *v11 = *(int *)((char *)v11 + v16);
        ++v11;
        --v15;
      }
      while ( v15 );
    }
    return 0LL;
  }
  return 2147942414LL;
}
