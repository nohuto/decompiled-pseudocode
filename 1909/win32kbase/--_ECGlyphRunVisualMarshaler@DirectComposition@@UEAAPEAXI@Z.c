/*
 * XREFs of ??_ECGlyphRunVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A2EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0010C08 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

DirectComposition::CGlyphRunVisualMarshaler *__fastcall DirectComposition::CGlyphRunVisualMarshaler::`vector deleting destructor'(
        DirectComposition::CGlyphRunVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CGlyphRunVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
