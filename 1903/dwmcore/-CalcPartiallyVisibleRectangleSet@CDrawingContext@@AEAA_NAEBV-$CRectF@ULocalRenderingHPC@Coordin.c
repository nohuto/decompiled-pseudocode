/*
 * XREFs of ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18016C628
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180019460 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7F40 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x180171F18 (-ComputeVisibleRegion@COcclusionContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 */

char __fastcall CDrawingContext::CalcPartiallyVisibleRectangleSet(__int64 a1, __int64 a2, int a3, void *a4, _DWORD *a5)
{
  char v8; // bl
  const struct CMILMatrix *TopByReference; // rax
  CMatrixStack *v10; // r10
  CMILMatrix *v11; // rax
  __int64 v12; // r11
  float left; // xmm2_4
  float top; // xmm1_4
  float right; // xmm3_4
  float bottom; // xmm0_4
  int v17; // r9d
  __int64 v18; // rcx
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF
  struct D2D_RECT_F v21; // [rsp+48h] [rbp-30h] BYREF
  float v22; // [rsp+58h] [rbp-20h] BYREF
  float v23; // [rsp+5Ch] [rbp-1Ch]
  float v24; // [rsp+60h] [rbp-18h]
  float v25; // [rsp+64h] [rbp-14h]

  v8 = 0;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480));
  if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)TopByReference) )
  {
    v11 = CMatrixStack::GetTopByReference(v10);
    CMILMatrix::Transform2DBoundsHelper<0>(v11, v12, &v21.left);
    CScopedClipStack::GetClipBoundsWorld(a1 + 1008, (__int64)&v22);
    left = v21.left;
    if ( v22 > v21.left )
    {
      v21.left = v22;
      left = v22;
    }
    top = v21.top;
    if ( v23 > v21.top )
    {
      v21.top = v23;
      top = v23;
    }
    right = v21.right;
    if ( v21.right > v24 )
    {
      v21.right = v24;
      right = v24;
    }
    bottom = v21.bottom;
    if ( v21.bottom > v25 )
    {
      v21.bottom = v25;
      bottom = v25;
    }
    if ( right <= left || bottom <= top )
    {
      v21.bottom = 0.0;
      v21.right = 0.0;
      v21.top = 0.0;
      v21.left = 0.0;
    }
    if ( IsEmpty(&v21) )
    {
      *a5 = 0;
      return 1;
    }
    if ( *(_BYTE *)(a1 + 6347) )
    {
      v18 = *(_QWORD *)(a1 + 6272);
      LOBYTE(v20) = 0;
      if ( (int)COcclusionContext::ComputeVisibleRegion(v18, (int)&v21, a3, v17, (__int64)&v20, a4, (__int64)a5) >= 0 )
      {
        if ( (_BYTE)v20 )
          return 1;
      }
    }
  }
  return v8;
}
