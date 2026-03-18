/*
 * XREFs of ??0CCompositionLightMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A43B4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCompositionLightMarshaler *__fastcall DirectComposition::CCompositionLightMarshaler::CCompositionLightMarshaler(
        DirectComposition::CCompositionLightMarshaler *this)
{
  DirectComposition::CCompositionLightMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CCompositionLightMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
