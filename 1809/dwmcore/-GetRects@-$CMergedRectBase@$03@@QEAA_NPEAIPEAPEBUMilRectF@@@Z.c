/*
 * XREFs of ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800A98DC
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18002EF10 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18002F720 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1801654A0 (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1801657B8 (-GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18006BA08 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x1800A9D80 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 */

bool __fastcall CMergedRectBase<4>::GetRects(__int64 a1, unsigned int *a2, __int64 *a3)
{
  unsigned int *v3; // r15
  unsigned int v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // eax
  bool result; // al
  unsigned int v10; // ebx
  _BYTE *v11; // rbp

  v3 = a2;
  LOBYTE(a2) = 1;
  v6 = 0;
  CMergedRectBase<4>::Optimize(a1, a2);
  v7 = *(_DWORD *)(a1 + 72);
  v8 = v7;
  if ( v7 > 1 && v7 < 4 )
  {
    v10 = 0;
    v11 = (_BYTE *)(a1 + 64);
    do
    {
      if ( *v11 )
      {
        if ( v10 != v6 )
          CMergedRectBase<4>::SwapExisting(a1, v6, v10);
        ++v6;
      }
      ++v10;
      ++v11;
    }
    while ( v10 < 4 );
    v8 = *(_DWORD *)(a1 + 72);
  }
  *v3 = v8;
  result = v8 != 0;
  *a3 = a1;
  return result;
}
