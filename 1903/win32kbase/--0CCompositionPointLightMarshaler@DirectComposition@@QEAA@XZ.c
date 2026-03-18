/*
 * XREFs of ??0CCompositionPointLightMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A43F4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCompositionPointLightMarshaler *__fastcall DirectComposition::CCompositionPointLightMarshaler::CCompositionPointLightMarshaler(
        DirectComposition::CCompositionPointLightMarshaler *this)
{
  DirectComposition::CCompositionPointLightMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CCompositionPointLightMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
