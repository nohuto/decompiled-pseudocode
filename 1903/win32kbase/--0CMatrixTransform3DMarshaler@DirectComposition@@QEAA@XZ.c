/*
 * XREFs of ??0CMatrixTransform3DMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A7D08
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CMatrixTransform3DMarshaler *__fastcall DirectComposition::CMatrixTransform3DMarshaler::CMatrixTransform3DMarshaler(
        DirectComposition::CMatrixTransform3DMarshaler *this)
{
  DirectComposition::CMatrixTransform3DMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CMatrixTransform3DMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
