/*
 * XREFs of ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18003A050
 * Callers:
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180027D50 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18003A174 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x1800CD874 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x1800CDF58 (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
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
