/*
 * XREFs of ??0CRotateTransform3DMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4A4C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CRotateTransform3DMarshaler *__fastcall DirectComposition::CRotateTransform3DMarshaler::CRotateTransform3DMarshaler(
        DirectComposition::CRotateTransform3DMarshaler *this)
{
  DirectComposition::CRotateTransform3DMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
