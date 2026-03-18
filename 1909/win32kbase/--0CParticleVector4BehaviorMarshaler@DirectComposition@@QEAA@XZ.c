/*
 * XREFs of ??0CParticleVector4BehaviorMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A266C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CParticleVector4BehaviorMarshaler *__fastcall DirectComposition::CParticleVector4BehaviorMarshaler::CParticleVector4BehaviorMarshaler(
        DirectComposition::CParticleVector4BehaviorMarshaler *this)
{
  DirectComposition::CParticleVector4BehaviorMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
