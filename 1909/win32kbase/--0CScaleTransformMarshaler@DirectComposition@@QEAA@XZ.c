/*
 * XREFs of ??0CScaleTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0092CE0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CScaleTransformMarshaler *__fastcall DirectComposition::CScaleTransformMarshaler::CScaleTransformMarshaler(
        DirectComposition::CScaleTransformMarshaler *this)
{
  DirectComposition::CScaleTransformMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CScaleTransformMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
