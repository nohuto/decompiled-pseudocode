/*
 * XREFs of ?NeedsTiling@CGdiSpriteBitmap@@UEAA_NAEBUtagSIZE@@@Z @ 0x1800674D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ @ 0x180092F48 (-EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@IEAAJII@Z @ 0x180198574 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@IEAAJII@Z.c)
 */

bool __fastcall CGdiSpriteBitmap::NeedsTiling(CGdiSpriteBitmap *this, const struct tagSIZE *a2)
{
  unsigned int v4; // edx
  unsigned int v5; // r8d

  return (*((_DWORD *)this + 96) > a2->cx || *((_DWORD *)this + 97) > a2->cy)
      && (*((_QWORD *)this + 52) != *((_QWORD *)this + 53)
       || CGdiSpriteBitmap::EnsureBitmapRealization((CGdiSpriteBitmap *)((char *)this - 56))
       && *((_QWORD *)this + 51)
       && (int)CGdiSpriteBitmap::CreateSectionBitmapSubRects((CGdiSpriteBitmap *)((char *)this - 56), v4, v5) >= 0);
}
