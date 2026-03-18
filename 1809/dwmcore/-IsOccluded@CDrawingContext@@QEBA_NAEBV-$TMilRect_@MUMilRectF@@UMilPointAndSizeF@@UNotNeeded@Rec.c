/*
 * XREFs of ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18016590C
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x180076110 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DBCB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::IsOccluded(__int64 a1, __int128 *a2, unsigned int a3)
{
  char v3; // bl
  const struct CMILMatrix *TopByReference; // rax
  __int64 v7; // r8
  float left; // xmm0_4
  float top; // xmm2_4
  float right; // xmm3_4
  float bottom; // xmm1_4
  struct D2D_RECT_F v13; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a1 + 6347) )
  {
    v14 = *a2;
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480));
    CMILMatrix::Transform2DBoundsHelper<1>((__int64)TopByReference, (float *)&v14, &v13.left);
    if ( IsEmpty(&v13) )
    {
      return 1;
    }
    else
    {
      CScopedClipStack::GetClipBoundsWorld((CScopedClipStack *)(a1 + 1008), (__int64)&v14);
      left = v13.left;
      if ( *(float *)&v14 > v13.left )
      {
        LODWORD(v13.left) = v14;
        left = *(float *)&v14;
      }
      top = v13.top;
      if ( *((float *)&v14 + 1) > v13.top )
      {
        v13.top = *((FLOAT *)&v14 + 1);
        top = *((float *)&v14 + 1);
      }
      right = v13.right;
      if ( v13.right > *((float *)&v14 + 2) )
      {
        v13.right = *((FLOAT *)&v14 + 2);
        right = *((float *)&v14 + 2);
      }
      bottom = v13.bottom;
      if ( v13.bottom > *((float *)&v14 + 3) )
      {
        v13.bottom = *((FLOAT *)&v14 + 3);
        bottom = *((float *)&v14 + 3);
      }
      if ( right <= left || bottom <= top )
      {
        v13.bottom = 0.0;
        v13.right = 0.0;
        v13.top = 0.0;
        v13.left = 0.0;
      }
      LOBYTE(v7) = 1;
      return COcclusionContext::IsOccluded(*(_QWORD *)(a1 + 6272), &v13, v7, a3);
    }
  }
  return v3;
}
