/*
 * XREFs of ??0CParticleGeneratorMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A48AC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
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
