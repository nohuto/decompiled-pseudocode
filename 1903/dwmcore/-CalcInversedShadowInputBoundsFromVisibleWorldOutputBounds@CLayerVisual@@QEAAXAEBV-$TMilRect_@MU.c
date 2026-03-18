/*
 * XREFs of ?CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0PEAV2@1@Z @ 0x1801C8A50
 * Callers:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801C8B58 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

bool __fastcall CLayerVisual::CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        struct D2D_RECT_F *a2,
        __int64 a3,
        __int64 a4,
        struct D2D_RECT_F *a5)
{
  float v5; // xmm2_4
  bool v6; // al
  _OWORD *v7; // r8
  __int64 v8; // r9
  float left; // xmm3_4
  float top; // xmm4_4
  float right; // xmm1_4
  float bottom; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  bool result; // al
  float *v16; // rcx
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  struct D2D_RECT_F v20; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(float *)(*(_QWORD *)(a1 + 560) + 96LL);
  v20 = *a2;
  v6 = IsEmpty(&v20);
  left = v20.left;
  top = v20.top;
  right = v20.right;
  bottom = v20.bottom;
  if ( !v6 )
  {
    left = v20.left - v5;
    top = v20.top - v5;
    right = v20.right + v5;
    bottom = v20.bottom + v5;
  }
  *(_OWORD *)v8 = *v7;
  if ( left > *(float *)v8 )
    *(float *)v8 = left;
  if ( top > *(float *)(v8 + 4) )
    *(float *)(v8 + 4) = top;
  v13 = *(float *)(v8 + 8);
  if ( v13 > right )
  {
    *(float *)(v8 + 8) = right;
    v13 = right;
  }
  v14 = *(float *)(v8 + 12);
  if ( v14 > bottom )
  {
    *(float *)(v8 + 12) = bottom;
    v14 = bottom;
    v13 = *(float *)(v8 + 8);
  }
  if ( v13 <= *(float *)v8 || v14 <= *(float *)(v8 + 4) )
  {
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)v8 = 0LL;
  }
  *a5 = *(struct D2D_RECT_F *)v8;
  result = IsEmpty(a5);
  if ( !result )
  {
    v17 = v16[1] - v5;
    *v16 = *v16 - v5;
    v18 = v5 + v16[2];
    v19 = v5 + v16[3];
    v16[1] = v17;
    v16[2] = v18;
    v16[3] = v19;
  }
  return result;
}
