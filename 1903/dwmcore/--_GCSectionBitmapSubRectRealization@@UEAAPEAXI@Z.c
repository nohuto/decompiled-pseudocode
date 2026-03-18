/*
 * XREFs of ??_GCSectionBitmapSubRectRealization@@UEAAPEAXI@Z @ 0x180256DC0
 * Callers:
 *     ??_ECSectionBitmapSubRectRealization@@WFI@EAAPEAXI@Z @ 0x1800ED930 (--_ECSectionBitmapSubRectRealization@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800CD7AC (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
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
