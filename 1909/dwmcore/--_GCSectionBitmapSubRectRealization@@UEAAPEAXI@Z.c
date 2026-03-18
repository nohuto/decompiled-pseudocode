/*
 * XREFs of ??_GCSectionBitmapSubRectRealization@@UEAAPEAXI@Z @ 0x180255650
 * Callers:
 *     ??_ECSectionBitmapSubRectRealization@@WFI@EAAPEAXI@Z @ 0x1800F15F0 (--_ECSectionBitmapSubRectRealization@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800CD69C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 */

CSectionBitmapSubRectRealization *__fastcall CSectionBitmapSubRectRealization::`scalar deleting destructor'(
        CSectionBitmapSubRectRealization *this,
        char a2)
{
  CSectionBitmapRealization::~CSectionBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
