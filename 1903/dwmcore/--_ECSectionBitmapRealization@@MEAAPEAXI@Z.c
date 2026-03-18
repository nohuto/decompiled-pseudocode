/*
 * XREFs of ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x1800CD770
 * Callers:
 *     ??_ECSectionBitmapRealization@@OFI@EAAPEAXI@Z @ 0x1800ED8A0 (--_ECSectionBitmapRealization@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800CD7AC (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CSectionBitmapRealization *__fastcall CSectionBitmapRealization::`vector deleting destructor'(
        CSectionBitmapRealization *this,
        char a2)
{
  CSectionBitmapRealization::~CSectionBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1D8uLL);
  return this;
}
