/*
 * XREFs of ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800C9E28
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800799F0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18016E24C (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18019A540 (-GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x180079BF8 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18007A268 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 */

bool __fastcall CMergedRectBase<4>::GetRects(__m128i *a1, unsigned int *a2, __m128i **a3)
{
  unsigned int v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // eax
  bool result; // al
  unsigned int v10; // ebx
  __m128i *v11; // rbp

  v6 = 0;
  CMergedRectBase<4>::Optimize(a1, 1);
  v7 = a1[4].m128i_u32[2];
  v8 = v7;
  if ( v7 > 1 && v7 < 4 )
  {
    v10 = 0;
    v11 = a1 + 4;
    do
    {
      if ( v11->m128i_i8[0] )
      {
        if ( v10 != v6 )
          CMergedRectBase<4>::SwapExisting((__int64)a1, v6, v10);
        ++v6;
      }
      ++v10;
      v11 = (__m128i *)((char *)v11 + 1);
    }
    while ( v10 < 4 );
    v8 = a1[4].m128i_u32[2];
  }
  *a2 = v8;
  result = v8 != 0;
  *a3 = a1;
  return result;
}
