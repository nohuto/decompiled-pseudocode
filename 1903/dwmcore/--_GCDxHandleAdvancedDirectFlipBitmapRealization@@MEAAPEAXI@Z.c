/*
 * XREFs of ??_GCDxHandleAdvancedDirectFlipBitmapRealization@@MEAAPEAXI@Z @ 0x180262380
 * Callers:
 *     ??_ECDxHandleAdvancedDirectFlipBitmapRealization@@OFI@EAAPEAXI@Z @ 0x1800EDA20 (--_ECDxHandleAdvancedDirectFlipBitmapRealization@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x1802622F4 (--1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleAdvancedDirectFlipBitmapRealization *__fastcall CDxHandleAdvancedDirectFlipBitmapRealization::`scalar deleting destructor'(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        char a2)
{
  CDxHandleAdvancedDirectFlipBitmapRealization::~CDxHandleAdvancedDirectFlipBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
