/*
 * XREFs of ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x1800CD660
 * Callers:
 *     ??_ECSectionBitmapRealization@@OFI@EAAPEAXI@Z @ 0x1800F1560 (--_ECSectionBitmapRealization@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800CD69C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 */

CSectionBitmapRealization *__fastcall CSectionBitmapRealization::`vector deleting destructor'(
        CSectionBitmapRealization *this,
        char a2)
{
  CSectionBitmapRealization::~CSectionBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
