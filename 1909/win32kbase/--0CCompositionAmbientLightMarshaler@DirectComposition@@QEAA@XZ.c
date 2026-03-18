/*
 * XREFs of ??0CCompositionAmbientLightMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A2234
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCompositionAmbientLightMarshaler *__fastcall DirectComposition::CCompositionAmbientLightMarshaler::CCompositionAmbientLightMarshaler(
        DirectComposition::CCompositionAmbientLightMarshaler *this)
{
  DirectComposition::CCompositionAmbientLightMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CCompositionAmbientLightMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
