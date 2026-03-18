/*
 * XREFs of ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x18003B080
 * Callers:
 *     ?AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x18003AF20 (-AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?SetDeviceTransform@CArrayBasedCoverageSet@@UEAAXPEBVCMILMatrix@@@Z @ 0x18003AF90 (-SetDeviceTransform@CArrayBasedCoverageSet@@UEAAXPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ceilf_0 @ 0x1800F0187 (ceilf_0.c)
 *     floorf_0 @ 0x1800F019F (floorf_0.c)
 */

void __fastcall CZOrderedRect::UpdateDeviceRect(CZOrderedRect *this, const struct CMILMatrix *a2)
{
  float v3; // xmm2_4
  float v4; // xmm8_4
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4

  if ( a2 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(a2);
    v3 = *(float *)this;
    v4 = *((float *)this + 1);
    v5 = *((float *)this + 2);
    v6 = *((float *)this + 3);
  }
  else
  {
    v3 = *((float *)this + 5);
    v4 = *((float *)this + 6);
    v5 = *((float *)this + 7);
    v6 = *((float *)this + 8);
  }
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3) & _xmm);
  if ( v7 < 8388608.0 )
    v3 = (float)(int)ceilf_0(v3);
  *(float *)this = v3;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm);
  if ( v8 < 8388608.0 )
    v4 = (float)(int)ceilf_0(v4);
  *((float *)this + 1) = v4;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
  if ( v9 < 8388608.0 )
    v5 = (float)(int)floorf_0(v5);
  *((float *)this + 2) = v5;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( v10 < 8388608.0 )
    v6 = (float)(int)floorf_0(v6);
  *((float *)this + 3) = v6;
}
