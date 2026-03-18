/*
 * XREFs of ??0CParticleScalarBehavior@@AEAA@PEAVCComposition@@@Z @ 0x18019D6F0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CParticleScalarBehavior *__fastcall CParticleScalarBehavior::CParticleScalarBehavior(
        CParticleScalarBehavior *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &CParticleScalarBehavior::`vftable'{for `CParticleBaseBehavior'};
  *((_QWORD *)this + 10) = &CParticleScalarBehavior::`vftable'{for `Particles::LinearKeyframeAnimation<float>'};
  return this;
}
