/*
 * XREFs of ?HitTest@CHwndBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800211E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B48EC (-GetBoundsInternal@CHwndBitmap@@AEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CHwndBitmap::HitTest(
        CHwndBitmap *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  float y; // xmm1_4
  struct D2D_RECT_F v8; // [rsp+20h] [rbp-28h] BYREF

  *a4 = 0;
  CHwndBitmap::GetBoundsInternal((char *)this - 16, &v8);
  if ( !IsEmpty(&v8) )
  {
    y = a3->y;
    if ( y >= v8.top && v8.bottom > y && a3->x >= v8.left && v8.right > a3->x )
      *a4 = 1;
  }
  return 0LL;
}
