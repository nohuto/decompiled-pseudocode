/*
 * XREFs of ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7904
 * Callers:
 *     ?AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z @ 0x18001C7A0 (-AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18003A44C (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18003D0C0 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD330 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800B7B28 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x1800BCD30 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 *     ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x1800BFF00 (-ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETD.c)
 *     ?AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D83E0 (-AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV-$TMilRect@IUMilRectU@@UNot.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180165780 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ??$AppendRects@UMilRectF@@@CRegion@@QEAAJPEBUMilRectF@@I@Z @ 0x180166DBC (--$AppendRects@UMilRectF@@@CRegion@@QEAAJPEBUMilRectF@@I@Z.c)
 *     ?CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z @ 0x180167004 (-CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHDRConversionRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x180168600 (-AddToCurrentFrameInvalidRegion@CHDRConversionRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEAVCRegion@@@Z @ 0x1801854E0 (-ComputeDesktopClip@COverlayContext@@AEAAJAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180187604 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z @ 0x1801B55F8 (-AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z.c)
 *     ?CopyFrontToBackBuffer@CHwCompSwapChainTarget@@UEAAJXZ @ 0x18023F810 (-CopyFrontToBackBuffer@CHwCompSwapChainTarget@@UEAAJXZ.c)
 *     ?NotifyRenderedRect@CHwCompSwapChainTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802400D0 (-NotifyRenderedRect@CHwCompSwapChainTarget@@UEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802473E0 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18008DC80 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18008FB00 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180090540 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x1800B7E7C (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall FastRegion::CRegion::Union(void **this, const struct FastRegion::Internal::CRgnData **a2)
{
  int *v2; // rdi
  unsigned int v3; // ebx
  int v6; // r11d
  _DWORD *v7; // r8
  int *v8; // r15
  int v9; // ebp
  int v10; // eax
  int v11; // ebp
  __int64 v12; // r10
  _DWORD *v13; // r9
  _DWORD *v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r10
  int v20; // eax
  int v21; // edi
  LPVOID v22; // r14
  int v23; // [rsp+20h] [rbp-148h] BYREF
  void *lpMem; // [rsp+28h] [rbp-140h]
  _BYTE v25[256]; // [rsp+30h] [rbp-138h] BYREF

  v2 = (int *)*a2;
  v3 = 0;
  v6 = *(_DWORD *)*a2;
  if ( !v6 )
    return 0LL;
  v7 = *this;
  if ( !*(_DWORD *)*this )
  {
    if ( this != (void **)a2 )
    {
      v8 = (int *)(this + 1);
      v9 = v2[2 * v6 + 2] + 8 * v6 - v2[4] - 12 + 8 * (v6 - 1) + 24;
      v10 = 60;
      if ( this + 1 != (void **)v7 )
        v10 = *v8;
      if ( v10 >= v9 )
        goto LABEL_7;
      v22 = DefaultHeap::Alloc(v9);
      if ( v22 )
      {
        FastRegion::CRegion::FreeMemory(this);
        *this = v22;
        *v8 = v9;
        v7 = *this;
        v6 = *v2;
LABEL_7:
        *v7 = v6;
        v11 = 0;
        v7[1] = v2[1];
        v7[2] = v2[2];
        v12 = (__int64)v2 + v2[4] + 12;
        v13 = &v7[2 * v6 + 3];
        if ( v6 > 0 )
        {
          v14 = v7 + 3;
          do
          {
            *v14 = *(_DWORD *)((char *)v14 + (char *)v2 - (char *)v7);
            v14 += 2;
            v15 = v11++;
            v7[2 * v15 + 4] = (_DWORD)v2
                            + 8 * v15
                            + 4 * (((__int64)v13 - v12) >> 2)
                            + v2[2 * v15 + 4]
                            - ((_DWORD)v7
                             + 8 * v15);
          }
          while ( v11 < *v7 );
        }
        v16 = (unsigned __int64)(8 * *v2 + 4 + v2[2 * *v2 + 2] - v2[4] - 12) >> 2;
        v17 = (int)v16;
        if ( (int)v16 > 0 )
        {
          v18 = v12 - (_QWORD)v13;
          do
          {
            *v13 = *(_DWORD *)((char *)v13 + v18);
            ++v13;
            --v17;
          }
          while ( v17 );
        }
        return v3;
      }
      return (unsigned int)-2147024882;
    }
    return v3;
  }
  v20 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
          (const struct FastRegion::Internal::CRgnData *)*this,
          (const struct FastRegion::Internal::CRgnData *)v2);
  v23 = 0;
  lpMem = v25;
  v21 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v23, v20);
  if ( v21 >= 0 )
  {
    FastRegion::Internal::CRgnData::Union(
      (FastRegion::Internal::CRgnData *)lpMem,
      (const struct FastRegion::Internal::CRgnData *)*this,
      *a2);
    v21 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v23);
  }
  if ( v25 != lpMem )
    operator delete(lpMem);
  return (unsigned int)v21;
}
