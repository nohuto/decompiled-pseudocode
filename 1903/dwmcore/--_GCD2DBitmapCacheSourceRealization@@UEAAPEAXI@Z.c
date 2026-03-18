/*
 * XREFs of ??_GCD2DBitmapCacheSourceRealization@@UEAAPEAXI@Z @ 0x1800D59B0
 * Callers:
 *     ??_ECD2DBitmapCacheSourceRealization@@WFI@EAAPEAXI@Z @ 0x1800ED890 (--_ECD2DBitmapCacheSourceRealization@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x18003AC10 (--1CBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CD2DBitmapCacheSourceRealization *__fastcall CD2DBitmapCacheSourceRealization::`scalar deleting destructor'(
        CD2DBitmapCacheSourceRealization *this,
        char a2)
{
  CBitmapRealization::~CBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
