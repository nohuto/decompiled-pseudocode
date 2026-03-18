/*
 * XREFs of ?HitTest@CHwndBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001F290
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180023CDC (-GetBoundsInternal@CHwndBitmap@@AEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
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
