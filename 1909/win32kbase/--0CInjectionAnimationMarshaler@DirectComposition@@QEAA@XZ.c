/*
 * XREFs of ??0CInjectionAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2450
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CInjectionAnimationMarshaler *__fastcall DirectComposition::CInjectionAnimationMarshaler::CInjectionAnimationMarshaler(
        DirectComposition::CInjectionAnimationMarshaler *this)
{
  DirectComposition::CInjectionAnimationMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CInjectionAnimationMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
