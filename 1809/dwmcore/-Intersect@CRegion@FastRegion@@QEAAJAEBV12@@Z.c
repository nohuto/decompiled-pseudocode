/*
 * XREFs of ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A60E4
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180047930 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800A0490 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x1800A9970 (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801690E4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z @ 0x180207A70 (-CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z.c)
 *     ?ClampRegionToBounds@CHwFullScreenRenderTarget@@AEBAJPEAVCRegion@@@Z @ 0x180207FB8 (-ClampRegionToBounds@CHwFullScreenRenderTarget@@AEBAJPEAVCRegion@@@Z.c)
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180209480 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800A6674 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800A8594 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800A88D4 (-EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall FastRegion::CRegion::Intersect(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // rdi
  const struct FastRegion::Internal::CRgnData *v4; // rbx
  int v6; // eax
  SIZE_T v7; // r8
  FastRegion::Internal::CRgnData *v8; // rcx
  unsigned int v9; // ebx
  FastRegion::Internal::CRgnData *v11; // rax
  int v12; // [rsp+20h] [rbp-138h] BYREF
  void *v13; // [rsp+28h] [rbp-130h]
  _BYTE v14[256]; // [rsp+30h] [rbp-128h] BYREF

  v2 = *a2;
  v4 = *this;
  if ( !*(_DWORD *)*a2 )
  {
    *(_DWORD *)v4 = 0;
    return 0LL;
  }
  if ( !*(_DWORD *)v4 )
    return 0LL;
  v6 = FastRegion::Internal::CRgnData::EstimateSizeIntersect(*this, v2);
  v7 = v6;
  v8 = (FastRegion::Internal::CRgnData *)v14;
  v13 = v14;
  v12 = v6;
  if ( (unsigned __int64)v6 > 0x100 )
  {
    if ( !v6 )
      v7 = 1LL;
    v11 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v7);
    v8 = v11;
    if ( !v11 )
    {
      v9 = -2147024882;
      goto LABEL_5;
    }
    v2 = *a2;
    v4 = *this;
    v13 = v11;
  }
  FastRegion::Internal::CRgnData::Intersect(v8, v4, v2);
  v9 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v12);
LABEL_5:
  if ( v14 != v13 )
    WPF::ProcessHeapImpl::Free(v13);
  return v9;
}
