/*
 * XREFs of ??0CVisualSurfaceMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4E4C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CVisualSurfaceMarshaler *__fastcall DirectComposition::CVisualSurfaceMarshaler::CVisualSurfaceMarshaler(
        DirectComposition::CVisualSurfaceMarshaler *this)
{
  DirectComposition::CVisualSurfaceMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CVisualSurfaceMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
