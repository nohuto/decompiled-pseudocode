/*
 * XREFs of ??0CParticleVector2BehaviorMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A262C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CParticleVector2BehaviorMarshaler *__fastcall DirectComposition::CParticleVector2BehaviorMarshaler::CParticleVector2BehaviorMarshaler(
        DirectComposition::CParticleVector2BehaviorMarshaler *this)
{
  DirectComposition::CParticleVector2BehaviorMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CParticleVector2BehaviorMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
