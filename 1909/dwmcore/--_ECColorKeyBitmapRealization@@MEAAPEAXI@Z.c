/*
 * XREFs of ??_ECColorKeyBitmapRealization@@MEAAPEAXI@Z @ 0x1802550A0
 * Callers:
 *     ??_ECColorKeyBitmapRealization@@OFI@EAAPEAXI@Z @ 0x1800F15E0 (--_ECColorKeyBitmapRealization@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CColorKeyBitmapRealization@@MEAA@XZ @ 0x18025502C (--1CColorKeyBitmapRealization@@MEAA@XZ.c)
 */

CColorKeyBitmapRealization *__fastcall CColorKeyBitmapRealization::`vector deleting destructor'(
        CColorKeyBitmapRealization *this,
        char a2)
{
  CColorKeyBitmapRealization::~CColorKeyBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
