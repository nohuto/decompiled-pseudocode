/*
 * XREFs of ??0CMatrixTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00043B8
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CMatrixTransformMarshaler *__fastcall DirectComposition::CMatrixTransformMarshaler::CMatrixTransformMarshaler(
        DirectComposition::CMatrixTransformMarshaler *this)
{
  DirectComposition::CMatrixTransformMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CMatrixTransformMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
