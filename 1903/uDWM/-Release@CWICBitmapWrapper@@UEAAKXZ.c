/*
 * XREFs of ?Release@CWICBitmapWrapper@@UEAAKXZ @ 0x18004BD40
 * Callers:
 *     ?Release@CWICBitmapWrapper@@WBA@EAAKXZ @ 0x18004FF90 (-Release@CWICBitmapWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x18004FFA0 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x18004FFB0 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x18004FFC0 (-Release@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WDA@EAAKXZ @ 0x18004FFD0 (-Release@CWICBitmapWrapper@@WDA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x180050060 (-Release@CCompressedSourceBitmap@@WPA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x180050070 (-Release@CCompressedSourceBitmap@@WPI@EAAKXZ.c)
 *     ?Release@CBitmapLock@@WEI@EAAKXZ @ 0x180050140 (-Release@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?Release@CBitmapLock@@WFA@EAAKXZ @ 0x180050150 (-Release@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CWICBitmapWrapper::Release(CWICBitmapWrapper *this)
{
  return CMILCOMBase::InternalRelease(this);
}
