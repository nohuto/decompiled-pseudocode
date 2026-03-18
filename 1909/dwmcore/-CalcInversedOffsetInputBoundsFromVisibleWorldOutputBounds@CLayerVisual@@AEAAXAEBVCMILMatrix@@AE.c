/*
 * XREFs of ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801C70E4
 * Callers:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801C73B8 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000DAAC (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180029740 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

char __fastcall CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6)
{
  __int128 v6; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  char result; // al
  _OWORD *v13; // r11
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22[4]; // [rsp+28h] [rbp-79h]
  _OWORD v23[4]; // [rsp+38h] [rbp-69h] BYREF
  int v24; // [rsp+78h] [rbp-29h]
  float v25; // [rsp+88h] [rbp-19h] BYREF
  float v26; // [rsp+8Ch] [rbp-15h]
  float v27; // [rsp+90h] [rbp-11h]
  float v28; // [rsp+94h] [rbp-Dh]

  v6 = *(_OWORD *)(a2 + 16);
  *(_QWORD *)v22 = *(_QWORD *)(*(_QWORD *)(a1 + 560) + 104LL);
  v9 = *(_OWORD *)a2;
  v24 = *(_DWORD *)(a2 + 64);
  v23[1] = v6;
  v10 = *(_OWORD *)(a2 + 48);
  v23[0] = v9;
  v11 = *(_OWORD *)(a2 + 32);
  v23[3] = v10;
  v23[2] = v11;
  result = CMILMatrix::Get2DBoundsUsing2DInverse((CMILMatrix *)v23, a3);
  if ( result )
  {
    v26 = v26 + COERCE_FLOAT(LODWORD(v22[1]) ^ _xmm);
    v25 = v25 + COERCE_FLOAT(LODWORD(v22[0]) ^ _xmm);
    v28 = v28 + COERCE_FLOAT(LODWORD(v22[1]) ^ _xmm);
    v27 = v27 + COERCE_FLOAT(LODWORD(v22[0]) ^ _xmm);
    result = (unsigned __int8)CMILMatrix::Transform2DBoundsHelper<1>(a2, &v25, a5);
    if ( *a4 > *a5 )
      *a5 = *a4;
    v14 = a4[1];
    if ( v14 > a5[1] )
      a5[1] = v14;
    v15 = a4[2];
    v16 = a5[2];
    if ( v16 > v15 )
    {
      a5[2] = v15;
      v16 = v15;
    }
    v17 = a4[3];
    v18 = a5[3];
    if ( v18 > v17 )
    {
      a5[3] = v17;
      v18 = v17;
      v16 = a5[2];
    }
    if ( v16 <= *a5 || v18 <= a5[1] )
    {
      a5[3] = 0.0;
      a5[2] = 0.0;
      a5[1] = 0.0;
      *a5 = 0.0;
    }
    *(_OWORD *)a6 = *(_OWORD *)a5;
    v19 = v22[0] + *(float *)(a6 + 8);
    v20 = v22[1] + *(float *)(a6 + 4);
    v21 = v22[1] + *(float *)(a6 + 12);
    *(float *)a6 = v22[0] + *(float *)a6;
    *(float *)(a6 + 8) = v19;
    *(float *)(a6 + 4) = v20;
    *(float *)(a6 + 12) = v21;
  }
  else
  {
    *(_OWORD *)a5 = *v13;
    *(_OWORD *)a6 = *v13;
  }
  return result;
}
