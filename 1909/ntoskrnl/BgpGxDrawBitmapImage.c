/*
 * XREFs of BgpGxDrawBitmapImage @ 0x140994648
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x140991714 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140994110 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x140178D30 (BgpGxDrawRectangle.c)
 *     BgpGxParseBitmap @ 0x14098E85C (BgpGxParseBitmap.c)
 *     BgpGxRectangleDestroy @ 0x14098F254 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxDrawBitmapImage(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _BYTE *v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v3 = BgpGxParseBitmap(a1, &v5);
  if ( v3 >= 0 )
  {
    v3 = BgpGxDrawRectangle(v5, a2);
    BgpGxRectangleDestroy((__int64)v5);
  }
  return (unsigned int)v3;
}
