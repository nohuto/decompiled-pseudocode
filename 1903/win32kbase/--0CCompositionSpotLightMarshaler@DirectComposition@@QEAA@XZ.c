/*
 * XREFs of ??0CCompositionSpotLightMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A64FC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCompositionSpotLightMarshaler *__fastcall DirectComposition::CCompositionSpotLightMarshaler::CCompositionSpotLightMarshaler(
        DirectComposition::CCompositionSpotLightMarshaler *this)
{
  DirectComposition::CCompositionSpotLightMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CCompositionSpotLightMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
