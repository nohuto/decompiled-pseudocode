/*
 * XREFs of ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x18004F6B0
 * Callers:
 *     ??_ECDxHandleBitmapRealization@@OFI@EAAPEAXI@Z @ 0x1800F1600 (--_ECDxHandleBitmapRealization@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18004F90C (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleBitmapRealization *__fastcall CDxHandleBitmapRealization::`vector deleting destructor'(
        CDxHandleBitmapRealization *this,
        char a2)
{
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
