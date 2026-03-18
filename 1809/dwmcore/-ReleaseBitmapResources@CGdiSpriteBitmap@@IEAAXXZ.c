/*
 * XREFs of ?ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180093130
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z @ 0x180091A50 (-CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800926AC (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180092F84 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z @ 0x18009DDC4 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::ReleaseBitmapResources(CGdiSpriteBitmap *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 47);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 47) = 0LL;
  }
  if ( *((_QWORD *)this + 53) )
    *((_QWORD *)this + 53) = 0LL;
  CGdiSpriteBitmap::ReleaseBitmapRealization(this);
}
