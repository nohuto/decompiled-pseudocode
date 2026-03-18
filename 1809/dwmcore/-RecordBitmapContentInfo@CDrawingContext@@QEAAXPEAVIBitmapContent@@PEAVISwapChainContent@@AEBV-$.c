/*
 * XREFs of ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800B16F8
 * Callers:
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x180014DB0 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800159A0 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180161B6C (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUI.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180013414 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800DA754 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawingContext::RecordBitmapContentInfo(
        CDrawingContext *this,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        CMILMatrix *a5)
{
  char result; // al
  const struct CMILMatrix *TopByReference; // rax
  __int64 v11; // r9
  const struct CMILMatrix *v12; // rax
  CMILMatrix *v13; // rax
  float left; // xmm0_4
  float top; // xmm2_4
  float right; // xmm3_4
  float bottom; // xmm1_4
  struct D2D_RECT_F v18; // [rsp+20h] [rbp-38h] BYREF
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
    *((_BYTE *)this + 6354) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2) )
    *((_BYTE *)this + 6356) = 1;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
  if ( result )
    *((_BYTE *)this + 6357) = 1;
  if ( a3 )
  {
    result = CDrawingContext::IsNormalDesktopRender(this);
    if ( result )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a3 + 184LL))(
        a3,
        *((_QWORD *)this + 52),
        *((unsigned int *)this + 103));
      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct CMILMatrix *))(v11 + 192))(
                 a3,
                 *((_QWORD *)this + 52),
                 TopByReference);
    }
  }
  if ( *((_BYTE *)this + 6349) )
  {
    if ( *((_DWORD *)this + 101) == 1 )
    {
      if ( a3 )
      {
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 96LL))(a3);
        if ( result )
        {
          v12 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
          result = CMILMatrix::Is2DAxisAlignedPreserving<1>(v12);
          if ( result )
          {
            if ( a5 )
              CMILMatrix::Transform2DBoundsHelper<0>(a5);
            else
              v19 = *a4;
            v13 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
            CMILMatrix::Transform2DBoundsHelper<0>(v13);
            CScopedClipStack::GetClipBoundsWorld((CDrawingContext *)((char *)this + 1008), (__int64)&v19);
            left = v18.left;
            if ( *(float *)&v19 > v18.left )
            {
              LODWORD(v18.left) = v19;
              left = *(float *)&v19;
            }
            top = v18.top;
            if ( *((float *)&v19 + 1) > v18.top )
            {
              v18.top = *((FLOAT *)&v19 + 1);
              top = *((float *)&v19 + 1);
            }
            right = v18.right;
            if ( v18.right > *((float *)&v19 + 2) )
            {
              v18.right = *((FLOAT *)&v19 + 2);
              right = *((float *)&v19 + 2);
            }
            bottom = v18.bottom;
            if ( v18.bottom > *((float *)&v19 + 3) )
            {
              v18.bottom = *((FLOAT *)&v19 + 3);
              bottom = *((float *)&v19 + 3);
            }
            if ( right <= left || bottom <= top )
            {
              v18.bottom = 0.0;
              v18.right = 0.0;
              v18.top = 0.0;
              v18.left = 0.0;
            }
            result = IsEmpty(&v18);
            if ( !result )
              return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 1576, &v18.left);
          }
        }
      }
    }
  }
  return result;
}
