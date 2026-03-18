/*
 * XREFs of ??0CParticleBehaviorsMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4844
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CParticleBehaviorsMarshaler *__fastcall DirectComposition::CParticleBehaviorsMarshaler::CParticleBehaviorsMarshaler(
        DirectComposition::CParticleBehaviorsMarshaler *this)
{
  DirectComposition::CParticleBehaviorsMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CParticleBehaviorsMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
