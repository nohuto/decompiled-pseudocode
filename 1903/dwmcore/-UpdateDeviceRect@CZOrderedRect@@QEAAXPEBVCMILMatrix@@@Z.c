/*
 * XREFs of ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x180075130
 * Callers:
 *     ?AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x180074FD0 (-AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?SetDeviceTransform@CArrayBasedCoverageSet@@UEAAXPEBVCMILMatrix@@@Z @ 0x180075040 (-SetDeviceTransform@CArrayBasedCoverageSet@@UEAAXPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ceilf_0 @ 0x1800EC4C7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EC4DF (floorf_0.c)
 */

void __fastcall CZOrderedRect::UpdateDeviceRect(CZOrderedRect *this, const struct CMILMatrix *a2)
{
  float *v4; // rdx
  float v5; // xmm2_4
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4

  v4 = (float *)((char *)this + 20);
  if ( a2 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(a2, (__int64)v4, (float *)this);
    v5 = *(float *)this;
    v6 = *((float *)this + 1);
    v7 = *((float *)this + 2);
    v8 = *((float *)this + 3);
  }
  else
  {
    v5 = *v4;
    v6 = *((float *)this + 6);
    v7 = *((float *)this + 7);
    v8 = *((float *)this + 8);
  }
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
  if ( v9 < 8388608.0 )
    v5 = (float)(int)ceilf_0(v5);
  *(float *)this = v5;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( v10 < 8388608.0 )
    v6 = (float)(int)ceilf_0(v6);
  *((float *)this + 1) = v6;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
  if ( v11 < 8388608.0 )
    v7 = (float)(int)floorf_0(v7);
  *((float *)this + 2) = v7;
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
  if ( v12 < 8388608.0 )
    v8 = (float)(int)floorf_0(v8);
  *((float *)this + 3) = v8;
}
