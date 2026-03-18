/*
 * XREFs of ??0CCompositionDistantLightMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A5EC0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCompositionDistantLightMarshaler *__fastcall DirectComposition::CCompositionDistantLightMarshaler::CCompositionDistantLightMarshaler(
        DirectComposition::CCompositionDistantLightMarshaler *this)
{
  DirectComposition::CCompositionDistantLightMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CCompositionDistantLightMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
