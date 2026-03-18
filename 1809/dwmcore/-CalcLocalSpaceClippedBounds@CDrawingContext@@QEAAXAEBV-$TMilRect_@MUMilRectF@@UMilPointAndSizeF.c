/*
 * XREFs of ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180161CDC
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18000F0B0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000FAFC (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::CalcLocalSpaceClippedBounds(__int64 a1, __int128 *a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int64 v5; // r10
  char result; // al
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  _BYTE v11[64]; // [rsp+20h] [rbp-88h] BYREF
  int v12; // [rsp+60h] [rbp-48h]
  float v13; // [rsp+70h] [rbp-38h]
  float v14; // [rsp+74h] [rbp-34h]
  float v15; // [rsp+78h] [rbp-30h]
  float v16; // [rsp+7Ch] [rbp-2Ch]
  float v17[4]; // [rsp+80h] [rbp-28h] BYREF

  v3 = *a2;
  v12 = 0;
  *(_OWORD *)a3 = v3;
  CMatrixStack::Top((CMatrixStack *)(a1 + 480), (struct CMILMatrix *)v11);
  CScopedClipStack::GetClipBoundsWorld((CScopedClipStack *)(v5 + 1008), (__int64)v17);
  result = CMILMatrix::Get2DBoundsUsing2DInverse((CMILMatrix *)v11, v17);
  if ( result )
  {
    if ( v13 > *(float *)a3 )
      *(float *)a3 = v13;
    if ( v14 > *(float *)(a3 + 4) )
      *(float *)(a3 + 4) = v14;
    v7 = *(float *)(a3 + 8);
    v8 = v15;
    if ( v7 > v15 )
    {
      *(float *)(a3 + 8) = v15;
      v7 = v8;
    }
    v9 = *(float *)(a3 + 12);
    v10 = v16;
    if ( v9 > v16 )
    {
      *(float *)(a3 + 12) = v16;
      v9 = v10;
      v7 = *(float *)(a3 + 8);
    }
    if ( v7 <= *(float *)a3 || v9 <= *(float *)(a3 + 4) )
    {
      *(_DWORD *)(a3 + 12) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)a3 = 0;
    }
  }
  return result;
}
