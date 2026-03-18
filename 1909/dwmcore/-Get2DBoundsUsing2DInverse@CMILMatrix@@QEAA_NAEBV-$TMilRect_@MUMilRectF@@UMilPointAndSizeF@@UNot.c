/*
 * XREFs of ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000DAAC
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18000D5A0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18000D8D4 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV-$TMil3DRect@M.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800BB4A0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18016AE4C (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801C70E4 (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 * Callees:
 *     ?Get2DPointUsing2DInverse@CMILMatrix@@QEAA_NAEBUD2D_POINT_2F@@PEAU2@@Z @ 0x18000DBAC (-Get2DPointUsing2DInverse@CMILMatrix@@QEAA_NAEBUD2D_POINT_2F@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Get2DBoundsUsing2DInverse(CMILMatrix *a1, float *a2)
{
  float v2; // xmm2_4
  int v3; // r10d
  int v4; // xmm0_4
  float *v5; // r9
  int v6; // r10d
  float v7; // xmm1_4
  float *v8; // rcx
  float v9; // xmm2_4
  float v10; // xmm3_4
  __int64 v11; // rdx
  float v12; // xmm0_4
  char result; // al
  float v14; // [rsp+20h] [rbp-30h] BYREF
  float v15; // [rsp+24h] [rbp-2Ch]
  int v16; // [rsp+28h] [rbp-28h]
  _DWORD v17[2]; // [rsp+2Ch] [rbp-24h] BYREF
  int v18; // [rsp+34h] [rbp-1Ch]
  float v19; // [rsp+38h] [rbp-18h]
  int v20; // [rsp+3Ch] [rbp-14h]

  v2 = *a2;
  v3 = 0;
  v4 = *((_DWORD *)a2 + 2);
  v15 = a2[1];
  *(float *)v17 = v15;
  v18 = *((_DWORD *)a2 + 3);
  v20 = v18;
  v14 = v2;
  v16 = v4;
  v17[1] = v4;
  v19 = v2;
  do
  {
    if ( !CMILMatrix::Get2DPointUsing2DInverse(
            a1,
            (const struct D2D_POINT_2F *)&v14 + v3,
            (struct D2D_POINT_2F *)&v14 + v3) )
      return 0;
    v3 = v6 + 1;
  }
  while ( v3 < 4 );
  v7 = v15;
  v8 = (float *)v17;
  v9 = v14;
  v10 = v15;
  *v5 = v14;
  v11 = 3LL;
  v5[1] = v10;
  v5[2] = v9;
  v5[3] = v10;
  do
  {
    v12 = fminf(*v5, *(v8 - 1));
    v7 = fminf(v7, *v8);
    v9 = fmaxf(v9, *(v8 - 1));
    v10 = fmaxf(v10, *v8);
    v8 += 2;
    *v5 = v12;
    --v11;
  }
  while ( v11 );
  v5[1] = v7;
  result = 1;
  v5[2] = v9;
  v5[3] = v10;
  return result;
}
