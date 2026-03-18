/*
 * XREFs of ??_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z @ 0x180261920
 * Callers:
 *     ??_ECDxHandleStereoBitmapRealization@@OFI@EAAPEAXI@Z @ 0x1800F1720 (--_ECDxHandleStereoBitmapRealization@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1802618AC (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleStereoBitmapRealization *__fastcall CDxHandleStereoBitmapRealization::`vector deleting destructor'(
        CDxHandleStereoBitmapRealization *this,
        char a2)
{
  CDxHandleStereoBitmapRealization::~CDxHandleStereoBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
