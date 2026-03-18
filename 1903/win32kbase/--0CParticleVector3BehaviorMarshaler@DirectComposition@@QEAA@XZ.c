/*
 * XREFs of ??0CParticleVector3BehaviorMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A490C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CParticleVector3BehaviorMarshaler *__fastcall DirectComposition::CParticleVector3BehaviorMarshaler::CParticleVector3BehaviorMarshaler(
        DirectComposition::CParticleVector3BehaviorMarshaler *this)
{
  DirectComposition::CParticleVector3BehaviorMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CParticleVector3BehaviorMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
