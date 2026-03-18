/*
 * XREFs of ??0CParticleGeneratorMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A25EC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CParticleGeneratorMarshaler *__fastcall DirectComposition::CParticleGeneratorMarshaler::CParticleGeneratorMarshaler(
        DirectComposition::CParticleGeneratorMarshaler *this)
{
  DirectComposition::CParticleGeneratorMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CParticleGeneratorMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
