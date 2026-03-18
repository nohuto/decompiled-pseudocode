/*
 * XREFs of ??0CKeyframeAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000EA60
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CKeyframeAnimationMarshaler *__fastcall DirectComposition::CKeyframeAnimationMarshaler::CKeyframeAnimationMarshaler(
        DirectComposition::CKeyframeAnimationMarshaler *this)
{
  DirectComposition::CKeyframeAnimationMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
  *((_DWORD *)this + 53) = 1065353216;
  *((_DWORD *)this + 74) = 1065353216;
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
