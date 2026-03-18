/*
 * XREFs of ??0CParticleAttractor@@AEAA@PEAVCComposition@@@Z @ 0x18019D5F0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CParticleAttractor *__fastcall CParticleAttractor::CParticleAttractor(
        CParticleAttractor *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CParticleAttractor::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 9) = &CParticleAttractor::`vftable'{for `Particles::ISingleInputAnimator'};
  return this;
}
