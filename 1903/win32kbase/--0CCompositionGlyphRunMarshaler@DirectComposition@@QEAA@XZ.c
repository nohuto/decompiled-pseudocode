/*
 * XREFs of ??0CCompositionGlyphRunMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4394
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCompositionGlyphRunMarshaler *__fastcall DirectComposition::CCompositionGlyphRunMarshaler::CCompositionGlyphRunMarshaler(
        DirectComposition::CCompositionGlyphRunMarshaler *this)
{
  DirectComposition::CCompositionGlyphRunMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CCompositionGlyphRunMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
