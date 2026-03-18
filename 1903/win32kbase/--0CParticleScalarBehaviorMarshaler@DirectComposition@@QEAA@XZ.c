/*
 * XREFs of ??0CParticleScalarBehaviorMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A48CC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CParticleScalarBehaviorMarshaler *__fastcall DirectComposition::CParticleScalarBehaviorMarshaler::CParticleScalarBehaviorMarshaler(
        DirectComposition::CParticleScalarBehaviorMarshaler *this)
{
  DirectComposition::CParticleScalarBehaviorMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CParticleScalarBehaviorMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
