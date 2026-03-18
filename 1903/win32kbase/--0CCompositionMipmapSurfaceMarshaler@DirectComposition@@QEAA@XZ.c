/*
 * XREFs of ??0CCompositionMipmapSurfaceMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A43D4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCompositionMipmapSurfaceMarshaler *__fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::CCompositionMipmapSurfaceMarshaler(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this)
{
  DirectComposition::CCompositionMipmapSurfaceMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CCompositionMipmapSurfaceMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
