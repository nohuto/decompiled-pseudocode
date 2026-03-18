/*
 * XREFs of ??0CRotateTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4A6C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CRotateTransformMarshaler *__fastcall DirectComposition::CRotateTransformMarshaler::CRotateTransformMarshaler(
        DirectComposition::CRotateTransformMarshaler *this)
{
  DirectComposition::CRotateTransformMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CRotateTransformMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
