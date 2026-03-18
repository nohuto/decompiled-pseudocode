/*
 * XREFs of ??0CScaleTransform3DMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4AEC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CScaleTransform3DMarshaler *__fastcall DirectComposition::CScaleTransform3DMarshaler::CScaleTransform3DMarshaler(
        DirectComposition::CScaleTransform3DMarshaler *this)
{
  DirectComposition::CScaleTransform3DMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
