/*
 * XREFs of ??_GCCompositionGlyphRunMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A2CF0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

DirectComposition::CCompositionGlyphRunMarshaler *__fastcall DirectComposition::CCompositionGlyphRunMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompositionGlyphRunMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCompositionGlyphRunMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
