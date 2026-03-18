/*
 * XREFs of ??0CYCbCrSurfaceMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2BAC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CYCbCrSurfaceMarshaler *__fastcall DirectComposition::CYCbCrSurfaceMarshaler::CYCbCrSurfaceMarshaler(
        DirectComposition::CYCbCrSurfaceMarshaler *this)
{
  DirectComposition::CYCbCrSurfaceMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CYCbCrSurfaceMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
