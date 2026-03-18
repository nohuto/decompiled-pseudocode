/*
 * XREFs of ??0CParticleColorBehaviorMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A25A4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CParticleColorBehaviorMarshaler *__fastcall DirectComposition::CParticleColorBehaviorMarshaler::CParticleColorBehaviorMarshaler(
        DirectComposition::CParticleColorBehaviorMarshaler *this)
{
  DirectComposition::CParticleColorBehaviorMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CParticleColorBehaviorMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
