/*
 * XREFs of ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007DA1C
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18000D050 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18003C54C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18007D350 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180029740 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::CalcWorldSpaceClippedBounds(__int64 a1, float *a2, float *a3)
{
  int v3; // eax
  void *v6; // rcx
  __int64 result; // rax
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // [rsp+20h] [rbp-28h] BYREF
  float v13; // [rsp+24h] [rbp-24h]
  float v14; // [rsp+28h] [rbp-20h]
  float v15; // [rsp+2Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 480);
  if ( v3 )
    v6 = (void *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v3 - 1));
  else
    v6 = &CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<1>((__int64)v6, a2, a3);
  result = CScopedClipStack::GetClipBoundsWorld(a1 + 1008, (__int64)&v12);
  if ( v12 > *a3 )
    *a3 = v12;
  if ( v13 > a3[1] )
    a3[1] = v13;
  v8 = a3[2];
  v9 = v14;
  if ( v8 > v14 )
  {
    a3[2] = v14;
    v8 = v9;
  }
  v10 = a3[3];
  v11 = v15;
  if ( v10 > v15 )
  {
    a3[3] = v15;
    v10 = v11;
    v8 = a3[2];
  }
  if ( v8 <= *a3 || v10 <= a3[1] )
  {
    a3[3] = 0.0;
    a3[2] = 0.0;
    a3[1] = 0.0;
    *a3 = 0.0;
  }
  return result;
}
