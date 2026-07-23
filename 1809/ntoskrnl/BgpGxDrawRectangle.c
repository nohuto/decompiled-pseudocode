/*
 * XREFs of BgpGxDrawRectangle @ 0x14016EF30
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14017A014 (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x140327904 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140328CFC (BgpFwDisplayBugCheckScreen.c)
 *     AnFwpFadeAnimationTimer @ 0x140950440 (AnFwpFadeAnimationTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140955520 (BgpGxDrawBitmapImage.c)
 *     BgpTxtClearRegion @ 0x140955570 (BgpTxtClearRegion.c)
 *     BgpTxtDisplayString @ 0x1409555A0 (BgpTxtDisplayString.c)
 * Callees:
 *     GxpWriteFrameBufferPixels @ 0x14016EFB8 (GxpWriteFrameBufferPixels.c)
 *     BgpGetBitsPerPixel @ 0x14016F2E0 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x14016F4C8 (BgpGxConvertRectangleEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     BgpGxRectangleDestroy @ 0x14095021C (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxDrawRectangle(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx
  unsigned int BitsPerPixel; // eax
  _BYTE *v5; // r10
  _BYTE *v6; // rdi
  unsigned int v7; // esi
  __int64 result; // rax
  __int64 v9; // r9
  _BYTE *v10; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v11[80]; // [rsp+30h] [rbp-68h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  v6 = 0LL;
  if ( *((_DWORD *)v5 + 2) != BitsPerPixel )
  {
    if ( (dword_140406AD0 & 0xC00) != 0 )
    {
      v9 = 1LL;
      v10 = v11;
    }
    else
    {
      v9 = 0LL;
    }
    result = BgpGxConvertRectangleEx(v5, BitsPerPixel, &v10, v9);
    if ( (int)result < 0 )
      return result;
    v2 = v10;
    v5 = v10;
    v6 = v10;
  }
  v7 = GxpWriteFrameBufferPixels(v5, a2);
  if ( v6 )
  {
    if ( v6 != v11 )
      BgpGxRectangleDestroy(v2);
  }
  return v7;
}
