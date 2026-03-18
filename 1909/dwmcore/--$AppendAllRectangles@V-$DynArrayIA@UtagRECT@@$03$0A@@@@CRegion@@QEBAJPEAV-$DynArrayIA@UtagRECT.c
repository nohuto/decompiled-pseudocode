/*
 * XREFs of ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18000B608
 * Callers:
 *     ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x18000B4A4 (-EnsureD2DGeometry@CRegionShape@@AEBAJXZ.c)
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18006C6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800C3050 (-AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x180163760 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801C4E70 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 * Callees:
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18006C668 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18006CD24 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BF920 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800CA69C (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 */

__int64 __fastcall CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(FastRegion::CRegion *a1, __int64 a2)
{
  unsigned int RectangleCount; // eax
  unsigned int v5; // esi
  int v6; // r10d
  __int64 v7; // rdx
  FastRegion::Internal::CRgnData *v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-48h]
  _BYTE v11[8]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]
  _DWORD *v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+50h] [rbp-18h]

  RectangleCount = FastRegion::CRegion::GetRectangleCount(a1);
  v5 = *(_DWORD *)(a2 + 24);
  v6 = DynArrayImpl<0>::AddMultiple(a2, 16LL, RectangleCount);
  if ( v6 >= 0 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(
      *(FastRegion::Internal::CRgnData **)a1,
      (struct FastRegion::CRegion::Iterator *)v11);
    while ( (unsigned __int64)v13 < v12 )
    {
      DWORD1(v10) = *v13;
      HIDWORD(v10) = v13[2];
      v7 = 2 * v15;
      LODWORD(v10) = *(_DWORD *)(v14 + 4 * v7);
      DWORD2(v10) = *(_DWORD *)(v14 + 4 * v7 + 4);
      v8 = (FastRegion::Internal::CRgnData *)(2LL * v5);
      *(_OWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v8) = v10;
      FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v11);
      ++v5;
    }
  }
  return (unsigned int)v6;
}
