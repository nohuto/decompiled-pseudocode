/*
 * XREFs of ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180192260
 * Callers:
 *     ?HitTest@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801BA4A0 (-HitTest@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012FF0 (-GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::HitTest(
        CCompositionSurfaceBitmap *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int BoundsInternal; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  float y; // xmm1_4
  struct D2D_RECT_F v11; // [rsp+30h] [rbp-38h] BYREF

  *a4 = 0;
  BoundsInternal = CCompositionSurfaceBitmap::GetBoundsInternal((__int64)this, (__int64)a2, (__int64)&v11);
  v8 = BoundsInternal;
  if ( BoundsInternal < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, BoundsInternal, 0x459u);
  if ( !IsEmpty(&v11) )
  {
    y = a3->y;
    if ( y >= v11.top && v11.bottom > y && a3->x >= v11.left && v11.right > a3->x )
      *a4 = 1;
  }
  return v8;
}
