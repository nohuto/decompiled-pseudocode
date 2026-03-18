/*
 * XREFs of ??0CAnimationTriggerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00059B4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CAnimationTriggerMarshaler *__fastcall DirectComposition::CAnimationTriggerMarshaler::CAnimationTriggerMarshaler(
        DirectComposition::CAnimationTriggerMarshaler *this)
{
  DirectComposition::CAnimationTriggerMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
