/*
 * XREFs of ??0CParticleAttractorMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4824
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CParticleAttractorMarshaler *__fastcall DirectComposition::CParticleAttractorMarshaler::CParticleAttractorMarshaler(
        DirectComposition::CParticleAttractorMarshaler *this)
{
  DirectComposition::CParticleAttractorMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CParticleAttractorMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
