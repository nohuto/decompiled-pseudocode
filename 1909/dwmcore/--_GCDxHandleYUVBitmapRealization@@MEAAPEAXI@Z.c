/*
 * XREFs of ??_GCDxHandleYUVBitmapRealization@@MEAAPEAXI@Z @ 0x180262190
 * Callers:
 *     ??_ECDxHandleYUVBitmapRealization@@OFI@EAAPEAXI@Z @ 0x1800F1730 (--_ECDxHandleYUVBitmapRealization@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x180262110 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleYUVBitmapRealization *__fastcall CDxHandleYUVBitmapRealization::`scalar deleting destructor'(
        CDxHandleYUVBitmapRealization *this,
        char a2)
{
  CDxHandleYUVBitmapRealization::~CDxHandleYUVBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
