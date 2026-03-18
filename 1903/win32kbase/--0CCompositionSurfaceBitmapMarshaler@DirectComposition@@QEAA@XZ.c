/*
 * XREFs of ??0CCompositionSurfaceBitmapMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00989E0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCompositionSurfaceBitmapMarshaler *__fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::CCompositionSurfaceBitmapMarshaler(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this)
{
  DirectComposition::CCompositionSurfaceBitmapMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
