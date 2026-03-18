/*
 * XREFs of ??0CCompositionCubeMapMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A20B4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCompositionCubeMapMarshaler *__fastcall DirectComposition::CCompositionCubeMapMarshaler::CCompositionCubeMapMarshaler(
        DirectComposition::CCompositionCubeMapMarshaler *this)
{
  DirectComposition::CCompositionCubeMapMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CCompositionCubeMapMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
