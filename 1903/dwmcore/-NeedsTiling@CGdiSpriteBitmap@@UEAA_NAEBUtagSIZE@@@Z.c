/*
 * XREFs of ?NeedsTiling@CGdiSpriteBitmap@@UEAA_NAEBUtagSIZE@@@Z @ 0x1800C4270
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800D013C (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x1802144B8 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 */

bool __fastcall CGdiSpriteBitmap::NeedsTiling(CGdiSpriteBitmap *this, const struct tagSIZE *a2)
{
  bool result; // al
  CGdiSpriteBitmap *v3; // rbx
  unsigned int v4; // edx
  unsigned int v5; // r8d

  result = 0;
  if ( *((_DWORD *)this + 96) > a2->cx || *((_DWORD *)this + 97) > a2->cy )
  {
    if ( *((_QWORD *)this + 51) != *((_QWORD *)this + 52) )
      return 1;
    if ( *((_QWORD *)this + 40) )
    {
      v3 = (CGdiSpriteBitmap *)((char *)this - 56);
      if ( CGdiSpriteBitmap::EnsureBitmapRealization((CGdiSpriteBitmap *)((char *)this - 56))
        && (int)CGdiSpriteBitmap::CreateSectionBitmapSubRects(v3, v4, v5) >= 0 )
      {
        return 1;
      }
    }
  }
  return result;
}
